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


#include "CardinalityCheckerHelperV1_1.h"
#include "CardinalityCheckerRulesV1_1.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
		void CardinalityCheckerHelper::AddAllCardinalityCheckerRules(std::shared_ptr<IScenarioChecker> scenarioChecker)
        {
            scenarioChecker->AddAbsoluteSpeedCheckerRule(std::shared_ptr<AbsoluteSpeedCardinalityCheckerRule>(new AbsoluteSpeedCardinalityCheckerRule()));
            scenarioChecker->AddAbsoluteTargetLaneCheckerRule(std::shared_ptr<AbsoluteTargetLaneCardinalityCheckerRule>(new AbsoluteTargetLaneCardinalityCheckerRule()));
            scenarioChecker->AddAbsoluteTargetLaneOffsetCheckerRule(std::shared_ptr<AbsoluteTargetLaneOffsetCardinalityCheckerRule>(new AbsoluteTargetLaneOffsetCardinalityCheckerRule()));
            scenarioChecker->AddAbsoluteTargetSpeedCheckerRule(std::shared_ptr<AbsoluteTargetSpeedCardinalityCheckerRule>(new AbsoluteTargetSpeedCardinalityCheckerRule()));
            scenarioChecker->AddAccelerationConditionCheckerRule(std::shared_ptr<AccelerationConditionCardinalityCheckerRule>(new AccelerationConditionCardinalityCheckerRule()));
            scenarioChecker->AddAcquirePositionActionCheckerRule(std::shared_ptr<AcquirePositionActionCardinalityCheckerRule>(new AcquirePositionActionCardinalityCheckerRule()));
            scenarioChecker->AddActCheckerRule(std::shared_ptr<ActCardinalityCheckerRule>(new ActCardinalityCheckerRule()));
            scenarioChecker->AddActionCheckerRule(std::shared_ptr<ActionCardinalityCheckerRule>(new ActionCardinalityCheckerRule()));
            scenarioChecker->AddActorsCheckerRule(std::shared_ptr<ActorsCardinalityCheckerRule>(new ActorsCardinalityCheckerRule()));
            scenarioChecker->AddAddEntityActionCheckerRule(std::shared_ptr<AddEntityActionCardinalityCheckerRule>(new AddEntityActionCardinalityCheckerRule()));
            scenarioChecker->AddAxleCheckerRule(std::shared_ptr<AxleCardinalityCheckerRule>(new AxleCardinalityCheckerRule()));
            scenarioChecker->AddAxlesCheckerRule(std::shared_ptr<AxlesCardinalityCheckerRule>(new AxlesCardinalityCheckerRule()));
            scenarioChecker->AddBoundingBoxCheckerRule(std::shared_ptr<BoundingBoxCardinalityCheckerRule>(new BoundingBoxCardinalityCheckerRule()));
            scenarioChecker->AddByEntityConditionCheckerRule(std::shared_ptr<ByEntityConditionCardinalityCheckerRule>(new ByEntityConditionCardinalityCheckerRule()));
            scenarioChecker->AddByObjectTypeCheckerRule(std::shared_ptr<ByObjectTypeCardinalityCheckerRule>(new ByObjectTypeCardinalityCheckerRule()));
            scenarioChecker->AddByTypeCheckerRule(std::shared_ptr<ByTypeCardinalityCheckerRule>(new ByTypeCardinalityCheckerRule()));
            scenarioChecker->AddCatalogDefinitionCheckerRule(std::shared_ptr<CatalogDefinitionCardinalityCheckerRule>(new CatalogDefinitionCardinalityCheckerRule()));
            scenarioChecker->AddCatalogReferenceCheckerRule(std::shared_ptr<CatalogReferenceCardinalityCheckerRule>(new CatalogReferenceCardinalityCheckerRule()));
            scenarioChecker->AddCenterCheckerRule(std::shared_ptr<CenterCardinalityCheckerRule>(new CenterCardinalityCheckerRule()));
            scenarioChecker->AddCentralSwarmObjectCheckerRule(std::shared_ptr<CentralSwarmObjectCardinalityCheckerRule>(new CentralSwarmObjectCardinalityCheckerRule()));
            scenarioChecker->AddClothoidCheckerRule(std::shared_ptr<ClothoidCardinalityCheckerRule>(new ClothoidCardinalityCheckerRule()));
            scenarioChecker->AddConditionCheckerRule(std::shared_ptr<ConditionCardinalityCheckerRule>(new ConditionCardinalityCheckerRule()));
            scenarioChecker->AddConditionGroupCheckerRule(std::shared_ptr<ConditionGroupCardinalityCheckerRule>(new ConditionGroupCardinalityCheckerRule()));
            scenarioChecker->AddControlPointCheckerRule(std::shared_ptr<ControlPointCardinalityCheckerRule>(new ControlPointCardinalityCheckerRule()));
            scenarioChecker->AddControllerCheckerRule(std::shared_ptr<ControllerCardinalityCheckerRule>(new ControllerCardinalityCheckerRule()));
            scenarioChecker->AddControllerCatalogLocationCheckerRule(std::shared_ptr<ControllerCatalogLocationCardinalityCheckerRule>(new ControllerCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddControllerDistributionCheckerRule(std::shared_ptr<ControllerDistributionCardinalityCheckerRule>(new ControllerDistributionCardinalityCheckerRule()));
            scenarioChecker->AddControllerDistributionEntryCheckerRule(std::shared_ptr<ControllerDistributionEntryCardinalityCheckerRule>(new ControllerDistributionEntryCardinalityCheckerRule()));
            scenarioChecker->AddCustomCommandActionCheckerRule(std::shared_ptr<CustomCommandActionCardinalityCheckerRule>(new CustomCommandActionCardinalityCheckerRule()));
            scenarioChecker->AddDeterministicMultiParameterDistributionCheckerRule(std::shared_ptr<DeterministicMultiParameterDistributionCardinalityCheckerRule>(new DeterministicMultiParameterDistributionCardinalityCheckerRule()));
            scenarioChecker->AddDeterministicMultiParameterDistributionTypeCheckerRule(std::shared_ptr<DeterministicMultiParameterDistributionTypeCardinalityCheckerRule>(new DeterministicMultiParameterDistributionTypeCardinalityCheckerRule()));
            scenarioChecker->AddDeterministicParameterDistributionCheckerRule(std::shared_ptr<DeterministicParameterDistributionCardinalityCheckerRule>(new DeterministicParameterDistributionCardinalityCheckerRule()));
            scenarioChecker->AddDeterministicSingleParameterDistributionCheckerRule(std::shared_ptr<DeterministicSingleParameterDistributionCardinalityCheckerRule>(new DeterministicSingleParameterDistributionCardinalityCheckerRule()));
            scenarioChecker->AddDeterministicSingleParameterDistributionTypeCheckerRule(std::shared_ptr<DeterministicSingleParameterDistributionTypeCardinalityCheckerRule>(new DeterministicSingleParameterDistributionTypeCardinalityCheckerRule()));
            scenarioChecker->AddDimensionsCheckerRule(std::shared_ptr<DimensionsCardinalityCheckerRule>(new DimensionsCardinalityCheckerRule()));
            scenarioChecker->AddDirectoryCheckerRule(std::shared_ptr<DirectoryCardinalityCheckerRule>(new DirectoryCardinalityCheckerRule()));
            scenarioChecker->AddDistanceConditionCheckerRule(std::shared_ptr<DistanceConditionCardinalityCheckerRule>(new DistanceConditionCardinalityCheckerRule()));
            scenarioChecker->AddDistributionDefinitionCheckerRule(std::shared_ptr<DistributionDefinitionCardinalityCheckerRule>(new DistributionDefinitionCardinalityCheckerRule()));
            scenarioChecker->AddDistributionRangeCheckerRule(std::shared_ptr<DistributionRangeCardinalityCheckerRule>(new DistributionRangeCardinalityCheckerRule()));
            scenarioChecker->AddDistributionSetCheckerRule(std::shared_ptr<DistributionSetCardinalityCheckerRule>(new DistributionSetCardinalityCheckerRule()));
            scenarioChecker->AddDistributionSetElementCheckerRule(std::shared_ptr<DistributionSetElementCardinalityCheckerRule>(new DistributionSetElementCardinalityCheckerRule()));
            scenarioChecker->AddEndOfRoadConditionCheckerRule(std::shared_ptr<EndOfRoadConditionCardinalityCheckerRule>(new EndOfRoadConditionCardinalityCheckerRule()));
            scenarioChecker->AddEntityActionCheckerRule(std::shared_ptr<EntityActionCardinalityCheckerRule>(new EntityActionCardinalityCheckerRule()));
            scenarioChecker->AddEntityRefCheckerRule(std::shared_ptr<EntityRefCardinalityCheckerRule>(new EntityRefCardinalityCheckerRule()));
            scenarioChecker->AddEntitySelectionCheckerRule(std::shared_ptr<EntitySelectionCardinalityCheckerRule>(new EntitySelectionCardinalityCheckerRule()));
            scenarioChecker->AddEnvironmentCheckerRule(std::shared_ptr<EnvironmentCardinalityCheckerRule>(new EnvironmentCardinalityCheckerRule()));
            scenarioChecker->AddEnvironmentCatalogLocationCheckerRule(std::shared_ptr<EnvironmentCatalogLocationCardinalityCheckerRule>(new EnvironmentCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddEventCheckerRule(std::shared_ptr<EventCardinalityCheckerRule>(new EventCardinalityCheckerRule()));
            scenarioChecker->AddExternalObjectReferenceCheckerRule(std::shared_ptr<ExternalObjectReferenceCardinalityCheckerRule>(new ExternalObjectReferenceCardinalityCheckerRule()));
            scenarioChecker->AddFileCheckerRule(std::shared_ptr<FileCardinalityCheckerRule>(new FileCardinalityCheckerRule()));
            scenarioChecker->AddFileHeaderCheckerRule(std::shared_ptr<FileHeaderCardinalityCheckerRule>(new FileHeaderCardinalityCheckerRule()));
            scenarioChecker->AddFogCheckerRule(std::shared_ptr<FogCardinalityCheckerRule>(new FogCardinalityCheckerRule()));
            scenarioChecker->AddFollowTrajectoryActionCheckerRule(std::shared_ptr<FollowTrajectoryActionCardinalityCheckerRule>(new FollowTrajectoryActionCardinalityCheckerRule()));
            scenarioChecker->AddGeoPositionCheckerRule(std::shared_ptr<GeoPositionCardinalityCheckerRule>(new GeoPositionCardinalityCheckerRule()));
            scenarioChecker->AddHistogramCheckerRule(std::shared_ptr<HistogramCardinalityCheckerRule>(new HistogramCardinalityCheckerRule()));
            scenarioChecker->AddHistogramBinCheckerRule(std::shared_ptr<HistogramBinCardinalityCheckerRule>(new HistogramBinCardinalityCheckerRule()));
            scenarioChecker->AddInfrastructureActionCheckerRule(std::shared_ptr<InfrastructureActionCardinalityCheckerRule>(new InfrastructureActionCardinalityCheckerRule()));
            scenarioChecker->AddInitCheckerRule(std::shared_ptr<InitCardinalityCheckerRule>(new InitCardinalityCheckerRule()));
            scenarioChecker->AddKnotCheckerRule(std::shared_ptr<KnotCardinalityCheckerRule>(new KnotCardinalityCheckerRule()));
            scenarioChecker->AddLaneChangeActionCheckerRule(std::shared_ptr<LaneChangeActionCardinalityCheckerRule>(new LaneChangeActionCardinalityCheckerRule()));
            scenarioChecker->AddLaneOffsetActionCheckerRule(std::shared_ptr<LaneOffsetActionCardinalityCheckerRule>(new LaneOffsetActionCardinalityCheckerRule()));
            scenarioChecker->AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<LaneOffsetActionDynamicsCardinalityCheckerRule>(new LaneOffsetActionDynamicsCardinalityCheckerRule()));
            scenarioChecker->AddLanePositionCheckerRule(std::shared_ptr<LanePositionCardinalityCheckerRule>(new LanePositionCardinalityCheckerRule()));
            scenarioChecker->AddLateralDistanceActionCheckerRule(std::shared_ptr<LateralDistanceActionCardinalityCheckerRule>(new LateralDistanceActionCardinalityCheckerRule()));
            scenarioChecker->AddLicenseCheckerRule(std::shared_ptr<LicenseCardinalityCheckerRule>(new LicenseCardinalityCheckerRule()));
            scenarioChecker->AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<LongitudinalDistanceActionCardinalityCheckerRule>(new LongitudinalDistanceActionCardinalityCheckerRule()));
            scenarioChecker->AddManeuverCheckerRule(std::shared_ptr<ManeuverCardinalityCheckerRule>(new ManeuverCardinalityCheckerRule()));
            scenarioChecker->AddManeuverCatalogLocationCheckerRule(std::shared_ptr<ManeuverCatalogLocationCardinalityCheckerRule>(new ManeuverCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddManeuverGroupCheckerRule(std::shared_ptr<ManeuverGroupCardinalityCheckerRule>(new ManeuverGroupCardinalityCheckerRule()));
            scenarioChecker->AddMiscObjectCheckerRule(std::shared_ptr<MiscObjectCardinalityCheckerRule>(new MiscObjectCardinalityCheckerRule()));
            scenarioChecker->AddMiscObjectCatalogLocationCheckerRule(std::shared_ptr<MiscObjectCatalogLocationCardinalityCheckerRule>(new MiscObjectCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddNormalDistributionCheckerRule(std::shared_ptr<NormalDistributionCardinalityCheckerRule>(new NormalDistributionCardinalityCheckerRule()));
            scenarioChecker->AddNurbsCheckerRule(std::shared_ptr<NurbsCardinalityCheckerRule>(new NurbsCardinalityCheckerRule()));
            scenarioChecker->AddOffroadConditionCheckerRule(std::shared_ptr<OffroadConditionCardinalityCheckerRule>(new OffroadConditionCardinalityCheckerRule()));
            scenarioChecker->AddOpenScenarioCheckerRule(std::shared_ptr<OpenScenarioCardinalityCheckerRule>(new OpenScenarioCardinalityCheckerRule()));
            scenarioChecker->AddOpenScenarioCategoryCheckerRule(std::shared_ptr<OpenScenarioCategoryCardinalityCheckerRule>(new OpenScenarioCategoryCardinalityCheckerRule()));
            scenarioChecker->AddOverrideBrakeActionCheckerRule(std::shared_ptr<OverrideBrakeActionCardinalityCheckerRule>(new OverrideBrakeActionCardinalityCheckerRule()));
            scenarioChecker->AddOverrideClutchActionCheckerRule(std::shared_ptr<OverrideClutchActionCardinalityCheckerRule>(new OverrideClutchActionCardinalityCheckerRule()));
            scenarioChecker->AddOverrideGearActionCheckerRule(std::shared_ptr<OverrideGearActionCardinalityCheckerRule>(new OverrideGearActionCardinalityCheckerRule()));
            scenarioChecker->AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<OverrideParkingBrakeActionCardinalityCheckerRule>(new OverrideParkingBrakeActionCardinalityCheckerRule()));
            scenarioChecker->AddOverrideSteeringWheelActionCheckerRule(std::shared_ptr<OverrideSteeringWheelActionCardinalityCheckerRule>(new OverrideSteeringWheelActionCardinalityCheckerRule()));
            scenarioChecker->AddOverrideThrottleActionCheckerRule(std::shared_ptr<OverrideThrottleActionCardinalityCheckerRule>(new OverrideThrottleActionCardinalityCheckerRule()));
            scenarioChecker->AddParameterActionCheckerRule(std::shared_ptr<ParameterActionCardinalityCheckerRule>(new ParameterActionCardinalityCheckerRule()));
            scenarioChecker->AddParameterAddValueRuleCheckerRule(std::shared_ptr<ParameterAddValueRuleCardinalityCheckerRule>(new ParameterAddValueRuleCardinalityCheckerRule()));
            scenarioChecker->AddParameterAssignmentCheckerRule(std::shared_ptr<ParameterAssignmentCardinalityCheckerRule>(new ParameterAssignmentCardinalityCheckerRule()));
            scenarioChecker->AddParameterConditionCheckerRule(std::shared_ptr<ParameterConditionCardinalityCheckerRule>(new ParameterConditionCardinalityCheckerRule()));
            scenarioChecker->AddParameterDeclarationCheckerRule(std::shared_ptr<ParameterDeclarationCardinalityCheckerRule>(new ParameterDeclarationCardinalityCheckerRule()));
            scenarioChecker->AddParameterModifyActionCheckerRule(std::shared_ptr<ParameterModifyActionCardinalityCheckerRule>(new ParameterModifyActionCardinalityCheckerRule()));
            scenarioChecker->AddParameterMultiplyByValueRuleCheckerRule(std::shared_ptr<ParameterMultiplyByValueRuleCardinalityCheckerRule>(new ParameterMultiplyByValueRuleCardinalityCheckerRule()));
            scenarioChecker->AddParameterSetActionCheckerRule(std::shared_ptr<ParameterSetActionCardinalityCheckerRule>(new ParameterSetActionCardinalityCheckerRule()));
            scenarioChecker->AddParameterValueDistributionCheckerRule(std::shared_ptr<ParameterValueDistributionCardinalityCheckerRule>(new ParameterValueDistributionCardinalityCheckerRule()));
            scenarioChecker->AddParameterValueDistributionDefinitionCheckerRule(std::shared_ptr<ParameterValueDistributionDefinitionCardinalityCheckerRule>(new ParameterValueDistributionDefinitionCardinalityCheckerRule()));
            scenarioChecker->AddParameterValueSetCheckerRule(std::shared_ptr<ParameterValueSetCardinalityCheckerRule>(new ParameterValueSetCardinalityCheckerRule()));
            scenarioChecker->AddPedestrianCheckerRule(std::shared_ptr<PedestrianCardinalityCheckerRule>(new PedestrianCardinalityCheckerRule()));
            scenarioChecker->AddPedestrianCatalogLocationCheckerRule(std::shared_ptr<PedestrianCatalogLocationCardinalityCheckerRule>(new PedestrianCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddPerformanceCheckerRule(std::shared_ptr<PerformanceCardinalityCheckerRule>(new PerformanceCardinalityCheckerRule()));
            scenarioChecker->AddPhaseCheckerRule(std::shared_ptr<PhaseCardinalityCheckerRule>(new PhaseCardinalityCheckerRule()));
            scenarioChecker->AddPoissonDistributionCheckerRule(std::shared_ptr<PoissonDistributionCardinalityCheckerRule>(new PoissonDistributionCardinalityCheckerRule()));
            scenarioChecker->AddPolylineCheckerRule(std::shared_ptr<PolylineCardinalityCheckerRule>(new PolylineCardinalityCheckerRule()));
            scenarioChecker->AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<PositionInLaneCoordinatesCardinalityCheckerRule>(new PositionInLaneCoordinatesCardinalityCheckerRule()));
            scenarioChecker->AddPositionInRoadCoordinatesCheckerRule(std::shared_ptr<PositionInRoadCoordinatesCardinalityCheckerRule>(new PositionInRoadCoordinatesCardinalityCheckerRule()));
            scenarioChecker->AddPositionOfCurrentEntityCheckerRule(std::shared_ptr<PositionOfCurrentEntityCardinalityCheckerRule>(new PositionOfCurrentEntityCardinalityCheckerRule()));
            scenarioChecker->AddPrecipitationCheckerRule(std::shared_ptr<PrecipitationCardinalityCheckerRule>(new PrecipitationCardinalityCheckerRule()));
            scenarioChecker->AddPrivateCheckerRule(std::shared_ptr<PrivateCardinalityCheckerRule>(new PrivateCardinalityCheckerRule()));
            scenarioChecker->AddProbabilityDistributionSetCheckerRule(std::shared_ptr<ProbabilityDistributionSetCardinalityCheckerRule>(new ProbabilityDistributionSetCardinalityCheckerRule()));
            scenarioChecker->AddProbabilityDistributionSetElementCheckerRule(std::shared_ptr<ProbabilityDistributionSetElementCardinalityCheckerRule>(new ProbabilityDistributionSetElementCardinalityCheckerRule()));
            scenarioChecker->AddPropertyCheckerRule(std::shared_ptr<PropertyCardinalityCheckerRule>(new PropertyCardinalityCheckerRule()));
            scenarioChecker->AddRangeCheckerRule(std::shared_ptr<RangeCardinalityCheckerRule>(new RangeCardinalityCheckerRule()));
            scenarioChecker->AddReachPositionConditionCheckerRule(std::shared_ptr<ReachPositionConditionCardinalityCheckerRule>(new ReachPositionConditionCardinalityCheckerRule()));
            scenarioChecker->AddRelativeDistanceConditionCheckerRule(std::shared_ptr<RelativeDistanceConditionCardinalityCheckerRule>(new RelativeDistanceConditionCardinalityCheckerRule()));
            scenarioChecker->AddRelativeLanePositionCheckerRule(std::shared_ptr<RelativeLanePositionCardinalityCheckerRule>(new RelativeLanePositionCardinalityCheckerRule()));
            scenarioChecker->AddRelativeObjectPositionCheckerRule(std::shared_ptr<RelativeObjectPositionCardinalityCheckerRule>(new RelativeObjectPositionCardinalityCheckerRule()));
            scenarioChecker->AddRelativeRoadPositionCheckerRule(std::shared_ptr<RelativeRoadPositionCardinalityCheckerRule>(new RelativeRoadPositionCardinalityCheckerRule()));
            scenarioChecker->AddRelativeSpeedConditionCheckerRule(std::shared_ptr<RelativeSpeedConditionCardinalityCheckerRule>(new RelativeSpeedConditionCardinalityCheckerRule()));
            scenarioChecker->AddRelativeSpeedToMasterCheckerRule(std::shared_ptr<RelativeSpeedToMasterCardinalityCheckerRule>(new RelativeSpeedToMasterCardinalityCheckerRule()));
            scenarioChecker->AddRelativeTargetLaneCheckerRule(std::shared_ptr<RelativeTargetLaneCardinalityCheckerRule>(new RelativeTargetLaneCardinalityCheckerRule()));
            scenarioChecker->AddRelativeTargetLaneOffsetCheckerRule(std::shared_ptr<RelativeTargetLaneOffsetCardinalityCheckerRule>(new RelativeTargetLaneOffsetCardinalityCheckerRule()));
            scenarioChecker->AddRelativeTargetSpeedCheckerRule(std::shared_ptr<RelativeTargetSpeedCardinalityCheckerRule>(new RelativeTargetSpeedCardinalityCheckerRule()));
            scenarioChecker->AddRelativeWorldPositionCheckerRule(std::shared_ptr<RelativeWorldPositionCardinalityCheckerRule>(new RelativeWorldPositionCardinalityCheckerRule()));
            scenarioChecker->AddRoadConditionCheckerRule(std::shared_ptr<RoadConditionCardinalityCheckerRule>(new RoadConditionCardinalityCheckerRule()));
            scenarioChecker->AddRoadPositionCheckerRule(std::shared_ptr<RoadPositionCardinalityCheckerRule>(new RoadPositionCardinalityCheckerRule()));
            scenarioChecker->AddRouteCheckerRule(std::shared_ptr<RouteCardinalityCheckerRule>(new RouteCardinalityCheckerRule()));
            scenarioChecker->AddRouteCatalogLocationCheckerRule(std::shared_ptr<RouteCatalogLocationCardinalityCheckerRule>(new RouteCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddRoutePositionCheckerRule(std::shared_ptr<RoutePositionCardinalityCheckerRule>(new RoutePositionCardinalityCheckerRule()));
            scenarioChecker->AddScenarioDefinitionCheckerRule(std::shared_ptr<ScenarioDefinitionCardinalityCheckerRule>(new ScenarioDefinitionCardinalityCheckerRule()));
            scenarioChecker->AddScenarioObjectCheckerRule(std::shared_ptr<ScenarioObjectCardinalityCheckerRule>(new ScenarioObjectCardinalityCheckerRule()));
            scenarioChecker->AddSimulationTimeConditionCheckerRule(std::shared_ptr<SimulationTimeConditionCardinalityCheckerRule>(new SimulationTimeConditionCardinalityCheckerRule()));
            scenarioChecker->AddSpeedActionCheckerRule(std::shared_ptr<SpeedActionCardinalityCheckerRule>(new SpeedActionCardinalityCheckerRule()));
            scenarioChecker->AddSpeedConditionCheckerRule(std::shared_ptr<SpeedConditionCardinalityCheckerRule>(new SpeedConditionCardinalityCheckerRule()));
            scenarioChecker->AddStandStillConditionCheckerRule(std::shared_ptr<StandStillConditionCardinalityCheckerRule>(new StandStillConditionCardinalityCheckerRule()));
            scenarioChecker->AddSteadyStateCheckerRule(std::shared_ptr<SteadyStateCardinalityCheckerRule>(new SteadyStateCardinalityCheckerRule()));
            scenarioChecker->AddStochasticCheckerRule(std::shared_ptr<StochasticCardinalityCheckerRule>(new StochasticCardinalityCheckerRule()));
            scenarioChecker->AddStochasticDistributionCheckerRule(std::shared_ptr<StochasticDistributionCardinalityCheckerRule>(new StochasticDistributionCardinalityCheckerRule()));
            scenarioChecker->AddStochasticDistributionTypeCheckerRule(std::shared_ptr<StochasticDistributionTypeCardinalityCheckerRule>(new StochasticDistributionTypeCardinalityCheckerRule()));
            scenarioChecker->AddStoryCheckerRule(std::shared_ptr<StoryCardinalityCheckerRule>(new StoryCardinalityCheckerRule()));
            scenarioChecker->AddStoryboardCheckerRule(std::shared_ptr<StoryboardCardinalityCheckerRule>(new StoryboardCardinalityCheckerRule()));
            scenarioChecker->AddStoryboardElementStateConditionCheckerRule(std::shared_ptr<StoryboardElementStateConditionCardinalityCheckerRule>(new StoryboardElementStateConditionCardinalityCheckerRule()));
            scenarioChecker->AddSunCheckerRule(std::shared_ptr<SunCardinalityCheckerRule>(new SunCardinalityCheckerRule()));
            scenarioChecker->AddSynchronizeActionCheckerRule(std::shared_ptr<SynchronizeActionCardinalityCheckerRule>(new SynchronizeActionCardinalityCheckerRule()));
            scenarioChecker->AddTargetDistanceSteadyStateCheckerRule(std::shared_ptr<TargetDistanceSteadyStateCardinalityCheckerRule>(new TargetDistanceSteadyStateCardinalityCheckerRule()));
            scenarioChecker->AddTargetTimeSteadyStateCheckerRule(std::shared_ptr<TargetTimeSteadyStateCardinalityCheckerRule>(new TargetTimeSteadyStateCardinalityCheckerRule()));
            scenarioChecker->AddTeleportActionCheckerRule(std::shared_ptr<TeleportActionCardinalityCheckerRule>(new TeleportActionCardinalityCheckerRule()));
            scenarioChecker->AddTimeHeadwayConditionCheckerRule(std::shared_ptr<TimeHeadwayConditionCardinalityCheckerRule>(new TimeHeadwayConditionCardinalityCheckerRule()));
            scenarioChecker->AddTimeOfDayCheckerRule(std::shared_ptr<TimeOfDayCardinalityCheckerRule>(new TimeOfDayCardinalityCheckerRule()));
            scenarioChecker->AddTimeOfDayConditionCheckerRule(std::shared_ptr<TimeOfDayConditionCardinalityCheckerRule>(new TimeOfDayConditionCardinalityCheckerRule()));
            scenarioChecker->AddTimeToCollisionConditionCheckerRule(std::shared_ptr<TimeToCollisionConditionCardinalityCheckerRule>(new TimeToCollisionConditionCardinalityCheckerRule()));
            scenarioChecker->AddTimingCheckerRule(std::shared_ptr<TimingCardinalityCheckerRule>(new TimingCardinalityCheckerRule()));
            scenarioChecker->AddTrafficDefinitionCheckerRule(std::shared_ptr<TrafficDefinitionCardinalityCheckerRule>(new TrafficDefinitionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSignalConditionCheckerRule(std::shared_ptr<TrafficSignalConditionCardinalityCheckerRule>(new TrafficSignalConditionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSignalControllerCheckerRule(std::shared_ptr<TrafficSignalControllerCardinalityCheckerRule>(new TrafficSignalControllerCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSignalControllerActionCheckerRule(std::shared_ptr<TrafficSignalControllerActionCardinalityCheckerRule>(new TrafficSignalControllerActionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSignalControllerConditionCheckerRule(std::shared_ptr<TrafficSignalControllerConditionCardinalityCheckerRule>(new TrafficSignalControllerConditionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSignalStateCheckerRule(std::shared_ptr<TrafficSignalStateCardinalityCheckerRule>(new TrafficSignalStateCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSignalStateActionCheckerRule(std::shared_ptr<TrafficSignalStateActionCardinalityCheckerRule>(new TrafficSignalStateActionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSinkActionCheckerRule(std::shared_ptr<TrafficSinkActionCardinalityCheckerRule>(new TrafficSinkActionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSourceActionCheckerRule(std::shared_ptr<TrafficSourceActionCardinalityCheckerRule>(new TrafficSourceActionCardinalityCheckerRule()));
            scenarioChecker->AddTrafficSwarmActionCheckerRule(std::shared_ptr<TrafficSwarmActionCardinalityCheckerRule>(new TrafficSwarmActionCardinalityCheckerRule()));
            scenarioChecker->AddTrajectoryCheckerRule(std::shared_ptr<TrajectoryCardinalityCheckerRule>(new TrajectoryCardinalityCheckerRule()));
            scenarioChecker->AddTrajectoryCatalogLocationCheckerRule(std::shared_ptr<TrajectoryCatalogLocationCardinalityCheckerRule>(new TrajectoryCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddTrajectoryFollowingModeCheckerRule(std::shared_ptr<TrajectoryFollowingModeCardinalityCheckerRule>(new TrajectoryFollowingModeCardinalityCheckerRule()));
            scenarioChecker->AddTrajectoryPositionCheckerRule(std::shared_ptr<TrajectoryPositionCardinalityCheckerRule>(new TrajectoryPositionCardinalityCheckerRule()));
            scenarioChecker->AddTrajectoryRefCheckerRule(std::shared_ptr<TrajectoryRefCardinalityCheckerRule>(new TrajectoryRefCardinalityCheckerRule()));
            scenarioChecker->AddTransitionDynamicsCheckerRule(std::shared_ptr<TransitionDynamicsCardinalityCheckerRule>(new TransitionDynamicsCardinalityCheckerRule()));
            scenarioChecker->AddTraveledDistanceConditionCheckerRule(std::shared_ptr<TraveledDistanceConditionCardinalityCheckerRule>(new TraveledDistanceConditionCardinalityCheckerRule()));
            scenarioChecker->AddTriggeringEntitiesCheckerRule(std::shared_ptr<TriggeringEntitiesCardinalityCheckerRule>(new TriggeringEntitiesCardinalityCheckerRule()));
            scenarioChecker->AddUniformDistributionCheckerRule(std::shared_ptr<UniformDistributionCardinalityCheckerRule>(new UniformDistributionCardinalityCheckerRule()));
            scenarioChecker->AddUsedAreaCheckerRule(std::shared_ptr<UsedAreaCardinalityCheckerRule>(new UsedAreaCardinalityCheckerRule()));
            scenarioChecker->AddUserDefinedActionCheckerRule(std::shared_ptr<UserDefinedActionCardinalityCheckerRule>(new UserDefinedActionCardinalityCheckerRule()));
            scenarioChecker->AddUserDefinedDistributionCheckerRule(std::shared_ptr<UserDefinedDistributionCardinalityCheckerRule>(new UserDefinedDistributionCardinalityCheckerRule()));
            scenarioChecker->AddUserDefinedValueConditionCheckerRule(std::shared_ptr<UserDefinedValueConditionCardinalityCheckerRule>(new UserDefinedValueConditionCardinalityCheckerRule()));
            scenarioChecker->AddValueConstraintCheckerRule(std::shared_ptr<ValueConstraintCardinalityCheckerRule>(new ValueConstraintCardinalityCheckerRule()));
            scenarioChecker->AddValueConstraintGroupCheckerRule(std::shared_ptr<ValueConstraintGroupCardinalityCheckerRule>(new ValueConstraintGroupCardinalityCheckerRule()));
            scenarioChecker->AddValueSetDistributionCheckerRule(std::shared_ptr<ValueSetDistributionCardinalityCheckerRule>(new ValueSetDistributionCardinalityCheckerRule()));
            scenarioChecker->AddVehicleCheckerRule(std::shared_ptr<VehicleCardinalityCheckerRule>(new VehicleCardinalityCheckerRule()));
            scenarioChecker->AddVehicleCatalogLocationCheckerRule(std::shared_ptr<VehicleCatalogLocationCardinalityCheckerRule>(new VehicleCatalogLocationCardinalityCheckerRule()));
            scenarioChecker->AddVehicleCategoryDistributionCheckerRule(std::shared_ptr<VehicleCategoryDistributionCardinalityCheckerRule>(new VehicleCategoryDistributionCardinalityCheckerRule()));
            scenarioChecker->AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<VehicleCategoryDistributionEntryCardinalityCheckerRule>(new VehicleCategoryDistributionEntryCardinalityCheckerRule()));
            scenarioChecker->AddVertexCheckerRule(std::shared_ptr<VertexCardinalityCheckerRule>(new VertexCardinalityCheckerRule()));
            scenarioChecker->AddVisibilityActionCheckerRule(std::shared_ptr<VisibilityActionCardinalityCheckerRule>(new VisibilityActionCardinalityCheckerRule()));
            scenarioChecker->AddWaypointCheckerRule(std::shared_ptr<WaypointCardinalityCheckerRule>(new WaypointCardinalityCheckerRule()));
            scenarioChecker->AddWindCheckerRule(std::shared_ptr<WindCardinalityCheckerRule>(new WindCardinalityCheckerRule()));
            scenarioChecker->AddWorldPositionCheckerRule(std::shared_ptr<WorldPositionCardinalityCheckerRule>(new WorldPositionCardinalityCheckerRule()));
        }

    }
}
