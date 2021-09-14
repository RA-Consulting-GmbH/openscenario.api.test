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

#include "OpenScenarioWriterFactoryImplV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * An interface with a factory method for each OpenSCENARIO class
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */

        std::shared_ptr<IAbsoluteSpeedWriter> OpenScenarioWriterFactoryImpl::CreateAbsoluteSpeedWriter()
        {
            return std::make_shared<AbsoluteSpeedImpl>();
        }

        std::shared_ptr<IAbsoluteTargetLaneWriter> OpenScenarioWriterFactoryImpl::CreateAbsoluteTargetLaneWriter()
        {
            return std::make_shared<AbsoluteTargetLaneImpl>();
        }

        std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> OpenScenarioWriterFactoryImpl::CreateAbsoluteTargetLaneOffsetWriter()
        {
            return std::make_shared<AbsoluteTargetLaneOffsetImpl>();
        }

        std::shared_ptr<IAbsoluteTargetSpeedWriter> OpenScenarioWriterFactoryImpl::CreateAbsoluteTargetSpeedWriter()
        {
            return std::make_shared<AbsoluteTargetSpeedImpl>();
        }

        std::shared_ptr<IAccelerationConditionWriter> OpenScenarioWriterFactoryImpl::CreateAccelerationConditionWriter()
        {
            return std::make_shared<AccelerationConditionImpl>();
        }

        std::shared_ptr<IAcquirePositionActionWriter> OpenScenarioWriterFactoryImpl::CreateAcquirePositionActionWriter()
        {
            return std::make_shared<AcquirePositionActionImpl>();
        }

        std::shared_ptr<IActWriter> OpenScenarioWriterFactoryImpl::CreateActWriter()
        {
            return std::make_shared<ActImpl>();
        }

        std::shared_ptr<IActionWriter> OpenScenarioWriterFactoryImpl::CreateActionWriter()
        {
            return std::make_shared<ActionImpl>();
        }

        std::shared_ptr<IActivateControllerActionWriter> OpenScenarioWriterFactoryImpl::CreateActivateControllerActionWriter()
        {
            return std::make_shared<ActivateControllerActionImpl>();
        }

        std::shared_ptr<IActorsWriter> OpenScenarioWriterFactoryImpl::CreateActorsWriter()
        {
            return std::make_shared<ActorsImpl>();
        }

        std::shared_ptr<IAddEntityActionWriter> OpenScenarioWriterFactoryImpl::CreateAddEntityActionWriter()
        {
            return std::make_shared<AddEntityActionImpl>();
        }

        std::shared_ptr<IAssignControllerActionWriter> OpenScenarioWriterFactoryImpl::CreateAssignControllerActionWriter()
        {
            return std::make_shared<AssignControllerActionImpl>();
        }

        std::shared_ptr<IAssignRouteActionWriter> OpenScenarioWriterFactoryImpl::CreateAssignRouteActionWriter()
        {
            return std::make_shared<AssignRouteActionImpl>();
        }

        std::shared_ptr<IAxleWriter> OpenScenarioWriterFactoryImpl::CreateAxleWriter()
        {
            return std::make_shared<AxleImpl>();
        }

        std::shared_ptr<IAxlesWriter> OpenScenarioWriterFactoryImpl::CreateAxlesWriter()
        {
            return std::make_shared<AxlesImpl>();
        }

        std::shared_ptr<IBoundingBoxWriter> OpenScenarioWriterFactoryImpl::CreateBoundingBoxWriter()
        {
            return std::make_shared<BoundingBoxImpl>();
        }

        std::shared_ptr<IByEntityConditionWriter> OpenScenarioWriterFactoryImpl::CreateByEntityConditionWriter()
        {
            return std::make_shared<ByEntityConditionImpl>();
        }

        std::shared_ptr<IByObjectTypeWriter> OpenScenarioWriterFactoryImpl::CreateByObjectTypeWriter()
        {
            return std::make_shared<ByObjectTypeImpl>();
        }

        std::shared_ptr<IByTypeWriter> OpenScenarioWriterFactoryImpl::CreateByTypeWriter()
        {
            return std::make_shared<ByTypeImpl>();
        }

        std::shared_ptr<IByValueConditionWriter> OpenScenarioWriterFactoryImpl::CreateByValueConditionWriter()
        {
            return std::make_shared<ByValueConditionImpl>();
        }

        std::shared_ptr<ICatalogWriter> OpenScenarioWriterFactoryImpl::CreateCatalogWriter()
        {
            return std::make_shared<CatalogImpl>();
        }

        std::shared_ptr<ICatalogDefinitionWriter> OpenScenarioWriterFactoryImpl::CreateCatalogDefinitionWriter()
        {
            return std::make_shared<CatalogDefinitionImpl>();
        }

        std::shared_ptr<ICatalogLocationsWriter> OpenScenarioWriterFactoryImpl::CreateCatalogLocationsWriter()
        {
            return std::make_shared<CatalogLocationsImpl>();
        }

        std::shared_ptr<ICatalogReferenceWriter> OpenScenarioWriterFactoryImpl::CreateCatalogReferenceWriter()
        {
            return std::make_shared<CatalogReferenceImpl>();
        }

        std::shared_ptr<ICenterWriter> OpenScenarioWriterFactoryImpl::CreateCenterWriter()
        {
            return std::make_shared<CenterImpl>();
        }

        std::shared_ptr<ICentralSwarmObjectWriter> OpenScenarioWriterFactoryImpl::CreateCentralSwarmObjectWriter()
        {
            return std::make_shared<CentralSwarmObjectImpl>();
        }

        std::shared_ptr<IClothoidWriter> OpenScenarioWriterFactoryImpl::CreateClothoidWriter()
        {
            return std::make_shared<ClothoidImpl>();
        }

        std::shared_ptr<ICollisionConditionWriter> OpenScenarioWriterFactoryImpl::CreateCollisionConditionWriter()
        {
            return std::make_shared<CollisionConditionImpl>();
        }

        std::shared_ptr<IConditionWriter> OpenScenarioWriterFactoryImpl::CreateConditionWriter()
        {
            return std::make_shared<ConditionImpl>();
        }

        std::shared_ptr<IConditionGroupWriter> OpenScenarioWriterFactoryImpl::CreateConditionGroupWriter()
        {
            return std::make_shared<ConditionGroupImpl>();
        }

        std::shared_ptr<IControlPointWriter> OpenScenarioWriterFactoryImpl::CreateControlPointWriter()
        {
            return std::make_shared<ControlPointImpl>();
        }

        std::shared_ptr<IControllerWriter> OpenScenarioWriterFactoryImpl::CreateControllerWriter()
        {
            return std::make_shared<ControllerImpl>();
        }

        std::shared_ptr<IControllerActionWriter> OpenScenarioWriterFactoryImpl::CreateControllerActionWriter()
        {
            return std::make_shared<ControllerActionImpl>();
        }

        std::shared_ptr<IControllerCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateControllerCatalogLocationWriter()
        {
            return std::make_shared<ControllerCatalogLocationImpl>();
        }

        std::shared_ptr<IControllerDistributionWriter> OpenScenarioWriterFactoryImpl::CreateControllerDistributionWriter()
        {
            return std::make_shared<ControllerDistributionImpl>();
        }

        std::shared_ptr<IControllerDistributionEntryWriter> OpenScenarioWriterFactoryImpl::CreateControllerDistributionEntryWriter()
        {
            return std::make_shared<ControllerDistributionEntryImpl>();
        }

        std::shared_ptr<ICustomCommandActionWriter> OpenScenarioWriterFactoryImpl::CreateCustomCommandActionWriter()
        {
            return std::make_shared<CustomCommandActionImpl>();
        }

        std::shared_ptr<IDeleteEntityActionWriter> OpenScenarioWriterFactoryImpl::CreateDeleteEntityActionWriter()
        {
            return std::make_shared<DeleteEntityActionImpl>();
        }

        std::shared_ptr<IDimensionsWriter> OpenScenarioWriterFactoryImpl::CreateDimensionsWriter()
        {
            return std::make_shared<DimensionsImpl>();
        }

        std::shared_ptr<IDirectoryWriter> OpenScenarioWriterFactoryImpl::CreateDirectoryWriter()
        {
            return std::make_shared<DirectoryImpl>();
        }

        std::shared_ptr<IDistanceConditionWriter> OpenScenarioWriterFactoryImpl::CreateDistanceConditionWriter()
        {
            return std::make_shared<DistanceConditionImpl>();
        }

        std::shared_ptr<IDynamicConstraintsWriter> OpenScenarioWriterFactoryImpl::CreateDynamicConstraintsWriter()
        {
            return std::make_shared<DynamicConstraintsImpl>();
        }

        std::shared_ptr<IEndOfRoadConditionWriter> OpenScenarioWriterFactoryImpl::CreateEndOfRoadConditionWriter()
        {
            return std::make_shared<EndOfRoadConditionImpl>();
        }

        std::shared_ptr<IEntitiesWriter> OpenScenarioWriterFactoryImpl::CreateEntitiesWriter()
        {
            return std::make_shared<EntitiesImpl>();
        }

        std::shared_ptr<IEntityActionWriter> OpenScenarioWriterFactoryImpl::CreateEntityActionWriter()
        {
            return std::make_shared<EntityActionImpl>();
        }

        std::shared_ptr<IEntityConditionWriter> OpenScenarioWriterFactoryImpl::CreateEntityConditionWriter()
        {
            return std::make_shared<EntityConditionImpl>();
        }

        std::shared_ptr<IEntityObjectWriter> OpenScenarioWriterFactoryImpl::CreateEntityObjectWriter()
        {
            return std::make_shared<EntityObjectImpl>();
        }

        std::shared_ptr<IEntityRefWriter> OpenScenarioWriterFactoryImpl::CreateEntityRefWriter()
        {
            return std::make_shared<EntityRefImpl>();
        }

        std::shared_ptr<IEntitySelectionWriter> OpenScenarioWriterFactoryImpl::CreateEntitySelectionWriter()
        {
            return std::make_shared<EntitySelectionImpl>();
        }

        std::shared_ptr<IEnvironmentWriter> OpenScenarioWriterFactoryImpl::CreateEnvironmentWriter()
        {
            return std::make_shared<EnvironmentImpl>();
        }

        std::shared_ptr<IEnvironmentActionWriter> OpenScenarioWriterFactoryImpl::CreateEnvironmentActionWriter()
        {
            return std::make_shared<EnvironmentActionImpl>();
        }

        std::shared_ptr<IEnvironmentCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateEnvironmentCatalogLocationWriter()
        {
            return std::make_shared<EnvironmentCatalogLocationImpl>();
        }

        std::shared_ptr<IEventWriter> OpenScenarioWriterFactoryImpl::CreateEventWriter()
        {
            return std::make_shared<EventImpl>();
        }

        std::shared_ptr<IFileWriter> OpenScenarioWriterFactoryImpl::CreateFileWriter()
        {
            return std::make_shared<FileImpl>();
        }

        std::shared_ptr<IFileHeaderWriter> OpenScenarioWriterFactoryImpl::CreateFileHeaderWriter()
        {
            return std::make_shared<FileHeaderImpl>();
        }

        std::shared_ptr<IFinalSpeedWriter> OpenScenarioWriterFactoryImpl::CreateFinalSpeedWriter()
        {
            return std::make_shared<FinalSpeedImpl>();
        }

        std::shared_ptr<IFogWriter> OpenScenarioWriterFactoryImpl::CreateFogWriter()
        {
            return std::make_shared<FogImpl>();
        }

        std::shared_ptr<IFollowTrajectoryActionWriter> OpenScenarioWriterFactoryImpl::CreateFollowTrajectoryActionWriter()
        {
            return std::make_shared<FollowTrajectoryActionImpl>();
        }

        std::shared_ptr<IGlobalActionWriter> OpenScenarioWriterFactoryImpl::CreateGlobalActionWriter()
        {
            return std::make_shared<GlobalActionImpl>();
        }

        std::shared_ptr<IInRoutePositionWriter> OpenScenarioWriterFactoryImpl::CreateInRoutePositionWriter()
        {
            return std::make_shared<InRoutePositionImpl>();
        }

        std::shared_ptr<IInfrastructureActionWriter> OpenScenarioWriterFactoryImpl::CreateInfrastructureActionWriter()
        {
            return std::make_shared<InfrastructureActionImpl>();
        }

        std::shared_ptr<IInitWriter> OpenScenarioWriterFactoryImpl::CreateInitWriter()
        {
            return std::make_shared<InitImpl>();
        }

        std::shared_ptr<IInitActionsWriter> OpenScenarioWriterFactoryImpl::CreateInitActionsWriter()
        {
            return std::make_shared<InitActionsImpl>();
        }

        std::shared_ptr<IKnotWriter> OpenScenarioWriterFactoryImpl::CreateKnotWriter()
        {
            return std::make_shared<KnotImpl>();
        }

        std::shared_ptr<ILaneChangeActionWriter> OpenScenarioWriterFactoryImpl::CreateLaneChangeActionWriter()
        {
            return std::make_shared<LaneChangeActionImpl>();
        }

        std::shared_ptr<ILaneChangeTargetWriter> OpenScenarioWriterFactoryImpl::CreateLaneChangeTargetWriter()
        {
            return std::make_shared<LaneChangeTargetImpl>();
        }

        std::shared_ptr<ILaneOffsetActionWriter> OpenScenarioWriterFactoryImpl::CreateLaneOffsetActionWriter()
        {
            return std::make_shared<LaneOffsetActionImpl>();
        }

        std::shared_ptr<ILaneOffsetActionDynamicsWriter> OpenScenarioWriterFactoryImpl::CreateLaneOffsetActionDynamicsWriter()
        {
            return std::make_shared<LaneOffsetActionDynamicsImpl>();
        }

        std::shared_ptr<ILaneOffsetTargetWriter> OpenScenarioWriterFactoryImpl::CreateLaneOffsetTargetWriter()
        {
            return std::make_shared<LaneOffsetTargetImpl>();
        }

        std::shared_ptr<ILanePositionWriter> OpenScenarioWriterFactoryImpl::CreateLanePositionWriter()
        {
            return std::make_shared<LanePositionImpl>();
        }

        std::shared_ptr<ILateralActionWriter> OpenScenarioWriterFactoryImpl::CreateLateralActionWriter()
        {
            return std::make_shared<LateralActionImpl>();
        }

        std::shared_ptr<ILateralDistanceActionWriter> OpenScenarioWriterFactoryImpl::CreateLateralDistanceActionWriter()
        {
            return std::make_shared<LateralDistanceActionImpl>();
        }

        std::shared_ptr<ILongitudinalActionWriter> OpenScenarioWriterFactoryImpl::CreateLongitudinalActionWriter()
        {
            return std::make_shared<LongitudinalActionImpl>();
        }

        std::shared_ptr<ILongitudinalDistanceActionWriter> OpenScenarioWriterFactoryImpl::CreateLongitudinalDistanceActionWriter()
        {
            return std::make_shared<LongitudinalDistanceActionImpl>();
        }

        std::shared_ptr<IManeuverWriter> OpenScenarioWriterFactoryImpl::CreateManeuverWriter()
        {
            return std::make_shared<ManeuverImpl>();
        }

        std::shared_ptr<IManeuverCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateManeuverCatalogLocationWriter()
        {
            return std::make_shared<ManeuverCatalogLocationImpl>();
        }

        std::shared_ptr<IManeuverGroupWriter> OpenScenarioWriterFactoryImpl::CreateManeuverGroupWriter()
        {
            return std::make_shared<ManeuverGroupImpl>();
        }

        std::shared_ptr<IMiscObjectWriter> OpenScenarioWriterFactoryImpl::CreateMiscObjectWriter()
        {
            return std::make_shared<MiscObjectImpl>();
        }

        std::shared_ptr<IMiscObjectCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateMiscObjectCatalogLocationWriter()
        {
            return std::make_shared<MiscObjectCatalogLocationImpl>();
        }

        std::shared_ptr<IModifyRuleWriter> OpenScenarioWriterFactoryImpl::CreateModifyRuleWriter()
        {
            return std::make_shared<ModifyRuleImpl>();
        }

        std::shared_ptr<INoneWriter> OpenScenarioWriterFactoryImpl::CreateNoneWriter()
        {
            return std::make_shared<NoneImpl>();
        }

        std::shared_ptr<INurbsWriter> OpenScenarioWriterFactoryImpl::CreateNurbsWriter()
        {
            return std::make_shared<NurbsImpl>();
        }

        std::shared_ptr<IObjectControllerWriter> OpenScenarioWriterFactoryImpl::CreateObjectControllerWriter()
        {
            return std::make_shared<ObjectControllerImpl>();
        }

        std::shared_ptr<IOffroadConditionWriter> OpenScenarioWriterFactoryImpl::CreateOffroadConditionWriter()
        {
            return std::make_shared<OffroadConditionImpl>();
        }

        std::shared_ptr<IOpenScenarioWriter> OpenScenarioWriterFactoryImpl::CreateOpenScenarioWriter()
        {
            return std::make_shared<OpenScenarioImpl>();
        }

        std::shared_ptr<IOpenScenarioCategoryWriter> OpenScenarioWriterFactoryImpl::CreateOpenScenarioCategoryWriter()
        {
            return std::make_shared<OpenScenarioCategoryImpl>();
        }

        std::shared_ptr<IOrientationWriter> OpenScenarioWriterFactoryImpl::CreateOrientationWriter()
        {
            return std::make_shared<OrientationImpl>();
        }

        std::shared_ptr<IOverrideBrakeActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideBrakeActionWriter()
        {
            return std::make_shared<OverrideBrakeActionImpl>();
        }

        std::shared_ptr<IOverrideClutchActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideClutchActionWriter()
        {
            return std::make_shared<OverrideClutchActionImpl>();
        }

        std::shared_ptr<IOverrideControllerValueActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideControllerValueActionWriter()
        {
            return std::make_shared<OverrideControllerValueActionImpl>();
        }

        std::shared_ptr<IOverrideGearActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideGearActionWriter()
        {
            return std::make_shared<OverrideGearActionImpl>();
        }

        std::shared_ptr<IOverrideParkingBrakeActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideParkingBrakeActionWriter()
        {
            return std::make_shared<OverrideParkingBrakeActionImpl>();
        }

        std::shared_ptr<IOverrideSteeringWheelActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideSteeringWheelActionWriter()
        {
            return std::make_shared<OverrideSteeringWheelActionImpl>();
        }

        std::shared_ptr<IOverrideThrottleActionWriter> OpenScenarioWriterFactoryImpl::CreateOverrideThrottleActionWriter()
        {
            return std::make_shared<OverrideThrottleActionImpl>();
        }

        std::shared_ptr<IParameterActionWriter> OpenScenarioWriterFactoryImpl::CreateParameterActionWriter()
        {
            return std::make_shared<ParameterActionImpl>();
        }

        std::shared_ptr<IParameterAddValueRuleWriter> OpenScenarioWriterFactoryImpl::CreateParameterAddValueRuleWriter()
        {
            return std::make_shared<ParameterAddValueRuleImpl>();
        }

        std::shared_ptr<IParameterAssignmentWriter> OpenScenarioWriterFactoryImpl::CreateParameterAssignmentWriter()
        {
            return std::make_shared<ParameterAssignmentImpl>();
        }

        std::shared_ptr<IParameterConditionWriter> OpenScenarioWriterFactoryImpl::CreateParameterConditionWriter()
        {
            return std::make_shared<ParameterConditionImpl>();
        }

        std::shared_ptr<IParameterDeclarationWriter> OpenScenarioWriterFactoryImpl::CreateParameterDeclarationWriter()
        {
            return std::make_shared<ParameterDeclarationImpl>();
        }

        std::shared_ptr<IParameterModifyActionWriter> OpenScenarioWriterFactoryImpl::CreateParameterModifyActionWriter()
        {
            return std::make_shared<ParameterModifyActionImpl>();
        }

        std::shared_ptr<IParameterMultiplyByValueRuleWriter> OpenScenarioWriterFactoryImpl::CreateParameterMultiplyByValueRuleWriter()
        {
            return std::make_shared<ParameterMultiplyByValueRuleImpl>();
        }

        std::shared_ptr<IParameterSetActionWriter> OpenScenarioWriterFactoryImpl::CreateParameterSetActionWriter()
        {
            return std::make_shared<ParameterSetActionImpl>();
        }

        std::shared_ptr<IPedestrianWriter> OpenScenarioWriterFactoryImpl::CreatePedestrianWriter()
        {
            return std::make_shared<PedestrianImpl>();
        }

        std::shared_ptr<IPedestrianCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreatePedestrianCatalogLocationWriter()
        {
            return std::make_shared<PedestrianCatalogLocationImpl>();
        }

        std::shared_ptr<IPerformanceWriter> OpenScenarioWriterFactoryImpl::CreatePerformanceWriter()
        {
            return std::make_shared<PerformanceImpl>();
        }

        std::shared_ptr<IPhaseWriter> OpenScenarioWriterFactoryImpl::CreatePhaseWriter()
        {
            return std::make_shared<PhaseImpl>();
        }

        std::shared_ptr<IPolylineWriter> OpenScenarioWriterFactoryImpl::CreatePolylineWriter()
        {
            return std::make_shared<PolylineImpl>();
        }

        std::shared_ptr<IPositionWriter> OpenScenarioWriterFactoryImpl::CreatePositionWriter()
        {
            return std::make_shared<PositionImpl>();
        }

        std::shared_ptr<IPositionInLaneCoordinatesWriter> OpenScenarioWriterFactoryImpl::CreatePositionInLaneCoordinatesWriter()
        {
            return std::make_shared<PositionInLaneCoordinatesImpl>();
        }

        std::shared_ptr<IPositionInRoadCoordinatesWriter> OpenScenarioWriterFactoryImpl::CreatePositionInRoadCoordinatesWriter()
        {
            return std::make_shared<PositionInRoadCoordinatesImpl>();
        }

        std::shared_ptr<IPositionOfCurrentEntityWriter> OpenScenarioWriterFactoryImpl::CreatePositionOfCurrentEntityWriter()
        {
            return std::make_shared<PositionOfCurrentEntityImpl>();
        }

        std::shared_ptr<IPrecipitationWriter> OpenScenarioWriterFactoryImpl::CreatePrecipitationWriter()
        {
            return std::make_shared<PrecipitationImpl>();
        }

        std::shared_ptr<IPrivateWriter> OpenScenarioWriterFactoryImpl::CreatePrivateWriter()
        {
            return std::make_shared<PrivateImpl>();
        }

        std::shared_ptr<IPrivateActionWriter> OpenScenarioWriterFactoryImpl::CreatePrivateActionWriter()
        {
            return std::make_shared<PrivateActionImpl>();
        }

        std::shared_ptr<IPropertiesWriter> OpenScenarioWriterFactoryImpl::CreatePropertiesWriter()
        {
            return std::make_shared<PropertiesImpl>();
        }

        std::shared_ptr<IPropertyWriter> OpenScenarioWriterFactoryImpl::CreatePropertyWriter()
        {
            return std::make_shared<PropertyImpl>();
        }

        std::shared_ptr<IReachPositionConditionWriter> OpenScenarioWriterFactoryImpl::CreateReachPositionConditionWriter()
        {
            return std::make_shared<ReachPositionConditionImpl>();
        }

        std::shared_ptr<IRelativeDistanceConditionWriter> OpenScenarioWriterFactoryImpl::CreateRelativeDistanceConditionWriter()
        {
            return std::make_shared<RelativeDistanceConditionImpl>();
        }

        std::shared_ptr<IRelativeLanePositionWriter> OpenScenarioWriterFactoryImpl::CreateRelativeLanePositionWriter()
        {
            return std::make_shared<RelativeLanePositionImpl>();
        }

        std::shared_ptr<IRelativeObjectPositionWriter> OpenScenarioWriterFactoryImpl::CreateRelativeObjectPositionWriter()
        {
            return std::make_shared<RelativeObjectPositionImpl>();
        }

        std::shared_ptr<IRelativeRoadPositionWriter> OpenScenarioWriterFactoryImpl::CreateRelativeRoadPositionWriter()
        {
            return std::make_shared<RelativeRoadPositionImpl>();
        }

        std::shared_ptr<IRelativeSpeedConditionWriter> OpenScenarioWriterFactoryImpl::CreateRelativeSpeedConditionWriter()
        {
            return std::make_shared<RelativeSpeedConditionImpl>();
        }

        std::shared_ptr<IRelativeSpeedToMasterWriter> OpenScenarioWriterFactoryImpl::CreateRelativeSpeedToMasterWriter()
        {
            return std::make_shared<RelativeSpeedToMasterImpl>();
        }

        std::shared_ptr<IRelativeTargetLaneWriter> OpenScenarioWriterFactoryImpl::CreateRelativeTargetLaneWriter()
        {
            return std::make_shared<RelativeTargetLaneImpl>();
        }

        std::shared_ptr<IRelativeTargetLaneOffsetWriter> OpenScenarioWriterFactoryImpl::CreateRelativeTargetLaneOffsetWriter()
        {
            return std::make_shared<RelativeTargetLaneOffsetImpl>();
        }

        std::shared_ptr<IRelativeTargetSpeedWriter> OpenScenarioWriterFactoryImpl::CreateRelativeTargetSpeedWriter()
        {
            return std::make_shared<RelativeTargetSpeedImpl>();
        }

        std::shared_ptr<IRelativeWorldPositionWriter> OpenScenarioWriterFactoryImpl::CreateRelativeWorldPositionWriter()
        {
            return std::make_shared<RelativeWorldPositionImpl>();
        }

        std::shared_ptr<IRoadConditionWriter> OpenScenarioWriterFactoryImpl::CreateRoadConditionWriter()
        {
            return std::make_shared<RoadConditionImpl>();
        }

        std::shared_ptr<IRoadNetworkWriter> OpenScenarioWriterFactoryImpl::CreateRoadNetworkWriter()
        {
            return std::make_shared<RoadNetworkImpl>();
        }

        std::shared_ptr<IRoadPositionWriter> OpenScenarioWriterFactoryImpl::CreateRoadPositionWriter()
        {
            return std::make_shared<RoadPositionImpl>();
        }

        std::shared_ptr<IRouteWriter> OpenScenarioWriterFactoryImpl::CreateRouteWriter()
        {
            return std::make_shared<RouteImpl>();
        }

        std::shared_ptr<IRouteCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateRouteCatalogLocationWriter()
        {
            return std::make_shared<RouteCatalogLocationImpl>();
        }

        std::shared_ptr<IRoutePositionWriter> OpenScenarioWriterFactoryImpl::CreateRoutePositionWriter()
        {
            return std::make_shared<RoutePositionImpl>();
        }

        std::shared_ptr<IRouteRefWriter> OpenScenarioWriterFactoryImpl::CreateRouteRefWriter()
        {
            return std::make_shared<RouteRefImpl>();
        }

        std::shared_ptr<IRoutingActionWriter> OpenScenarioWriterFactoryImpl::CreateRoutingActionWriter()
        {
            return std::make_shared<RoutingActionImpl>();
        }

        std::shared_ptr<IScenarioDefinitionWriter> OpenScenarioWriterFactoryImpl::CreateScenarioDefinitionWriter()
        {
            return std::make_shared<ScenarioDefinitionImpl>();
        }

        std::shared_ptr<IScenarioObjectWriter> OpenScenarioWriterFactoryImpl::CreateScenarioObjectWriter()
        {
            return std::make_shared<ScenarioObjectImpl>();
        }

        std::shared_ptr<ISelectedEntitiesWriter> OpenScenarioWriterFactoryImpl::CreateSelectedEntitiesWriter()
        {
            return std::make_shared<SelectedEntitiesImpl>();
        }

        std::shared_ptr<IShapeWriter> OpenScenarioWriterFactoryImpl::CreateShapeWriter()
        {
            return std::make_shared<ShapeImpl>();
        }

        std::shared_ptr<ISimulationTimeConditionWriter> OpenScenarioWriterFactoryImpl::CreateSimulationTimeConditionWriter()
        {
            return std::make_shared<SimulationTimeConditionImpl>();
        }

        std::shared_ptr<ISpeedActionWriter> OpenScenarioWriterFactoryImpl::CreateSpeedActionWriter()
        {
            return std::make_shared<SpeedActionImpl>();
        }

        std::shared_ptr<ISpeedActionTargetWriter> OpenScenarioWriterFactoryImpl::CreateSpeedActionTargetWriter()
        {
            return std::make_shared<SpeedActionTargetImpl>();
        }

        std::shared_ptr<ISpeedConditionWriter> OpenScenarioWriterFactoryImpl::CreateSpeedConditionWriter()
        {
            return std::make_shared<SpeedConditionImpl>();
        }

        std::shared_ptr<IStandStillConditionWriter> OpenScenarioWriterFactoryImpl::CreateStandStillConditionWriter()
        {
            return std::make_shared<StandStillConditionImpl>();
        }

        std::shared_ptr<IStoryWriter> OpenScenarioWriterFactoryImpl::CreateStoryWriter()
        {
            return std::make_shared<StoryImpl>();
        }

        std::shared_ptr<IStoryboardWriter> OpenScenarioWriterFactoryImpl::CreateStoryboardWriter()
        {
            return std::make_shared<StoryboardImpl>();
        }

        std::shared_ptr<IStoryboardElementStateConditionWriter> OpenScenarioWriterFactoryImpl::CreateStoryboardElementStateConditionWriter()
        {
            return std::make_shared<StoryboardElementStateConditionImpl>();
        }

        std::shared_ptr<ISunWriter> OpenScenarioWriterFactoryImpl::CreateSunWriter()
        {
            return std::make_shared<SunImpl>();
        }

        std::shared_ptr<ISynchronizeActionWriter> OpenScenarioWriterFactoryImpl::CreateSynchronizeActionWriter()
        {
            return std::make_shared<SynchronizeActionImpl>();
        }

        std::shared_ptr<ITeleportActionWriter> OpenScenarioWriterFactoryImpl::CreateTeleportActionWriter()
        {
            return std::make_shared<TeleportActionImpl>();
        }

        std::shared_ptr<ITimeHeadwayConditionWriter> OpenScenarioWriterFactoryImpl::CreateTimeHeadwayConditionWriter()
        {
            return std::make_shared<TimeHeadwayConditionImpl>();
        }

        std::shared_ptr<ITimeOfDayWriter> OpenScenarioWriterFactoryImpl::CreateTimeOfDayWriter()
        {
            return std::make_shared<TimeOfDayImpl>();
        }

        std::shared_ptr<ITimeOfDayConditionWriter> OpenScenarioWriterFactoryImpl::CreateTimeOfDayConditionWriter()
        {
            return std::make_shared<TimeOfDayConditionImpl>();
        }

        std::shared_ptr<ITimeReferenceWriter> OpenScenarioWriterFactoryImpl::CreateTimeReferenceWriter()
        {
            return std::make_shared<TimeReferenceImpl>();
        }

        std::shared_ptr<ITimeToCollisionConditionWriter> OpenScenarioWriterFactoryImpl::CreateTimeToCollisionConditionWriter()
        {
            return std::make_shared<TimeToCollisionConditionImpl>();
        }

        std::shared_ptr<ITimeToCollisionConditionTargetWriter> OpenScenarioWriterFactoryImpl::CreateTimeToCollisionConditionTargetWriter()
        {
            return std::make_shared<TimeToCollisionConditionTargetImpl>();
        }

        std::shared_ptr<ITimingWriter> OpenScenarioWriterFactoryImpl::CreateTimingWriter()
        {
            return std::make_shared<TimingImpl>();
        }

        std::shared_ptr<ITrafficActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficActionWriter()
        {
            return std::make_shared<TrafficActionImpl>();
        }

        std::shared_ptr<ITrafficDefinitionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficDefinitionWriter()
        {
            return std::make_shared<TrafficDefinitionImpl>();
        }

        std::shared_ptr<ITrafficSignalActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalActionWriter()
        {
            return std::make_shared<TrafficSignalActionImpl>();
        }

        std::shared_ptr<ITrafficSignalConditionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalConditionWriter()
        {
            return std::make_shared<TrafficSignalConditionImpl>();
        }

        std::shared_ptr<ITrafficSignalControllerWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalControllerWriter()
        {
            return std::make_shared<TrafficSignalControllerImpl>();
        }

        std::shared_ptr<ITrafficSignalControllerActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalControllerActionWriter()
        {
            return std::make_shared<TrafficSignalControllerActionImpl>();
        }

        std::shared_ptr<ITrafficSignalControllerConditionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalControllerConditionWriter()
        {
            return std::make_shared<TrafficSignalControllerConditionImpl>();
        }

        std::shared_ptr<ITrafficSignalStateWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalStateWriter()
        {
            return std::make_shared<TrafficSignalStateImpl>();
        }

        std::shared_ptr<ITrafficSignalStateActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSignalStateActionWriter()
        {
            return std::make_shared<TrafficSignalStateActionImpl>();
        }

        std::shared_ptr<ITrafficSinkActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSinkActionWriter()
        {
            return std::make_shared<TrafficSinkActionImpl>();
        }

        std::shared_ptr<ITrafficSourceActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSourceActionWriter()
        {
            return std::make_shared<TrafficSourceActionImpl>();
        }

        std::shared_ptr<ITrafficSwarmActionWriter> OpenScenarioWriterFactoryImpl::CreateTrafficSwarmActionWriter()
        {
            return std::make_shared<TrafficSwarmActionImpl>();
        }

        std::shared_ptr<ITrajectoryWriter> OpenScenarioWriterFactoryImpl::CreateTrajectoryWriter()
        {
            return std::make_shared<TrajectoryImpl>();
        }

        std::shared_ptr<ITrajectoryCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateTrajectoryCatalogLocationWriter()
        {
            return std::make_shared<TrajectoryCatalogLocationImpl>();
        }

        std::shared_ptr<ITrajectoryFollowingModeWriter> OpenScenarioWriterFactoryImpl::CreateTrajectoryFollowingModeWriter()
        {
            return std::make_shared<TrajectoryFollowingModeImpl>();
        }

        std::shared_ptr<ITransitionDynamicsWriter> OpenScenarioWriterFactoryImpl::CreateTransitionDynamicsWriter()
        {
            return std::make_shared<TransitionDynamicsImpl>();
        }

        std::shared_ptr<ITraveledDistanceConditionWriter> OpenScenarioWriterFactoryImpl::CreateTraveledDistanceConditionWriter()
        {
            return std::make_shared<TraveledDistanceConditionImpl>();
        }

        std::shared_ptr<ITriggerWriter> OpenScenarioWriterFactoryImpl::CreateTriggerWriter()
        {
            return std::make_shared<TriggerImpl>();
        }

        std::shared_ptr<ITriggeringEntitiesWriter> OpenScenarioWriterFactoryImpl::CreateTriggeringEntitiesWriter()
        {
            return std::make_shared<TriggeringEntitiesImpl>();
        }

        std::shared_ptr<IUserDefinedActionWriter> OpenScenarioWriterFactoryImpl::CreateUserDefinedActionWriter()
        {
            return std::make_shared<UserDefinedActionImpl>();
        }

        std::shared_ptr<IUserDefinedValueConditionWriter> OpenScenarioWriterFactoryImpl::CreateUserDefinedValueConditionWriter()
        {
            return std::make_shared<UserDefinedValueConditionImpl>();
        }

        std::shared_ptr<IVehicleWriter> OpenScenarioWriterFactoryImpl::CreateVehicleWriter()
        {
            return std::make_shared<VehicleImpl>();
        }

        std::shared_ptr<IVehicleCatalogLocationWriter> OpenScenarioWriterFactoryImpl::CreateVehicleCatalogLocationWriter()
        {
            return std::make_shared<VehicleCatalogLocationImpl>();
        }

        std::shared_ptr<IVehicleCategoryDistributionWriter> OpenScenarioWriterFactoryImpl::CreateVehicleCategoryDistributionWriter()
        {
            return std::make_shared<VehicleCategoryDistributionImpl>();
        }

        std::shared_ptr<IVehicleCategoryDistributionEntryWriter> OpenScenarioWriterFactoryImpl::CreateVehicleCategoryDistributionEntryWriter()
        {
            return std::make_shared<VehicleCategoryDistributionEntryImpl>();
        }

        std::shared_ptr<IVertexWriter> OpenScenarioWriterFactoryImpl::CreateVertexWriter()
        {
            return std::make_shared<VertexImpl>();
        }

        std::shared_ptr<IVisibilityActionWriter> OpenScenarioWriterFactoryImpl::CreateVisibilityActionWriter()
        {
            return std::make_shared<VisibilityActionImpl>();
        }

        std::shared_ptr<IWaypointWriter> OpenScenarioWriterFactoryImpl::CreateWaypointWriter()
        {
            return std::make_shared<WaypointImpl>();
        }

        std::shared_ptr<IWeatherWriter> OpenScenarioWriterFactoryImpl::CreateWeatherWriter()
        {
            return std::make_shared<WeatherImpl>();
        }

        std::shared_ptr<IWorldPositionWriter> OpenScenarioWriterFactoryImpl::CreateWorldPositionWriter()
        {
            return std::make_shared<WorldPositionImpl>();
        }
    }
}
