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

#include <map>
#include <vector>
#include "IParserMessageLogger.h"
#include "ICheckerRule.h"
#include "IScenarioChecker.h"
#include "ApiClassInterfaces.h"
#include "MemLeakDetection.h"
#include <memory>
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A range checker rule class for the type
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioCheckerImpl: public IScenarioChecker
        {
        private:
            //string is typeid(class).name()
            std::map<std::string, std::vector<std::shared_ptr<CheckerRule>>> _typeToCheckerRuleList;
            void ApplyAbsoluteSpeedCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAbsoluteSpeed> object);
            void ApplyAbsoluteTargetLaneCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAbsoluteTargetLane> object);
            void ApplyAbsoluteTargetLaneOffsetCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAbsoluteTargetLaneOffset> object);
            void ApplyAbsoluteTargetSpeedCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAbsoluteTargetSpeed> object);
            void ApplyAccelerationConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAccelerationCondition> object);
            void ApplyAcquirePositionActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAcquirePositionAction> object);
            void ApplyActCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAct> object);
            void ApplyActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAction> object);
            void ApplyActivateControllerActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IActivateControllerAction> object);
            void ApplyActorsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IActors> object);
            void ApplyAddEntityActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAddEntityAction> object);
            void ApplyAssignControllerActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAssignControllerAction> object);
            void ApplyAssignRouteActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAssignRouteAction> object);
            void ApplyAxleCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAxle> object);
            void ApplyAxlesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAxles> object);
            void ApplyBoundingBoxCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IBoundingBox> object);
            void ApplyByEntityConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IByEntityCondition> object);
            void ApplyByObjectTypeCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IByObjectType> object);
            void ApplyByTypeCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IByType> object);
            void ApplyByValueConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IByValueCondition> object);
            void ApplyCatalogCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICatalog> object);
            void ApplyCatalogDefinitionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICatalogDefinition> object);
            void ApplyCatalogLocationsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICatalogLocations> object);
            void ApplyCatalogReferenceCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICatalogReference> object);
            void ApplyCenterCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICenter> object);
            void ApplyCentralSwarmObjectCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICentralSwarmObject> object);
            void ApplyClothoidCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IClothoid> object);
            void ApplyCollisionConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICollisionCondition> object);
            void ApplyConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICondition> object);
            void ApplyConditionGroupCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IConditionGroup> object);
            void ApplyControlPointCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControlPoint> object);
            void ApplyControllerCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IController> object);
            void ApplyControllerActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControllerAction> object);
            void ApplyControllerCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControllerCatalogLocation> object);
            void ApplyControllerDistributionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControllerDistribution> object);
            void ApplyControllerDistributionEntryCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControllerDistributionEntry> object);
            void ApplyCustomCommandActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICustomCommandAction> object);
            void ApplyDeleteEntityActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDeleteEntityAction> object);
            void ApplyDimensionsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDimensions> object);
            void ApplyDirectoryCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDirectory> object);
            void ApplyDistanceConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDistanceCondition> object);
            void ApplyDynamicConstraintsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDynamicConstraints> object);
            void ApplyEndOfRoadConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEndOfRoadCondition> object);
            void ApplyEntitiesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEntities> object);
            void ApplyEntityActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEntityAction> object);
            void ApplyEntityConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEntityCondition> object);
            void ApplyEntityObjectCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEntityObject> object);
            void ApplyEntityRefCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEntityRef> object);
            void ApplyEntitySelectionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEntitySelection> object);
            void ApplyEnvironmentCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEnvironment> object);
            void ApplyEnvironmentActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEnvironmentAction> object);
            void ApplyEnvironmentCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEnvironmentCatalogLocation> object);
            void ApplyEventCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEvent> object);
            void ApplyFileCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFile> object);
            void ApplyFileHeaderCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFileHeader> object);
            void ApplyFinalSpeedCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFinalSpeed> object);
            void ApplyFogCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFog> object);
            void ApplyFollowTrajectoryActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFollowTrajectoryAction> object);
            void ApplyGlobalActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IGlobalAction> object);
            void ApplyInRoutePositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IInRoutePosition> object);
            void ApplyInfrastructureActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IInfrastructureAction> object);
            void ApplyInitCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IInit> object);
            void ApplyInitActionsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IInitActions> object);
            void ApplyKnotCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IKnot> object);
            void ApplyLaneChangeActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneChangeAction> object);
            void ApplyLaneChangeTargetCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneChangeTarget> object);
            void ApplyLaneOffsetActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneOffsetAction> object);
            void ApplyLaneOffsetActionDynamicsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object);
            void ApplyLaneOffsetTargetCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneOffsetTarget> object);
            void ApplyLanePositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILanePosition> object);
            void ApplyLateralActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILateralAction> object);
            void ApplyLateralDistanceActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILateralDistanceAction> object);
            void ApplyLongitudinalActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILongitudinalAction> object);
            void ApplyLongitudinalDistanceActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object);
            void ApplyManeuverCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IManeuver> object);
            void ApplyManeuverCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IManeuverCatalogLocation> object);
            void ApplyManeuverGroupCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IManeuverGroup> object);
            void ApplyMiscObjectCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IMiscObject> object);
            void ApplyMiscObjectCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IMiscObjectCatalogLocation> object);
            void ApplyModifyRuleCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IModifyRule> object);
            void ApplyNoneCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<INone> object);
            void ApplyNurbsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<INurbs> object);
            void ApplyObjectControllerCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IObjectController> object);
            void ApplyOffroadConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOffroadCondition> object);
            void ApplyOpenScenarioCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOpenScenario> object);
            void ApplyOpenScenarioCategoryCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOpenScenarioCategory> object);
            void ApplyOrientationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOrientation> object);
            void ApplyOverrideBrakeActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideBrakeAction> object);
            void ApplyOverrideClutchActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideClutchAction> object);
            void ApplyOverrideControllerValueActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideControllerValueAction> object);
            void ApplyOverrideGearActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideGearAction> object);
            void ApplyOverrideParkingBrakeActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object);
            void ApplyOverrideSteeringWheelActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideSteeringWheelAction> object);
            void ApplyOverrideThrottleActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideThrottleAction> object);
            void ApplyParameterActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterAction> object);
            void ApplyParameterAddValueRuleCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterAddValueRule> object);
            void ApplyParameterAssignmentCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterAssignment> object);
            void ApplyParameterConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterCondition> object);
            void ApplyParameterDeclarationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterDeclaration> object);
            void ApplyParameterModifyActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterModifyAction> object);
            void ApplyParameterMultiplyByValueRuleCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterMultiplyByValueRule> object);
            void ApplyParameterSetActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IParameterSetAction> object);
            void ApplyPedestrianCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPedestrian> object);
            void ApplyPedestrianCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPedestrianCatalogLocation> object);
            void ApplyPerformanceCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPerformance> object);
            void ApplyPhaseCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPhase> object);
            void ApplyPolylineCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPolyline> object);
            void ApplyPositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPosition> object);
            void ApplyPositionInLaneCoordinatesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object);
            void ApplyPositionInRoadCoordinatesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPositionInRoadCoordinates> object);
            void ApplyPositionOfCurrentEntityCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPositionOfCurrentEntity> object);
            void ApplyPrecipitationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPrecipitation> object);
            void ApplyPrivateCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPrivate> object);
            void ApplyPrivateActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPrivateAction> object);
            void ApplyPropertiesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IProperties> object);
            void ApplyPropertyCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IProperty> object);
            void ApplyReachPositionConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IReachPositionCondition> object);
            void ApplyRelativeDistanceConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeDistanceCondition> object);
            void ApplyRelativeLanePositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeLanePosition> object);
            void ApplyRelativeObjectPositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeObjectPosition> object);
            void ApplyRelativeRoadPositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeRoadPosition> object);
            void ApplyRelativeSpeedConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeSpeedCondition> object);
            void ApplyRelativeSpeedToMasterCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeSpeedToMaster> object);
            void ApplyRelativeTargetLaneCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeTargetLane> object);
            void ApplyRelativeTargetLaneOffsetCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeTargetLaneOffset> object);
            void ApplyRelativeTargetSpeedCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeTargetSpeed> object);
            void ApplyRelativeWorldPositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeWorldPosition> object);
            void ApplyRoadConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoadCondition> object);
            void ApplyRoadNetworkCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoadNetwork> object);
            void ApplyRoadPositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoadPosition> object);
            void ApplyRouteCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoute> object);
            void ApplyRouteCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRouteCatalogLocation> object);
            void ApplyRoutePositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoutePosition> object);
            void ApplyRouteRefCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRouteRef> object);
            void ApplyRoutingActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoutingAction> object);
            void ApplyScenarioDefinitionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IScenarioDefinition> object);
            void ApplyScenarioObjectCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IScenarioObject> object);
            void ApplySelectedEntitiesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISelectedEntities> object);
            void ApplyShapeCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IShape> object);
            void ApplySimulationTimeConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISimulationTimeCondition> object);
            void ApplySpeedActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISpeedAction> object);
            void ApplySpeedActionTargetCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISpeedActionTarget> object);
            void ApplySpeedConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISpeedCondition> object);
            void ApplyStandStillConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IStandStillCondition> object);
            void ApplyStoryCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IStory> object);
            void ApplyStoryboardCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IStoryboard> object);
            void ApplyStoryboardElementStateConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IStoryboardElementStateCondition> object);
            void ApplySunCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISun> object);
            void ApplySynchronizeActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISynchronizeAction> object);
            void ApplyTeleportActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITeleportAction> object);
            void ApplyTimeHeadwayConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeHeadwayCondition> object);
            void ApplyTimeOfDayCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeOfDay> object);
            void ApplyTimeOfDayConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeOfDayCondition> object);
            void ApplyTimeReferenceCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeReference> object);
            void ApplyTimeToCollisionConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeToCollisionCondition> object);
            void ApplyTimeToCollisionConditionTargetCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeToCollisionConditionTarget> object);
            void ApplyTimingCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITiming> object);
            void ApplyTrafficActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficAction> object);
            void ApplyTrafficDefinitionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficDefinition> object);
            void ApplyTrafficSignalActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalAction> object);
            void ApplyTrafficSignalConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalCondition> object);
            void ApplyTrafficSignalControllerCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalController> object);
            void ApplyTrafficSignalControllerActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalControllerAction> object);
            void ApplyTrafficSignalControllerConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalControllerCondition> object);
            void ApplyTrafficSignalStateCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalState> object);
            void ApplyTrafficSignalStateActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalStateAction> object);
            void ApplyTrafficSinkActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSinkAction> object);
            void ApplyTrafficSourceActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSourceAction> object);
            void ApplyTrafficSwarmActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSwarmAction> object);
            void ApplyTrajectoryCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrajectory> object);
            void ApplyTrajectoryCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrajectoryCatalogLocation> object);
            void ApplyTrajectoryFollowingModeCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrajectoryFollowingMode> object);
            void ApplyTransitionDynamicsCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITransitionDynamics> object);
            void ApplyTraveledDistanceConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITraveledDistanceCondition> object);
            void ApplyTriggerCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrigger> object);
            void ApplyTriggeringEntitiesCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITriggeringEntities> object);
            void ApplyUserDefinedActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IUserDefinedAction> object);
            void ApplyUserDefinedValueConditionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IUserDefinedValueCondition> object);
            void ApplyVehicleCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVehicle> object);
            void ApplyVehicleCatalogLocationCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVehicleCatalogLocation> object);
            void ApplyVehicleCategoryDistributionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVehicleCategoryDistribution> object);
            void ApplyVehicleCategoryDistributionEntryCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object);
            void ApplyVertexCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVertex> object);
            void ApplyVisibilityActionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVisibilityAction> object);
            void ApplyWaypointCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IWaypoint> object);
            void ApplyWeatherCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IWeather> object);
            void ApplyWorldPositionCheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IWorldPosition> object);

        public:
            OPENSCENARIOLIB_EXP void CheckScenario(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteSpeedCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetLaneCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetLane>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetLaneOffset>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAbsoluteTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAccelerationConditionCheckerRule(std::shared_ptr<ICheckerRule<IAccelerationCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAcquirePositionActionCheckerRule(std::shared_ptr<ICheckerRule<IAcquirePositionAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActCheckerRule(std::shared_ptr<ICheckerRule<IAct>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActionCheckerRule(std::shared_ptr<ICheckerRule<IAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActivateControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IActivateControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddActorsCheckerRule(std::shared_ptr<ICheckerRule<IActors>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAddEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IAddEntityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAssignControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IAssignControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAssignRouteActionCheckerRule(std::shared_ptr<ICheckerRule<IAssignRouteAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAxleCheckerRule(std::shared_ptr<ICheckerRule<IAxle>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddAxlesCheckerRule(std::shared_ptr<ICheckerRule<IAxles>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddBoundingBoxCheckerRule(std::shared_ptr<ICheckerRule<IBoundingBox>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByEntityConditionCheckerRule(std::shared_ptr<ICheckerRule<IByEntityCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByObjectTypeCheckerRule(std::shared_ptr<ICheckerRule<IByObjectType>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByTypeCheckerRule(std::shared_ptr<ICheckerRule<IByType>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddByValueConditionCheckerRule(std::shared_ptr<ICheckerRule<IByValueCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogCheckerRule(std::shared_ptr<ICheckerRule<ICatalog>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogDefinitionCheckerRule(std::shared_ptr<ICheckerRule<ICatalogDefinition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogLocationsCheckerRule(std::shared_ptr<ICheckerRule<ICatalogLocations>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCatalogReferenceCheckerRule(std::shared_ptr<ICheckerRule<ICatalogReference>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCenterCheckerRule(std::shared_ptr<ICheckerRule<ICenter>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCentralSwarmObjectCheckerRule(std::shared_ptr<ICheckerRule<ICentralSwarmObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddClothoidCheckerRule(std::shared_ptr<ICheckerRule<IClothoid>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule<ICollisionCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConditionCheckerRule(std::shared_ptr<ICheckerRule<ICondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddConditionGroupCheckerRule(std::shared_ptr<ICheckerRule<IConditionGroup>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControlPointCheckerRule(std::shared_ptr<ICheckerRule<IControlPoint>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerCheckerRule(std::shared_ptr<ICheckerRule<IController>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IControllerCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerDistributionCheckerRule(std::shared_ptr<ICheckerRule<IControllerDistribution>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddControllerDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule<IControllerDistributionEntry>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddCustomCommandActionCheckerRule(std::shared_ptr<ICheckerRule<ICustomCommandAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDeleteEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IDeleteEntityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDimensionsCheckerRule(std::shared_ptr<ICheckerRule<IDimensions>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDirectoryCheckerRule(std::shared_ptr<ICheckerRule<IDirectory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<IDistanceCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddDynamicConstraintsCheckerRule(std::shared_ptr<ICheckerRule<IDynamicConstraints>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEndOfRoadConditionCheckerRule(std::shared_ptr<ICheckerRule<IEndOfRoadCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntitiesCheckerRule(std::shared_ptr<ICheckerRule<IEntities>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IEntityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityConditionCheckerRule(std::shared_ptr<ICheckerRule<IEntityCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityObjectCheckerRule(std::shared_ptr<ICheckerRule<IEntityObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntityRefCheckerRule(std::shared_ptr<ICheckerRule<IEntityRef>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEntitySelectionCheckerRule(std::shared_ptr<ICheckerRule<IEntitySelection>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentCheckerRule(std::shared_ptr<ICheckerRule<IEnvironment>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentActionCheckerRule(std::shared_ptr<ICheckerRule<IEnvironmentAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEnvironmentCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IEnvironmentCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddEventCheckerRule(std::shared_ptr<ICheckerRule<IEvent>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFileCheckerRule(std::shared_ptr<ICheckerRule<IFile>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFileHeaderCheckerRule(std::shared_ptr<ICheckerRule<IFileHeader>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFinalSpeedCheckerRule(std::shared_ptr<ICheckerRule<IFinalSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFogCheckerRule(std::shared_ptr<ICheckerRule<IFog>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddFollowTrajectoryActionCheckerRule(std::shared_ptr<ICheckerRule<IFollowTrajectoryAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddGlobalActionCheckerRule(std::shared_ptr<ICheckerRule<IGlobalAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInRoutePositionCheckerRule(std::shared_ptr<ICheckerRule<IInRoutePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInfrastructureActionCheckerRule(std::shared_ptr<ICheckerRule<IInfrastructureAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInitCheckerRule(std::shared_ptr<ICheckerRule<IInit>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddInitActionsCheckerRule(std::shared_ptr<ICheckerRule<IInitActions>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddKnotCheckerRule(std::shared_ptr<ICheckerRule<IKnot>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneChangeActionCheckerRule(std::shared_ptr<ICheckerRule<ILaneChangeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneChangeTargetCheckerRule(std::shared_ptr<ICheckerRule<ILaneChangeTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetActionCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetActionDynamics>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLaneOffsetTargetCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLanePositionCheckerRule(std::shared_ptr<ICheckerRule<ILanePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLateralActionCheckerRule(std::shared_ptr<ICheckerRule<ILateralAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLateralDistanceActionCheckerRule(std::shared_ptr<ICheckerRule<ILateralDistanceAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLongitudinalActionCheckerRule(std::shared_ptr<ICheckerRule<ILongitudinalAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<ICheckerRule<ILongitudinalDistanceAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverCheckerRule(std::shared_ptr<ICheckerRule<IManeuver>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IManeuverCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddManeuverGroupCheckerRule(std::shared_ptr<ICheckerRule<IManeuverGroup>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMiscObjectCheckerRule(std::shared_ptr<ICheckerRule<IMiscObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddMiscObjectCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IMiscObjectCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddModifyRuleCheckerRule(std::shared_ptr<ICheckerRule<IModifyRule>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNoneCheckerRule(std::shared_ptr<ICheckerRule<INone>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddNurbsCheckerRule(std::shared_ptr<ICheckerRule<INurbs>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddObjectControllerCheckerRule(std::shared_ptr<ICheckerRule<IObjectController>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOffroadConditionCheckerRule(std::shared_ptr<ICheckerRule<IOffroadCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOpenScenarioCheckerRule(std::shared_ptr<ICheckerRule<IOpenScenario>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOpenScenarioCategoryCheckerRule(std::shared_ptr<ICheckerRule<IOpenScenarioCategory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOrientationCheckerRule(std::shared_ptr<ICheckerRule<IOrientation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideBrakeActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideBrakeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideClutchActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideClutchAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideControllerValueActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideControllerValueAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideGearActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideGearAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideParkingBrakeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideSteeringWheelActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideSteeringWheelAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddOverrideThrottleActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideThrottleAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule<IParameterAddValueRule>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterAssignmentCheckerRule(std::shared_ptr<ICheckerRule<IParameterAssignment>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterConditionCheckerRule(std::shared_ptr<ICheckerRule<IParameterCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterDeclarationCheckerRule(std::shared_ptr<ICheckerRule<IParameterDeclaration>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterModifyActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterModifyAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule<IParameterMultiplyByValueRule>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddParameterSetActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterSetAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianCheckerRule(std::shared_ptr<ICheckerRule<IPedestrian>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPedestrianCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IPedestrianCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPerformanceCheckerRule(std::shared_ptr<ICheckerRule<IPerformance>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPhaseCheckerRule(std::shared_ptr<ICheckerRule<IPhase>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPolylineCheckerRule(std::shared_ptr<ICheckerRule<IPolyline>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionCheckerRule(std::shared_ptr<ICheckerRule<IPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<ICheckerRule<IPositionInLaneCoordinates>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionInRoadCoordinatesCheckerRule(std::shared_ptr<ICheckerRule<IPositionInRoadCoordinates>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPositionOfCurrentEntityCheckerRule(std::shared_ptr<ICheckerRule<IPositionOfCurrentEntity>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrecipitationCheckerRule(std::shared_ptr<ICheckerRule<IPrecipitation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrivateCheckerRule(std::shared_ptr<ICheckerRule<IPrivate>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPrivateActionCheckerRule(std::shared_ptr<ICheckerRule<IPrivateAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPropertiesCheckerRule(std::shared_ptr<ICheckerRule<IProperties>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddPropertyCheckerRule(std::shared_ptr<ICheckerRule<IProperty>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddReachPositionConditionCheckerRule(std::shared_ptr<ICheckerRule<IReachPositionCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeDistanceCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeLanePositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeLanePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeObjectPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeObjectPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeRoadPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeRoadPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeSpeedCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeSpeedToMasterCheckerRule(std::shared_ptr<ICheckerRule<IRelativeSpeedToMaster>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetLaneCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetLane>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetLaneOffset>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetSpeed>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRelativeWorldPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeWorldPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadConditionCheckerRule(std::shared_ptr<ICheckerRule<IRoadCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadNetworkCheckerRule(std::shared_ptr<ICheckerRule<IRoadNetwork>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoadPositionCheckerRule(std::shared_ptr<ICheckerRule<IRoadPosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteCheckerRule(std::shared_ptr<ICheckerRule<IRoute>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IRouteCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoutePositionCheckerRule(std::shared_ptr<ICheckerRule<IRoutePosition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRouteRefCheckerRule(std::shared_ptr<ICheckerRule<IRouteRef>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddRoutingActionCheckerRule(std::shared_ptr<ICheckerRule<IRoutingAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioDefinitionCheckerRule(std::shared_ptr<ICheckerRule<IScenarioDefinition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddScenarioObjectCheckerRule(std::shared_ptr<ICheckerRule<IScenarioObject>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSelectedEntitiesCheckerRule(std::shared_ptr<ICheckerRule<ISelectedEntities>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddShapeCheckerRule(std::shared_ptr<ICheckerRule<IShape>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSimulationTimeConditionCheckerRule(std::shared_ptr<ICheckerRule<ISimulationTimeCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedActionCheckerRule(std::shared_ptr<ICheckerRule<ISpeedAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedActionTargetCheckerRule(std::shared_ptr<ICheckerRule<ISpeedActionTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule<ISpeedCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStandStillConditionCheckerRule(std::shared_ptr<ICheckerRule<IStandStillCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryCheckerRule(std::shared_ptr<ICheckerRule<IStory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryboardCheckerRule(std::shared_ptr<ICheckerRule<IStoryboard>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddStoryboardElementStateConditionCheckerRule(std::shared_ptr<ICheckerRule<IStoryboardElementStateCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSunCheckerRule(std::shared_ptr<ICheckerRule<ISun>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddSynchronizeActionCheckerRule(std::shared_ptr<ICheckerRule<ISynchronizeAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTeleportActionCheckerRule(std::shared_ptr<ICheckerRule<ITeleportAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeHeadwayConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeHeadwayCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeOfDayCheckerRule(std::shared_ptr<ICheckerRule<ITimeOfDay>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeOfDayConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeOfDayCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeReferenceCheckerRule(std::shared_ptr<ICheckerRule<ITimeReference>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeToCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeToCollisionCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimeToCollisionConditionTargetCheckerRule(std::shared_ptr<ICheckerRule<ITimeToCollisionConditionTarget>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTimingCheckerRule(std::shared_ptr<ICheckerRule<ITiming>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficDefinitionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficDefinition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalConditionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalController>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalControllerAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalControllerConditionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalControllerCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalStateCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalState>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSignalStateActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalStateAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSinkActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSinkAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSourceActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSourceAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrafficSwarmActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSwarmAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryCheckerRule(std::shared_ptr<ICheckerRule<ITrajectory>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<ITrajectoryCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTrajectoryFollowingModeCheckerRule(std::shared_ptr<ICheckerRule<ITrajectoryFollowingMode>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTransitionDynamicsCheckerRule(std::shared_ptr<ICheckerRule<ITransitionDynamics>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTraveledDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<ITraveledDistanceCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTriggerCheckerRule(std::shared_ptr<ICheckerRule<ITrigger>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddTriggeringEntitiesCheckerRule(std::shared_ptr<ICheckerRule<ITriggeringEntities>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedActionCheckerRule(std::shared_ptr<ICheckerRule<IUserDefinedAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddUserDefinedValueConditionCheckerRule(std::shared_ptr<ICheckerRule<IUserDefinedValueCondition>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCheckerRule(std::shared_ptr<ICheckerRule<IVehicle>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCatalogLocation>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCategoryDistributionCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCategoryDistribution>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCategoryDistributionEntry>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVertexCheckerRule(std::shared_ptr<ICheckerRule<IVertex>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddVisibilityActionCheckerRule(std::shared_ptr<ICheckerRule<IVisibilityAction>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWaypointCheckerRule(std::shared_ptr<ICheckerRule<IWaypoint>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWeatherCheckerRule(std::shared_ptr<ICheckerRule<IWeather>> checkerRule) override;
            OPENSCENARIOLIB_EXP void AddWorldPositionCheckerRule(std::shared_ptr<ICheckerRule<IWorldPosition>> checkerRule) override;
        };
    }
}
