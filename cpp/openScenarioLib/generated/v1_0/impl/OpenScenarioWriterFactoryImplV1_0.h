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
#include "ExportDefinitions.h"

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
        class OPENSCENARIOLIB_EXP OpenScenarioWriterFactoryImpl: public IOpenScenarioWriterFactory  
        {
        public:

            std::shared_ptr<IAbsoluteSpeedWriter> CreateAbsoluteSpeedWriter() override;

            std::shared_ptr<IAbsoluteTargetLaneWriter> CreateAbsoluteTargetLaneWriter() override;

            std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> CreateAbsoluteTargetLaneOffsetWriter() override;

            std::shared_ptr<IAbsoluteTargetSpeedWriter> CreateAbsoluteTargetSpeedWriter() override;

            std::shared_ptr<IAccelerationConditionWriter> CreateAccelerationConditionWriter() override;

            std::shared_ptr<IAcquirePositionActionWriter> CreateAcquirePositionActionWriter() override;

            std::shared_ptr<IActWriter> CreateActWriter() override;

            std::shared_ptr<IActionWriter> CreateActionWriter() override;

            std::shared_ptr<IActivateControllerActionWriter> CreateActivateControllerActionWriter() override;

            std::shared_ptr<IActorsWriter> CreateActorsWriter() override;

            std::shared_ptr<IAddEntityActionWriter> CreateAddEntityActionWriter() override;

            std::shared_ptr<IAssignControllerActionWriter> CreateAssignControllerActionWriter() override;

            std::shared_ptr<IAssignRouteActionWriter> CreateAssignRouteActionWriter() override;

            std::shared_ptr<IAxleWriter> CreateAxleWriter() override;

            std::shared_ptr<IAxlesWriter> CreateAxlesWriter() override;

            std::shared_ptr<IBoundingBoxWriter> CreateBoundingBoxWriter() override;

            std::shared_ptr<IByEntityConditionWriter> CreateByEntityConditionWriter() override;

            std::shared_ptr<IByObjectTypeWriter> CreateByObjectTypeWriter() override;

            std::shared_ptr<IByTypeWriter> CreateByTypeWriter() override;

            std::shared_ptr<IByValueConditionWriter> CreateByValueConditionWriter() override;

            std::shared_ptr<ICatalogWriter> CreateCatalogWriter() override;

            std::shared_ptr<ICatalogDefinitionWriter> CreateCatalogDefinitionWriter() override;

            std::shared_ptr<ICatalogLocationsWriter> CreateCatalogLocationsWriter() override;

            std::shared_ptr<ICatalogReferenceWriter> CreateCatalogReferenceWriter() override;

            std::shared_ptr<ICenterWriter> CreateCenterWriter() override;

            std::shared_ptr<ICentralSwarmObjectWriter> CreateCentralSwarmObjectWriter() override;

            std::shared_ptr<IClothoidWriter> CreateClothoidWriter() override;

            std::shared_ptr<ICollisionConditionWriter> CreateCollisionConditionWriter() override;

            std::shared_ptr<IConditionWriter> CreateConditionWriter() override;

            std::shared_ptr<IConditionGroupWriter> CreateConditionGroupWriter() override;

            std::shared_ptr<IControlPointWriter> CreateControlPointWriter() override;

            std::shared_ptr<IControllerWriter> CreateControllerWriter() override;

            std::shared_ptr<IControllerActionWriter> CreateControllerActionWriter() override;

            std::shared_ptr<IControllerCatalogLocationWriter> CreateControllerCatalogLocationWriter() override;

            std::shared_ptr<IControllerDistributionWriter> CreateControllerDistributionWriter() override;

            std::shared_ptr<IControllerDistributionEntryWriter> CreateControllerDistributionEntryWriter() override;

            std::shared_ptr<ICustomCommandActionWriter> CreateCustomCommandActionWriter() override;

            std::shared_ptr<IDeleteEntityActionWriter> CreateDeleteEntityActionWriter() override;

            std::shared_ptr<IDimensionsWriter> CreateDimensionsWriter() override;

            std::shared_ptr<IDirectoryWriter> CreateDirectoryWriter() override;

            std::shared_ptr<IDistanceConditionWriter> CreateDistanceConditionWriter() override;

            std::shared_ptr<IDynamicConstraintsWriter> CreateDynamicConstraintsWriter() override;

            std::shared_ptr<IEndOfRoadConditionWriter> CreateEndOfRoadConditionWriter() override;

            std::shared_ptr<IEntitiesWriter> CreateEntitiesWriter() override;

            std::shared_ptr<IEntityActionWriter> CreateEntityActionWriter() override;

            std::shared_ptr<IEntityConditionWriter> CreateEntityConditionWriter() override;

            std::shared_ptr<IEntityObjectWriter> CreateEntityObjectWriter() override;

            std::shared_ptr<IEntityRefWriter> CreateEntityRefWriter() override;

            std::shared_ptr<IEntitySelectionWriter> CreateEntitySelectionWriter() override;

            std::shared_ptr<IEnvironmentWriter> CreateEnvironmentWriter() override;

            std::shared_ptr<IEnvironmentActionWriter> CreateEnvironmentActionWriter() override;

            std::shared_ptr<IEnvironmentCatalogLocationWriter> CreateEnvironmentCatalogLocationWriter() override;

            std::shared_ptr<IEventWriter> CreateEventWriter() override;

            std::shared_ptr<IFileWriter> CreateFileWriter() override;

            std::shared_ptr<IFileHeaderWriter> CreateFileHeaderWriter() override;

            std::shared_ptr<IFinalSpeedWriter> CreateFinalSpeedWriter() override;

            std::shared_ptr<IFogWriter> CreateFogWriter() override;

            std::shared_ptr<IFollowTrajectoryActionWriter> CreateFollowTrajectoryActionWriter() override;

            std::shared_ptr<IGlobalActionWriter> CreateGlobalActionWriter() override;

            std::shared_ptr<IInRoutePositionWriter> CreateInRoutePositionWriter() override;

            std::shared_ptr<IInfrastructureActionWriter> CreateInfrastructureActionWriter() override;

            std::shared_ptr<IInitWriter> CreateInitWriter() override;

            std::shared_ptr<IInitActionsWriter> CreateInitActionsWriter() override;

            std::shared_ptr<IKnotWriter> CreateKnotWriter() override;

            std::shared_ptr<ILaneChangeActionWriter> CreateLaneChangeActionWriter() override;

            std::shared_ptr<ILaneChangeTargetWriter> CreateLaneChangeTargetWriter() override;

            std::shared_ptr<ILaneOffsetActionWriter> CreateLaneOffsetActionWriter() override;

            std::shared_ptr<ILaneOffsetActionDynamicsWriter> CreateLaneOffsetActionDynamicsWriter() override;

            std::shared_ptr<ILaneOffsetTargetWriter> CreateLaneOffsetTargetWriter() override;

            std::shared_ptr<ILanePositionWriter> CreateLanePositionWriter() override;

            std::shared_ptr<ILateralActionWriter> CreateLateralActionWriter() override;

            std::shared_ptr<ILateralDistanceActionWriter> CreateLateralDistanceActionWriter() override;

            std::shared_ptr<ILongitudinalActionWriter> CreateLongitudinalActionWriter() override;

            std::shared_ptr<ILongitudinalDistanceActionWriter> CreateLongitudinalDistanceActionWriter() override;

            std::shared_ptr<IManeuverWriter> CreateManeuverWriter() override;

            std::shared_ptr<IManeuverCatalogLocationWriter> CreateManeuverCatalogLocationWriter() override;

            std::shared_ptr<IManeuverGroupWriter> CreateManeuverGroupWriter() override;

            std::shared_ptr<IMiscObjectWriter> CreateMiscObjectWriter() override;

            std::shared_ptr<IMiscObjectCatalogLocationWriter> CreateMiscObjectCatalogLocationWriter() override;

            std::shared_ptr<IModifyRuleWriter> CreateModifyRuleWriter() override;

            std::shared_ptr<INoneWriter> CreateNoneWriter() override;

            std::shared_ptr<INurbsWriter> CreateNurbsWriter() override;

            std::shared_ptr<IObjectControllerWriter> CreateObjectControllerWriter() override;

            std::shared_ptr<IOffroadConditionWriter> CreateOffroadConditionWriter() override;

            std::shared_ptr<IOpenScenarioWriter> CreateOpenScenarioWriter() override;

            std::shared_ptr<IOpenScenarioCategoryWriter> CreateOpenScenarioCategoryWriter() override;

            std::shared_ptr<IOrientationWriter> CreateOrientationWriter() override;

            std::shared_ptr<IOverrideBrakeActionWriter> CreateOverrideBrakeActionWriter() override;

            std::shared_ptr<IOverrideClutchActionWriter> CreateOverrideClutchActionWriter() override;

            std::shared_ptr<IOverrideControllerValueActionWriter> CreateOverrideControllerValueActionWriter() override;

            std::shared_ptr<IOverrideGearActionWriter> CreateOverrideGearActionWriter() override;

            std::shared_ptr<IOverrideParkingBrakeActionWriter> CreateOverrideParkingBrakeActionWriter() override;

            std::shared_ptr<IOverrideSteeringWheelActionWriter> CreateOverrideSteeringWheelActionWriter() override;

            std::shared_ptr<IOverrideThrottleActionWriter> CreateOverrideThrottleActionWriter() override;

            std::shared_ptr<IParameterActionWriter> CreateParameterActionWriter() override;

            std::shared_ptr<IParameterAddValueRuleWriter> CreateParameterAddValueRuleWriter() override;

            std::shared_ptr<IParameterAssignmentWriter> CreateParameterAssignmentWriter() override;

            std::shared_ptr<IParameterConditionWriter> CreateParameterConditionWriter() override;

            std::shared_ptr<IParameterDeclarationWriter> CreateParameterDeclarationWriter() override;

            std::shared_ptr<IParameterModifyActionWriter> CreateParameterModifyActionWriter() override;

            std::shared_ptr<IParameterMultiplyByValueRuleWriter> CreateParameterMultiplyByValueRuleWriter() override;

            std::shared_ptr<IParameterSetActionWriter> CreateParameterSetActionWriter() override;

            std::shared_ptr<IPedestrianWriter> CreatePedestrianWriter() override;

            std::shared_ptr<IPedestrianCatalogLocationWriter> CreatePedestrianCatalogLocationWriter() override;

            std::shared_ptr<IPerformanceWriter> CreatePerformanceWriter() override;

            std::shared_ptr<IPhaseWriter> CreatePhaseWriter() override;

            std::shared_ptr<IPolylineWriter> CreatePolylineWriter() override;

            std::shared_ptr<IPositionWriter> CreatePositionWriter() override;

            std::shared_ptr<IPositionInLaneCoordinatesWriter> CreatePositionInLaneCoordinatesWriter() override;

            std::shared_ptr<IPositionInRoadCoordinatesWriter> CreatePositionInRoadCoordinatesWriter() override;

            std::shared_ptr<IPositionOfCurrentEntityWriter> CreatePositionOfCurrentEntityWriter() override;

            std::shared_ptr<IPrecipitationWriter> CreatePrecipitationWriter() override;

            std::shared_ptr<IPrivateWriter> CreatePrivateWriter() override;

            std::shared_ptr<IPrivateActionWriter> CreatePrivateActionWriter() override;

            std::shared_ptr<IPropertiesWriter> CreatePropertiesWriter() override;

            std::shared_ptr<IPropertyWriter> CreatePropertyWriter() override;

            std::shared_ptr<IReachPositionConditionWriter> CreateReachPositionConditionWriter() override;

            std::shared_ptr<IRelativeDistanceConditionWriter> CreateRelativeDistanceConditionWriter() override;

            std::shared_ptr<IRelativeLanePositionWriter> CreateRelativeLanePositionWriter() override;

            std::shared_ptr<IRelativeObjectPositionWriter> CreateRelativeObjectPositionWriter() override;

            std::shared_ptr<IRelativeRoadPositionWriter> CreateRelativeRoadPositionWriter() override;

            std::shared_ptr<IRelativeSpeedConditionWriter> CreateRelativeSpeedConditionWriter() override;

            std::shared_ptr<IRelativeSpeedToMasterWriter> CreateRelativeSpeedToMasterWriter() override;

            std::shared_ptr<IRelativeTargetLaneWriter> CreateRelativeTargetLaneWriter() override;

            std::shared_ptr<IRelativeTargetLaneOffsetWriter> CreateRelativeTargetLaneOffsetWriter() override;

            std::shared_ptr<IRelativeTargetSpeedWriter> CreateRelativeTargetSpeedWriter() override;

            std::shared_ptr<IRelativeWorldPositionWriter> CreateRelativeWorldPositionWriter() override;

            std::shared_ptr<IRoadConditionWriter> CreateRoadConditionWriter() override;

            std::shared_ptr<IRoadNetworkWriter> CreateRoadNetworkWriter() override;

            std::shared_ptr<IRoadPositionWriter> CreateRoadPositionWriter() override;

            std::shared_ptr<IRouteWriter> CreateRouteWriter() override;

            std::shared_ptr<IRouteCatalogLocationWriter> CreateRouteCatalogLocationWriter() override;

            std::shared_ptr<IRoutePositionWriter> CreateRoutePositionWriter() override;

            std::shared_ptr<IRouteRefWriter> CreateRouteRefWriter() override;

            std::shared_ptr<IRoutingActionWriter> CreateRoutingActionWriter() override;

            std::shared_ptr<IScenarioDefinitionWriter> CreateScenarioDefinitionWriter() override;

            std::shared_ptr<IScenarioObjectWriter> CreateScenarioObjectWriter() override;

            std::shared_ptr<ISelectedEntitiesWriter> CreateSelectedEntitiesWriter() override;

            std::shared_ptr<IShapeWriter> CreateShapeWriter() override;

            std::shared_ptr<ISimulationTimeConditionWriter> CreateSimulationTimeConditionWriter() override;

            std::shared_ptr<ISpeedActionWriter> CreateSpeedActionWriter() override;

            std::shared_ptr<ISpeedActionTargetWriter> CreateSpeedActionTargetWriter() override;

            std::shared_ptr<ISpeedConditionWriter> CreateSpeedConditionWriter() override;

            std::shared_ptr<IStandStillConditionWriter> CreateStandStillConditionWriter() override;

            std::shared_ptr<IStoryWriter> CreateStoryWriter() override;

            std::shared_ptr<IStoryboardWriter> CreateStoryboardWriter() override;

            std::shared_ptr<IStoryboardElementStateConditionWriter> CreateStoryboardElementStateConditionWriter() override;

            std::shared_ptr<ISunWriter> CreateSunWriter() override;

            std::shared_ptr<ISynchronizeActionWriter> CreateSynchronizeActionWriter() override;

            std::shared_ptr<ITeleportActionWriter> CreateTeleportActionWriter() override;

            std::shared_ptr<ITimeHeadwayConditionWriter> CreateTimeHeadwayConditionWriter() override;

            std::shared_ptr<ITimeOfDayWriter> CreateTimeOfDayWriter() override;

            std::shared_ptr<ITimeOfDayConditionWriter> CreateTimeOfDayConditionWriter() override;

            std::shared_ptr<ITimeReferenceWriter> CreateTimeReferenceWriter() override;

            std::shared_ptr<ITimeToCollisionConditionWriter> CreateTimeToCollisionConditionWriter() override;

            std::shared_ptr<ITimeToCollisionConditionTargetWriter> CreateTimeToCollisionConditionTargetWriter() override;

            std::shared_ptr<ITimingWriter> CreateTimingWriter() override;

            std::shared_ptr<ITrafficActionWriter> CreateTrafficActionWriter() override;

            std::shared_ptr<ITrafficDefinitionWriter> CreateTrafficDefinitionWriter() override;

            std::shared_ptr<ITrafficSignalActionWriter> CreateTrafficSignalActionWriter() override;

            std::shared_ptr<ITrafficSignalConditionWriter> CreateTrafficSignalConditionWriter() override;

            std::shared_ptr<ITrafficSignalControllerWriter> CreateTrafficSignalControllerWriter() override;

            std::shared_ptr<ITrafficSignalControllerActionWriter> CreateTrafficSignalControllerActionWriter() override;

            std::shared_ptr<ITrafficSignalControllerConditionWriter> CreateTrafficSignalControllerConditionWriter() override;

            std::shared_ptr<ITrafficSignalStateWriter> CreateTrafficSignalStateWriter() override;

            std::shared_ptr<ITrafficSignalStateActionWriter> CreateTrafficSignalStateActionWriter() override;

            std::shared_ptr<ITrafficSinkActionWriter> CreateTrafficSinkActionWriter() override;

            std::shared_ptr<ITrafficSourceActionWriter> CreateTrafficSourceActionWriter() override;

            std::shared_ptr<ITrafficSwarmActionWriter> CreateTrafficSwarmActionWriter() override;

            std::shared_ptr<ITrajectoryWriter> CreateTrajectoryWriter() override;

            std::shared_ptr<ITrajectoryCatalogLocationWriter> CreateTrajectoryCatalogLocationWriter() override;

            std::shared_ptr<ITrajectoryFollowingModeWriter> CreateTrajectoryFollowingModeWriter() override;

            std::shared_ptr<ITransitionDynamicsWriter> CreateTransitionDynamicsWriter() override;

            std::shared_ptr<ITraveledDistanceConditionWriter> CreateTraveledDistanceConditionWriter() override;

            std::shared_ptr<ITriggerWriter> CreateTriggerWriter() override;

            std::shared_ptr<ITriggeringEntitiesWriter> CreateTriggeringEntitiesWriter() override;

            std::shared_ptr<IUserDefinedActionWriter> CreateUserDefinedActionWriter() override;

            std::shared_ptr<IUserDefinedValueConditionWriter> CreateUserDefinedValueConditionWriter() override;

            std::shared_ptr<IVehicleWriter> CreateVehicleWriter() override;

            std::shared_ptr<IVehicleCatalogLocationWriter> CreateVehicleCatalogLocationWriter() override;

            std::shared_ptr<IVehicleCategoryDistributionWriter> CreateVehicleCategoryDistributionWriter() override;

            std::shared_ptr<IVehicleCategoryDistributionEntryWriter> CreateVehicleCategoryDistributionEntryWriter() override;

            std::shared_ptr<IVertexWriter> CreateVertexWriter() override;

            std::shared_ptr<IVisibilityActionWriter> CreateVisibilityActionWriter() override;

            std::shared_ptr<IWaypointWriter> CreateWaypointWriter() override;

            std::shared_ptr<IWeatherWriter> CreateWeatherWriter() override;

            std::shared_ptr<IWorldPositionWriter> CreateWorldPositionWriter() override;
        };
    }
}
