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
#include "ApiClassInterfacesV1_0.h"
#include "RangeCheckerRule.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IAbsoluteSpeed according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteSpeedRangeCheckerRule: public RangeCheckerRule<IAbsoluteSpeed>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IAbsoluteSpeed> object) const;
        public:
            AbsoluteSpeedRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IAxle according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxleRangeCheckerRule: public RangeCheckerRule<IAxle>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IAxle> object) const;
        public:
            AxleRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAxle> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAxle> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IClothoid according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ClothoidRangeCheckerRule: public RangeCheckerRule<IClothoid>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IClothoid> object) const;
        public:
            ClothoidRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IClothoid> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IClothoid> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ICondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionRangeCheckerRule: public RangeCheckerRule<ICondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ICondition> object) const;
        public:
            ConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IControlPoint according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControlPointRangeCheckerRule: public RangeCheckerRule<IControlPoint>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IControlPoint> object) const;
        public:
            ControlPointRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryRangeCheckerRule: public RangeCheckerRule<IControllerDistributionEntry>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IControllerDistributionEntry> object) const;
        public:
            ControllerDistributionEntryRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IDimensions according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DimensionsRangeCheckerRule: public RangeCheckerRule<IDimensions>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IDimensions> object) const;
        public:
            DimensionsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDimensions> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDimensions> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IDistanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistanceConditionRangeCheckerRule: public RangeCheckerRule<IDistanceCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IDistanceCondition> object) const;
        public:
            DistanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IDynamicConstraints according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DynamicConstraintsRangeCheckerRule: public RangeCheckerRule<IDynamicConstraints>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IDynamicConstraints> object) const;
        public:
            DynamicConstraintsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDynamicConstraints> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDynamicConstraints> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IEndOfRoadCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EndOfRoadConditionRangeCheckerRule: public RangeCheckerRule<IEndOfRoadCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IEndOfRoadCondition> object) const;
        public:
            EndOfRoadConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IEvent according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EventRangeCheckerRule: public RangeCheckerRule<IEvent>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IEvent> object) const;
        public:
            EventRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEvent> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEvent> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IFog according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FogRangeCheckerRule: public RangeCheckerRule<IFog>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IFog> object) const;
        public:
            FogRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFog> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFog> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ILaneOffsetActionDynamics according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionDynamicsRangeCheckerRule: public RangeCheckerRule<ILaneOffsetActionDynamics>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) const;
        public:
            LaneOffsetActionDynamicsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ILanePosition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LanePositionRangeCheckerRule: public RangeCheckerRule<ILanePosition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILanePosition> object) const;
        public:
            LanePositionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ILateralDistanceAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDistanceActionRangeCheckerRule: public RangeCheckerRule<ILateralDistanceAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILateralDistanceAction> object) const;
        public:
            LateralDistanceActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDistanceActionRangeCheckerRule: public RangeCheckerRule<ILongitudinalDistanceAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) const;
        public:
            LongitudinalDistanceActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IManeuverGroup according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverGroupRangeCheckerRule: public RangeCheckerRule<IManeuverGroup>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IManeuverGroup> object) const;
        public:
            ManeuverGroupRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IMiscObject according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectRangeCheckerRule: public RangeCheckerRule<IMiscObject>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IMiscObject> object) const;
        public:
            MiscObjectRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type INurbs according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NurbsRangeCheckerRule: public RangeCheckerRule<INurbs>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<INurbs> object) const;
        public:
            NurbsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<INurbs> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<INurbs> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IOffroadCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OffroadConditionRangeCheckerRule: public RangeCheckerRule<IOffroadCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOffroadCondition> object) const;
        public:
            OffroadConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IOverrideBrakeAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideBrakeActionRangeCheckerRule: public RangeCheckerRule<IOverrideBrakeAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideBrakeAction> object) const;
        public:
            OverrideBrakeActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IOverrideClutchAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideClutchActionRangeCheckerRule: public RangeCheckerRule<IOverrideClutchAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideClutchAction> object) const;
        public:
            OverrideClutchActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IOverrideParkingBrakeAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideParkingBrakeActionRangeCheckerRule: public RangeCheckerRule<IOverrideParkingBrakeAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) const;
        public:
            OverrideParkingBrakeActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IOverrideThrottleAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideThrottleActionRangeCheckerRule: public RangeCheckerRule<IOverrideThrottleAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideThrottleAction> object) const;
        public:
            OverrideThrottleActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IPerformance according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PerformanceRangeCheckerRule: public RangeCheckerRule<IPerformance>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPerformance> object) const;
        public:
            PerformanceRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPerformance> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPerformance> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IPhase according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PhaseRangeCheckerRule: public RangeCheckerRule<IPhase>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPhase> object) const;
        public:
            PhaseRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPhase> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPhase> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IPositionInLaneCoordinates according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInLaneCoordinatesRangeCheckerRule: public RangeCheckerRule<IPositionInLaneCoordinates>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) const;
        public:
            PositionInLaneCoordinatesRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IPrecipitation according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationRangeCheckerRule: public RangeCheckerRule<IPrecipitation>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPrecipitation> object) const;
        public:
            PrecipitationRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IReachPositionCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReachPositionConditionRangeCheckerRule: public RangeCheckerRule<IReachPositionCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IReachPositionCondition> object) const;
        public:
            ReachPositionConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IRelativeDistanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceConditionRangeCheckerRule: public RangeCheckerRule<IRelativeDistanceCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IRelativeDistanceCondition> object) const;
        public:
            RelativeDistanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IRoadCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadConditionRangeCheckerRule: public RangeCheckerRule<IRoadCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IRoadCondition> object) const;
        public:
            RoadConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IStandStillCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StandStillConditionRangeCheckerRule: public RangeCheckerRule<IStandStillCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IStandStillCondition> object) const;
        public:
            StandStillConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ISun according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SunRangeCheckerRule: public RangeCheckerRule<ISun>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ISun> object) const;
        public:
            SunRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISun> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISun> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITimeHeadwayCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeHeadwayConditionRangeCheckerRule: public RangeCheckerRule<ITimeHeadwayCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITimeHeadwayCondition> object) const;
        public:
            TimeHeadwayConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITimeToCollisionCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionRangeCheckerRule: public RangeCheckerRule<ITimeToCollisionCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITimeToCollisionCondition> object) const;
        public:
            TimeToCollisionConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITiming according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimingRangeCheckerRule: public RangeCheckerRule<ITiming>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITiming> object) const;
        public:
            TimingRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITiming> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITiming> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITrafficSignalController according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerRangeCheckerRule: public RangeCheckerRule<ITrafficSignalController>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSignalController> object) const;
        public:
            TrafficSignalControllerRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITrafficSinkAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSinkActionRangeCheckerRule: public RangeCheckerRule<ITrafficSinkAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSinkAction> object) const;
        public:
            TrafficSinkActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITrafficSourceAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSourceActionRangeCheckerRule: public RangeCheckerRule<ITrafficSourceAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSourceAction> object) const;
        public:
            TrafficSourceActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITrafficSwarmAction according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSwarmActionRangeCheckerRule: public RangeCheckerRule<ITrafficSwarmAction>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSwarmAction> object) const;
        public:
            TrafficSwarmActionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITransitionDynamics according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TransitionDynamicsRangeCheckerRule: public RangeCheckerRule<ITransitionDynamics>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITransitionDynamics> object) const;
        public:
            TransitionDynamicsRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type ITraveledDistanceCondition according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TraveledDistanceConditionRangeCheckerRule: public RangeCheckerRule<ITraveledDistanceCondition>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITraveledDistanceCondition> object) const;
        public:
            TraveledDistanceConditionRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object) override;
        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type IVehicleCategoryDistributionEntry according to OpenSCENARIO standard
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionEntryRangeCheckerRule: public RangeCheckerRule<IVehicleCategoryDistributionEntry>
        {
        private:
            void Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) const;
        public:
            VehicleCategoryDistributionEntryRangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) override;
            OPENSCENARIOLIB_EXP void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) override;
        };

    }
}
