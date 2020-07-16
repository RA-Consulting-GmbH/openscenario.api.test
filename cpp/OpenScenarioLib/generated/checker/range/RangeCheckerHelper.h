#pragma once

#include "IScenarioChecker.h"
#include "RangeCheckerRules.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A helper class for connection all RangeChecker rules to the specific classes
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RangeCheckerHelper 
    {
    public:
    /**
     * Connects all range checker rules to a global scenarioChecker
     * @param scenarioChecker the global scenarioChecker
     */
        static void AddAllRangeCheckerRules(std::shared_ptr<IScenarioChecker> scenarioChecker)
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
    };

}
