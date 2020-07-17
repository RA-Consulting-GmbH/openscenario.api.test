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
package net.asam.openscenario.v1_0.checker.range;

import net.asam.openscenario.v1_0.checker.IScenarioChecker;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0 A
 * helper class for connection all RangeChecker rules to the specific classes
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RangeCheckerHelper {
  /**
   * Connects all range checker rules to a global scenarioChecker
   *
   * @param scenarioChecker the global scenarioChecker
   */
  public static void addAllRangeCheckerRules(IScenarioChecker scenarioChecker) {
    scenarioChecker.addAbsoluteSpeedCheckerRule(new AbsoluteSpeedRangeCheckerRule());
    scenarioChecker.addAxleCheckerRule(new AxleRangeCheckerRule());
    scenarioChecker.addClothoidCheckerRule(new ClothoidRangeCheckerRule());
    scenarioChecker.addConditionCheckerRule(new ConditionRangeCheckerRule());
    scenarioChecker.addControlPointCheckerRule(new ControlPointRangeCheckerRule());
    scenarioChecker.addControllerDistributionEntryCheckerRule(
        new ControllerDistributionEntryRangeCheckerRule());
    scenarioChecker.addDimensionsCheckerRule(new DimensionsRangeCheckerRule());
    scenarioChecker.addDistanceConditionCheckerRule(new DistanceConditionRangeCheckerRule());
    scenarioChecker.addDynamicConstraintsCheckerRule(new DynamicConstraintsRangeCheckerRule());
    scenarioChecker.addEndOfRoadConditionCheckerRule(new EndOfRoadConditionRangeCheckerRule());
    scenarioChecker.addEventCheckerRule(new EventRangeCheckerRule());
    scenarioChecker.addFogCheckerRule(new FogRangeCheckerRule());
    scenarioChecker.addLaneOffsetActionDynamicsCheckerRule(
        new LaneOffsetActionDynamicsRangeCheckerRule());
    scenarioChecker.addLanePositionCheckerRule(new LanePositionRangeCheckerRule());
    scenarioChecker.addLateralDistanceActionCheckerRule(
        new LateralDistanceActionRangeCheckerRule());
    scenarioChecker.addLongitudinalDistanceActionCheckerRule(
        new LongitudinalDistanceActionRangeCheckerRule());
    scenarioChecker.addManeuverGroupCheckerRule(new ManeuverGroupRangeCheckerRule());
    scenarioChecker.addMiscObjectCheckerRule(new MiscObjectRangeCheckerRule());
    scenarioChecker.addNurbsCheckerRule(new NurbsRangeCheckerRule());
    scenarioChecker.addOffroadConditionCheckerRule(new OffroadConditionRangeCheckerRule());
    scenarioChecker.addOverrideBrakeActionCheckerRule(new OverrideBrakeActionRangeCheckerRule());
    scenarioChecker.addOverrideClutchActionCheckerRule(new OverrideClutchActionRangeCheckerRule());
    scenarioChecker.addOverrideParkingBrakeActionCheckerRule(
        new OverrideParkingBrakeActionRangeCheckerRule());
    scenarioChecker.addOverrideThrottleActionCheckerRule(
        new OverrideThrottleActionRangeCheckerRule());
    scenarioChecker.addPerformanceCheckerRule(new PerformanceRangeCheckerRule());
    scenarioChecker.addPhaseCheckerRule(new PhaseRangeCheckerRule());
    scenarioChecker.addPositionInLaneCoordinatesCheckerRule(
        new PositionInLaneCoordinatesRangeCheckerRule());
    scenarioChecker.addPrecipitationCheckerRule(new PrecipitationRangeCheckerRule());
    scenarioChecker.addReachPositionConditionCheckerRule(
        new ReachPositionConditionRangeCheckerRule());
    scenarioChecker.addRelativeDistanceConditionCheckerRule(
        new RelativeDistanceConditionRangeCheckerRule());
    scenarioChecker.addRoadConditionCheckerRule(new RoadConditionRangeCheckerRule());
    scenarioChecker.addStandStillConditionCheckerRule(new StandStillConditionRangeCheckerRule());
    scenarioChecker.addSunCheckerRule(new SunRangeCheckerRule());
    scenarioChecker.addTimeHeadwayConditionCheckerRule(new TimeHeadwayConditionRangeCheckerRule());
    scenarioChecker.addTimeToCollisionConditionCheckerRule(
        new TimeToCollisionConditionRangeCheckerRule());
    scenarioChecker.addTimingCheckerRule(new TimingRangeCheckerRule());
    scenarioChecker.addTrafficSignalControllerCheckerRule(
        new TrafficSignalControllerRangeCheckerRule());
    scenarioChecker.addTrafficSinkActionCheckerRule(new TrafficSinkActionRangeCheckerRule());
    scenarioChecker.addTrafficSourceActionCheckerRule(new TrafficSourceActionRangeCheckerRule());
    scenarioChecker.addTrafficSwarmActionCheckerRule(new TrafficSwarmActionRangeCheckerRule());
    scenarioChecker.addTransitionDynamicsCheckerRule(new TransitionDynamicsRangeCheckerRule());
    scenarioChecker.addTraveledDistanceConditionCheckerRule(
        new TraveledDistanceConditionRangeCheckerRule());
    scenarioChecker.addVehicleCategoryDistributionEntryCheckerRule(
        new VehicleCategoryDistributionEntryRangeCheckerRule());
  }
}
