#pragma once
#include "IParserMessageLogger.h"
#include "ApiClassInterfaces.h"
#include "ICheckerRule.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Provides a method for every type of the osc model to add checker rules.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IScenarioChecker 
        {
        public:
            IScenarioChecker() = default;
            virtual  ~IScenarioChecker() = default;
            virtual void CheckScenario(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) {}
            virtual void AddAbsoluteSpeedCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteSpeed>> checkerRule) {};
            virtual void AddAbsoluteTargetLaneCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetLane>> checkerRule) {};
            virtual void AddAbsoluteTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetLaneOffset>> checkerRule) {};
            virtual void AddAbsoluteTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule<IAbsoluteTargetSpeed>> checkerRule) {};
            virtual void AddAccelerationConditionCheckerRule(std::shared_ptr<ICheckerRule<IAccelerationCondition>> checkerRule) {};
            virtual void AddAcquirePositionActionCheckerRule(std::shared_ptr<ICheckerRule<IAcquirePositionAction>> checkerRule) {};
            virtual void AddActCheckerRule(std::shared_ptr<ICheckerRule<IAct>> checkerRule) {};
            virtual void AddActionCheckerRule(std::shared_ptr<ICheckerRule<IAction>> checkerRule) {};
            virtual void AddActivateControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IActivateControllerAction>> checkerRule) {};
            virtual void AddActorsCheckerRule(std::shared_ptr<ICheckerRule<IActors>> checkerRule) {};
            virtual void AddAddEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IAddEntityAction>> checkerRule) {};
            virtual void AddAssignControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IAssignControllerAction>> checkerRule) {};
            virtual void AddAssignRouteActionCheckerRule(std::shared_ptr<ICheckerRule<IAssignRouteAction>> checkerRule) {};
            virtual void AddAxleCheckerRule(std::shared_ptr<ICheckerRule<IAxle>> checkerRule) {};
            virtual void AddAxlesCheckerRule(std::shared_ptr<ICheckerRule<IAxles>> checkerRule) {};
            virtual void AddBoundingBoxCheckerRule(std::shared_ptr<ICheckerRule<IBoundingBox>> checkerRule) {};
            virtual void AddByEntityConditionCheckerRule(std::shared_ptr<ICheckerRule<IByEntityCondition>> checkerRule) {};
            virtual void AddByObjectTypeCheckerRule(std::shared_ptr<ICheckerRule<IByObjectType>> checkerRule) {};
            virtual void AddByTypeCheckerRule(std::shared_ptr<ICheckerRule<IByType>> checkerRule) {};
            virtual void AddByValueConditionCheckerRule(std::shared_ptr<ICheckerRule<IByValueCondition>> checkerRule) {};
            virtual void AddCatalogCheckerRule(std::shared_ptr<ICheckerRule<ICatalog>> checkerRule) {};
            virtual void AddCatalogDefinitionCheckerRule(std::shared_ptr<ICheckerRule<ICatalogDefinition>> checkerRule) {};
            virtual void AddCatalogLocationsCheckerRule(std::shared_ptr<ICheckerRule<ICatalogLocations>> checkerRule) {};
            virtual void AddCatalogReferenceCheckerRule(std::shared_ptr<ICheckerRule<ICatalogReference>> checkerRule) {};
            virtual void AddCenterCheckerRule(std::shared_ptr<ICheckerRule<ICenter>> checkerRule) {};
            virtual void AddCentralSwarmObjectCheckerRule(std::shared_ptr<ICheckerRule<ICentralSwarmObject>> checkerRule) {};
            virtual void AddClothoidCheckerRule(std::shared_ptr<ICheckerRule<IClothoid>> checkerRule) {};
            virtual void AddCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule<ICollisionCondition>> checkerRule) {};
            virtual void AddConditionCheckerRule(std::shared_ptr<ICheckerRule<ICondition>> checkerRule) {};
            virtual void AddConditionGroupCheckerRule(std::shared_ptr<ICheckerRule<IConditionGroup>> checkerRule) {};
            virtual void AddControlPointCheckerRule(std::shared_ptr<ICheckerRule<IControlPoint>> checkerRule) {};
            virtual void AddControllerCheckerRule(std::shared_ptr<ICheckerRule<IController>> checkerRule) {};
            virtual void AddControllerActionCheckerRule(std::shared_ptr<ICheckerRule<IControllerAction>> checkerRule) {};
            virtual void AddControllerCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IControllerCatalogLocation>> checkerRule) {};
            virtual void AddControllerDistributionCheckerRule(std::shared_ptr<ICheckerRule<IControllerDistribution>> checkerRule) {};
            virtual void AddControllerDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule<IControllerDistributionEntry>> checkerRule) {};
            virtual void AddCustomCommandActionCheckerRule(std::shared_ptr<ICheckerRule<ICustomCommandAction>> checkerRule) {};
            virtual void AddDeleteEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IDeleteEntityAction>> checkerRule) {};
            virtual void AddDimensionsCheckerRule(std::shared_ptr<ICheckerRule<IDimensions>> checkerRule) {};
            virtual void AddDirectoryCheckerRule(std::shared_ptr<ICheckerRule<IDirectory>> checkerRule) {};
            virtual void AddDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<IDistanceCondition>> checkerRule) {};
            virtual void AddDynamicConstraintsCheckerRule(std::shared_ptr<ICheckerRule<IDynamicConstraints>> checkerRule) {};
            virtual void AddEndOfRoadConditionCheckerRule(std::shared_ptr<ICheckerRule<IEndOfRoadCondition>> checkerRule) {};
            virtual void AddEntitiesCheckerRule(std::shared_ptr<ICheckerRule<IEntities>> checkerRule) {};
            virtual void AddEntityActionCheckerRule(std::shared_ptr<ICheckerRule<IEntityAction>> checkerRule) {};
            virtual void AddEntityConditionCheckerRule(std::shared_ptr<ICheckerRule<IEntityCondition>> checkerRule) {};
            virtual void AddEntityObjectCheckerRule(std::shared_ptr<ICheckerRule<IEntityObject>> checkerRule) {};
            virtual void AddEntityRefCheckerRule(std::shared_ptr<ICheckerRule<IEntityRef>> checkerRule) {};
            virtual void AddEntitySelectionCheckerRule(std::shared_ptr<ICheckerRule<IEntitySelection>> checkerRule) {};
            virtual void AddEnvironmentCheckerRule(std::shared_ptr<ICheckerRule<IEnvironment>> checkerRule) {};
            virtual void AddEnvironmentActionCheckerRule(std::shared_ptr<ICheckerRule<IEnvironmentAction>> checkerRule) {};
            virtual void AddEnvironmentCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IEnvironmentCatalogLocation>> checkerRule) {};
            virtual void AddEventCheckerRule(std::shared_ptr<ICheckerRule<IEvent>> checkerRule) {};
            virtual void AddFileCheckerRule(std::shared_ptr<ICheckerRule<IFile>> checkerRule) {};
            virtual void AddFileHeaderCheckerRule(std::shared_ptr<ICheckerRule<IFileHeader>> checkerRule) {};
            virtual void AddFinalSpeedCheckerRule(std::shared_ptr<ICheckerRule<IFinalSpeed>> checkerRule) {};
            virtual void AddFogCheckerRule(std::shared_ptr<ICheckerRule<IFog>> checkerRule) {};
            virtual void AddFollowTrajectoryActionCheckerRule(std::shared_ptr<ICheckerRule<IFollowTrajectoryAction>> checkerRule) {};
            virtual void AddGlobalActionCheckerRule(std::shared_ptr<ICheckerRule<IGlobalAction>> checkerRule) {};
            virtual void AddInRoutePositionCheckerRule(std::shared_ptr<ICheckerRule<IInRoutePosition>> checkerRule) {};
            virtual void AddInfrastructureActionCheckerRule(std::shared_ptr<ICheckerRule<IInfrastructureAction>> checkerRule) {};
            virtual void AddInitCheckerRule(std::shared_ptr<ICheckerRule<IInit>> checkerRule) {};
            virtual void AddInitActionsCheckerRule(std::shared_ptr<ICheckerRule<IInitActions>> checkerRule) {};
            virtual void AddKnotCheckerRule(std::shared_ptr<ICheckerRule<IKnot>> checkerRule) {};
            virtual void AddLaneChangeActionCheckerRule(std::shared_ptr<ICheckerRule<ILaneChangeAction>> checkerRule) {};
            virtual void AddLaneChangeTargetCheckerRule(std::shared_ptr<ICheckerRule<ILaneChangeTarget>> checkerRule) {};
            virtual void AddLaneOffsetActionCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetAction>> checkerRule) {};
            virtual void AddLaneOffsetActionDynamicsCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetActionDynamics>> checkerRule) {};
            virtual void AddLaneOffsetTargetCheckerRule(std::shared_ptr<ICheckerRule<ILaneOffsetTarget>> checkerRule) {};
            virtual void AddLanePositionCheckerRule(std::shared_ptr<ICheckerRule<ILanePosition>> checkerRule) {};
            virtual void AddLateralActionCheckerRule(std::shared_ptr<ICheckerRule<ILateralAction>> checkerRule) {};
            virtual void AddLateralDistanceActionCheckerRule(std::shared_ptr<ICheckerRule<ILateralDistanceAction>> checkerRule) {};
            virtual void AddLongitudinalActionCheckerRule(std::shared_ptr<ICheckerRule<ILongitudinalAction>> checkerRule) {};
            virtual void AddLongitudinalDistanceActionCheckerRule(std::shared_ptr<ICheckerRule<ILongitudinalDistanceAction>> checkerRule) {};
            virtual void AddManeuverCheckerRule(std::shared_ptr<ICheckerRule<IManeuver>> checkerRule) {};
            virtual void AddManeuverCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IManeuverCatalogLocation>> checkerRule) {};
            virtual void AddManeuverGroupCheckerRule(std::shared_ptr<ICheckerRule<IManeuverGroup>> checkerRule) {};
            virtual void AddMiscObjectCheckerRule(std::shared_ptr<ICheckerRule<IMiscObject>> checkerRule) {};
            virtual void AddMiscObjectCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IMiscObjectCatalogLocation>> checkerRule) {};
            virtual void AddModifyRuleCheckerRule(std::shared_ptr<ICheckerRule<IModifyRule>> checkerRule) {};
            virtual void AddNoneCheckerRule(std::shared_ptr<ICheckerRule<INone>> checkerRule) {};
            virtual void AddNurbsCheckerRule(std::shared_ptr<ICheckerRule<INurbs>> checkerRule) {};
            virtual void AddObjectControllerCheckerRule(std::shared_ptr<ICheckerRule<IObjectController>> checkerRule) {};
            virtual void AddOffroadConditionCheckerRule(std::shared_ptr<ICheckerRule<IOffroadCondition>> checkerRule) {};
            virtual void AddOpenScenarioCheckerRule(std::shared_ptr<ICheckerRule<IOpenScenario>> checkerRule) {};
            virtual void AddOpenScenarioCategoryCheckerRule(std::shared_ptr<ICheckerRule<IOpenScenarioCategory>> checkerRule) {};
            virtual void AddOrientationCheckerRule(std::shared_ptr<ICheckerRule<IOrientation>> checkerRule) {};
            virtual void AddOverrideBrakeActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideBrakeAction>> checkerRule) {};
            virtual void AddOverrideClutchActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideClutchAction>> checkerRule) {};
            virtual void AddOverrideControllerValueActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideControllerValueAction>> checkerRule) {};
            virtual void AddOverrideGearActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideGearAction>> checkerRule) {};
            virtual void AddOverrideParkingBrakeActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideParkingBrakeAction>> checkerRule) {};
            virtual void AddOverrideSteeringWheelActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideSteeringWheelAction>> checkerRule) {};
            virtual void AddOverrideThrottleActionCheckerRule(std::shared_ptr<ICheckerRule<IOverrideThrottleAction>> checkerRule) {};
            virtual void AddParameterActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterAction>> checkerRule) {};
            virtual void AddParameterAddValueRuleCheckerRule(std::shared_ptr<ICheckerRule<IParameterAddValueRule>> checkerRule) {};
            virtual void AddParameterAssignmentCheckerRule(std::shared_ptr<ICheckerRule<IParameterAssignment>> checkerRule) {};
            virtual void AddParameterConditionCheckerRule(std::shared_ptr<ICheckerRule<IParameterCondition>> checkerRule) {};
            virtual void AddParameterDeclarationCheckerRule(std::shared_ptr<ICheckerRule<IParameterDeclaration>> checkerRule) {};
            virtual void AddParameterModifyActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterModifyAction>> checkerRule) {};
            virtual void AddParameterMultiplyByValueRuleCheckerRule(std::shared_ptr<ICheckerRule<IParameterMultiplyByValueRule>> checkerRule) {};
            virtual void AddParameterSetActionCheckerRule(std::shared_ptr<ICheckerRule<IParameterSetAction>> checkerRule) {};
            virtual void AddPedestrianCheckerRule(std::shared_ptr<ICheckerRule<IPedestrian>> checkerRule) {};
            virtual void AddPedestrianCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IPedestrianCatalogLocation>> checkerRule) {};
            virtual void AddPerformanceCheckerRule(std::shared_ptr<ICheckerRule<IPerformance>> checkerRule) {};
            virtual void AddPhaseCheckerRule(std::shared_ptr<ICheckerRule<IPhase>> checkerRule) {};
            virtual void AddPolylineCheckerRule(std::shared_ptr<ICheckerRule<IPolyline>> checkerRule) {};
            virtual void AddPositionCheckerRule(std::shared_ptr<ICheckerRule<IPosition>> checkerRule) {};
            virtual void AddPositionInLaneCoordinatesCheckerRule(std::shared_ptr<ICheckerRule<IPositionInLaneCoordinates>> checkerRule) {};
            virtual void AddPositionInRoadCoordinatesCheckerRule(std::shared_ptr<ICheckerRule<IPositionInRoadCoordinates>> checkerRule) {};
            virtual void AddPositionOfCurrentEntityCheckerRule(std::shared_ptr<ICheckerRule<IPositionOfCurrentEntity>> checkerRule) {};
            virtual void AddPrecipitationCheckerRule(std::shared_ptr<ICheckerRule<IPrecipitation>> checkerRule) {};
            virtual void AddPrivateCheckerRule(std::shared_ptr<ICheckerRule<IPrivate>> checkerRule) {};
            virtual void AddPrivateActionCheckerRule(std::shared_ptr<ICheckerRule<IPrivateAction>> checkerRule) {};
            virtual void AddPropertiesCheckerRule(std::shared_ptr<ICheckerRule<IProperties>> checkerRule) {};
            virtual void AddPropertyCheckerRule(std::shared_ptr<ICheckerRule<IProperty>> checkerRule) {};
            virtual void AddReachPositionConditionCheckerRule(std::shared_ptr<ICheckerRule<IReachPositionCondition>> checkerRule) {};
            virtual void AddRelativeDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeDistanceCondition>> checkerRule) {};
            virtual void AddRelativeLanePositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeLanePosition>> checkerRule) {};
            virtual void AddRelativeObjectPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeObjectPosition>> checkerRule) {};
            virtual void AddRelativeRoadPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeRoadPosition>> checkerRule) {};
            virtual void AddRelativeSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeSpeedCondition>> checkerRule) {};
            virtual void AddRelativeSpeedToMasterCheckerRule(std::shared_ptr<ICheckerRule<IRelativeSpeedToMaster>> checkerRule) {};
            virtual void AddRelativeTargetLaneCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetLane>> checkerRule) {};
            virtual void AddRelativeTargetLaneOffsetCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetLaneOffset>> checkerRule) {};
            virtual void AddRelativeTargetSpeedCheckerRule(std::shared_ptr<ICheckerRule<IRelativeTargetSpeed>> checkerRule) {};
            virtual void AddRelativeWorldPositionCheckerRule(std::shared_ptr<ICheckerRule<IRelativeWorldPosition>> checkerRule) {};
            virtual void AddRoadConditionCheckerRule(std::shared_ptr<ICheckerRule<IRoadCondition>> checkerRule) {};
            virtual void AddRoadNetworkCheckerRule(std::shared_ptr<ICheckerRule<IRoadNetwork>> checkerRule) {};
            virtual void AddRoadPositionCheckerRule(std::shared_ptr<ICheckerRule<IRoadPosition>> checkerRule) {};
            virtual void AddRouteCheckerRule(std::shared_ptr<ICheckerRule<IRoute>> checkerRule) {};
            virtual void AddRouteCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IRouteCatalogLocation>> checkerRule) {};
            virtual void AddRoutePositionCheckerRule(std::shared_ptr<ICheckerRule<IRoutePosition>> checkerRule) {};
            virtual void AddRouteRefCheckerRule(std::shared_ptr<ICheckerRule<IRouteRef>> checkerRule) {};
            virtual void AddRoutingActionCheckerRule(std::shared_ptr<ICheckerRule<IRoutingAction>> checkerRule) {};
            virtual void AddScenarioDefinitionCheckerRule(std::shared_ptr<ICheckerRule<IScenarioDefinition>> checkerRule) {};
            virtual void AddScenarioObjectCheckerRule(std::shared_ptr<ICheckerRule<IScenarioObject>> checkerRule) {};
            virtual void AddSelectedEntitiesCheckerRule(std::shared_ptr<ICheckerRule<ISelectedEntities>> checkerRule) {};
            virtual void AddShapeCheckerRule(std::shared_ptr<ICheckerRule<IShape>> checkerRule) {};
            virtual void AddSimulationTimeConditionCheckerRule(std::shared_ptr<ICheckerRule<ISimulationTimeCondition>> checkerRule) {};
            virtual void AddSpeedActionCheckerRule(std::shared_ptr<ICheckerRule<ISpeedAction>> checkerRule) {};
            virtual void AddSpeedActionTargetCheckerRule(std::shared_ptr<ICheckerRule<ISpeedActionTarget>> checkerRule) {};
            virtual void AddSpeedConditionCheckerRule(std::shared_ptr<ICheckerRule<ISpeedCondition>> checkerRule) {};
            virtual void AddStandStillConditionCheckerRule(std::shared_ptr<ICheckerRule<IStandStillCondition>> checkerRule) {};
            virtual void AddStoryCheckerRule(std::shared_ptr<ICheckerRule<IStory>> checkerRule) {};
            virtual void AddStoryboardCheckerRule(std::shared_ptr<ICheckerRule<IStoryboard>> checkerRule) {};
            virtual void AddStoryboardElementStateConditionCheckerRule(std::shared_ptr<ICheckerRule<IStoryboardElementStateCondition>> checkerRule) {};
            virtual void AddSunCheckerRule(std::shared_ptr<ICheckerRule<ISun>> checkerRule) {};
            virtual void AddSynchronizeActionCheckerRule(std::shared_ptr<ICheckerRule<ISynchronizeAction>> checkerRule) {};
            virtual void AddTeleportActionCheckerRule(std::shared_ptr<ICheckerRule<ITeleportAction>> checkerRule) {};
            virtual void AddTimeHeadwayConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeHeadwayCondition>> checkerRule) {};
            virtual void AddTimeOfDayCheckerRule(std::shared_ptr<ICheckerRule<ITimeOfDay>> checkerRule) {};
            virtual void AddTimeOfDayConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeOfDayCondition>> checkerRule) {};
            virtual void AddTimeReferenceCheckerRule(std::shared_ptr<ICheckerRule<ITimeReference>> checkerRule) {};
            virtual void AddTimeToCollisionConditionCheckerRule(std::shared_ptr<ICheckerRule<ITimeToCollisionCondition>> checkerRule) {};
            virtual void AddTimeToCollisionConditionTargetCheckerRule(std::shared_ptr<ICheckerRule<ITimeToCollisionConditionTarget>> checkerRule) {};
            virtual void AddTimingCheckerRule(std::shared_ptr<ICheckerRule<ITiming>> checkerRule) {};
            virtual void AddTrafficActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficAction>> checkerRule) {};
            virtual void AddTrafficDefinitionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficDefinition>> checkerRule) {};
            virtual void AddTrafficSignalActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalAction>> checkerRule) {};
            virtual void AddTrafficSignalConditionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalCondition>> checkerRule) {};
            virtual void AddTrafficSignalControllerCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalController>> checkerRule) {};
            virtual void AddTrafficSignalControllerActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalControllerAction>> checkerRule) {};
            virtual void AddTrafficSignalControllerConditionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalControllerCondition>> checkerRule) {};
            virtual void AddTrafficSignalStateCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalState>> checkerRule) {};
            virtual void AddTrafficSignalStateActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSignalStateAction>> checkerRule) {};
            virtual void AddTrafficSinkActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSinkAction>> checkerRule) {};
            virtual void AddTrafficSourceActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSourceAction>> checkerRule) {};
            virtual void AddTrafficSwarmActionCheckerRule(std::shared_ptr<ICheckerRule<ITrafficSwarmAction>> checkerRule) {};
            virtual void AddTrajectoryCheckerRule(std::shared_ptr<ICheckerRule<ITrajectory>> checkerRule) {};
            virtual void AddTrajectoryCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<ITrajectoryCatalogLocation>> checkerRule) {};
            virtual void AddTrajectoryFollowingModeCheckerRule(std::shared_ptr<ICheckerRule<ITrajectoryFollowingMode>> checkerRule) {};
            virtual void AddTransitionDynamicsCheckerRule(std::shared_ptr<ICheckerRule<ITransitionDynamics>> checkerRule) {};
            virtual void AddTraveledDistanceConditionCheckerRule(std::shared_ptr<ICheckerRule<ITraveledDistanceCondition>> checkerRule) {};
            virtual void AddTriggerCheckerRule(std::shared_ptr<ICheckerRule<ITrigger>> checkerRule) {};
            virtual void AddTriggeringEntitiesCheckerRule(std::shared_ptr<ICheckerRule<ITriggeringEntities>> checkerRule) {};
            virtual void AddUserDefinedActionCheckerRule(std::shared_ptr<ICheckerRule<IUserDefinedAction>> checkerRule) {};
            virtual void AddUserDefinedValueConditionCheckerRule(std::shared_ptr<ICheckerRule<IUserDefinedValueCondition>> checkerRule) {};
            virtual void AddVehicleCheckerRule(std::shared_ptr<ICheckerRule<IVehicle>> checkerRule) {};
            virtual void AddVehicleCatalogLocationCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCatalogLocation>> checkerRule) {};
            virtual void AddVehicleCategoryDistributionCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCategoryDistribution>> checkerRule) {};
            virtual void AddVehicleCategoryDistributionEntryCheckerRule(std::shared_ptr<ICheckerRule<IVehicleCategoryDistributionEntry>> checkerRule) {};
            virtual void AddVertexCheckerRule(std::shared_ptr<ICheckerRule<IVertex>> checkerRule) {};
            virtual void AddVisibilityActionCheckerRule(std::shared_ptr<ICheckerRule<IVisibilityAction>> checkerRule) {};
            virtual void AddWaypointCheckerRule(std::shared_ptr<ICheckerRule<IWaypoint>> checkerRule) {};
            virtual void AddWeatherCheckerRule(std::shared_ptr<ICheckerRule<IWeather>> checkerRule) {};
            virtual void AddWorldPositionCheckerRule(std::shared_ptr<ICheckerRule<IWorldPosition>> checkerRule) {};
        };
    }
}
