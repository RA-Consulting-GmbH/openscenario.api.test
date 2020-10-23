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
package net.asam.openscenario.v1_0.api.writer;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Implementation of IOpenScenarioWriterFactor
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOpenScenarioWriterFactory {
  public IAbsoluteSpeedWriter createAbsoluteSpeedWriter();

  public IAbsoluteTargetLaneWriter createAbsoluteTargetLaneWriter();

  public IAbsoluteTargetLaneOffsetWriter createAbsoluteTargetLaneOffsetWriter();

  public IAbsoluteTargetSpeedWriter createAbsoluteTargetSpeedWriter();

  public IAccelerationConditionWriter createAccelerationConditionWriter();

  public IAcquirePositionActionWriter createAcquirePositionActionWriter();

  public IActWriter createActWriter();

  public IActionWriter createActionWriter();

  public IActivateControllerActionWriter createActivateControllerActionWriter();

  public IActorsWriter createActorsWriter();

  public IAddEntityActionWriter createAddEntityActionWriter();

  public IAssignControllerActionWriter createAssignControllerActionWriter();

  public IAssignRouteActionWriter createAssignRouteActionWriter();

  public IAxleWriter createAxleWriter();

  public IAxlesWriter createAxlesWriter();

  public IBoundingBoxWriter createBoundingBoxWriter();

  public IByEntityConditionWriter createByEntityConditionWriter();

  public IByObjectTypeWriter createByObjectTypeWriter();

  public IByTypeWriter createByTypeWriter();

  public IByValueConditionWriter createByValueConditionWriter();

  public ICatalogWriter createCatalogWriter();

  public ICatalogDefinitionWriter createCatalogDefinitionWriter();

  public ICatalogLocationsWriter createCatalogLocationsWriter();

  public ICatalogReferenceWriter createCatalogReferenceWriter();

  public ICenterWriter createCenterWriter();

  public ICentralSwarmObjectWriter createCentralSwarmObjectWriter();

  public IClothoidWriter createClothoidWriter();

  public ICollisionConditionWriter createCollisionConditionWriter();

  public IConditionWriter createConditionWriter();

  public IConditionGroupWriter createConditionGroupWriter();

  public IControlPointWriter createControlPointWriter();

  public IControllerWriter createControllerWriter();

  public IControllerActionWriter createControllerActionWriter();

  public IControllerCatalogLocationWriter createControllerCatalogLocationWriter();

  public IControllerDistributionWriter createControllerDistributionWriter();

  public IControllerDistributionEntryWriter createControllerDistributionEntryWriter();

  public ICustomCommandActionWriter createCustomCommandActionWriter();

  public IDeleteEntityActionWriter createDeleteEntityActionWriter();

  public IDimensionsWriter createDimensionsWriter();

  public IDirectoryWriter createDirectoryWriter();

  public IDistanceConditionWriter createDistanceConditionWriter();

  public IDynamicConstraintsWriter createDynamicConstraintsWriter();

  public IEndOfRoadConditionWriter createEndOfRoadConditionWriter();

  public IEntitiesWriter createEntitiesWriter();

  public IEntityActionWriter createEntityActionWriter();

  public IEntityConditionWriter createEntityConditionWriter();

  public IEntityObjectWriter createEntityObjectWriter();

  public IEntityRefWriter createEntityRefWriter();

  public IEntitySelectionWriter createEntitySelectionWriter();

  public IEnvironmentWriter createEnvironmentWriter();

  public IEnvironmentActionWriter createEnvironmentActionWriter();

  public IEnvironmentCatalogLocationWriter createEnvironmentCatalogLocationWriter();

  public IEventWriter createEventWriter();

  public IFileWriter createFileWriter();

  public IFileHeaderWriter createFileHeaderWriter();

  public IFinalSpeedWriter createFinalSpeedWriter();

  public IFogWriter createFogWriter();

  public IFollowTrajectoryActionWriter createFollowTrajectoryActionWriter();

  public IGlobalActionWriter createGlobalActionWriter();

  public IInRoutePositionWriter createInRoutePositionWriter();

  public IInfrastructureActionWriter createInfrastructureActionWriter();

  public IInitWriter createInitWriter();

  public IInitActionsWriter createInitActionsWriter();

  public IKnotWriter createKnotWriter();

  public ILaneChangeActionWriter createLaneChangeActionWriter();

  public ILaneChangeTargetWriter createLaneChangeTargetWriter();

  public ILaneOffsetActionWriter createLaneOffsetActionWriter();

  public ILaneOffsetActionDynamicsWriter createLaneOffsetActionDynamicsWriter();

  public ILaneOffsetTargetWriter createLaneOffsetTargetWriter();

  public ILanePositionWriter createLanePositionWriter();

  public ILateralActionWriter createLateralActionWriter();

  public ILateralDistanceActionWriter createLateralDistanceActionWriter();

  public ILongitudinalActionWriter createLongitudinalActionWriter();

  public ILongitudinalDistanceActionWriter createLongitudinalDistanceActionWriter();

  public IManeuverWriter createManeuverWriter();

  public IManeuverCatalogLocationWriter createManeuverCatalogLocationWriter();

  public IManeuverGroupWriter createManeuverGroupWriter();

  public IMiscObjectWriter createMiscObjectWriter();

  public IMiscObjectCatalogLocationWriter createMiscObjectCatalogLocationWriter();

  public IModifyRuleWriter createModifyRuleWriter();

  public INoneWriter createNoneWriter();

  public INurbsWriter createNurbsWriter();

  public IObjectControllerWriter createObjectControllerWriter();

  public IOffroadConditionWriter createOffroadConditionWriter();

  public IOpenScenarioWriter createOpenScenarioWriter();

  public IOpenScenarioCategoryWriter createOpenScenarioCategoryWriter();

  public IOrientationWriter createOrientationWriter();

  public IOverrideBrakeActionWriter createOverrideBrakeActionWriter();

  public IOverrideClutchActionWriter createOverrideClutchActionWriter();

  public IOverrideControllerValueActionWriter createOverrideControllerValueActionWriter();

  public IOverrideGearActionWriter createOverrideGearActionWriter();

  public IOverrideParkingBrakeActionWriter createOverrideParkingBrakeActionWriter();

  public IOverrideSteeringWheelActionWriter createOverrideSteeringWheelActionWriter();

  public IOverrideThrottleActionWriter createOverrideThrottleActionWriter();

  public IParameterActionWriter createParameterActionWriter();

  public IParameterAddValueRuleWriter createParameterAddValueRuleWriter();

  public IParameterAssignmentWriter createParameterAssignmentWriter();

  public IParameterConditionWriter createParameterConditionWriter();

  public IParameterDeclarationWriter createParameterDeclarationWriter();

  public IParameterModifyActionWriter createParameterModifyActionWriter();

  public IParameterMultiplyByValueRuleWriter createParameterMultiplyByValueRuleWriter();

  public IParameterSetActionWriter createParameterSetActionWriter();

  public IPedestrianWriter createPedestrianWriter();

  public IPedestrianCatalogLocationWriter createPedestrianCatalogLocationWriter();

  public IPerformanceWriter createPerformanceWriter();

  public IPhaseWriter createPhaseWriter();

  public IPolylineWriter createPolylineWriter();

  public IPositionWriter createPositionWriter();

  public IPositionInLaneCoordinatesWriter createPositionInLaneCoordinatesWriter();

  public IPositionInRoadCoordinatesWriter createPositionInRoadCoordinatesWriter();

  public IPositionOfCurrentEntityWriter createPositionOfCurrentEntityWriter();

  public IPrecipitationWriter createPrecipitationWriter();

  public IPrivateWriter createPrivateWriter();

  public IPrivateActionWriter createPrivateActionWriter();

  public IPropertiesWriter createPropertiesWriter();

  public IPropertyWriter createPropertyWriter();

  public IReachPositionConditionWriter createReachPositionConditionWriter();

  public IRelativeDistanceConditionWriter createRelativeDistanceConditionWriter();

  public IRelativeLanePositionWriter createRelativeLanePositionWriter();

  public IRelativeObjectPositionWriter createRelativeObjectPositionWriter();

  public IRelativeRoadPositionWriter createRelativeRoadPositionWriter();

  public IRelativeSpeedConditionWriter createRelativeSpeedConditionWriter();

  public IRelativeSpeedToMasterWriter createRelativeSpeedToMasterWriter();

  public IRelativeTargetLaneWriter createRelativeTargetLaneWriter();

  public IRelativeTargetLaneOffsetWriter createRelativeTargetLaneOffsetWriter();

  public IRelativeTargetSpeedWriter createRelativeTargetSpeedWriter();

  public IRelativeWorldPositionWriter createRelativeWorldPositionWriter();

  public IRoadConditionWriter createRoadConditionWriter();

  public IRoadNetworkWriter createRoadNetworkWriter();

  public IRoadPositionWriter createRoadPositionWriter();

  public IRouteWriter createRouteWriter();

  public IRouteCatalogLocationWriter createRouteCatalogLocationWriter();

  public IRoutePositionWriter createRoutePositionWriter();

  public IRouteRefWriter createRouteRefWriter();

  public IRoutingActionWriter createRoutingActionWriter();

  public IScenarioDefinitionWriter createScenarioDefinitionWriter();

  public IScenarioObjectWriter createScenarioObjectWriter();

  public ISelectedEntitiesWriter createSelectedEntitiesWriter();

  public IShapeWriter createShapeWriter();

  public ISimulationTimeConditionWriter createSimulationTimeConditionWriter();

  public ISpeedActionWriter createSpeedActionWriter();

  public ISpeedActionTargetWriter createSpeedActionTargetWriter();

  public ISpeedConditionWriter createSpeedConditionWriter();

  public IStandStillConditionWriter createStandStillConditionWriter();

  public IStoryWriter createStoryWriter();

  public IStoryboardWriter createStoryboardWriter();

  public IStoryboardElementStateConditionWriter createStoryboardElementStateConditionWriter();

  public ISunWriter createSunWriter();

  public ISynchronizeActionWriter createSynchronizeActionWriter();

  public ITeleportActionWriter createTeleportActionWriter();

  public ITimeHeadwayConditionWriter createTimeHeadwayConditionWriter();

  public ITimeOfDayWriter createTimeOfDayWriter();

  public ITimeOfDayConditionWriter createTimeOfDayConditionWriter();

  public ITimeReferenceWriter createTimeReferenceWriter();

  public ITimeToCollisionConditionWriter createTimeToCollisionConditionWriter();

  public ITimeToCollisionConditionTargetWriter createTimeToCollisionConditionTargetWriter();

  public ITimingWriter createTimingWriter();

  public ITrafficActionWriter createTrafficActionWriter();

  public ITrafficDefinitionWriter createTrafficDefinitionWriter();

  public ITrafficSignalActionWriter createTrafficSignalActionWriter();

  public ITrafficSignalConditionWriter createTrafficSignalConditionWriter();

  public ITrafficSignalControllerWriter createTrafficSignalControllerWriter();

  public ITrafficSignalControllerActionWriter createTrafficSignalControllerActionWriter();

  public ITrafficSignalControllerConditionWriter createTrafficSignalControllerConditionWriter();

  public ITrafficSignalStateWriter createTrafficSignalStateWriter();

  public ITrafficSignalStateActionWriter createTrafficSignalStateActionWriter();

  public ITrafficSinkActionWriter createTrafficSinkActionWriter();

  public ITrafficSourceActionWriter createTrafficSourceActionWriter();

  public ITrafficSwarmActionWriter createTrafficSwarmActionWriter();

  public ITrajectoryWriter createTrajectoryWriter();

  public ITrajectoryCatalogLocationWriter createTrajectoryCatalogLocationWriter();

  public ITrajectoryFollowingModeWriter createTrajectoryFollowingModeWriter();

  public ITransitionDynamicsWriter createTransitionDynamicsWriter();

  public ITraveledDistanceConditionWriter createTraveledDistanceConditionWriter();

  public ITriggerWriter createTriggerWriter();

  public ITriggeringEntitiesWriter createTriggeringEntitiesWriter();

  public IUserDefinedActionWriter createUserDefinedActionWriter();

  public IUserDefinedValueConditionWriter createUserDefinedValueConditionWriter();

  public IVehicleWriter createVehicleWriter();

  public IVehicleCatalogLocationWriter createVehicleCatalogLocationWriter();

  public IVehicleCategoryDistributionWriter createVehicleCategoryDistributionWriter();

  public IVehicleCategoryDistributionEntryWriter createVehicleCategoryDistributionEntryWriter();

  public IVertexWriter createVertexWriter();

  public IVisibilityActionWriter createVisibilityActionWriter();

  public IWaypointWriter createWaypointWriter();

  public IWeatherWriter createWeatherWriter();

  public IWorldPositionWriter createWorldPositionWriter();
}
