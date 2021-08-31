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

#include "RangeCheckerHelperV1_1.h"
#include "RangeCheckerRulesV1_1.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
		void RangeCheckerHelper::AddAllRangeCheckerRules(std::shared_ptr<IScenarioChecker> scenarioChecker)
        {
            scenarioChecker->AddAbsoluteSpeedCheckerRule(std::shared_ptr<AbsoluteSpeedRangeCheckerRule>(new AbsoluteSpeedRangeCheckerRule()));
            scenarioChecker->AddAxleCheckerRule(std::shared_ptr<AxleRangeCheckerRule>(new AxleRangeCheckerRule()));
            scenarioChecker->AddClothoidCheckerRule(std::shared_ptr<ClothoidRangeCheckerRule>(new ClothoidRangeCheckerRule()));
            scenarioChecker->AddConditionCheckerRule(std::shared_ptr<ConditionRangeCheckerRule>(new ConditionRangeCheckerRule()));
            scenarioChecker->AddControlPointCheckerRule(std::shared_ptr<ControlPointRangeCheckerRule>(new ControlPointRangeCheckerRule()));
            scenarioChecker->AddControllerDistributionEntryCheckerRule(std::shared_ptr<ControllerDistributionEntryRangeCheckerRule>(new ControllerDistributionEntryRangeCheckerRule()));
            scenarioChecker->AddDimensionsCheckerRule(std::shared_ptr<DimensionsRangeCheckerRule>(new DimensionsRangeCheckerRule()));
            scenarioChecker->AddDistanceConditionCheckerRule(std::shared_ptr<DistanceConditionRangeCheckerRule>(new DistanceConditionRangeCheckerRule()));
            scenarioChecker->AddDynamicConstraintsCheckerRule(std::shared_ptr<DynamicConstraintsRangeCheckerRule>(new DynamicConstraintsRangeCheckerRule()));
            scenarioChecker->AddEndOfRoadConditionCheckerRule(std::shared_ptr<EndOfRoadConditionRangeCheckerRule>(new EndOfRoadConditionRangeCheckerRule()));
            scenarioChecker->AddEventCheckerRule(std::shared_ptr<EventRangeCheckerRule>(new EventRangeCheckerRule()));
            scenarioChecker->AddFogCheckerRule(std::shared_ptr<FogRangeCheckerRule>(new FogRangeCheckerRule()));
            scenarioChecker->AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<LaneOffsetActionDynamicsRangeCheckerRule>(new LaneOffsetActionDynamicsRangeCheckerRule()));
            scenarioChecker->AddLanePositionCheckerRule(std::shared_ptr<LanePositionRangeCheckerRule>(new LanePositionRangeCheckerRule()));
            scenarioChecker->AddLateralDistanceActionCheckerRule(std::shared_ptr<LateralDistanceActionRangeCheckerRule>(new LateralDistanceActionRangeCheckerRule()));
            scenarioChecker->AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<LongitudinalDistanceActionRangeCheckerRule>(new LongitudinalDistanceActionRangeCheckerRule()));
            scenarioChecker->AddManeuverGroupCheckerRule(std::shared_ptr<ManeuverGroupRangeCheckerRule>(new ManeuverGroupRangeCheckerRule()));
            scenarioChecker->AddMiscObjectCheckerRule(std::shared_ptr<MiscObjectRangeCheckerRule>(new MiscObjectRangeCheckerRule()));
            scenarioChecker->AddNurbsCheckerRule(std::shared_ptr<NurbsRangeCheckerRule>(new NurbsRangeCheckerRule()));
            scenarioChecker->AddOffroadConditionCheckerRule(std::shared_ptr<OffroadConditionRangeCheckerRule>(new OffroadConditionRangeCheckerRule()));
            scenarioChecker->AddOverrideBrakeActionCheckerRule(std::shared_ptr<OverrideBrakeActionRangeCheckerRule>(new OverrideBrakeActionRangeCheckerRule()));
            scenarioChecker->AddOverrideClutchActionCheckerRule(std::shared_ptr<OverrideClutchActionRangeCheckerRule>(new OverrideClutchActionRangeCheckerRule()));
            scenarioChecker->AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<OverrideParkingBrakeActionRangeCheckerRule>(new OverrideParkingBrakeActionRangeCheckerRule()));
            scenarioChecker->AddOverrideThrottleActionCheckerRule(std::shared_ptr<OverrideThrottleActionRangeCheckerRule>(new OverrideThrottleActionRangeCheckerRule()));
            scenarioChecker->AddPerformanceCheckerRule(std::shared_ptr<PerformanceRangeCheckerRule>(new PerformanceRangeCheckerRule()));
            scenarioChecker->AddPhaseCheckerRule(std::shared_ptr<PhaseRangeCheckerRule>(new PhaseRangeCheckerRule()));
            scenarioChecker->AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<PositionInLaneCoordinatesRangeCheckerRule>(new PositionInLaneCoordinatesRangeCheckerRule()));
            scenarioChecker->AddPrecipitationCheckerRule(std::shared_ptr<PrecipitationRangeCheckerRule>(new PrecipitationRangeCheckerRule()));
            scenarioChecker->AddReachPositionConditionCheckerRule(std::shared_ptr<ReachPositionConditionRangeCheckerRule>(new ReachPositionConditionRangeCheckerRule()));
            scenarioChecker->AddRelativeDistanceConditionCheckerRule(std::shared_ptr<RelativeDistanceConditionRangeCheckerRule>(new RelativeDistanceConditionRangeCheckerRule()));
            scenarioChecker->AddRoadConditionCheckerRule(std::shared_ptr<RoadConditionRangeCheckerRule>(new RoadConditionRangeCheckerRule()));
            scenarioChecker->AddStandStillConditionCheckerRule(std::shared_ptr<StandStillConditionRangeCheckerRule>(new StandStillConditionRangeCheckerRule()));
            scenarioChecker->AddSunCheckerRule(std::shared_ptr<SunRangeCheckerRule>(new SunRangeCheckerRule()));
            scenarioChecker->AddTimeHeadwayConditionCheckerRule(std::shared_ptr<TimeHeadwayConditionRangeCheckerRule>(new TimeHeadwayConditionRangeCheckerRule()));
            scenarioChecker->AddTimeToCollisionConditionCheckerRule(std::shared_ptr<TimeToCollisionConditionRangeCheckerRule>(new TimeToCollisionConditionRangeCheckerRule()));
            scenarioChecker->AddTimingCheckerRule(std::shared_ptr<TimingRangeCheckerRule>(new TimingRangeCheckerRule()));
            scenarioChecker->AddTrafficSignalControllerCheckerRule(std::shared_ptr<TrafficSignalControllerRangeCheckerRule>(new TrafficSignalControllerRangeCheckerRule()));
            scenarioChecker->AddTrafficSinkActionCheckerRule(std::shared_ptr<TrafficSinkActionRangeCheckerRule>(new TrafficSinkActionRangeCheckerRule()));
            scenarioChecker->AddTrafficSourceActionCheckerRule(std::shared_ptr<TrafficSourceActionRangeCheckerRule>(new TrafficSourceActionRangeCheckerRule()));
            scenarioChecker->AddTrafficSwarmActionCheckerRule(std::shared_ptr<TrafficSwarmActionRangeCheckerRule>(new TrafficSwarmActionRangeCheckerRule()));
            scenarioChecker->AddTransitionDynamicsCheckerRule(std::shared_ptr<TransitionDynamicsRangeCheckerRule>(new TransitionDynamicsRangeCheckerRule()));
            scenarioChecker->AddTraveledDistanceConditionCheckerRule(std::shared_ptr<TraveledDistanceConditionRangeCheckerRule>(new TraveledDistanceConditionRangeCheckerRule()));
            scenarioChecker->AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<VehicleCategoryDistributionEntryRangeCheckerRule>(new VehicleCategoryDistributionEntryRangeCheckerRule()));
        }

    }
}
