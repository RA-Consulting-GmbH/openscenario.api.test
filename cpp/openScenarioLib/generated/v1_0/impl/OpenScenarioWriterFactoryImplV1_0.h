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
#include "ApiClassImplV1_0.h"
#include "IOpenScenarioWriterFactoryV1_0.h"
#include "MemLeakDetection.h"

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
        class OpenScenarioWriterFactoryImpl: public IOpenScenarioWriterFactory  
        {
        public:

            std::shared_ptr<IAbsoluteSpeedWriter> CreateAbsoluteSpeedWriter() override
            {
                return std::make_shared<AbsoluteSpeedImpl>();
            }

            std::shared_ptr<IAbsoluteTargetLaneWriter> CreateAbsoluteTargetLaneWriter() override
            {
                return std::make_shared<AbsoluteTargetLaneImpl>();
            }

            std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> CreateAbsoluteTargetLaneOffsetWriter() override
            {
                return std::make_shared<AbsoluteTargetLaneOffsetImpl>();
            }

            std::shared_ptr<IAbsoluteTargetSpeedWriter> CreateAbsoluteTargetSpeedWriter() override
            {
                return std::make_shared<AbsoluteTargetSpeedImpl>();
            }

            std::shared_ptr<IAccelerationConditionWriter> CreateAccelerationConditionWriter() override
            {
                return std::make_shared<AccelerationConditionImpl>();
            }

            std::shared_ptr<IAcquirePositionActionWriter> CreateAcquirePositionActionWriter() override
            {
                return std::make_shared<AcquirePositionActionImpl>();
            }

            std::shared_ptr<IActWriter> CreateActWriter() override
            {
                return std::make_shared<ActImpl>();
            }

            std::shared_ptr<IActionWriter> CreateActionWriter() override
            {
                return std::make_shared<ActionImpl>();
            }

            std::shared_ptr<IActivateControllerActionWriter> CreateActivateControllerActionWriter() override
            {
                return std::make_shared<ActivateControllerActionImpl>();
            }

            std::shared_ptr<IActorsWriter> CreateActorsWriter() override
            {
                return std::make_shared<ActorsImpl>();
            }

            std::shared_ptr<IAddEntityActionWriter> CreateAddEntityActionWriter() override
            {
                return std::make_shared<AddEntityActionImpl>();
            }

            std::shared_ptr<IAssignControllerActionWriter> CreateAssignControllerActionWriter() override
            {
                return std::make_shared<AssignControllerActionImpl>();
            }

            std::shared_ptr<IAssignRouteActionWriter> CreateAssignRouteActionWriter() override
            {
                return std::make_shared<AssignRouteActionImpl>();
            }

            std::shared_ptr<IAxleWriter> CreateAxleWriter() override
            {
                return std::make_shared<AxleImpl>();
            }

            std::shared_ptr<IAxlesWriter> CreateAxlesWriter() override
            {
                return std::make_shared<AxlesImpl>();
            }

            std::shared_ptr<IBoundingBoxWriter> CreateBoundingBoxWriter() override
            {
                return std::make_shared<BoundingBoxImpl>();
            }

            std::shared_ptr<IByEntityConditionWriter> CreateByEntityConditionWriter() override
            {
                return std::make_shared<ByEntityConditionImpl>();
            }

            std::shared_ptr<IByObjectTypeWriter> CreateByObjectTypeWriter() override
            {
                return std::make_shared<ByObjectTypeImpl>();
            }

            std::shared_ptr<IByTypeWriter> CreateByTypeWriter() override
            {
                return std::make_shared<ByTypeImpl>();
            }

            std::shared_ptr<IByValueConditionWriter> CreateByValueConditionWriter() override
            {
                return std::make_shared<ByValueConditionImpl>();
            }

            std::shared_ptr<ICatalogWriter> CreateCatalogWriter() override
            {
                return std::make_shared<CatalogImpl>();
            }

            std::shared_ptr<ICatalogDefinitionWriter> CreateCatalogDefinitionWriter() override
            {
                return std::make_shared<CatalogDefinitionImpl>();
            }

            std::shared_ptr<ICatalogLocationsWriter> CreateCatalogLocationsWriter() override
            {
                return std::make_shared<CatalogLocationsImpl>();
            }

            std::shared_ptr<ICatalogReferenceWriter> CreateCatalogReferenceWriter() override
            {
                return std::make_shared<CatalogReferenceImpl>();
            }

            std::shared_ptr<ICenterWriter> CreateCenterWriter() override
            {
                return std::make_shared<CenterImpl>();
            }

            std::shared_ptr<ICentralSwarmObjectWriter> CreateCentralSwarmObjectWriter() override
            {
                return std::make_shared<CentralSwarmObjectImpl>();
            }

            std::shared_ptr<IClothoidWriter> CreateClothoidWriter() override
            {
                return std::make_shared<ClothoidImpl>();
            }

            std::shared_ptr<ICollisionConditionWriter> CreateCollisionConditionWriter() override
            {
                return std::make_shared<CollisionConditionImpl>();
            }

            std::shared_ptr<IConditionWriter> CreateConditionWriter() override
            {
                return std::make_shared<ConditionImpl>();
            }

            std::shared_ptr<IConditionGroupWriter> CreateConditionGroupWriter() override
            {
                return std::make_shared<ConditionGroupImpl>();
            }

            std::shared_ptr<IControlPointWriter> CreateControlPointWriter() override
            {
                return std::make_shared<ControlPointImpl>();
            }

            std::shared_ptr<IControllerWriter> CreateControllerWriter() override
            {
                return std::make_shared<ControllerImpl>();
            }

            std::shared_ptr<IControllerActionWriter> CreateControllerActionWriter() override
            {
                return std::make_shared<ControllerActionImpl>();
            }

            std::shared_ptr<IControllerCatalogLocationWriter> CreateControllerCatalogLocationWriter() override
            {
                return std::make_shared<ControllerCatalogLocationImpl>();
            }

            std::shared_ptr<IControllerDistributionWriter> CreateControllerDistributionWriter() override
            {
                return std::make_shared<ControllerDistributionImpl>();
            }

            std::shared_ptr<IControllerDistributionEntryWriter> CreateControllerDistributionEntryWriter() override
            {
                return std::make_shared<ControllerDistributionEntryImpl>();
            }

            std::shared_ptr<ICustomCommandActionWriter> CreateCustomCommandActionWriter() override
            {
                return std::make_shared<CustomCommandActionImpl>();
            }

            std::shared_ptr<IDeleteEntityActionWriter> CreateDeleteEntityActionWriter() override
            {
                return std::make_shared<DeleteEntityActionImpl>();
            }

            std::shared_ptr<IDimensionsWriter> CreateDimensionsWriter() override
            {
                return std::make_shared<DimensionsImpl>();
            }

            std::shared_ptr<IDirectoryWriter> CreateDirectoryWriter() override
            {
                return std::make_shared<DirectoryImpl>();
            }

            std::shared_ptr<IDistanceConditionWriter> CreateDistanceConditionWriter() override
            {
                return std::make_shared<DistanceConditionImpl>();
            }

            std::shared_ptr<IDynamicConstraintsWriter> CreateDynamicConstraintsWriter() override
            {
                return std::make_shared<DynamicConstraintsImpl>();
            }

            std::shared_ptr<IEndOfRoadConditionWriter> CreateEndOfRoadConditionWriter() override
            {
                return std::make_shared<EndOfRoadConditionImpl>();
            }

            std::shared_ptr<IEntitiesWriter> CreateEntitiesWriter() override
            {
                return std::make_shared<EntitiesImpl>();
            }

            std::shared_ptr<IEntityActionWriter> CreateEntityActionWriter() override
            {
                return std::make_shared<EntityActionImpl>();
            }

            std::shared_ptr<IEntityConditionWriter> CreateEntityConditionWriter() override
            {
                return std::make_shared<EntityConditionImpl>();
            }

            std::shared_ptr<IEntityObjectWriter> CreateEntityObjectWriter() override
            {
                return std::make_shared<EntityObjectImpl>();
            }

            std::shared_ptr<IEntityRefWriter> CreateEntityRefWriter() override
            {
                return std::make_shared<EntityRefImpl>();
            }

            std::shared_ptr<IEntitySelectionWriter> CreateEntitySelectionWriter() override
            {
                return std::make_shared<EntitySelectionImpl>();
            }

            std::shared_ptr<IEnvironmentWriter> CreateEnvironmentWriter() override
            {
                return std::make_shared<EnvironmentImpl>();
            }

            std::shared_ptr<IEnvironmentActionWriter> CreateEnvironmentActionWriter() override
            {
                return std::make_shared<EnvironmentActionImpl>();
            }

            std::shared_ptr<IEnvironmentCatalogLocationWriter> CreateEnvironmentCatalogLocationWriter() override
            {
                return std::make_shared<EnvironmentCatalogLocationImpl>();
            }

            std::shared_ptr<IEventWriter> CreateEventWriter() override
            {
                return std::make_shared<EventImpl>();
            }

            std::shared_ptr<IFileWriter> CreateFileWriter() override
            {
                return std::make_shared<FileImpl>();
            }

            std::shared_ptr<IFileHeaderWriter> CreateFileHeaderWriter() override
            {
                return std::make_shared<FileHeaderImpl>();
            }

            std::shared_ptr<IFinalSpeedWriter> CreateFinalSpeedWriter() override
            {
                return std::make_shared<FinalSpeedImpl>();
            }

            std::shared_ptr<IFogWriter> CreateFogWriter() override
            {
                return std::make_shared<FogImpl>();
            }

            std::shared_ptr<IFollowTrajectoryActionWriter> CreateFollowTrajectoryActionWriter() override
            {
                return std::make_shared<FollowTrajectoryActionImpl>();
            }

            std::shared_ptr<IGlobalActionWriter> CreateGlobalActionWriter() override
            {
                return std::make_shared<GlobalActionImpl>();
            }

            std::shared_ptr<IInRoutePositionWriter> CreateInRoutePositionWriter() override
            {
                return std::make_shared<InRoutePositionImpl>();
            }

            std::shared_ptr<IInfrastructureActionWriter> CreateInfrastructureActionWriter() override
            {
                return std::make_shared<InfrastructureActionImpl>();
            }

            std::shared_ptr<IInitWriter> CreateInitWriter() override
            {
                return std::make_shared<InitImpl>();
            }

            std::shared_ptr<IInitActionsWriter> CreateInitActionsWriter() override
            {
                return std::make_shared<InitActionsImpl>();
            }

            std::shared_ptr<IKnotWriter> CreateKnotWriter() override
            {
                return std::make_shared<KnotImpl>();
            }

            std::shared_ptr<ILaneChangeActionWriter> CreateLaneChangeActionWriter() override
            {
                return std::make_shared<LaneChangeActionImpl>();
            }

            std::shared_ptr<ILaneChangeTargetWriter> CreateLaneChangeTargetWriter() override
            {
                return std::make_shared<LaneChangeTargetImpl>();
            }

            std::shared_ptr<ILaneOffsetActionWriter> CreateLaneOffsetActionWriter() override
            {
                return std::make_shared<LaneOffsetActionImpl>();
            }

            std::shared_ptr<ILaneOffsetActionDynamicsWriter> CreateLaneOffsetActionDynamicsWriter() override
            {
                return std::make_shared<LaneOffsetActionDynamicsImpl>();
            }

            std::shared_ptr<ILaneOffsetTargetWriter> CreateLaneOffsetTargetWriter() override
            {
                return std::make_shared<LaneOffsetTargetImpl>();
            }

            std::shared_ptr<ILanePositionWriter> CreateLanePositionWriter() override
            {
                return std::make_shared<LanePositionImpl>();
            }

            std::shared_ptr<ILateralActionWriter> CreateLateralActionWriter() override
            {
                return std::make_shared<LateralActionImpl>();
            }

            std::shared_ptr<ILateralDistanceActionWriter> CreateLateralDistanceActionWriter() override
            {
                return std::make_shared<LateralDistanceActionImpl>();
            }

            std::shared_ptr<ILongitudinalActionWriter> CreateLongitudinalActionWriter() override
            {
                return std::make_shared<LongitudinalActionImpl>();
            }

            std::shared_ptr<ILongitudinalDistanceActionWriter> CreateLongitudinalDistanceActionWriter() override
            {
                return std::make_shared<LongitudinalDistanceActionImpl>();
            }

            std::shared_ptr<IManeuverWriter> CreateManeuverWriter() override
            {
                return std::make_shared<ManeuverImpl>();
            }

            std::shared_ptr<IManeuverCatalogLocationWriter> CreateManeuverCatalogLocationWriter() override
            {
                return std::make_shared<ManeuverCatalogLocationImpl>();
            }

            std::shared_ptr<IManeuverGroupWriter> CreateManeuverGroupWriter() override
            {
                return std::make_shared<ManeuverGroupImpl>();
            }

            std::shared_ptr<IMiscObjectWriter> CreateMiscObjectWriter() override
            {
                return std::make_shared<MiscObjectImpl>();
            }

            std::shared_ptr<IMiscObjectCatalogLocationWriter> CreateMiscObjectCatalogLocationWriter() override
            {
                return std::make_shared<MiscObjectCatalogLocationImpl>();
            }

            std::shared_ptr<IModifyRuleWriter> CreateModifyRuleWriter() override
            {
                return std::make_shared<ModifyRuleImpl>();
            }

            std::shared_ptr<INoneWriter> CreateNoneWriter() override
            {
                return std::make_shared<NoneImpl>();
            }

            std::shared_ptr<INurbsWriter> CreateNurbsWriter() override
            {
                return std::make_shared<NurbsImpl>();
            }

            std::shared_ptr<IObjectControllerWriter> CreateObjectControllerWriter() override
            {
                return std::make_shared<ObjectControllerImpl>();
            }

            std::shared_ptr<IOffroadConditionWriter> CreateOffroadConditionWriter() override
            {
                return std::make_shared<OffroadConditionImpl>();
            }

            std::shared_ptr<IOpenScenarioWriter> CreateOpenScenarioWriter() override
            {
                return std::make_shared<OpenScenarioImpl>();
            }

            std::shared_ptr<IOpenScenarioCategoryWriter> CreateOpenScenarioCategoryWriter() override
            {
                return std::make_shared<OpenScenarioCategoryImpl>();
            }

            std::shared_ptr<IOrientationWriter> CreateOrientationWriter() override
            {
                return std::make_shared<OrientationImpl>();
            }

            std::shared_ptr<IOverrideBrakeActionWriter> CreateOverrideBrakeActionWriter() override
            {
                return std::make_shared<OverrideBrakeActionImpl>();
            }

            std::shared_ptr<IOverrideClutchActionWriter> CreateOverrideClutchActionWriter() override
            {
                return std::make_shared<OverrideClutchActionImpl>();
            }

            std::shared_ptr<IOverrideControllerValueActionWriter> CreateOverrideControllerValueActionWriter() override
            {
                return std::make_shared<OverrideControllerValueActionImpl>();
            }

            std::shared_ptr<IOverrideGearActionWriter> CreateOverrideGearActionWriter() override
            {
                return std::make_shared<OverrideGearActionImpl>();
            }

            std::shared_ptr<IOverrideParkingBrakeActionWriter> CreateOverrideParkingBrakeActionWriter() override
            {
                return std::make_shared<OverrideParkingBrakeActionImpl>();
            }

            std::shared_ptr<IOverrideSteeringWheelActionWriter> CreateOverrideSteeringWheelActionWriter() override
            {
                return std::make_shared<OverrideSteeringWheelActionImpl>();
            }

            std::shared_ptr<IOverrideThrottleActionWriter> CreateOverrideThrottleActionWriter() override
            {
                return std::make_shared<OverrideThrottleActionImpl>();
            }

            std::shared_ptr<IParameterActionWriter> CreateParameterActionWriter() override
            {
                return std::make_shared<ParameterActionImpl>();
            }

            std::shared_ptr<IParameterAddValueRuleWriter> CreateParameterAddValueRuleWriter() override
            {
                return std::make_shared<ParameterAddValueRuleImpl>();
            }

            std::shared_ptr<IParameterAssignmentWriter> CreateParameterAssignmentWriter() override
            {
                return std::make_shared<ParameterAssignmentImpl>();
            }

            std::shared_ptr<IParameterConditionWriter> CreateParameterConditionWriter() override
            {
                return std::make_shared<ParameterConditionImpl>();
            }

            std::shared_ptr<IParameterDeclarationWriter> CreateParameterDeclarationWriter() override
            {
                return std::make_shared<ParameterDeclarationImpl>();
            }

            std::shared_ptr<IParameterModifyActionWriter> CreateParameterModifyActionWriter() override
            {
                return std::make_shared<ParameterModifyActionImpl>();
            }

            std::shared_ptr<IParameterMultiplyByValueRuleWriter> CreateParameterMultiplyByValueRuleWriter() override
            {
                return std::make_shared<ParameterMultiplyByValueRuleImpl>();
            }

            std::shared_ptr<IParameterSetActionWriter> CreateParameterSetActionWriter() override
            {
                return std::make_shared<ParameterSetActionImpl>();
            }

            std::shared_ptr<IPedestrianWriter> CreatePedestrianWriter() override
            {
                return std::make_shared<PedestrianImpl>();
            }

            std::shared_ptr<IPedestrianCatalogLocationWriter> CreatePedestrianCatalogLocationWriter() override
            {
                return std::make_shared<PedestrianCatalogLocationImpl>();
            }

            std::shared_ptr<IPerformanceWriter> CreatePerformanceWriter() override
            {
                return std::make_shared<PerformanceImpl>();
            }

            std::shared_ptr<IPhaseWriter> CreatePhaseWriter() override
            {
                return std::make_shared<PhaseImpl>();
            }

            std::shared_ptr<IPolylineWriter> CreatePolylineWriter() override
            {
                return std::make_shared<PolylineImpl>();
            }

            std::shared_ptr<IPositionWriter> CreatePositionWriter() override
            {
                return std::make_shared<PositionImpl>();
            }

            std::shared_ptr<IPositionInLaneCoordinatesWriter> CreatePositionInLaneCoordinatesWriter() override
            {
                return std::make_shared<PositionInLaneCoordinatesImpl>();
            }

            std::shared_ptr<IPositionInRoadCoordinatesWriter> CreatePositionInRoadCoordinatesWriter() override
            {
                return std::make_shared<PositionInRoadCoordinatesImpl>();
            }

            std::shared_ptr<IPositionOfCurrentEntityWriter> CreatePositionOfCurrentEntityWriter() override
            {
                return std::make_shared<PositionOfCurrentEntityImpl>();
            }

            std::shared_ptr<IPrecipitationWriter> CreatePrecipitationWriter() override
            {
                return std::make_shared<PrecipitationImpl>();
            }

            std::shared_ptr<IPrivateWriter> CreatePrivateWriter() override
            {
                return std::make_shared<PrivateImpl>();
            }

            std::shared_ptr<IPrivateActionWriter> CreatePrivateActionWriter() override
            {
                return std::make_shared<PrivateActionImpl>();
            }

            std::shared_ptr<IPropertiesWriter> CreatePropertiesWriter() override
            {
                return std::make_shared<PropertiesImpl>();
            }

            std::shared_ptr<IPropertyWriter> CreatePropertyWriter() override
            {
                return std::make_shared<PropertyImpl>();
            }

            std::shared_ptr<IReachPositionConditionWriter> CreateReachPositionConditionWriter() override
            {
                return std::make_shared<ReachPositionConditionImpl>();
            }

            std::shared_ptr<IRelativeDistanceConditionWriter> CreateRelativeDistanceConditionWriter() override
            {
                return std::make_shared<RelativeDistanceConditionImpl>();
            }

            std::shared_ptr<IRelativeLanePositionWriter> CreateRelativeLanePositionWriter() override
            {
                return std::make_shared<RelativeLanePositionImpl>();
            }

            std::shared_ptr<IRelativeObjectPositionWriter> CreateRelativeObjectPositionWriter() override
            {
                return std::make_shared<RelativeObjectPositionImpl>();
            }

            std::shared_ptr<IRelativeRoadPositionWriter> CreateRelativeRoadPositionWriter() override
            {
                return std::make_shared<RelativeRoadPositionImpl>();
            }

            std::shared_ptr<IRelativeSpeedConditionWriter> CreateRelativeSpeedConditionWriter() override
            {
                return std::make_shared<RelativeSpeedConditionImpl>();
            }

            std::shared_ptr<IRelativeSpeedToMasterWriter> CreateRelativeSpeedToMasterWriter() override
            {
                return std::make_shared<RelativeSpeedToMasterImpl>();
            }

            std::shared_ptr<IRelativeTargetLaneWriter> CreateRelativeTargetLaneWriter() override
            {
                return std::make_shared<RelativeTargetLaneImpl>();
            }

            std::shared_ptr<IRelativeTargetLaneOffsetWriter> CreateRelativeTargetLaneOffsetWriter() override
            {
                return std::make_shared<RelativeTargetLaneOffsetImpl>();
            }

            std::shared_ptr<IRelativeTargetSpeedWriter> CreateRelativeTargetSpeedWriter() override
            {
                return std::make_shared<RelativeTargetSpeedImpl>();
            }

            std::shared_ptr<IRelativeWorldPositionWriter> CreateRelativeWorldPositionWriter() override
            {
                return std::make_shared<RelativeWorldPositionImpl>();
            }

            std::shared_ptr<IRoadConditionWriter> CreateRoadConditionWriter() override
            {
                return std::make_shared<RoadConditionImpl>();
            }

            std::shared_ptr<IRoadNetworkWriter> CreateRoadNetworkWriter() override
            {
                return std::make_shared<RoadNetworkImpl>();
            }

            std::shared_ptr<IRoadPositionWriter> CreateRoadPositionWriter() override
            {
                return std::make_shared<RoadPositionImpl>();
            }

            std::shared_ptr<IRouteWriter> CreateRouteWriter() override
            {
                return std::make_shared<RouteImpl>();
            }

            std::shared_ptr<IRouteCatalogLocationWriter> CreateRouteCatalogLocationWriter() override
            {
                return std::make_shared<RouteCatalogLocationImpl>();
            }

            std::shared_ptr<IRoutePositionWriter> CreateRoutePositionWriter() override
            {
                return std::make_shared<RoutePositionImpl>();
            }

            std::shared_ptr<IRouteRefWriter> CreateRouteRefWriter() override
            {
                return std::make_shared<RouteRefImpl>();
            }

            std::shared_ptr<IRoutingActionWriter> CreateRoutingActionWriter() override
            {
                return std::make_shared<RoutingActionImpl>();
            }

            std::shared_ptr<IScenarioDefinitionWriter> CreateScenarioDefinitionWriter() override
            {
                return std::make_shared<ScenarioDefinitionImpl>();
            }

            std::shared_ptr<IScenarioObjectWriter> CreateScenarioObjectWriter() override
            {
                return std::make_shared<ScenarioObjectImpl>();
            }

            std::shared_ptr<ISelectedEntitiesWriter> CreateSelectedEntitiesWriter() override
            {
                return std::make_shared<SelectedEntitiesImpl>();
            }

            std::shared_ptr<IShapeWriter> CreateShapeWriter() override
            {
                return std::make_shared<ShapeImpl>();
            }

            std::shared_ptr<ISimulationTimeConditionWriter> CreateSimulationTimeConditionWriter() override
            {
                return std::make_shared<SimulationTimeConditionImpl>();
            }

            std::shared_ptr<ISpeedActionWriter> CreateSpeedActionWriter() override
            {
                return std::make_shared<SpeedActionImpl>();
            }

            std::shared_ptr<ISpeedActionTargetWriter> CreateSpeedActionTargetWriter() override
            {
                return std::make_shared<SpeedActionTargetImpl>();
            }

            std::shared_ptr<ISpeedConditionWriter> CreateSpeedConditionWriter() override
            {
                return std::make_shared<SpeedConditionImpl>();
            }

            std::shared_ptr<IStandStillConditionWriter> CreateStandStillConditionWriter() override
            {
                return std::make_shared<StandStillConditionImpl>();
            }

            std::shared_ptr<IStoryWriter> CreateStoryWriter() override
            {
                return std::make_shared<StoryImpl>();
            }

            std::shared_ptr<IStoryboardWriter> CreateStoryboardWriter() override
            {
                return std::make_shared<StoryboardImpl>();
            }

            std::shared_ptr<IStoryboardElementStateConditionWriter> CreateStoryboardElementStateConditionWriter() override
            {
                return std::make_shared<StoryboardElementStateConditionImpl>();
            }

            std::shared_ptr<ISunWriter> CreateSunWriter() override
            {
                return std::make_shared<SunImpl>();
            }

            std::shared_ptr<ISynchronizeActionWriter> CreateSynchronizeActionWriter() override
            {
                return std::make_shared<SynchronizeActionImpl>();
            }

            std::shared_ptr<ITeleportActionWriter> CreateTeleportActionWriter() override
            {
                return std::make_shared<TeleportActionImpl>();
            }

            std::shared_ptr<ITimeHeadwayConditionWriter> CreateTimeHeadwayConditionWriter() override
            {
                return std::make_shared<TimeHeadwayConditionImpl>();
            }

            std::shared_ptr<ITimeOfDayWriter> CreateTimeOfDayWriter() override
            {
                return std::make_shared<TimeOfDayImpl>();
            }

            std::shared_ptr<ITimeOfDayConditionWriter> CreateTimeOfDayConditionWriter() override
            {
                return std::make_shared<TimeOfDayConditionImpl>();
            }

            std::shared_ptr<ITimeReferenceWriter> CreateTimeReferenceWriter() override
            {
                return std::make_shared<TimeReferenceImpl>();
            }

            std::shared_ptr<ITimeToCollisionConditionWriter> CreateTimeToCollisionConditionWriter() override
            {
                return std::make_shared<TimeToCollisionConditionImpl>();
            }

            std::shared_ptr<ITimeToCollisionConditionTargetWriter> CreateTimeToCollisionConditionTargetWriter() override
            {
                return std::make_shared<TimeToCollisionConditionTargetImpl>();
            }

            std::shared_ptr<ITimingWriter> CreateTimingWriter() override
            {
                return std::make_shared<TimingImpl>();
            }

            std::shared_ptr<ITrafficActionWriter> CreateTrafficActionWriter() override
            {
                return std::make_shared<TrafficActionImpl>();
            }

            std::shared_ptr<ITrafficDefinitionWriter> CreateTrafficDefinitionWriter() override
            {
                return std::make_shared<TrafficDefinitionImpl>();
            }

            std::shared_ptr<ITrafficSignalActionWriter> CreateTrafficSignalActionWriter() override
            {
                return std::make_shared<TrafficSignalActionImpl>();
            }

            std::shared_ptr<ITrafficSignalConditionWriter> CreateTrafficSignalConditionWriter() override
            {
                return std::make_shared<TrafficSignalConditionImpl>();
            }

            std::shared_ptr<ITrafficSignalControllerWriter> CreateTrafficSignalControllerWriter() override
            {
                return std::make_shared<TrafficSignalControllerImpl>();
            }

            std::shared_ptr<ITrafficSignalControllerActionWriter> CreateTrafficSignalControllerActionWriter() override
            {
                return std::make_shared<TrafficSignalControllerActionImpl>();
            }

            std::shared_ptr<ITrafficSignalControllerConditionWriter> CreateTrafficSignalControllerConditionWriter() override
            {
                return std::make_shared<TrafficSignalControllerConditionImpl>();
            }

            std::shared_ptr<ITrafficSignalStateWriter> CreateTrafficSignalStateWriter() override
            {
                return std::make_shared<TrafficSignalStateImpl>();
            }

            std::shared_ptr<ITrafficSignalStateActionWriter> CreateTrafficSignalStateActionWriter() override
            {
                return std::make_shared<TrafficSignalStateActionImpl>();
            }

            std::shared_ptr<ITrafficSinkActionWriter> CreateTrafficSinkActionWriter() override
            {
                return std::make_shared<TrafficSinkActionImpl>();
            }

            std::shared_ptr<ITrafficSourceActionWriter> CreateTrafficSourceActionWriter() override
            {
                return std::make_shared<TrafficSourceActionImpl>();
            }

            std::shared_ptr<ITrafficSwarmActionWriter> CreateTrafficSwarmActionWriter() override
            {
                return std::make_shared<TrafficSwarmActionImpl>();
            }

            std::shared_ptr<ITrajectoryWriter> CreateTrajectoryWriter() override
            {
                return std::make_shared<TrajectoryImpl>();
            }

            std::shared_ptr<ITrajectoryCatalogLocationWriter> CreateTrajectoryCatalogLocationWriter() override
            {
                return std::make_shared<TrajectoryCatalogLocationImpl>();
            }

            std::shared_ptr<ITrajectoryFollowingModeWriter> CreateTrajectoryFollowingModeWriter() override
            {
                return std::make_shared<TrajectoryFollowingModeImpl>();
            }

            std::shared_ptr<ITransitionDynamicsWriter> CreateTransitionDynamicsWriter() override
            {
                return std::make_shared<TransitionDynamicsImpl>();
            }

            std::shared_ptr<ITraveledDistanceConditionWriter> CreateTraveledDistanceConditionWriter() override
            {
                return std::make_shared<TraveledDistanceConditionImpl>();
            }

            std::shared_ptr<ITriggerWriter> CreateTriggerWriter() override
            {
                return std::make_shared<TriggerImpl>();
            }

            std::shared_ptr<ITriggeringEntitiesWriter> CreateTriggeringEntitiesWriter() override
            {
                return std::make_shared<TriggeringEntitiesImpl>();
            }

            std::shared_ptr<IUserDefinedActionWriter> CreateUserDefinedActionWriter() override
            {
                return std::make_shared<UserDefinedActionImpl>();
            }

            std::shared_ptr<IUserDefinedValueConditionWriter> CreateUserDefinedValueConditionWriter() override
            {
                return std::make_shared<UserDefinedValueConditionImpl>();
            }

            std::shared_ptr<IVehicleWriter> CreateVehicleWriter() override
            {
                return std::make_shared<VehicleImpl>();
            }

            std::shared_ptr<IVehicleCatalogLocationWriter> CreateVehicleCatalogLocationWriter() override
            {
                return std::make_shared<VehicleCatalogLocationImpl>();
            }

            std::shared_ptr<IVehicleCategoryDistributionWriter> CreateVehicleCategoryDistributionWriter() override
            {
                return std::make_shared<VehicleCategoryDistributionImpl>();
            }

            std::shared_ptr<IVehicleCategoryDistributionEntryWriter> CreateVehicleCategoryDistributionEntryWriter() override
            {
                return std::make_shared<VehicleCategoryDistributionEntryImpl>();
            }

            std::shared_ptr<IVertexWriter> CreateVertexWriter() override
            {
                return std::make_shared<VertexImpl>();
            }

            std::shared_ptr<IVisibilityActionWriter> CreateVisibilityActionWriter() override
            {
                return std::make_shared<VisibilityActionImpl>();
            }

            std::shared_ptr<IWaypointWriter> CreateWaypointWriter() override
            {
                return std::make_shared<WaypointImpl>();
            }

            std::shared_ptr<IWeatherWriter> CreateWeatherWriter() override
            {
                return std::make_shared<WeatherImpl>();
            }

            std::shared_ptr<IWorldPositionWriter> CreateWorldPositionWriter() override
            {
                return std::make_shared<WorldPositionImpl>();
            }
        };
    }
}
