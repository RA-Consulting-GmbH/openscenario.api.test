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
#include <memory>
#include "ApiClassWriterInterfacesV1_1.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * Implementation of IOpenScenarioWriterFactor
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOpenScenarioWriterFactory 
        {
        public:
            virtual std::shared_ptr<IAbsoluteSpeedWriter> CreateAbsoluteSpeedWriter() { return nullptr;}
            virtual std::shared_ptr<IAbsoluteTargetLaneWriter> CreateAbsoluteTargetLaneWriter() { return nullptr;}
            virtual std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> CreateAbsoluteTargetLaneOffsetWriter() { return nullptr;}
            virtual std::shared_ptr<IAbsoluteTargetSpeedWriter> CreateAbsoluteTargetSpeedWriter() { return nullptr;}
            virtual std::shared_ptr<IAccelerationConditionWriter> CreateAccelerationConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IAcquirePositionActionWriter> CreateAcquirePositionActionWriter() { return nullptr;}
            virtual std::shared_ptr<IActWriter> CreateActWriter() { return nullptr;}
            virtual std::shared_ptr<IActionWriter> CreateActionWriter() { return nullptr;}
            virtual std::shared_ptr<IActivateControllerActionWriter> CreateActivateControllerActionWriter() { return nullptr;}
            virtual std::shared_ptr<IActorsWriter> CreateActorsWriter() { return nullptr;}
            virtual std::shared_ptr<IAddEntityActionWriter> CreateAddEntityActionWriter() { return nullptr;}
            virtual std::shared_ptr<IAssignControllerActionWriter> CreateAssignControllerActionWriter() { return nullptr;}
            virtual std::shared_ptr<IAssignRouteActionWriter> CreateAssignRouteActionWriter() { return nullptr;}
            virtual std::shared_ptr<IAxleWriter> CreateAxleWriter() { return nullptr;}
            virtual std::shared_ptr<IAxlesWriter> CreateAxlesWriter() { return nullptr;}
            virtual std::shared_ptr<IBoundingBoxWriter> CreateBoundingBoxWriter() { return nullptr;}
            virtual std::shared_ptr<IByEntityConditionWriter> CreateByEntityConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IByObjectTypeWriter> CreateByObjectTypeWriter() { return nullptr;}
            virtual std::shared_ptr<IByTypeWriter> CreateByTypeWriter() { return nullptr;}
            virtual std::shared_ptr<IByValueConditionWriter> CreateByValueConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ICatalogWriter> CreateCatalogWriter() { return nullptr;}
            virtual std::shared_ptr<ICatalogDefinitionWriter> CreateCatalogDefinitionWriter() { return nullptr;}
            virtual std::shared_ptr<ICatalogLocationsWriter> CreateCatalogLocationsWriter() { return nullptr;}
            virtual std::shared_ptr<ICatalogReferenceWriter> CreateCatalogReferenceWriter() { return nullptr;}
            virtual std::shared_ptr<ICenterWriter> CreateCenterWriter() { return nullptr;}
            virtual std::shared_ptr<ICentralSwarmObjectWriter> CreateCentralSwarmObjectWriter() { return nullptr;}
            virtual std::shared_ptr<IClothoidWriter> CreateClothoidWriter() { return nullptr;}
            virtual std::shared_ptr<ICollisionConditionWriter> CreateCollisionConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IConditionWriter> CreateConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IConditionGroupWriter> CreateConditionGroupWriter() { return nullptr;}
            virtual std::shared_ptr<IControlPointWriter> CreateControlPointWriter() { return nullptr;}
            virtual std::shared_ptr<IControllerWriter> CreateControllerWriter() { return nullptr;}
            virtual std::shared_ptr<IControllerActionWriter> CreateControllerActionWriter() { return nullptr;}
            virtual std::shared_ptr<IControllerCatalogLocationWriter> CreateControllerCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IControllerDistributionWriter> CreateControllerDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IControllerDistributionEntryWriter> CreateControllerDistributionEntryWriter() { return nullptr;}
            virtual std::shared_ptr<ICustomCommandActionWriter> CreateCustomCommandActionWriter() { return nullptr;}
            virtual std::shared_ptr<IDeleteEntityActionWriter> CreateDeleteEntityActionWriter() { return nullptr;}
            virtual std::shared_ptr<IDeterministicWriter> CreateDeterministicWriter() { return nullptr;}
            virtual std::shared_ptr<IDeterministicMultiParameterDistributionWriter> CreateDeterministicMultiParameterDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IDeterministicMultiParameterDistributionTypeWriter> CreateDeterministicMultiParameterDistributionTypeWriter() { return nullptr;}
            virtual std::shared_ptr<IDeterministicParameterDistributionWriter> CreateDeterministicParameterDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IDeterministicSingleParameterDistributionWriter> CreateDeterministicSingleParameterDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IDeterministicSingleParameterDistributionTypeWriter> CreateDeterministicSingleParameterDistributionTypeWriter() { return nullptr;}
            virtual std::shared_ptr<IDimensionsWriter> CreateDimensionsWriter() { return nullptr;}
            virtual std::shared_ptr<IDirectoryWriter> CreateDirectoryWriter() { return nullptr;}
            virtual std::shared_ptr<IDistanceConditionWriter> CreateDistanceConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IDistributionDefinitionWriter> CreateDistributionDefinitionWriter() { return nullptr;}
            virtual std::shared_ptr<IDistributionRangeWriter> CreateDistributionRangeWriter() { return nullptr;}
            virtual std::shared_ptr<IDistributionSetWriter> CreateDistributionSetWriter() { return nullptr;}
            virtual std::shared_ptr<IDistributionSetElementWriter> CreateDistributionSetElementWriter() { return nullptr;}
            virtual std::shared_ptr<IDynamicConstraintsWriter> CreateDynamicConstraintsWriter() { return nullptr;}
            virtual std::shared_ptr<IEndOfRoadConditionWriter> CreateEndOfRoadConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IEntitiesWriter> CreateEntitiesWriter() { return nullptr;}
            virtual std::shared_ptr<IEntityActionWriter> CreateEntityActionWriter() { return nullptr;}
            virtual std::shared_ptr<IEntityConditionWriter> CreateEntityConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IEntityObjectWriter> CreateEntityObjectWriter() { return nullptr;}
            virtual std::shared_ptr<IEntityRefWriter> CreateEntityRefWriter() { return nullptr;}
            virtual std::shared_ptr<IEntitySelectionWriter> CreateEntitySelectionWriter() { return nullptr;}
            virtual std::shared_ptr<IEnvironmentWriter> CreateEnvironmentWriter() { return nullptr;}
            virtual std::shared_ptr<IEnvironmentActionWriter> CreateEnvironmentActionWriter() { return nullptr;}
            virtual std::shared_ptr<IEnvironmentCatalogLocationWriter> CreateEnvironmentCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IEventWriter> CreateEventWriter() { return nullptr;}
            virtual std::shared_ptr<IExternalObjectReferenceWriter> CreateExternalObjectReferenceWriter() { return nullptr;}
            virtual std::shared_ptr<IFileWriter> CreateFileWriter() { return nullptr;}
            virtual std::shared_ptr<IFileHeaderWriter> CreateFileHeaderWriter() { return nullptr;}
            virtual std::shared_ptr<IFinalSpeedWriter> CreateFinalSpeedWriter() { return nullptr;}
            virtual std::shared_ptr<IFogWriter> CreateFogWriter() { return nullptr;}
            virtual std::shared_ptr<IFollowTrajectoryActionWriter> CreateFollowTrajectoryActionWriter() { return nullptr;}
            virtual std::shared_ptr<IGeoPositionWriter> CreateGeoPositionWriter() { return nullptr;}
            virtual std::shared_ptr<IGlobalActionWriter> CreateGlobalActionWriter() { return nullptr;}
            virtual std::shared_ptr<IHistogramWriter> CreateHistogramWriter() { return nullptr;}
            virtual std::shared_ptr<IHistogramBinWriter> CreateHistogramBinWriter() { return nullptr;}
            virtual std::shared_ptr<IInRoutePositionWriter> CreateInRoutePositionWriter() { return nullptr;}
            virtual std::shared_ptr<IInfrastructureActionWriter> CreateInfrastructureActionWriter() { return nullptr;}
            virtual std::shared_ptr<IInitWriter> CreateInitWriter() { return nullptr;}
            virtual std::shared_ptr<IInitActionsWriter> CreateInitActionsWriter() { return nullptr;}
            virtual std::shared_ptr<IKnotWriter> CreateKnotWriter() { return nullptr;}
            virtual std::shared_ptr<ILaneChangeActionWriter> CreateLaneChangeActionWriter() { return nullptr;}
            virtual std::shared_ptr<ILaneChangeTargetWriter> CreateLaneChangeTargetWriter() { return nullptr;}
            virtual std::shared_ptr<ILaneOffsetActionWriter> CreateLaneOffsetActionWriter() { return nullptr;}
            virtual std::shared_ptr<ILaneOffsetActionDynamicsWriter> CreateLaneOffsetActionDynamicsWriter() { return nullptr;}
            virtual std::shared_ptr<ILaneOffsetTargetWriter> CreateLaneOffsetTargetWriter() { return nullptr;}
            virtual std::shared_ptr<ILanePositionWriter> CreateLanePositionWriter() { return nullptr;}
            virtual std::shared_ptr<ILateralActionWriter> CreateLateralActionWriter() { return nullptr;}
            virtual std::shared_ptr<ILateralDistanceActionWriter> CreateLateralDistanceActionWriter() { return nullptr;}
            virtual std::shared_ptr<ILicenseWriter> CreateLicenseWriter() { return nullptr;}
            virtual std::shared_ptr<ILongitudinalActionWriter> CreateLongitudinalActionWriter() { return nullptr;}
            virtual std::shared_ptr<ILongitudinalDistanceActionWriter> CreateLongitudinalDistanceActionWriter() { return nullptr;}
            virtual std::shared_ptr<IManeuverWriter> CreateManeuverWriter() { return nullptr;}
            virtual std::shared_ptr<IManeuverCatalogLocationWriter> CreateManeuverCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IManeuverGroupWriter> CreateManeuverGroupWriter() { return nullptr;}
            virtual std::shared_ptr<IMiscObjectWriter> CreateMiscObjectWriter() { return nullptr;}
            virtual std::shared_ptr<IMiscObjectCatalogLocationWriter> CreateMiscObjectCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IModifyRuleWriter> CreateModifyRuleWriter() { return nullptr;}
            virtual std::shared_ptr<INoneWriter> CreateNoneWriter() { return nullptr;}
            virtual std::shared_ptr<INormalDistributionWriter> CreateNormalDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<INurbsWriter> CreateNurbsWriter() { return nullptr;}
            virtual std::shared_ptr<IObjectControllerWriter> CreateObjectControllerWriter() { return nullptr;}
            virtual std::shared_ptr<IOffroadConditionWriter> CreateOffroadConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IOpenScenarioWriter> CreateOpenScenarioWriter() { return nullptr;}
            virtual std::shared_ptr<IOpenScenarioCategoryWriter> CreateOpenScenarioCategoryWriter() { return nullptr;}
            virtual std::shared_ptr<IOrientationWriter> CreateOrientationWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideBrakeActionWriter> CreateOverrideBrakeActionWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideClutchActionWriter> CreateOverrideClutchActionWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideControllerValueActionWriter> CreateOverrideControllerValueActionWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideGearActionWriter> CreateOverrideGearActionWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideParkingBrakeActionWriter> CreateOverrideParkingBrakeActionWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideSteeringWheelActionWriter> CreateOverrideSteeringWheelActionWriter() { return nullptr;}
            virtual std::shared_ptr<IOverrideThrottleActionWriter> CreateOverrideThrottleActionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterActionWriter> CreateParameterActionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterAddValueRuleWriter> CreateParameterAddValueRuleWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterAssignmentWriter> CreateParameterAssignmentWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterConditionWriter> CreateParameterConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterDeclarationWriter> CreateParameterDeclarationWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterModifyActionWriter> CreateParameterModifyActionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterMultiplyByValueRuleWriter> CreateParameterMultiplyByValueRuleWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterSetActionWriter> CreateParameterSetActionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterValueDistributionWriter> CreateParameterValueDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterValueDistributionDefinitionWriter> CreateParameterValueDistributionDefinitionWriter() { return nullptr;}
            virtual std::shared_ptr<IParameterValueSetWriter> CreateParameterValueSetWriter() { return nullptr;}
            virtual std::shared_ptr<IPedestrianWriter> CreatePedestrianWriter() { return nullptr;}
            virtual std::shared_ptr<IPedestrianCatalogLocationWriter> CreatePedestrianCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IPerformanceWriter> CreatePerformanceWriter() { return nullptr;}
            virtual std::shared_ptr<IPhaseWriter> CreatePhaseWriter() { return nullptr;}
            virtual std::shared_ptr<IPoissonDistributionWriter> CreatePoissonDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IPolylineWriter> CreatePolylineWriter() { return nullptr;}
            virtual std::shared_ptr<IPositionWriter> CreatePositionWriter() { return nullptr;}
            virtual std::shared_ptr<IPositionInLaneCoordinatesWriter> CreatePositionInLaneCoordinatesWriter() { return nullptr;}
            virtual std::shared_ptr<IPositionInRoadCoordinatesWriter> CreatePositionInRoadCoordinatesWriter() { return nullptr;}
            virtual std::shared_ptr<IPositionOfCurrentEntityWriter> CreatePositionOfCurrentEntityWriter() { return nullptr;}
            virtual std::shared_ptr<IPrecipitationWriter> CreatePrecipitationWriter() { return nullptr;}
            virtual std::shared_ptr<IPrivateWriter> CreatePrivateWriter() { return nullptr;}
            virtual std::shared_ptr<IPrivateActionWriter> CreatePrivateActionWriter() { return nullptr;}
            virtual std::shared_ptr<IProbabilityDistributionSetWriter> CreateProbabilityDistributionSetWriter() { return nullptr;}
            virtual std::shared_ptr<IProbabilityDistributionSetElementWriter> CreateProbabilityDistributionSetElementWriter() { return nullptr;}
            virtual std::shared_ptr<IPropertiesWriter> CreatePropertiesWriter() { return nullptr;}
            virtual std::shared_ptr<IPropertyWriter> CreatePropertyWriter() { return nullptr;}
            virtual std::shared_ptr<IRangeWriter> CreateRangeWriter() { return nullptr;}
            virtual std::shared_ptr<IReachPositionConditionWriter> CreateReachPositionConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeDistanceConditionWriter> CreateRelativeDistanceConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeLanePositionWriter> CreateRelativeLanePositionWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeObjectPositionWriter> CreateRelativeObjectPositionWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeRoadPositionWriter> CreateRelativeRoadPositionWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeSpeedConditionWriter> CreateRelativeSpeedConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeSpeedToMasterWriter> CreateRelativeSpeedToMasterWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeTargetLaneWriter> CreateRelativeTargetLaneWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeTargetLaneOffsetWriter> CreateRelativeTargetLaneOffsetWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeTargetSpeedWriter> CreateRelativeTargetSpeedWriter() { return nullptr;}
            virtual std::shared_ptr<IRelativeWorldPositionWriter> CreateRelativeWorldPositionWriter() { return nullptr;}
            virtual std::shared_ptr<IRoadConditionWriter> CreateRoadConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IRoadNetworkWriter> CreateRoadNetworkWriter() { return nullptr;}
            virtual std::shared_ptr<IRoadPositionWriter> CreateRoadPositionWriter() { return nullptr;}
            virtual std::shared_ptr<IRouteWriter> CreateRouteWriter() { return nullptr;}
            virtual std::shared_ptr<IRouteCatalogLocationWriter> CreateRouteCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IRoutePositionWriter> CreateRoutePositionWriter() { return nullptr;}
            virtual std::shared_ptr<IRouteRefWriter> CreateRouteRefWriter() { return nullptr;}
            virtual std::shared_ptr<IRoutingActionWriter> CreateRoutingActionWriter() { return nullptr;}
            virtual std::shared_ptr<IScenarioDefinitionWriter> CreateScenarioDefinitionWriter() { return nullptr;}
            virtual std::shared_ptr<IScenarioObjectWriter> CreateScenarioObjectWriter() { return nullptr;}
            virtual std::shared_ptr<ISelectedEntitiesWriter> CreateSelectedEntitiesWriter() { return nullptr;}
            virtual std::shared_ptr<IShapeWriter> CreateShapeWriter() { return nullptr;}
            virtual std::shared_ptr<ISimulationTimeConditionWriter> CreateSimulationTimeConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ISpeedActionWriter> CreateSpeedActionWriter() { return nullptr;}
            virtual std::shared_ptr<ISpeedActionTargetWriter> CreateSpeedActionTargetWriter() { return nullptr;}
            virtual std::shared_ptr<ISpeedConditionWriter> CreateSpeedConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IStandStillConditionWriter> CreateStandStillConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ISteadyStateWriter> CreateSteadyStateWriter() { return nullptr;}
            virtual std::shared_ptr<IStochasticWriter> CreateStochasticWriter() { return nullptr;}
            virtual std::shared_ptr<IStochasticDistributionWriter> CreateStochasticDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IStochasticDistributionTypeWriter> CreateStochasticDistributionTypeWriter() { return nullptr;}
            virtual std::shared_ptr<IStoryWriter> CreateStoryWriter() { return nullptr;}
            virtual std::shared_ptr<IStoryboardWriter> CreateStoryboardWriter() { return nullptr;}
            virtual std::shared_ptr<IStoryboardElementStateConditionWriter> CreateStoryboardElementStateConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ISunWriter> CreateSunWriter() { return nullptr;}
            virtual std::shared_ptr<ISynchronizeActionWriter> CreateSynchronizeActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITargetDistanceSteadyStateWriter> CreateTargetDistanceSteadyStateWriter() { return nullptr;}
            virtual std::shared_ptr<ITargetTimeSteadyStateWriter> CreateTargetTimeSteadyStateWriter() { return nullptr;}
            virtual std::shared_ptr<ITeleportActionWriter> CreateTeleportActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITimeHeadwayConditionWriter> CreateTimeHeadwayConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ITimeOfDayWriter> CreateTimeOfDayWriter() { return nullptr;}
            virtual std::shared_ptr<ITimeOfDayConditionWriter> CreateTimeOfDayConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ITimeReferenceWriter> CreateTimeReferenceWriter() { return nullptr;}
            virtual std::shared_ptr<ITimeToCollisionConditionWriter> CreateTimeToCollisionConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ITimeToCollisionConditionTargetWriter> CreateTimeToCollisionConditionTargetWriter() { return nullptr;}
            virtual std::shared_ptr<ITimingWriter> CreateTimingWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficActionWriter> CreateTrafficActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficDefinitionWriter> CreateTrafficDefinitionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalActionWriter> CreateTrafficSignalActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalConditionWriter> CreateTrafficSignalConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalControllerWriter> CreateTrafficSignalControllerWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalControllerActionWriter> CreateTrafficSignalControllerActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalControllerConditionWriter> CreateTrafficSignalControllerConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalStateWriter> CreateTrafficSignalStateWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSignalStateActionWriter> CreateTrafficSignalStateActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSinkActionWriter> CreateTrafficSinkActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSourceActionWriter> CreateTrafficSourceActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficStopActionWriter> CreateTrafficStopActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrafficSwarmActionWriter> CreateTrafficSwarmActionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrajectoryWriter> CreateTrajectoryWriter() { return nullptr;}
            virtual std::shared_ptr<ITrajectoryCatalogLocationWriter> CreateTrajectoryCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<ITrajectoryFollowingModeWriter> CreateTrajectoryFollowingModeWriter() { return nullptr;}
            virtual std::shared_ptr<ITrajectoryPositionWriter> CreateTrajectoryPositionWriter() { return nullptr;}
            virtual std::shared_ptr<ITrajectoryRefWriter> CreateTrajectoryRefWriter() { return nullptr;}
            virtual std::shared_ptr<ITransitionDynamicsWriter> CreateTransitionDynamicsWriter() { return nullptr;}
            virtual std::shared_ptr<ITraveledDistanceConditionWriter> CreateTraveledDistanceConditionWriter() { return nullptr;}
            virtual std::shared_ptr<ITriggerWriter> CreateTriggerWriter() { return nullptr;}
            virtual std::shared_ptr<ITriggeringEntitiesWriter> CreateTriggeringEntitiesWriter() { return nullptr;}
            virtual std::shared_ptr<IUniformDistributionWriter> CreateUniformDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IUsedAreaWriter> CreateUsedAreaWriter() { return nullptr;}
            virtual std::shared_ptr<IUserDefinedActionWriter> CreateUserDefinedActionWriter() { return nullptr;}
            virtual std::shared_ptr<IUserDefinedDistributionWriter> CreateUserDefinedDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IUserDefinedValueConditionWriter> CreateUserDefinedValueConditionWriter() { return nullptr;}
            virtual std::shared_ptr<IValueConstraintWriter> CreateValueConstraintWriter() { return nullptr;}
            virtual std::shared_ptr<IValueConstraintGroupWriter> CreateValueConstraintGroupWriter() { return nullptr;}
            virtual std::shared_ptr<IValueSetDistributionWriter> CreateValueSetDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IVehicleWriter> CreateVehicleWriter() { return nullptr;}
            virtual std::shared_ptr<IVehicleCatalogLocationWriter> CreateVehicleCatalogLocationWriter() { return nullptr;}
            virtual std::shared_ptr<IVehicleCategoryDistributionWriter> CreateVehicleCategoryDistributionWriter() { return nullptr;}
            virtual std::shared_ptr<IVehicleCategoryDistributionEntryWriter> CreateVehicleCategoryDistributionEntryWriter() { return nullptr;}
            virtual std::shared_ptr<IVertexWriter> CreateVertexWriter() { return nullptr;}
            virtual std::shared_ptr<IVisibilityActionWriter> CreateVisibilityActionWriter() { return nullptr;}
            virtual std::shared_ptr<IWaypointWriter> CreateWaypointWriter() { return nullptr;}
            virtual std::shared_ptr<IWeatherWriter> CreateWeatherWriter() { return nullptr;}
            virtual std::shared_ptr<IWindWriter> CreateWindWriter() { return nullptr;}
            virtual std::shared_ptr<IWorldPositionWriter> CreateWorldPositionWriter() { return nullptr;}

        };
    }
}
