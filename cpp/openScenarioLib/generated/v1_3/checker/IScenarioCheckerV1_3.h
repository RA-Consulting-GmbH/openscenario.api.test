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
#include "IParserMessageLogger.h"
#include "ApiClassInterfacesV1_3.h"
#include "ICheckerRule.h"
#include "MemLeakDetection.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.3
         * Provides a method for every type of the osc model to add checker rules.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IScenarioChecker 
        {
        public:
            IScenarioChecker() = default;
            virtual  ~IScenarioChecker() = default;

            /**
             * Checks the scenario in a file context
             *
             * @param messageLogger the logger for file context
             * @param openScenario the root of the tree
            */

            virtual void CheckScenarioInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) = 0;

            /**
             * Checks the scenario in a tree  context
             *
             * @param messageLogger the logger for file context
             * @param openScenario the root of the tree
            */

            virtual void CheckScenarioInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario)  = 0;

            virtual void AddAbsoluteSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAbsoluteTargetLaneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAbsoluteTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAbsoluteTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAccelerationConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAcquirePositionActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddActCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddActivateControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddActorsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAddEntityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAngleConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAnimationActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAnimationFileCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAnimationStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAnimationTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAppearanceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAssignControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAssignRouteActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAutomaticGearCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAxleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddAxlesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddBoundingBoxCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddBrakeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddBrakeInputCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddByEntityConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddByObjectTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddByTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddByValueConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCatalogCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCatalogDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCatalogLocationsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCatalogReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCenterCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCentralSwarmObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddClothoidCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddClothoidSplineCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddClothoidSplineSegmentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddColorCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddColorCmykCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddColorRgbCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddComponentAnimationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddConditionGroupCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddConnectTrailerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddControlPointCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddControllerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddControllerCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddControllerDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddControllerDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCustomCommandActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddCustomContentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeleteEntityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeterministicCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeterministicMultiParameterDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeterministicMultiParameterDistributionTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeterministicParameterDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeterministicSingleParameterDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDeterministicSingleParameterDistributionTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDimensionsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDirectionOfTravelDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDirectoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDisconnectTrailerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDistributionDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDistributionRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDistributionSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDistributionSetElementCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDomeImageCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddDynamicConstraintsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEndOfRoadConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntitiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntityConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntityDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntityDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntityObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntityRefCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEntitySelectionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEnvironmentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEnvironmentActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEnvironmentCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddEventCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddExternalObjectReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddFileCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddFileHeaderCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddFinalSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddFogCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddFollowTrajectoryActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddGearCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddGeoPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddGlobalActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddHistogramCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddHistogramBinCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddInRoutePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddInfrastructureActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddInitCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddInitActionsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddKnotCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLaneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLaneChangeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLaneChangeTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLaneOffsetActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLaneOffsetTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLanePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLateralActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLateralDistanceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLicenseCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLightStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLightStateActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLightTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLogNormalDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLongitudinalActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddManeuverCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddManeuverCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddManeuverGroupCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddManualGearCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddMiscObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddMiscObjectCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddModifyRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddMonitorDeclarationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddNoneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddNormalDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddNurbsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddObjectControllerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOffroadConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOpenScenarioCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOpenScenarioCategoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOrientationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideBrakeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideClutchActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideControllerValueActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideGearActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideSteeringWheelActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddOverrideThrottleActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterAssignmentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterDeclarationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterModifyActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterSetActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterValueDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterValueDistributionDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddParameterValueSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPedestrianCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPedestrianAnimationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPedestrianCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPedestrianGestureCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPerformanceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPhaseCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPoissonDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPolygonCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPolylineCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPositionInRoadCoordinatesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPositionOfCurrentEntityCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPrecipitationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPrivateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPrivateActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddProbabilityDistributionSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddProbabilityDistributionSetElementCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPropertiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddPropertyCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRandomRouteActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddReachPositionConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeAngleConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeClearanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeLanePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeLaneRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeObjectPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeRoadPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeSpeedToMasterCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeTargetLaneCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRelativeWorldPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoadConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoadCursorCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoadNetworkCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoadPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoadRangeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRouteCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRouteCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoutePositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRouteRefCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddRoutingActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddScenarioDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddScenarioObjectCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddScenarioObjectTemplateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSelectedEntitiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSensorReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSensorReferenceSetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSetMonitorActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddShapeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSimulationTimeConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSpeedActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSpeedActionTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSpeedProfileActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSpeedProfileEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStandStillConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSteadyStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStochasticCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStochasticDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStochasticDistributionTypeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStoryboardCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddStoryboardElementStateConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSunCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddSynchronizeActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTargetDistanceSteadyStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTargetTimeSteadyStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTeleportActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimeHeadwayConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimeOfDayCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimeOfDayConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimeReferenceCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimeToCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimeToCollisionConditionTargetCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTimingCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficAreaCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficAreaActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficDefinitionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalControllerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalControllerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalControllerConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalGroupStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalStateCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSignalStateActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSinkActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSourceActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficStopActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrafficSwarmActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrailerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrailerActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrailerCouplerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrailerHitchCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrajectoryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrajectoryCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrajectoryFollowingModeCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrajectoryPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTrajectoryRefCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTransitionDynamicsCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTraveledDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTriggerCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddTriggeringEntitiesCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUniformDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUsedAreaCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUserDefinedActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUserDefinedAnimationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUserDefinedComponentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUserDefinedDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUserDefinedLightCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddUserDefinedValueConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddValueConstraintCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddValueConstraintGroupCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddValueSetDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableConditionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableDeclarationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableModifyActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableModifyRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVariableSetActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleCategoryDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleComponentCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleLightCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleRoleDistributionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVehicleRoleDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVertexCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddVisibilityActionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddWaypointCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddWeatherCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddWindCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
            virtual void AddWorldPositionCheckerRule(std::shared_ptr<ICheckerRule> checkerRule) = 0;
        };
    }
}
