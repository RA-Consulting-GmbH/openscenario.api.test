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
#include "ApiClassWriterInterfacesV1_2.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * Implementation of IOpenScenarioWriterFactor
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOpenScenarioWriterFactory 
        {
        public:
            virtual std::shared_ptr<IAbsoluteSpeedWriter> CreateAbsoluteSpeedWriter() = 0;
            virtual std::shared_ptr<IAbsoluteTargetLaneWriter> CreateAbsoluteTargetLaneWriter() = 0;
            virtual std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> CreateAbsoluteTargetLaneOffsetWriter() = 0;
            virtual std::shared_ptr<IAbsoluteTargetSpeedWriter> CreateAbsoluteTargetSpeedWriter() = 0;
            virtual std::shared_ptr<IAccelerationConditionWriter> CreateAccelerationConditionWriter() = 0;
            virtual std::shared_ptr<IAcquirePositionActionWriter> CreateAcquirePositionActionWriter() = 0;
            virtual std::shared_ptr<IActWriter> CreateActWriter() = 0;
            virtual std::shared_ptr<IActionWriter> CreateActionWriter() = 0;
            virtual std::shared_ptr<IActivateControllerActionWriter> CreateActivateControllerActionWriter() = 0;
            virtual std::shared_ptr<IActorsWriter> CreateActorsWriter() = 0;
            virtual std::shared_ptr<IAddEntityActionWriter> CreateAddEntityActionWriter() = 0;
            virtual std::shared_ptr<IAnimationActionWriter> CreateAnimationActionWriter() = 0;
            virtual std::shared_ptr<IAnimationFileWriter> CreateAnimationFileWriter() = 0;
            virtual std::shared_ptr<IAnimationStateWriter> CreateAnimationStateWriter() = 0;
            virtual std::shared_ptr<IAnimationTypeWriter> CreateAnimationTypeWriter() = 0;
            virtual std::shared_ptr<IAppearanceActionWriter> CreateAppearanceActionWriter() = 0;
            virtual std::shared_ptr<IAssignControllerActionWriter> CreateAssignControllerActionWriter() = 0;
            virtual std::shared_ptr<IAssignRouteActionWriter> CreateAssignRouteActionWriter() = 0;
            virtual std::shared_ptr<IAutomaticGearWriter> CreateAutomaticGearWriter() = 0;
            virtual std::shared_ptr<IAxleWriter> CreateAxleWriter() = 0;
            virtual std::shared_ptr<IAxlesWriter> CreateAxlesWriter() = 0;
            virtual std::shared_ptr<IBoundingBoxWriter> CreateBoundingBoxWriter() = 0;
            virtual std::shared_ptr<IBrakeWriter> CreateBrakeWriter() = 0;
            virtual std::shared_ptr<IBrakeInputWriter> CreateBrakeInputWriter() = 0;
            virtual std::shared_ptr<IByEntityConditionWriter> CreateByEntityConditionWriter() = 0;
            virtual std::shared_ptr<IByObjectTypeWriter> CreateByObjectTypeWriter() = 0;
            virtual std::shared_ptr<IByTypeWriter> CreateByTypeWriter() = 0;
            virtual std::shared_ptr<IByValueConditionWriter> CreateByValueConditionWriter() = 0;
            virtual std::shared_ptr<ICatalogWriter> CreateCatalogWriter() = 0;
            virtual std::shared_ptr<ICatalogDefinitionWriter> CreateCatalogDefinitionWriter() = 0;
            virtual std::shared_ptr<ICatalogLocationsWriter> CreateCatalogLocationsWriter() = 0;
            virtual std::shared_ptr<ICatalogReferenceWriter> CreateCatalogReferenceWriter() = 0;
            virtual std::shared_ptr<ICenterWriter> CreateCenterWriter() = 0;
            virtual std::shared_ptr<ICentralSwarmObjectWriter> CreateCentralSwarmObjectWriter() = 0;
            virtual std::shared_ptr<IClothoidWriter> CreateClothoidWriter() = 0;
            virtual std::shared_ptr<ICollisionConditionWriter> CreateCollisionConditionWriter() = 0;
            virtual std::shared_ptr<IColorWriter> CreateColorWriter() = 0;
            virtual std::shared_ptr<IColorCmykWriter> CreateColorCmykWriter() = 0;
            virtual std::shared_ptr<IColorRgbWriter> CreateColorRgbWriter() = 0;
            virtual std::shared_ptr<IComponentAnimationWriter> CreateComponentAnimationWriter() = 0;
            virtual std::shared_ptr<IConditionWriter> CreateConditionWriter() = 0;
            virtual std::shared_ptr<IConditionGroupWriter> CreateConditionGroupWriter() = 0;
            virtual std::shared_ptr<IControlPointWriter> CreateControlPointWriter() = 0;
            virtual std::shared_ptr<IControllerWriter> CreateControllerWriter() = 0;
            virtual std::shared_ptr<IControllerActionWriter> CreateControllerActionWriter() = 0;
            virtual std::shared_ptr<IControllerCatalogLocationWriter> CreateControllerCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IControllerDistributionWriter> CreateControllerDistributionWriter() = 0;
            virtual std::shared_ptr<IControllerDistributionEntryWriter> CreateControllerDistributionEntryWriter() = 0;
            virtual std::shared_ptr<ICustomCommandActionWriter> CreateCustomCommandActionWriter() = 0;
            virtual std::shared_ptr<ICustomContentWriter> CreateCustomContentWriter() = 0;
            virtual std::shared_ptr<IDeleteEntityActionWriter> CreateDeleteEntityActionWriter() = 0;
            virtual std::shared_ptr<IDeterministicWriter> CreateDeterministicWriter() = 0;
            virtual std::shared_ptr<IDeterministicMultiParameterDistributionWriter> CreateDeterministicMultiParameterDistributionWriter() = 0;
            virtual std::shared_ptr<IDeterministicMultiParameterDistributionTypeWriter> CreateDeterministicMultiParameterDistributionTypeWriter() = 0;
            virtual std::shared_ptr<IDeterministicParameterDistributionWriter> CreateDeterministicParameterDistributionWriter() = 0;
            virtual std::shared_ptr<IDeterministicSingleParameterDistributionWriter> CreateDeterministicSingleParameterDistributionWriter() = 0;
            virtual std::shared_ptr<IDeterministicSingleParameterDistributionTypeWriter> CreateDeterministicSingleParameterDistributionTypeWriter() = 0;
            virtual std::shared_ptr<IDimensionsWriter> CreateDimensionsWriter() = 0;
            virtual std::shared_ptr<IDirectionOfTravelDistributionWriter> CreateDirectionOfTravelDistributionWriter() = 0;
            virtual std::shared_ptr<IDirectoryWriter> CreateDirectoryWriter() = 0;
            virtual std::shared_ptr<IDistanceConditionWriter> CreateDistanceConditionWriter() = 0;
            virtual std::shared_ptr<IDistributionDefinitionWriter> CreateDistributionDefinitionWriter() = 0;
            virtual std::shared_ptr<IDistributionRangeWriter> CreateDistributionRangeWriter() = 0;
            virtual std::shared_ptr<IDistributionSetWriter> CreateDistributionSetWriter() = 0;
            virtual std::shared_ptr<IDistributionSetElementWriter> CreateDistributionSetElementWriter() = 0;
            virtual std::shared_ptr<IDomeImageWriter> CreateDomeImageWriter() = 0;
            virtual std::shared_ptr<IDynamicConstraintsWriter> CreateDynamicConstraintsWriter() = 0;
            virtual std::shared_ptr<IEndOfRoadConditionWriter> CreateEndOfRoadConditionWriter() = 0;
            virtual std::shared_ptr<IEntitiesWriter> CreateEntitiesWriter() = 0;
            virtual std::shared_ptr<IEntityActionWriter> CreateEntityActionWriter() = 0;
            virtual std::shared_ptr<IEntityConditionWriter> CreateEntityConditionWriter() = 0;
            virtual std::shared_ptr<IEntityObjectWriter> CreateEntityObjectWriter() = 0;
            virtual std::shared_ptr<IEntityRefWriter> CreateEntityRefWriter() = 0;
            virtual std::shared_ptr<IEntitySelectionWriter> CreateEntitySelectionWriter() = 0;
            virtual std::shared_ptr<IEnvironmentWriter> CreateEnvironmentWriter() = 0;
            virtual std::shared_ptr<IEnvironmentActionWriter> CreateEnvironmentActionWriter() = 0;
            virtual std::shared_ptr<IEnvironmentCatalogLocationWriter> CreateEnvironmentCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IEventWriter> CreateEventWriter() = 0;
            virtual std::shared_ptr<IExternalObjectReferenceWriter> CreateExternalObjectReferenceWriter() = 0;
            virtual std::shared_ptr<IFileWriter> CreateFileWriter() = 0;
            virtual std::shared_ptr<IFileHeaderWriter> CreateFileHeaderWriter() = 0;
            virtual std::shared_ptr<IFinalSpeedWriter> CreateFinalSpeedWriter() = 0;
            virtual std::shared_ptr<IFogWriter> CreateFogWriter() = 0;
            virtual std::shared_ptr<IFollowTrajectoryActionWriter> CreateFollowTrajectoryActionWriter() = 0;
            virtual std::shared_ptr<IGearWriter> CreateGearWriter() = 0;
            virtual std::shared_ptr<IGeoPositionWriter> CreateGeoPositionWriter() = 0;
            virtual std::shared_ptr<IGlobalActionWriter> CreateGlobalActionWriter() = 0;
            virtual std::shared_ptr<IHistogramWriter> CreateHistogramWriter() = 0;
            virtual std::shared_ptr<IHistogramBinWriter> CreateHistogramBinWriter() = 0;
            virtual std::shared_ptr<IInRoutePositionWriter> CreateInRoutePositionWriter() = 0;
            virtual std::shared_ptr<IInfrastructureActionWriter> CreateInfrastructureActionWriter() = 0;
            virtual std::shared_ptr<IInitWriter> CreateInitWriter() = 0;
            virtual std::shared_ptr<IInitActionsWriter> CreateInitActionsWriter() = 0;
            virtual std::shared_ptr<IKnotWriter> CreateKnotWriter() = 0;
            virtual std::shared_ptr<ILaneChangeActionWriter> CreateLaneChangeActionWriter() = 0;
            virtual std::shared_ptr<ILaneChangeTargetWriter> CreateLaneChangeTargetWriter() = 0;
            virtual std::shared_ptr<ILaneOffsetActionWriter> CreateLaneOffsetActionWriter() = 0;
            virtual std::shared_ptr<ILaneOffsetActionDynamicsWriter> CreateLaneOffsetActionDynamicsWriter() = 0;
            virtual std::shared_ptr<ILaneOffsetTargetWriter> CreateLaneOffsetTargetWriter() = 0;
            virtual std::shared_ptr<ILanePositionWriter> CreateLanePositionWriter() = 0;
            virtual std::shared_ptr<ILateralActionWriter> CreateLateralActionWriter() = 0;
            virtual std::shared_ptr<ILateralDistanceActionWriter> CreateLateralDistanceActionWriter() = 0;
            virtual std::shared_ptr<ILicenseWriter> CreateLicenseWriter() = 0;
            virtual std::shared_ptr<ILightStateWriter> CreateLightStateWriter() = 0;
            virtual std::shared_ptr<ILightStateActionWriter> CreateLightStateActionWriter() = 0;
            virtual std::shared_ptr<ILightTypeWriter> CreateLightTypeWriter() = 0;
            virtual std::shared_ptr<ILongitudinalActionWriter> CreateLongitudinalActionWriter() = 0;
            virtual std::shared_ptr<ILongitudinalDistanceActionWriter> CreateLongitudinalDistanceActionWriter() = 0;
            virtual std::shared_ptr<IManeuverWriter> CreateManeuverWriter() = 0;
            virtual std::shared_ptr<IManeuverCatalogLocationWriter> CreateManeuverCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IManeuverGroupWriter> CreateManeuverGroupWriter() = 0;
            virtual std::shared_ptr<IManualGearWriter> CreateManualGearWriter() = 0;
            virtual std::shared_ptr<IMiscObjectWriter> CreateMiscObjectWriter() = 0;
            virtual std::shared_ptr<IMiscObjectCatalogLocationWriter> CreateMiscObjectCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IModifyRuleWriter> CreateModifyRuleWriter() = 0;
            virtual std::shared_ptr<INoneWriter> CreateNoneWriter() = 0;
            virtual std::shared_ptr<INormalDistributionWriter> CreateNormalDistributionWriter() = 0;
            virtual std::shared_ptr<INurbsWriter> CreateNurbsWriter() = 0;
            virtual std::shared_ptr<IObjectControllerWriter> CreateObjectControllerWriter() = 0;
            virtual std::shared_ptr<IOffroadConditionWriter> CreateOffroadConditionWriter() = 0;
            virtual std::shared_ptr<IOpenScenarioWriter> CreateOpenScenarioWriter() = 0;
            virtual std::shared_ptr<IOpenScenarioCategoryWriter> CreateOpenScenarioCategoryWriter() = 0;
            virtual std::shared_ptr<IOrientationWriter> CreateOrientationWriter() = 0;
            virtual std::shared_ptr<IOverrideBrakeActionWriter> CreateOverrideBrakeActionWriter() = 0;
            virtual std::shared_ptr<IOverrideClutchActionWriter> CreateOverrideClutchActionWriter() = 0;
            virtual std::shared_ptr<IOverrideControllerValueActionWriter> CreateOverrideControllerValueActionWriter() = 0;
            virtual std::shared_ptr<IOverrideGearActionWriter> CreateOverrideGearActionWriter() = 0;
            virtual std::shared_ptr<IOverrideParkingBrakeActionWriter> CreateOverrideParkingBrakeActionWriter() = 0;
            virtual std::shared_ptr<IOverrideSteeringWheelActionWriter> CreateOverrideSteeringWheelActionWriter() = 0;
            virtual std::shared_ptr<IOverrideThrottleActionWriter> CreateOverrideThrottleActionWriter() = 0;
            virtual std::shared_ptr<IParameterActionWriter> CreateParameterActionWriter() = 0;
            virtual std::shared_ptr<IParameterAddValueRuleWriter> CreateParameterAddValueRuleWriter() = 0;
            virtual std::shared_ptr<IParameterAssignmentWriter> CreateParameterAssignmentWriter() = 0;
            virtual std::shared_ptr<IParameterConditionWriter> CreateParameterConditionWriter() = 0;
            virtual std::shared_ptr<IParameterDeclarationWriter> CreateParameterDeclarationWriter() = 0;
            virtual std::shared_ptr<IParameterModifyActionWriter> CreateParameterModifyActionWriter() = 0;
            virtual std::shared_ptr<IParameterMultiplyByValueRuleWriter> CreateParameterMultiplyByValueRuleWriter() = 0;
            virtual std::shared_ptr<IParameterSetActionWriter> CreateParameterSetActionWriter() = 0;
            virtual std::shared_ptr<IParameterValueDistributionWriter> CreateParameterValueDistributionWriter() = 0;
            virtual std::shared_ptr<IParameterValueDistributionDefinitionWriter> CreateParameterValueDistributionDefinitionWriter() = 0;
            virtual std::shared_ptr<IParameterValueSetWriter> CreateParameterValueSetWriter() = 0;
            virtual std::shared_ptr<IPedestrianWriter> CreatePedestrianWriter() = 0;
            virtual std::shared_ptr<IPedestrianAnimationWriter> CreatePedestrianAnimationWriter() = 0;
            virtual std::shared_ptr<IPedestrianCatalogLocationWriter> CreatePedestrianCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IPedestrianGestureWriter> CreatePedestrianGestureWriter() = 0;
            virtual std::shared_ptr<IPerformanceWriter> CreatePerformanceWriter() = 0;
            virtual std::shared_ptr<IPhaseWriter> CreatePhaseWriter() = 0;
            virtual std::shared_ptr<IPoissonDistributionWriter> CreatePoissonDistributionWriter() = 0;
            virtual std::shared_ptr<IPolylineWriter> CreatePolylineWriter() = 0;
            virtual std::shared_ptr<IPositionWriter> CreatePositionWriter() = 0;
            virtual std::shared_ptr<IPositionInLaneCoordinatesWriter> CreatePositionInLaneCoordinatesWriter() = 0;
            virtual std::shared_ptr<IPositionInRoadCoordinatesWriter> CreatePositionInRoadCoordinatesWriter() = 0;
            virtual std::shared_ptr<IPositionOfCurrentEntityWriter> CreatePositionOfCurrentEntityWriter() = 0;
            virtual std::shared_ptr<IPrecipitationWriter> CreatePrecipitationWriter() = 0;
            virtual std::shared_ptr<IPrivateWriter> CreatePrivateWriter() = 0;
            virtual std::shared_ptr<IPrivateActionWriter> CreatePrivateActionWriter() = 0;
            virtual std::shared_ptr<IProbabilityDistributionSetWriter> CreateProbabilityDistributionSetWriter() = 0;
            virtual std::shared_ptr<IProbabilityDistributionSetElementWriter> CreateProbabilityDistributionSetElementWriter() = 0;
            virtual std::shared_ptr<IPropertiesWriter> CreatePropertiesWriter() = 0;
            virtual std::shared_ptr<IPropertyWriter> CreatePropertyWriter() = 0;
            virtual std::shared_ptr<IRangeWriter> CreateRangeWriter() = 0;
            virtual std::shared_ptr<IReachPositionConditionWriter> CreateReachPositionConditionWriter() = 0;
            virtual std::shared_ptr<IRelativeClearanceConditionWriter> CreateRelativeClearanceConditionWriter() = 0;
            virtual std::shared_ptr<IRelativeDistanceConditionWriter> CreateRelativeDistanceConditionWriter() = 0;
            virtual std::shared_ptr<IRelativeLanePositionWriter> CreateRelativeLanePositionWriter() = 0;
            virtual std::shared_ptr<IRelativeLaneRangeWriter> CreateRelativeLaneRangeWriter() = 0;
            virtual std::shared_ptr<IRelativeObjectPositionWriter> CreateRelativeObjectPositionWriter() = 0;
            virtual std::shared_ptr<IRelativeRoadPositionWriter> CreateRelativeRoadPositionWriter() = 0;
            virtual std::shared_ptr<IRelativeSpeedConditionWriter> CreateRelativeSpeedConditionWriter() = 0;
            virtual std::shared_ptr<IRelativeSpeedToMasterWriter> CreateRelativeSpeedToMasterWriter() = 0;
            virtual std::shared_ptr<IRelativeTargetLaneWriter> CreateRelativeTargetLaneWriter() = 0;
            virtual std::shared_ptr<IRelativeTargetLaneOffsetWriter> CreateRelativeTargetLaneOffsetWriter() = 0;
            virtual std::shared_ptr<IRelativeTargetSpeedWriter> CreateRelativeTargetSpeedWriter() = 0;
            virtual std::shared_ptr<IRelativeWorldPositionWriter> CreateRelativeWorldPositionWriter() = 0;
            virtual std::shared_ptr<IRoadConditionWriter> CreateRoadConditionWriter() = 0;
            virtual std::shared_ptr<IRoadNetworkWriter> CreateRoadNetworkWriter() = 0;
            virtual std::shared_ptr<IRoadPositionWriter> CreateRoadPositionWriter() = 0;
            virtual std::shared_ptr<IRouteWriter> CreateRouteWriter() = 0;
            virtual std::shared_ptr<IRouteCatalogLocationWriter> CreateRouteCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IRoutePositionWriter> CreateRoutePositionWriter() = 0;
            virtual std::shared_ptr<IRouteRefWriter> CreateRouteRefWriter() = 0;
            virtual std::shared_ptr<IRoutingActionWriter> CreateRoutingActionWriter() = 0;
            virtual std::shared_ptr<IScenarioDefinitionWriter> CreateScenarioDefinitionWriter() = 0;
            virtual std::shared_ptr<IScenarioObjectWriter> CreateScenarioObjectWriter() = 0;
            virtual std::shared_ptr<ISelectedEntitiesWriter> CreateSelectedEntitiesWriter() = 0;
            virtual std::shared_ptr<ISensorReferenceWriter> CreateSensorReferenceWriter() = 0;
            virtual std::shared_ptr<ISensorReferenceSetWriter> CreateSensorReferenceSetWriter() = 0;
            virtual std::shared_ptr<IShapeWriter> CreateShapeWriter() = 0;
            virtual std::shared_ptr<ISimulationTimeConditionWriter> CreateSimulationTimeConditionWriter() = 0;
            virtual std::shared_ptr<ISpeedActionWriter> CreateSpeedActionWriter() = 0;
            virtual std::shared_ptr<ISpeedActionTargetWriter> CreateSpeedActionTargetWriter() = 0;
            virtual std::shared_ptr<ISpeedConditionWriter> CreateSpeedConditionWriter() = 0;
            virtual std::shared_ptr<ISpeedProfileActionWriter> CreateSpeedProfileActionWriter() = 0;
            virtual std::shared_ptr<ISpeedProfileEntryWriter> CreateSpeedProfileEntryWriter() = 0;
            virtual std::shared_ptr<IStandStillConditionWriter> CreateStandStillConditionWriter() = 0;
            virtual std::shared_ptr<ISteadyStateWriter> CreateSteadyStateWriter() = 0;
            virtual std::shared_ptr<IStochasticWriter> CreateStochasticWriter() = 0;
            virtual std::shared_ptr<IStochasticDistributionWriter> CreateStochasticDistributionWriter() = 0;
            virtual std::shared_ptr<IStochasticDistributionTypeWriter> CreateStochasticDistributionTypeWriter() = 0;
            virtual std::shared_ptr<IStoryWriter> CreateStoryWriter() = 0;
            virtual std::shared_ptr<IStoryboardWriter> CreateStoryboardWriter() = 0;
            virtual std::shared_ptr<IStoryboardElementStateConditionWriter> CreateStoryboardElementStateConditionWriter() = 0;
            virtual std::shared_ptr<ISunWriter> CreateSunWriter() = 0;
            virtual std::shared_ptr<ISynchronizeActionWriter> CreateSynchronizeActionWriter() = 0;
            virtual std::shared_ptr<ITargetDistanceSteadyStateWriter> CreateTargetDistanceSteadyStateWriter() = 0;
            virtual std::shared_ptr<ITargetTimeSteadyStateWriter> CreateTargetTimeSteadyStateWriter() = 0;
            virtual std::shared_ptr<ITeleportActionWriter> CreateTeleportActionWriter() = 0;
            virtual std::shared_ptr<ITimeHeadwayConditionWriter> CreateTimeHeadwayConditionWriter() = 0;
            virtual std::shared_ptr<ITimeOfDayWriter> CreateTimeOfDayWriter() = 0;
            virtual std::shared_ptr<ITimeOfDayConditionWriter> CreateTimeOfDayConditionWriter() = 0;
            virtual std::shared_ptr<ITimeReferenceWriter> CreateTimeReferenceWriter() = 0;
            virtual std::shared_ptr<ITimeToCollisionConditionWriter> CreateTimeToCollisionConditionWriter() = 0;
            virtual std::shared_ptr<ITimeToCollisionConditionTargetWriter> CreateTimeToCollisionConditionTargetWriter() = 0;
            virtual std::shared_ptr<ITimingWriter> CreateTimingWriter() = 0;
            virtual std::shared_ptr<ITrafficActionWriter> CreateTrafficActionWriter() = 0;
            virtual std::shared_ptr<ITrafficDefinitionWriter> CreateTrafficDefinitionWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalActionWriter> CreateTrafficSignalActionWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalConditionWriter> CreateTrafficSignalConditionWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalControllerWriter> CreateTrafficSignalControllerWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalControllerActionWriter> CreateTrafficSignalControllerActionWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalControllerConditionWriter> CreateTrafficSignalControllerConditionWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalGroupStateWriter> CreateTrafficSignalGroupStateWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalStateWriter> CreateTrafficSignalStateWriter() = 0;
            virtual std::shared_ptr<ITrafficSignalStateActionWriter> CreateTrafficSignalStateActionWriter() = 0;
            virtual std::shared_ptr<ITrafficSinkActionWriter> CreateTrafficSinkActionWriter() = 0;
            virtual std::shared_ptr<ITrafficSourceActionWriter> CreateTrafficSourceActionWriter() = 0;
            virtual std::shared_ptr<ITrafficStopActionWriter> CreateTrafficStopActionWriter() = 0;
            virtual std::shared_ptr<ITrafficSwarmActionWriter> CreateTrafficSwarmActionWriter() = 0;
            virtual std::shared_ptr<ITrajectoryWriter> CreateTrajectoryWriter() = 0;
            virtual std::shared_ptr<ITrajectoryCatalogLocationWriter> CreateTrajectoryCatalogLocationWriter() = 0;
            virtual std::shared_ptr<ITrajectoryFollowingModeWriter> CreateTrajectoryFollowingModeWriter() = 0;
            virtual std::shared_ptr<ITrajectoryPositionWriter> CreateTrajectoryPositionWriter() = 0;
            virtual std::shared_ptr<ITrajectoryRefWriter> CreateTrajectoryRefWriter() = 0;
            virtual std::shared_ptr<ITransitionDynamicsWriter> CreateTransitionDynamicsWriter() = 0;
            virtual std::shared_ptr<ITraveledDistanceConditionWriter> CreateTraveledDistanceConditionWriter() = 0;
            virtual std::shared_ptr<ITriggerWriter> CreateTriggerWriter() = 0;
            virtual std::shared_ptr<ITriggeringEntitiesWriter> CreateTriggeringEntitiesWriter() = 0;
            virtual std::shared_ptr<IUniformDistributionWriter> CreateUniformDistributionWriter() = 0;
            virtual std::shared_ptr<IUsedAreaWriter> CreateUsedAreaWriter() = 0;
            virtual std::shared_ptr<IUserDefinedActionWriter> CreateUserDefinedActionWriter() = 0;
            virtual std::shared_ptr<IUserDefinedAnimationWriter> CreateUserDefinedAnimationWriter() = 0;
            virtual std::shared_ptr<IUserDefinedComponentWriter> CreateUserDefinedComponentWriter() = 0;
            virtual std::shared_ptr<IUserDefinedDistributionWriter> CreateUserDefinedDistributionWriter() = 0;
            virtual std::shared_ptr<IUserDefinedLightWriter> CreateUserDefinedLightWriter() = 0;
            virtual std::shared_ptr<IUserDefinedValueConditionWriter> CreateUserDefinedValueConditionWriter() = 0;
            virtual std::shared_ptr<IValueConstraintWriter> CreateValueConstraintWriter() = 0;
            virtual std::shared_ptr<IValueConstraintGroupWriter> CreateValueConstraintGroupWriter() = 0;
            virtual std::shared_ptr<IValueSetDistributionWriter> CreateValueSetDistributionWriter() = 0;
            virtual std::shared_ptr<IVariableActionWriter> CreateVariableActionWriter() = 0;
            virtual std::shared_ptr<IVariableAddValueRuleWriter> CreateVariableAddValueRuleWriter() = 0;
            virtual std::shared_ptr<IVariableConditionWriter> CreateVariableConditionWriter() = 0;
            virtual std::shared_ptr<IVariableDeclarationWriter> CreateVariableDeclarationWriter() = 0;
            virtual std::shared_ptr<IVariableModifyActionWriter> CreateVariableModifyActionWriter() = 0;
            virtual std::shared_ptr<IVariableModifyRuleWriter> CreateVariableModifyRuleWriter() = 0;
            virtual std::shared_ptr<IVariableMultiplyByValueRuleWriter> CreateVariableMultiplyByValueRuleWriter() = 0;
            virtual std::shared_ptr<IVariableSetActionWriter> CreateVariableSetActionWriter() = 0;
            virtual std::shared_ptr<IVehicleWriter> CreateVehicleWriter() = 0;
            virtual std::shared_ptr<IVehicleCatalogLocationWriter> CreateVehicleCatalogLocationWriter() = 0;
            virtual std::shared_ptr<IVehicleCategoryDistributionWriter> CreateVehicleCategoryDistributionWriter() = 0;
            virtual std::shared_ptr<IVehicleCategoryDistributionEntryWriter> CreateVehicleCategoryDistributionEntryWriter() = 0;
            virtual std::shared_ptr<IVehicleComponentWriter> CreateVehicleComponentWriter() = 0;
            virtual std::shared_ptr<IVehicleLightWriter> CreateVehicleLightWriter() = 0;
            virtual std::shared_ptr<IVehicleRoleDistributionWriter> CreateVehicleRoleDistributionWriter() = 0;
            virtual std::shared_ptr<IVehicleRoleDistributionEntryWriter> CreateVehicleRoleDistributionEntryWriter() = 0;
            virtual std::shared_ptr<IVertexWriter> CreateVertexWriter() = 0;
            virtual std::shared_ptr<IVisibilityActionWriter> CreateVisibilityActionWriter() = 0;
            virtual std::shared_ptr<IWaypointWriter> CreateWaypointWriter() = 0;
            virtual std::shared_ptr<IWeatherWriter> CreateWeatherWriter() = 0;
            virtual std::shared_ptr<IWindWriter> CreateWindWriter() = 0;
            virtual std::shared_ptr<IWorldPositionWriter> CreateWorldPositionWriter() = 0;

        };
    }
}
