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
package net.asam.openscenario.v1_0.impl;

import net.asam.openscenario.v1_0.api.writer.IAbsoluteSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetLaneOffsetWriter;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetLaneWriter;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IAccelerationConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IAcquirePositionActionWriter;
import net.asam.openscenario.v1_0.api.writer.IActWriter;
import net.asam.openscenario.v1_0.api.writer.IActionWriter;
import net.asam.openscenario.v1_0.api.writer.IActivateControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IActorsWriter;
import net.asam.openscenario.v1_0.api.writer.IAddEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAssignControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAssignRouteActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAxleWriter;
import net.asam.openscenario.v1_0.api.writer.IAxlesWriter;
import net.asam.openscenario.v1_0.api.writer.IBoundingBoxWriter;
import net.asam.openscenario.v1_0.api.writer.IByEntityConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IByObjectTypeWriter;
import net.asam.openscenario.v1_0.api.writer.IByTypeWriter;
import net.asam.openscenario.v1_0.api.writer.IByValueConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogLocationsWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogWriter;
import net.asam.openscenario.v1_0.api.writer.ICenterWriter;
import net.asam.openscenario.v1_0.api.writer.ICentralSwarmObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IClothoidWriter;
import net.asam.openscenario.v1_0.api.writer.ICollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IConditionGroupWriter;
import net.asam.openscenario.v1_0.api.writer.IConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IControlPointWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerDistributionEntryWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerDistributionWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerWriter;
import net.asam.openscenario.v1_0.api.writer.ICustomCommandActionWriter;
import net.asam.openscenario.v1_0.api.writer.IDeleteEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IDimensionsWriter;
import net.asam.openscenario.v1_0.api.writer.IDirectoryWriter;
import net.asam.openscenario.v1_0.api.writer.IDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IDynamicConstraintsWriter;
import net.asam.openscenario.v1_0.api.writer.IEndOfRoadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityRefWriter;
import net.asam.openscenario.v1_0.api.writer.IEntitySelectionWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentWriter;
import net.asam.openscenario.v1_0.api.writer.IEventWriter;
import net.asam.openscenario.v1_0.api.writer.IFileHeaderWriter;
import net.asam.openscenario.v1_0.api.writer.IFileWriter;
import net.asam.openscenario.v1_0.api.writer.IFinalSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IFogWriter;
import net.asam.openscenario.v1_0.api.writer.IFollowTrajectoryActionWriter;
import net.asam.openscenario.v1_0.api.writer.IGlobalActionWriter;
import net.asam.openscenario.v1_0.api.writer.IInRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IInfrastructureActionWriter;
import net.asam.openscenario.v1_0.api.writer.IInitActionsWriter;
import net.asam.openscenario.v1_0.api.writer.IInitWriter;
import net.asam.openscenario.v1_0.api.writer.IKnotWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneChangeActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneChangeTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetActionDynamicsWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ILanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.ILateralActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILateralDistanceActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalDistanceActionWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverGroupWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IModifyRuleWriter;
import net.asam.openscenario.v1_0.api.writer.INoneWriter;
import net.asam.openscenario.v1_0.api.writer.INurbsWriter;
import net.asam.openscenario.v1_0.api.writer.IObjectControllerWriter;
import net.asam.openscenario.v1_0.api.writer.IOffroadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioCategoryWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioWriterFactory;
import net.asam.openscenario.v1_0.api.writer.IOrientationWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideBrakeActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideClutchActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideControllerValueActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideGearActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideParkingBrakeActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideSteeringWheelActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideThrottleActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterAddValueRuleWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterAssignmentWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterModifyActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterMultiplyByValueRuleWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterSetActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianWriter;
import net.asam.openscenario.v1_0.api.writer.IPerformanceWriter;
import net.asam.openscenario.v1_0.api.writer.IPhaseWriter;
import net.asam.openscenario.v1_0.api.writer.IPolylineWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionInLaneCoordinatesWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionInRoadCoordinatesWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionOfCurrentEntityWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrecipitationWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertiesWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertyWriter;
import net.asam.openscenario.v1_0.api.writer.IReachPositionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeLanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeObjectPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeRoadPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeSpeedConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeSpeedToMasterWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetLaneOffsetWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetLaneWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeWorldPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadNetworkWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteRefWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutingActionWriter;
import net.asam.openscenario.v1_0.api.writer.IScenarioDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.IScenarioObjectWriter;
import net.asam.openscenario.v1_0.api.writer.ISelectedEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IShapeWriter;
import net.asam.openscenario.v1_0.api.writer.ISimulationTimeConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedActionTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedActionWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStandStillConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardElementStateConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardWriter;
import net.asam.openscenario.v1_0.api.writer.ISunWriter;
import net.asam.openscenario.v1_0.api.writer.ISynchronizeActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITeleportActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeHeadwayConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeOfDayConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeOfDayWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeToCollisionConditionTargetWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeToCollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimingWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalStateActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalStateWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSinkActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSourceActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSwarmActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryFollowingModeWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryWriter;
import net.asam.openscenario.v1_0.api.writer.ITransitionDynamicsWriter;
import net.asam.openscenario.v1_0.api.writer.ITraveledDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggerWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggeringEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedActionWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedValueConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCategoryDistributionEntryWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCategoryDistributionWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleWriter;
import net.asam.openscenario.v1_0.api.writer.IVertexWriter;
import net.asam.openscenario.v1_0.api.writer.IVisibilityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IWaypointWriter;
import net.asam.openscenario.v1_0.api.writer.IWeatherWriter;
import net.asam.openscenario.v1_0.api.writer.IWorldPositionWriter;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0 An
 * interface with a factory method for each OpenSCENARIO class
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class OpenScenarioWriterFactoryImpl implements IOpenScenarioWriterFactory {
  @Override
  public IAbsoluteSpeedWriter createAbsoluteSpeedWriter() {
    return new AbsoluteSpeedImpl();
  }

  @Override
  public IAbsoluteTargetLaneWriter createAbsoluteTargetLaneWriter() {
    return new AbsoluteTargetLaneImpl();
  }

  @Override
  public IAbsoluteTargetLaneOffsetWriter createAbsoluteTargetLaneOffsetWriter() {
    return new AbsoluteTargetLaneOffsetImpl();
  }

  @Override
  public IAbsoluteTargetSpeedWriter createAbsoluteTargetSpeedWriter() {
    return new AbsoluteTargetSpeedImpl();
  }

  @Override
  public IAccelerationConditionWriter createAccelerationConditionWriter() {
    return new AccelerationConditionImpl();
  }

  @Override
  public IAcquirePositionActionWriter createAcquirePositionActionWriter() {
    return new AcquirePositionActionImpl();
  }

  @Override
  public IActWriter createActWriter() {
    return new ActImpl();
  }

  @Override
  public IActionWriter createActionWriter() {
    return new ActionImpl();
  }

  @Override
  public IActivateControllerActionWriter createActivateControllerActionWriter() {
    return new ActivateControllerActionImpl();
  }

  @Override
  public IActorsWriter createActorsWriter() {
    return new ActorsImpl();
  }

  @Override
  public IAddEntityActionWriter createAddEntityActionWriter() {
    return new AddEntityActionImpl();
  }

  @Override
  public IAssignControllerActionWriter createAssignControllerActionWriter() {
    return new AssignControllerActionImpl();
  }

  @Override
  public IAssignRouteActionWriter createAssignRouteActionWriter() {
    return new AssignRouteActionImpl();
  }

  @Override
  public IAxleWriter createAxleWriter() {
    return new AxleImpl();
  }

  @Override
  public IAxlesWriter createAxlesWriter() {
    return new AxlesImpl();
  }

  @Override
  public IBoundingBoxWriter createBoundingBoxWriter() {
    return new BoundingBoxImpl();
  }

  @Override
  public IByEntityConditionWriter createByEntityConditionWriter() {
    return new ByEntityConditionImpl();
  }

  @Override
  public IByObjectTypeWriter createByObjectTypeWriter() {
    return new ByObjectTypeImpl();
  }

  @Override
  public IByTypeWriter createByTypeWriter() {
    return new ByTypeImpl();
  }

  @Override
  public IByValueConditionWriter createByValueConditionWriter() {
    return new ByValueConditionImpl();
  }

  @Override
  public ICatalogWriter createCatalogWriter() {
    return new CatalogImpl();
  }

  @Override
  public ICatalogDefinitionWriter createCatalogDefinitionWriter() {
    return new CatalogDefinitionImpl();
  }

  @Override
  public ICatalogLocationsWriter createCatalogLocationsWriter() {
    return new CatalogLocationsImpl();
  }

  @Override
  public ICatalogReferenceWriter createCatalogReferenceWriter() {
    return new CatalogReferenceImpl();
  }

  @Override
  public ICenterWriter createCenterWriter() {
    return new CenterImpl();
  }

  @Override
  public ICentralSwarmObjectWriter createCentralSwarmObjectWriter() {
    return new CentralSwarmObjectImpl();
  }

  @Override
  public IClothoidWriter createClothoidWriter() {
    return new ClothoidImpl();
  }

  @Override
  public ICollisionConditionWriter createCollisionConditionWriter() {
    return new CollisionConditionImpl();
  }

  @Override
  public IConditionWriter createConditionWriter() {
    return new ConditionImpl();
  }

  @Override
  public IConditionGroupWriter createConditionGroupWriter() {
    return new ConditionGroupImpl();
  }

  @Override
  public IControlPointWriter createControlPointWriter() {
    return new ControlPointImpl();
  }

  @Override
  public IControllerWriter createControllerWriter() {
    return new ControllerImpl();
  }

  @Override
  public IControllerActionWriter createControllerActionWriter() {
    return new ControllerActionImpl();
  }

  @Override
  public IControllerCatalogLocationWriter createControllerCatalogLocationWriter() {
    return new ControllerCatalogLocationImpl();
  }

  @Override
  public IControllerDistributionWriter createControllerDistributionWriter() {
    return new ControllerDistributionImpl();
  }

  @Override
  public IControllerDistributionEntryWriter createControllerDistributionEntryWriter() {
    return new ControllerDistributionEntryImpl();
  }

  @Override
  public ICustomCommandActionWriter createCustomCommandActionWriter() {
    return new CustomCommandActionImpl();
  }

  @Override
  public IDeleteEntityActionWriter createDeleteEntityActionWriter() {
    return new DeleteEntityActionImpl();
  }

  @Override
  public IDimensionsWriter createDimensionsWriter() {
    return new DimensionsImpl();
  }

  @Override
  public IDirectoryWriter createDirectoryWriter() {
    return new DirectoryImpl();
  }

  @Override
  public IDistanceConditionWriter createDistanceConditionWriter() {
    return new DistanceConditionImpl();
  }

  @Override
  public IDynamicConstraintsWriter createDynamicConstraintsWriter() {
    return new DynamicConstraintsImpl();
  }

  @Override
  public IEndOfRoadConditionWriter createEndOfRoadConditionWriter() {
    return new EndOfRoadConditionImpl();
  }

  @Override
  public IEntitiesWriter createEntitiesWriter() {
    return new EntitiesImpl();
  }

  @Override
  public IEntityActionWriter createEntityActionWriter() {
    return new EntityActionImpl();
  }

  @Override
  public IEntityConditionWriter createEntityConditionWriter() {
    return new EntityConditionImpl();
  }

  @Override
  public IEntityObjectWriter createEntityObjectWriter() {
    return new EntityObjectImpl();
  }

  @Override
  public IEntityRefWriter createEntityRefWriter() {
    return new EntityRefImpl();
  }

  @Override
  public IEntitySelectionWriter createEntitySelectionWriter() {
    return new EntitySelectionImpl();
  }

  @Override
  public IEnvironmentWriter createEnvironmentWriter() {
    return new EnvironmentImpl();
  }

  @Override
  public IEnvironmentActionWriter createEnvironmentActionWriter() {
    return new EnvironmentActionImpl();
  }

  @Override
  public IEnvironmentCatalogLocationWriter createEnvironmentCatalogLocationWriter() {
    return new EnvironmentCatalogLocationImpl();
  }

  @Override
  public IEventWriter createEventWriter() {
    return new EventImpl();
  }

  @Override
  public IFileWriter createFileWriter() {
    return new FileImpl();
  }

  @Override
  public IFileHeaderWriter createFileHeaderWriter() {
    return new FileHeaderImpl();
  }

  @Override
  public IFinalSpeedWriter createFinalSpeedWriter() {
    return new FinalSpeedImpl();
  }

  @Override
  public IFogWriter createFogWriter() {
    return new FogImpl();
  }

  @Override
  public IFollowTrajectoryActionWriter createFollowTrajectoryActionWriter() {
    return new FollowTrajectoryActionImpl();
  }

  @Override
  public IGlobalActionWriter createGlobalActionWriter() {
    return new GlobalActionImpl();
  }

  @Override
  public IInRoutePositionWriter createInRoutePositionWriter() {
    return new InRoutePositionImpl();
  }

  @Override
  public IInfrastructureActionWriter createInfrastructureActionWriter() {
    return new InfrastructureActionImpl();
  }

  @Override
  public IInitWriter createInitWriter() {
    return new InitImpl();
  }

  @Override
  public IInitActionsWriter createInitActionsWriter() {
    return new InitActionsImpl();
  }

  @Override
  public IKnotWriter createKnotWriter() {
    return new KnotImpl();
  }

  @Override
  public ILaneChangeActionWriter createLaneChangeActionWriter() {
    return new LaneChangeActionImpl();
  }

  @Override
  public ILaneChangeTargetWriter createLaneChangeTargetWriter() {
    return new LaneChangeTargetImpl();
  }

  @Override
  public ILaneOffsetActionWriter createLaneOffsetActionWriter() {
    return new LaneOffsetActionImpl();
  }

  @Override
  public ILaneOffsetActionDynamicsWriter createLaneOffsetActionDynamicsWriter() {
    return new LaneOffsetActionDynamicsImpl();
  }

  @Override
  public ILaneOffsetTargetWriter createLaneOffsetTargetWriter() {
    return new LaneOffsetTargetImpl();
  }

  @Override
  public ILanePositionWriter createLanePositionWriter() {
    return new LanePositionImpl();
  }

  @Override
  public ILateralActionWriter createLateralActionWriter() {
    return new LateralActionImpl();
  }

  @Override
  public ILateralDistanceActionWriter createLateralDistanceActionWriter() {
    return new LateralDistanceActionImpl();
  }

  @Override
  public ILongitudinalActionWriter createLongitudinalActionWriter() {
    return new LongitudinalActionImpl();
  }

  @Override
  public ILongitudinalDistanceActionWriter createLongitudinalDistanceActionWriter() {
    return new LongitudinalDistanceActionImpl();
  }

  @Override
  public IManeuverWriter createManeuverWriter() {
    return new ManeuverImpl();
  }

  @Override
  public IManeuverCatalogLocationWriter createManeuverCatalogLocationWriter() {
    return new ManeuverCatalogLocationImpl();
  }

  @Override
  public IManeuverGroupWriter createManeuverGroupWriter() {
    return new ManeuverGroupImpl();
  }

  @Override
  public IMiscObjectWriter createMiscObjectWriter() {
    return new MiscObjectImpl();
  }

  @Override
  public IMiscObjectCatalogLocationWriter createMiscObjectCatalogLocationWriter() {
    return new MiscObjectCatalogLocationImpl();
  }

  @Override
  public IModifyRuleWriter createModifyRuleWriter() {
    return new ModifyRuleImpl();
  }

  @Override
  public INoneWriter createNoneWriter() {
    return new NoneImpl();
  }

  @Override
  public INurbsWriter createNurbsWriter() {
    return new NurbsImpl();
  }

  @Override
  public IObjectControllerWriter createObjectControllerWriter() {
    return new ObjectControllerImpl();
  }

  @Override
  public IOffroadConditionWriter createOffroadConditionWriter() {
    return new OffroadConditionImpl();
  }

  @Override
  public IOpenScenarioWriter createOpenScenarioWriter() {
    return new OpenScenarioImpl();
  }

  @Override
  public IOpenScenarioCategoryWriter createOpenScenarioCategoryWriter() {
    return new OpenScenarioCategoryImpl();
  }

  @Override
  public IOrientationWriter createOrientationWriter() {
    return new OrientationImpl();
  }

  @Override
  public IOverrideBrakeActionWriter createOverrideBrakeActionWriter() {
    return new OverrideBrakeActionImpl();
  }

  @Override
  public IOverrideClutchActionWriter createOverrideClutchActionWriter() {
    return new OverrideClutchActionImpl();
  }

  @Override
  public IOverrideControllerValueActionWriter createOverrideControllerValueActionWriter() {
    return new OverrideControllerValueActionImpl();
  }

  @Override
  public IOverrideGearActionWriter createOverrideGearActionWriter() {
    return new OverrideGearActionImpl();
  }

  @Override
  public IOverrideParkingBrakeActionWriter createOverrideParkingBrakeActionWriter() {
    return new OverrideParkingBrakeActionImpl();
  }

  @Override
  public IOverrideSteeringWheelActionWriter createOverrideSteeringWheelActionWriter() {
    return new OverrideSteeringWheelActionImpl();
  }

  @Override
  public IOverrideThrottleActionWriter createOverrideThrottleActionWriter() {
    return new OverrideThrottleActionImpl();
  }

  @Override
  public IParameterActionWriter createParameterActionWriter() {
    return new ParameterActionImpl();
  }

  @Override
  public IParameterAddValueRuleWriter createParameterAddValueRuleWriter() {
    return new ParameterAddValueRuleImpl();
  }

  @Override
  public IParameterAssignmentWriter createParameterAssignmentWriter() {
    return new ParameterAssignmentImpl();
  }

  @Override
  public IParameterConditionWriter createParameterConditionWriter() {
    return new ParameterConditionImpl();
  }

  @Override
  public IParameterDeclarationWriter createParameterDeclarationWriter() {
    return new ParameterDeclarationImpl();
  }

  @Override
  public IParameterModifyActionWriter createParameterModifyActionWriter() {
    return new ParameterModifyActionImpl();
  }

  @Override
  public IParameterMultiplyByValueRuleWriter createParameterMultiplyByValueRuleWriter() {
    return new ParameterMultiplyByValueRuleImpl();
  }

  @Override
  public IParameterSetActionWriter createParameterSetActionWriter() {
    return new ParameterSetActionImpl();
  }

  @Override
  public IPedestrianWriter createPedestrianWriter() {
    return new PedestrianImpl();
  }

  @Override
  public IPedestrianCatalogLocationWriter createPedestrianCatalogLocationWriter() {
    return new PedestrianCatalogLocationImpl();
  }

  @Override
  public IPerformanceWriter createPerformanceWriter() {
    return new PerformanceImpl();
  }

  @Override
  public IPhaseWriter createPhaseWriter() {
    return new PhaseImpl();
  }

  @Override
  public IPolylineWriter createPolylineWriter() {
    return new PolylineImpl();
  }

  @Override
  public IPositionWriter createPositionWriter() {
    return new PositionImpl();
  }

  @Override
  public IPositionInLaneCoordinatesWriter createPositionInLaneCoordinatesWriter() {
    return new PositionInLaneCoordinatesImpl();
  }

  @Override
  public IPositionInRoadCoordinatesWriter createPositionInRoadCoordinatesWriter() {
    return new PositionInRoadCoordinatesImpl();
  }

  @Override
  public IPositionOfCurrentEntityWriter createPositionOfCurrentEntityWriter() {
    return new PositionOfCurrentEntityImpl();
  }

  @Override
  public IPrecipitationWriter createPrecipitationWriter() {
    return new PrecipitationImpl();
  }

  @Override
  public IPrivateWriter createPrivateWriter() {
    return new PrivateImpl();
  }

  @Override
  public IPrivateActionWriter createPrivateActionWriter() {
    return new PrivateActionImpl();
  }

  @Override
  public IPropertiesWriter createPropertiesWriter() {
    return new PropertiesImpl();
  }

  @Override
  public IPropertyWriter createPropertyWriter() {
    return new PropertyImpl();
  }

  @Override
  public IReachPositionConditionWriter createReachPositionConditionWriter() {
    return new ReachPositionConditionImpl();
  }

  @Override
  public IRelativeDistanceConditionWriter createRelativeDistanceConditionWriter() {
    return new RelativeDistanceConditionImpl();
  }

  @Override
  public IRelativeLanePositionWriter createRelativeLanePositionWriter() {
    return new RelativeLanePositionImpl();
  }

  @Override
  public IRelativeObjectPositionWriter createRelativeObjectPositionWriter() {
    return new RelativeObjectPositionImpl();
  }

  @Override
  public IRelativeRoadPositionWriter createRelativeRoadPositionWriter() {
    return new RelativeRoadPositionImpl();
  }

  @Override
  public IRelativeSpeedConditionWriter createRelativeSpeedConditionWriter() {
    return new RelativeSpeedConditionImpl();
  }

  @Override
  public IRelativeSpeedToMasterWriter createRelativeSpeedToMasterWriter() {
    return new RelativeSpeedToMasterImpl();
  }

  @Override
  public IRelativeTargetLaneWriter createRelativeTargetLaneWriter() {
    return new RelativeTargetLaneImpl();
  }

  @Override
  public IRelativeTargetLaneOffsetWriter createRelativeTargetLaneOffsetWriter() {
    return new RelativeTargetLaneOffsetImpl();
  }

  @Override
  public IRelativeTargetSpeedWriter createRelativeTargetSpeedWriter() {
    return new RelativeTargetSpeedImpl();
  }

  @Override
  public IRelativeWorldPositionWriter createRelativeWorldPositionWriter() {
    return new RelativeWorldPositionImpl();
  }

  @Override
  public IRoadConditionWriter createRoadConditionWriter() {
    return new RoadConditionImpl();
  }

  @Override
  public IRoadNetworkWriter createRoadNetworkWriter() {
    return new RoadNetworkImpl();
  }

  @Override
  public IRoadPositionWriter createRoadPositionWriter() {
    return new RoadPositionImpl();
  }

  @Override
  public IRouteWriter createRouteWriter() {
    return new RouteImpl();
  }

  @Override
  public IRouteCatalogLocationWriter createRouteCatalogLocationWriter() {
    return new RouteCatalogLocationImpl();
  }

  @Override
  public IRoutePositionWriter createRoutePositionWriter() {
    return new RoutePositionImpl();
  }

  @Override
  public IRouteRefWriter createRouteRefWriter() {
    return new RouteRefImpl();
  }

  @Override
  public IRoutingActionWriter createRoutingActionWriter() {
    return new RoutingActionImpl();
  }

  @Override
  public IScenarioDefinitionWriter createScenarioDefinitionWriter() {
    return new ScenarioDefinitionImpl();
  }

  @Override
  public IScenarioObjectWriter createScenarioObjectWriter() {
    return new ScenarioObjectImpl();
  }

  @Override
  public ISelectedEntitiesWriter createSelectedEntitiesWriter() {
    return new SelectedEntitiesImpl();
  }

  @Override
  public IShapeWriter createShapeWriter() {
    return new ShapeImpl();
  }

  @Override
  public ISimulationTimeConditionWriter createSimulationTimeConditionWriter() {
    return new SimulationTimeConditionImpl();
  }

  @Override
  public ISpeedActionWriter createSpeedActionWriter() {
    return new SpeedActionImpl();
  }

  @Override
  public ISpeedActionTargetWriter createSpeedActionTargetWriter() {
    return new SpeedActionTargetImpl();
  }

  @Override
  public ISpeedConditionWriter createSpeedConditionWriter() {
    return new SpeedConditionImpl();
  }

  @Override
  public IStandStillConditionWriter createStandStillConditionWriter() {
    return new StandStillConditionImpl();
  }

  @Override
  public IStoryWriter createStoryWriter() {
    return new StoryImpl();
  }

  @Override
  public IStoryboardWriter createStoryboardWriter() {
    return new StoryboardImpl();
  }

  @Override
  public IStoryboardElementStateConditionWriter createStoryboardElementStateConditionWriter() {
    return new StoryboardElementStateConditionImpl();
  }

  @Override
  public ISunWriter createSunWriter() {
    return new SunImpl();
  }

  @Override
  public ISynchronizeActionWriter createSynchronizeActionWriter() {
    return new SynchronizeActionImpl();
  }

  @Override
  public ITeleportActionWriter createTeleportActionWriter() {
    return new TeleportActionImpl();
  }

  @Override
  public ITimeHeadwayConditionWriter createTimeHeadwayConditionWriter() {
    return new TimeHeadwayConditionImpl();
  }

  @Override
  public ITimeOfDayWriter createTimeOfDayWriter() {
    return new TimeOfDayImpl();
  }

  @Override
  public ITimeOfDayConditionWriter createTimeOfDayConditionWriter() {
    return new TimeOfDayConditionImpl();
  }

  @Override
  public ITimeReferenceWriter createTimeReferenceWriter() {
    return new TimeReferenceImpl();
  }

  @Override
  public ITimeToCollisionConditionWriter createTimeToCollisionConditionWriter() {
    return new TimeToCollisionConditionImpl();
  }

  @Override
  public ITimeToCollisionConditionTargetWriter createTimeToCollisionConditionTargetWriter() {
    return new TimeToCollisionConditionTargetImpl();
  }

  @Override
  public ITimingWriter createTimingWriter() {
    return new TimingImpl();
  }

  @Override
  public ITrafficActionWriter createTrafficActionWriter() {
    return new TrafficActionImpl();
  }

  @Override
  public ITrafficDefinitionWriter createTrafficDefinitionWriter() {
    return new TrafficDefinitionImpl();
  }

  @Override
  public ITrafficSignalActionWriter createTrafficSignalActionWriter() {
    return new TrafficSignalActionImpl();
  }

  @Override
  public ITrafficSignalConditionWriter createTrafficSignalConditionWriter() {
    return new TrafficSignalConditionImpl();
  }

  @Override
  public ITrafficSignalControllerWriter createTrafficSignalControllerWriter() {
    return new TrafficSignalControllerImpl();
  }

  @Override
  public ITrafficSignalControllerActionWriter createTrafficSignalControllerActionWriter() {
    return new TrafficSignalControllerActionImpl();
  }

  @Override
  public ITrafficSignalControllerConditionWriter createTrafficSignalControllerConditionWriter() {
    return new TrafficSignalControllerConditionImpl();
  }

  @Override
  public ITrafficSignalStateWriter createTrafficSignalStateWriter() {
    return new TrafficSignalStateImpl();
  }

  @Override
  public ITrafficSignalStateActionWriter createTrafficSignalStateActionWriter() {
    return new TrafficSignalStateActionImpl();
  }

  @Override
  public ITrafficSinkActionWriter createTrafficSinkActionWriter() {
    return new TrafficSinkActionImpl();
  }

  @Override
  public ITrafficSourceActionWriter createTrafficSourceActionWriter() {
    return new TrafficSourceActionImpl();
  }

  @Override
  public ITrafficSwarmActionWriter createTrafficSwarmActionWriter() {
    return new TrafficSwarmActionImpl();
  }

  @Override
  public ITrajectoryWriter createTrajectoryWriter() {
    return new TrajectoryImpl();
  }

  @Override
  public ITrajectoryCatalogLocationWriter createTrajectoryCatalogLocationWriter() {
    return new TrajectoryCatalogLocationImpl();
  }

  @Override
  public ITrajectoryFollowingModeWriter createTrajectoryFollowingModeWriter() {
    return new TrajectoryFollowingModeImpl();
  }

  @Override
  public ITransitionDynamicsWriter createTransitionDynamicsWriter() {
    return new TransitionDynamicsImpl();
  }

  @Override
  public ITraveledDistanceConditionWriter createTraveledDistanceConditionWriter() {
    return new TraveledDistanceConditionImpl();
  }

  @Override
  public ITriggerWriter createTriggerWriter() {
    return new TriggerImpl();
  }

  @Override
  public ITriggeringEntitiesWriter createTriggeringEntitiesWriter() {
    return new TriggeringEntitiesImpl();
  }

  @Override
  public IUserDefinedActionWriter createUserDefinedActionWriter() {
    return new UserDefinedActionImpl();
  }

  @Override
  public IUserDefinedValueConditionWriter createUserDefinedValueConditionWriter() {
    return new UserDefinedValueConditionImpl();
  }

  @Override
  public IVehicleWriter createVehicleWriter() {
    return new VehicleImpl();
  }

  @Override
  public IVehicleCatalogLocationWriter createVehicleCatalogLocationWriter() {
    return new VehicleCatalogLocationImpl();
  }

  @Override
  public IVehicleCategoryDistributionWriter createVehicleCategoryDistributionWriter() {
    return new VehicleCategoryDistributionImpl();
  }

  @Override
  public IVehicleCategoryDistributionEntryWriter createVehicleCategoryDistributionEntryWriter() {
    return new VehicleCategoryDistributionEntryImpl();
  }

  @Override
  public IVertexWriter createVertexWriter() {
    return new VertexImpl();
  }

  @Override
  public IVisibilityActionWriter createVisibilityActionWriter() {
    return new VisibilityActionImpl();
  }

  @Override
  public IWaypointWriter createWaypointWriter() {
    return new WaypointImpl();
  }

  @Override
  public IWeatherWriter createWeatherWriter() {
    return new WeatherImpl();
  }

  @Override
  public IWorldPositionWriter createWorldPositionWriter() {
    return new WorldPositionImpl();
  }
}
