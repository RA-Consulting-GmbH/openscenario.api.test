package de.rac.openscenario.v1_0.checker.range;
import de.rac.openscenario.v1_0.checker.IScenarioChecker;

import de.rac.openscenario.v1_0.checker.range.AbsoluteSpeedRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.AxleRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.ClothoidRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.ConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.ControlPointRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.ControllerDistributionEntryRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.DimensionsRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.DistanceConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.DynamicConstraintsRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.EndOfRoadConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.EventRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.FogRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.LaneOffsetActionDynamicsRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.LanePositionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.LateralDistanceActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.LongitudinalDistanceActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.ManeuverGroupRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.MiscObjectRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.NurbsRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.OffroadConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.OverrideBrakeActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.OverrideClutchActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.OverrideParkingBrakeActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.OverrideThrottleActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.PerformanceRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.PhaseRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.PositionInLaneCoordinatesRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.PrecipitationRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.ReachPositionConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.RelativeDistanceConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.RoadConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.StandStillConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.SunRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TimeHeadwayConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TimeToCollisionConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TimingRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TrafficSignalControllerRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TrafficSinkActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TrafficSourceActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TrafficSwarmActionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TransitionDynamicsRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.TraveledDistanceConditionRangeCheckerRule;
import de.rac.openscenario.v1_0.checker.range.VehicleCategoryDistributionEntryRangeCheckerRule;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A helper class for connection all RangeChecker rules to the specific classes
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RangeCheckerHelper {
	/**
	 * Connects all range checker rules to a global scenarioChecker
	 * @param scenarioChecker the global scenarioChecker
	 */
	public static void addAllRangeCheckerRules(IScenarioChecker scenarioChecker)
	{
		scenarioChecker.addAbsoluteSpeedCheckerRule(new AbsoluteSpeedRangeCheckerRule());
		scenarioChecker.addAxleCheckerRule(new AxleRangeCheckerRule());
		scenarioChecker.addClothoidCheckerRule(new ClothoidRangeCheckerRule());
		scenarioChecker.addConditionCheckerRule(new ConditionRangeCheckerRule());
		scenarioChecker.addControlPointCheckerRule(new ControlPointRangeCheckerRule());
		scenarioChecker.addControllerDistributionEntryCheckerRule(new ControllerDistributionEntryRangeCheckerRule());
		scenarioChecker.addDimensionsCheckerRule(new DimensionsRangeCheckerRule());
		scenarioChecker.addDistanceConditionCheckerRule(new DistanceConditionRangeCheckerRule());
		scenarioChecker.addDynamicConstraintsCheckerRule(new DynamicConstraintsRangeCheckerRule());
		scenarioChecker.addEndOfRoadConditionCheckerRule(new EndOfRoadConditionRangeCheckerRule());
		scenarioChecker.addEventCheckerRule(new EventRangeCheckerRule());
		scenarioChecker.addFogCheckerRule(new FogRangeCheckerRule());
		scenarioChecker.addLaneOffsetActionDynamicsCheckerRule(new LaneOffsetActionDynamicsRangeCheckerRule());
		scenarioChecker.addLanePositionCheckerRule(new LanePositionRangeCheckerRule());
		scenarioChecker.addLateralDistanceActionCheckerRule(new LateralDistanceActionRangeCheckerRule());
		scenarioChecker.addLongitudinalDistanceActionCheckerRule(new LongitudinalDistanceActionRangeCheckerRule());
		scenarioChecker.addManeuverGroupCheckerRule(new ManeuverGroupRangeCheckerRule());
		scenarioChecker.addMiscObjectCheckerRule(new MiscObjectRangeCheckerRule());
		scenarioChecker.addNurbsCheckerRule(new NurbsRangeCheckerRule());
		scenarioChecker.addOffroadConditionCheckerRule(new OffroadConditionRangeCheckerRule());
		scenarioChecker.addOverrideBrakeActionCheckerRule(new OverrideBrakeActionRangeCheckerRule());
		scenarioChecker.addOverrideClutchActionCheckerRule(new OverrideClutchActionRangeCheckerRule());
		scenarioChecker.addOverrideParkingBrakeActionCheckerRule(new OverrideParkingBrakeActionRangeCheckerRule());
		scenarioChecker.addOverrideThrottleActionCheckerRule(new OverrideThrottleActionRangeCheckerRule());
		scenarioChecker.addPerformanceCheckerRule(new PerformanceRangeCheckerRule());
		scenarioChecker.addPhaseCheckerRule(new PhaseRangeCheckerRule());
		scenarioChecker.addPositionInLaneCoordinatesCheckerRule(new PositionInLaneCoordinatesRangeCheckerRule());
		scenarioChecker.addPrecipitationCheckerRule(new PrecipitationRangeCheckerRule());
		scenarioChecker.addReachPositionConditionCheckerRule(new ReachPositionConditionRangeCheckerRule());
		scenarioChecker.addRelativeDistanceConditionCheckerRule(new RelativeDistanceConditionRangeCheckerRule());
		scenarioChecker.addRoadConditionCheckerRule(new RoadConditionRangeCheckerRule());
		scenarioChecker.addStandStillConditionCheckerRule(new StandStillConditionRangeCheckerRule());
		scenarioChecker.addSunCheckerRule(new SunRangeCheckerRule());
		scenarioChecker.addTimeHeadwayConditionCheckerRule(new TimeHeadwayConditionRangeCheckerRule());
		scenarioChecker.addTimeToCollisionConditionCheckerRule(new TimeToCollisionConditionRangeCheckerRule());
		scenarioChecker.addTimingCheckerRule(new TimingRangeCheckerRule());
		scenarioChecker.addTrafficSignalControllerCheckerRule(new TrafficSignalControllerRangeCheckerRule());
		scenarioChecker.addTrafficSinkActionCheckerRule(new TrafficSinkActionRangeCheckerRule());
		scenarioChecker.addTrafficSourceActionCheckerRule(new TrafficSourceActionRangeCheckerRule());
		scenarioChecker.addTrafficSwarmActionCheckerRule(new TrafficSwarmActionRangeCheckerRule());
		scenarioChecker.addTransitionDynamicsCheckerRule(new TransitionDynamicsRangeCheckerRule());
		scenarioChecker.addTraveledDistanceConditionCheckerRule(new TraveledDistanceConditionRangeCheckerRule());
		scenarioChecker.addVehicleCategoryDistributionEntryCheckerRule(new VehicleCategoryDistributionEntryRangeCheckerRule());
	}
}
