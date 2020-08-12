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
#include "ApiClassInterfaces.h"
#include "RangeCheckerRule.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IAbsoluteSpeed according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class AbsoluteSpeedRangeCheckerRule: public RangeCheckerRule<IAbsoluteSpeed>
        {
        public:
            AbsoluteSpeedRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAbsoluteSpeed> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IAxle according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class AxleRangeCheckerRule: public RangeCheckerRule<IAxle>
        {
        public:
            AxleRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAxle> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IClothoid according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ClothoidRangeCheckerRule: public RangeCheckerRule<IClothoid>
        {
        public:
            ClothoidRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IClothoid> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ICondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ConditionRangeCheckerRule: public RangeCheckerRule<ICondition>
        {
        public:
            ConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IControlPoint according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ControlPointRangeCheckerRule: public RangeCheckerRule<IControlPoint>
        {
        public:
            ControlPointRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControlPoint> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ControllerDistributionEntryRangeCheckerRule: public RangeCheckerRule<IControllerDistributionEntry>
        {
        public:
            ControllerDistributionEntryRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControllerDistributionEntry> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IDimensions according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class DimensionsRangeCheckerRule: public RangeCheckerRule<IDimensions>
        {
        public:
            DimensionsRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDimensions> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IDistanceCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class DistanceConditionRangeCheckerRule: public RangeCheckerRule<IDistanceCondition>
        {
        public:
            DistanceConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDistanceCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IDynamicConstraints according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class DynamicConstraintsRangeCheckerRule: public RangeCheckerRule<IDynamicConstraints>
        {
        public:
            DynamicConstraintsRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDynamicConstraints> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IEndOfRoadCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class EndOfRoadConditionRangeCheckerRule: public RangeCheckerRule<IEndOfRoadCondition>
        {
        public:
            EndOfRoadConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEndOfRoadCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IEvent according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class EventRangeCheckerRule: public RangeCheckerRule<IEvent>
        {
        public:
            EventRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEvent> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IFog according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class FogRangeCheckerRule: public RangeCheckerRule<IFog>
        {
        public:
            FogRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFog> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILaneOffsetActionDynamics according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class LaneOffsetActionDynamicsRangeCheckerRule: public RangeCheckerRule<ILaneOffsetActionDynamics>
        {
        public:
            LaneOffsetActionDynamicsRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILanePosition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class LanePositionRangeCheckerRule: public RangeCheckerRule<ILanePosition>
        {
        public:
            LanePositionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILanePosition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILateralDistanceAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class LateralDistanceActionRangeCheckerRule: public RangeCheckerRule<ILateralDistanceAction>
        {
        public:
            LateralDistanceActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILateralDistanceAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class LongitudinalDistanceActionRangeCheckerRule: public RangeCheckerRule<ILongitudinalDistanceAction>
        {
        public:
            LongitudinalDistanceActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IManeuverGroup according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ManeuverGroupRangeCheckerRule: public RangeCheckerRule<IManeuverGroup>
        {
        public:
            ManeuverGroupRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IManeuverGroup> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IMiscObject according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class MiscObjectRangeCheckerRule: public RangeCheckerRule<IMiscObject>
        {
        public:
            MiscObjectRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IMiscObject> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type INurbs according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class NurbsRangeCheckerRule: public RangeCheckerRule<INurbs>
        {
        public:
            NurbsRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<INurbs> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOffroadCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class OffroadConditionRangeCheckerRule: public RangeCheckerRule<IOffroadCondition>
        {
        public:
            OffroadConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOffroadCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOverrideBrakeAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class OverrideBrakeActionRangeCheckerRule: public RangeCheckerRule<IOverrideBrakeAction>
        {
        public:
            OverrideBrakeActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideBrakeAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOverrideClutchAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class OverrideClutchActionRangeCheckerRule: public RangeCheckerRule<IOverrideClutchAction>
        {
        public:
            OverrideClutchActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideClutchAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOverrideParkingBrakeAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class OverrideParkingBrakeActionRangeCheckerRule: public RangeCheckerRule<IOverrideParkingBrakeAction>
        {
        public:
            OverrideParkingBrakeActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOverrideThrottleAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class OverrideThrottleActionRangeCheckerRule: public RangeCheckerRule<IOverrideThrottleAction>
        {
        public:
            OverrideThrottleActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideThrottleAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPerformance according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class PerformanceRangeCheckerRule: public RangeCheckerRule<IPerformance>
        {
        public:
            PerformanceRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPerformance> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPhase according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class PhaseRangeCheckerRule: public RangeCheckerRule<IPhase>
        {
        public:
            PhaseRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPhase> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPositionInLaneCoordinates according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class PositionInLaneCoordinatesRangeCheckerRule: public RangeCheckerRule<IPositionInLaneCoordinates>
        {
        public:
            PositionInLaneCoordinatesRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPrecipitation according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class PrecipitationRangeCheckerRule: public RangeCheckerRule<IPrecipitation>
        {
        public:
            PrecipitationRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPrecipitation> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IReachPositionCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ReachPositionConditionRangeCheckerRule: public RangeCheckerRule<IReachPositionCondition>
        {
        public:
            ReachPositionConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IReachPositionCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IRelativeDistanceCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class RelativeDistanceConditionRangeCheckerRule: public RangeCheckerRule<IRelativeDistanceCondition>
        {
        public:
            RelativeDistanceConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeDistanceCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IRoadCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class RoadConditionRangeCheckerRule: public RangeCheckerRule<IRoadCondition>
        {
        public:
            RoadConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoadCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IStandStillCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class StandStillConditionRangeCheckerRule: public RangeCheckerRule<IStandStillCondition>
        {
        public:
            StandStillConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IStandStillCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ISun according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class SunRangeCheckerRule: public RangeCheckerRule<ISun>
        {
        public:
            SunRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISun> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITimeHeadwayCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TimeHeadwayConditionRangeCheckerRule: public RangeCheckerRule<ITimeHeadwayCondition>
        {
        public:
            TimeHeadwayConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeHeadwayCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITimeToCollisionCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TimeToCollisionConditionRangeCheckerRule: public RangeCheckerRule<ITimeToCollisionCondition>
        {
        public:
            TimeToCollisionConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeToCollisionCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITiming according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TimingRangeCheckerRule: public RangeCheckerRule<ITiming>
        {
        public:
            TimingRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITiming> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSignalController according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TrafficSignalControllerRangeCheckerRule: public RangeCheckerRule<ITrafficSignalController>
        {
        public:
            TrafficSignalControllerRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalController> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSinkAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TrafficSinkActionRangeCheckerRule: public RangeCheckerRule<ITrafficSinkAction>
        {
        public:
            TrafficSinkActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSinkAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSourceAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TrafficSourceActionRangeCheckerRule: public RangeCheckerRule<ITrafficSourceAction>
        {
        public:
            TrafficSourceActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSourceAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSwarmAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TrafficSwarmActionRangeCheckerRule: public RangeCheckerRule<ITrafficSwarmAction>
        {
        public:
            TrafficSwarmActionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSwarmAction> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITransitionDynamics according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TransitionDynamicsRangeCheckerRule: public RangeCheckerRule<ITransitionDynamics>
        {
        public:
            TransitionDynamicsRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITransitionDynamics> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITraveledDistanceCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class TraveledDistanceConditionRangeCheckerRule: public RangeCheckerRule<ITraveledDistanceCondition>
        {
        public:
            TraveledDistanceConditionRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITraveledDistanceCondition> object) override;
        };

    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IVehicleCategoryDistributionEntry according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class VehicleCategoryDistributionEntryRangeCheckerRule: public RangeCheckerRule<IVehicleCategoryDistributionEntry>
        {
        public:
            VehicleCategoryDistributionEntryRangeCheckerRule() = default;
            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) override;
        };

    }
}
