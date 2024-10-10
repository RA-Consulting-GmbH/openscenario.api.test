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
#include "ApiClassImplV1_1.h"
#include "IOpenScenarioWriterFactoryV1_1.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.1
         * An interface with a factory method for each OpenSCENARIO class
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OPENSCENARIOLIB_EXP OpenScenarioWriterFactoryImpl: public IOpenScenarioWriterFactory  
        {
        public:

            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteSpeedWriter> CreateAbsoluteSpeedWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetLaneWriter> CreateAbsoluteTargetLaneWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> CreateAbsoluteTargetLaneOffsetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAbsoluteTargetSpeedWriter> CreateAbsoluteTargetSpeedWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAccelerationConditionWriter> CreateAccelerationConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAcquirePositionActionWriter> CreateAcquirePositionActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IActWriter> CreateActWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IActionWriter> CreateActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IActivateControllerActionWriter> CreateActivateControllerActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IActorsWriter> CreateActorsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAddEntityActionWriter> CreateAddEntityActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAssignControllerActionWriter> CreateAssignControllerActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAssignRouteActionWriter> CreateAssignRouteActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAxleWriter> CreateAxleWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IAxlesWriter> CreateAxlesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IBoundingBoxWriter> CreateBoundingBoxWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IByEntityConditionWriter> CreateByEntityConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IByObjectTypeWriter> CreateByObjectTypeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IByTypeWriter> CreateByTypeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IByValueConditionWriter> CreateByValueConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogWriter> CreateCatalogWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogDefinitionWriter> CreateCatalogDefinitionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogLocationsWriter> CreateCatalogLocationsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICatalogReferenceWriter> CreateCatalogReferenceWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICenterWriter> CreateCenterWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICentralSwarmObjectWriter> CreateCentralSwarmObjectWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IClothoidWriter> CreateClothoidWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICollisionConditionWriter> CreateCollisionConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IConditionWriter> CreateConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IConditionGroupWriter> CreateConditionGroupWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IControlPointWriter> CreateControlPointWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerWriter> CreateControllerWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerActionWriter> CreateControllerActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerCatalogLocationWriter> CreateControllerCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerDistributionWriter> CreateControllerDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IControllerDistributionEntryWriter> CreateControllerDistributionEntryWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ICustomCommandActionWriter> CreateCustomCommandActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeleteEntityActionWriter> CreateDeleteEntityActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeterministicWriter> CreateDeterministicWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeterministicMultiParameterDistributionWriter> CreateDeterministicMultiParameterDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeterministicMultiParameterDistributionTypeWriter> CreateDeterministicMultiParameterDistributionTypeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeterministicParameterDistributionWriter> CreateDeterministicParameterDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeterministicSingleParameterDistributionWriter> CreateDeterministicSingleParameterDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDeterministicSingleParameterDistributionTypeWriter> CreateDeterministicSingleParameterDistributionTypeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDimensionsWriter> CreateDimensionsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDirectoryWriter> CreateDirectoryWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDistanceConditionWriter> CreateDistanceConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDistributionDefinitionWriter> CreateDistributionDefinitionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDistributionRangeWriter> CreateDistributionRangeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDistributionSetWriter> CreateDistributionSetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDistributionSetElementWriter> CreateDistributionSetElementWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IDynamicConstraintsWriter> CreateDynamicConstraintsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEndOfRoadConditionWriter> CreateEndOfRoadConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntitiesWriter> CreateEntitiesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityActionWriter> CreateEntityActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityConditionWriter> CreateEntityConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityObjectWriter> CreateEntityObjectWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntityRefWriter> CreateEntityRefWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEntitySelectionWriter> CreateEntitySelectionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentWriter> CreateEnvironmentWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentActionWriter> CreateEnvironmentActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEnvironmentCatalogLocationWriter> CreateEnvironmentCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IEventWriter> CreateEventWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IExternalObjectReferenceWriter> CreateExternalObjectReferenceWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFileWriter> CreateFileWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFileHeaderWriter> CreateFileHeaderWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFinalSpeedWriter> CreateFinalSpeedWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFogWriter> CreateFogWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IFollowTrajectoryActionWriter> CreateFollowTrajectoryActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IGeoPositionWriter> CreateGeoPositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IGlobalActionWriter> CreateGlobalActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IHistogramWriter> CreateHistogramWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IHistogramBinWriter> CreateHistogramBinWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IInRoutePositionWriter> CreateInRoutePositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IInfrastructureActionWriter> CreateInfrastructureActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IInitWriter> CreateInitWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IInitActionsWriter> CreateInitActionsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IKnotWriter> CreateKnotWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneChangeActionWriter> CreateLaneChangeActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneChangeTargetWriter> CreateLaneChangeTargetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetActionWriter> CreateLaneOffsetActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetActionDynamicsWriter> CreateLaneOffsetActionDynamicsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILaneOffsetTargetWriter> CreateLaneOffsetTargetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILanePositionWriter> CreateLanePositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILateralActionWriter> CreateLateralActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILateralDistanceActionWriter> CreateLateralDistanceActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILicenseWriter> CreateLicenseWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILongitudinalActionWriter> CreateLongitudinalActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ILongitudinalDistanceActionWriter> CreateLongitudinalDistanceActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuverWriter> CreateManeuverWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuverCatalogLocationWriter> CreateManeuverCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IManeuverGroupWriter> CreateManeuverGroupWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObjectWriter> CreateMiscObjectWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IMiscObjectCatalogLocationWriter> CreateMiscObjectCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IModifyRuleWriter> CreateModifyRuleWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INoneWriter> CreateNoneWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INormalDistributionWriter> CreateNormalDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<INurbsWriter> CreateNurbsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IObjectControllerWriter> CreateObjectControllerWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOffroadConditionWriter> CreateOffroadConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioWriter> CreateOpenScenarioWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioCategoryWriter> CreateOpenScenarioCategoryWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOrientationWriter> CreateOrientationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideBrakeActionWriter> CreateOverrideBrakeActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideClutchActionWriter> CreateOverrideClutchActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideControllerValueActionWriter> CreateOverrideControllerValueActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideGearActionWriter> CreateOverrideGearActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideParkingBrakeActionWriter> CreateOverrideParkingBrakeActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideSteeringWheelActionWriter> CreateOverrideSteeringWheelActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOverrideThrottleActionWriter> CreateOverrideThrottleActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterActionWriter> CreateParameterActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterAddValueRuleWriter> CreateParameterAddValueRuleWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterAssignmentWriter> CreateParameterAssignmentWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterConditionWriter> CreateParameterConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterDeclarationWriter> CreateParameterDeclarationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterModifyActionWriter> CreateParameterModifyActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterMultiplyByValueRuleWriter> CreateParameterMultiplyByValueRuleWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterSetActionWriter> CreateParameterSetActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterValueDistributionWriter> CreateParameterValueDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterValueDistributionDefinitionWriter> CreateParameterValueDistributionDefinitionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IParameterValueSetWriter> CreateParameterValueSetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrianWriter> CreatePedestrianWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPedestrianCatalogLocationWriter> CreatePedestrianCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPerformanceWriter> CreatePerformanceWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPhaseWriter> CreatePhaseWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPoissonDistributionWriter> CreatePoissonDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPolylineWriter> CreatePolylineWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionWriter> CreatePositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionInLaneCoordinatesWriter> CreatePositionInLaneCoordinatesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionInRoadCoordinatesWriter> CreatePositionInRoadCoordinatesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPositionOfCurrentEntityWriter> CreatePositionOfCurrentEntityWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPrecipitationWriter> CreatePrecipitationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPrivateWriter> CreatePrivateWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPrivateActionWriter> CreatePrivateActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IProbabilityDistributionSetWriter> CreateProbabilityDistributionSetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IProbabilityDistributionSetElementWriter> CreateProbabilityDistributionSetElementWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertiesWriter> CreatePropertiesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IPropertyWriter> CreatePropertyWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRangeWriter> CreateRangeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IReachPositionConditionWriter> CreateReachPositionConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeDistanceConditionWriter> CreateRelativeDistanceConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeLanePositionWriter> CreateRelativeLanePositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeObjectPositionWriter> CreateRelativeObjectPositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeRoadPositionWriter> CreateRelativeRoadPositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeSpeedConditionWriter> CreateRelativeSpeedConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeSpeedToMasterWriter> CreateRelativeSpeedToMasterWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetLaneWriter> CreateRelativeTargetLaneWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetLaneOffsetWriter> CreateRelativeTargetLaneOffsetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeTargetSpeedWriter> CreateRelativeTargetSpeedWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRelativeWorldPositionWriter> CreateRelativeWorldPositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadConditionWriter> CreateRoadConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadNetworkWriter> CreateRoadNetworkWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoadPositionWriter> CreateRoadPositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteWriter> CreateRouteWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteCatalogLocationWriter> CreateRouteCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoutePositionWriter> CreateRoutePositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRouteRefWriter> CreateRouteRefWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IRoutingActionWriter> CreateRoutingActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IScenarioDefinitionWriter> CreateScenarioDefinitionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IScenarioObjectWriter> CreateScenarioObjectWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISelectedEntitiesWriter> CreateSelectedEntitiesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IShapeWriter> CreateShapeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISimulationTimeConditionWriter> CreateSimulationTimeConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedActionWriter> CreateSpeedActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedActionTargetWriter> CreateSpeedActionTargetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISpeedConditionWriter> CreateSpeedConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStandStillConditionWriter> CreateStandStillConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISteadyStateWriter> CreateSteadyStateWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStochasticWriter> CreateStochasticWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStochasticDistributionWriter> CreateStochasticDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStochasticDistributionTypeWriter> CreateStochasticDistributionTypeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryWriter> CreateStoryWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryboardWriter> CreateStoryboardWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IStoryboardElementStateConditionWriter> CreateStoryboardElementStateConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISunWriter> CreateSunWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ISynchronizeActionWriter> CreateSynchronizeActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITargetDistanceSteadyStateWriter> CreateTargetDistanceSteadyStateWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITargetTimeSteadyStateWriter> CreateTargetTimeSteadyStateWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITeleportActionWriter> CreateTeleportActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeHeadwayConditionWriter> CreateTimeHeadwayConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeOfDayWriter> CreateTimeOfDayWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeOfDayConditionWriter> CreateTimeOfDayConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeReferenceWriter> CreateTimeReferenceWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeToCollisionConditionWriter> CreateTimeToCollisionConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimeToCollisionConditionTargetWriter> CreateTimeToCollisionConditionTargetWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITimingWriter> CreateTimingWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficActionWriter> CreateTrafficActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficDefinitionWriter> CreateTrafficDefinitionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalActionWriter> CreateTrafficSignalActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalConditionWriter> CreateTrafficSignalConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerWriter> CreateTrafficSignalControllerWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerActionWriter> CreateTrafficSignalControllerActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalControllerConditionWriter> CreateTrafficSignalControllerConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalStateWriter> CreateTrafficSignalStateWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSignalStateActionWriter> CreateTrafficSignalStateActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSinkActionWriter> CreateTrafficSinkActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSourceActionWriter> CreateTrafficSourceActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficStopActionWriter> CreateTrafficStopActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrafficSwarmActionWriter> CreateTrafficSwarmActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryWriter> CreateTrajectoryWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryCatalogLocationWriter> CreateTrajectoryCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryFollowingModeWriter> CreateTrajectoryFollowingModeWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryPositionWriter> CreateTrajectoryPositionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITrajectoryRefWriter> CreateTrajectoryRefWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITransitionDynamicsWriter> CreateTransitionDynamicsWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITraveledDistanceConditionWriter> CreateTraveledDistanceConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggerWriter> CreateTriggerWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<ITriggeringEntitiesWriter> CreateTriggeringEntitiesWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IUniformDistributionWriter> CreateUniformDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IUsedAreaWriter> CreateUsedAreaWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedActionWriter> CreateUserDefinedActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedDistributionWriter> CreateUserDefinedDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IUserDefinedValueConditionWriter> CreateUserDefinedValueConditionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IValueConstraintWriter> CreateValueConstraintWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IValueConstraintGroupWriter> CreateValueConstraintGroupWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IValueSetDistributionWriter> CreateValueSetDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleWriter> CreateVehicleWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCatalogLocationWriter> CreateVehicleCatalogLocationWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCategoryDistributionWriter> CreateVehicleCategoryDistributionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVehicleCategoryDistributionEntryWriter> CreateVehicleCategoryDistributionEntryWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVertexWriter> CreateVertexWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IVisibilityActionWriter> CreateVisibilityActionWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IWaypointWriter> CreateWaypointWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IWeatherWriter> CreateWeatherWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IWindWriter> CreateWindWriter() override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IWorldPositionWriter> CreateWorldPositionWriter() override;
        };
    }
}
