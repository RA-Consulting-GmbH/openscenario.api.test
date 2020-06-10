#pragma once

#include <string>
#include <vector>
#include <ctime>
#include "INamedReference.h"
#include "Enumerations.h"
#include "OscInterfaces.h"

namespace RAC_OPENSCENARIO
{

    class IAbsoluteSpeed;
    class IAbsoluteTargetLane;
    class IAbsoluteTargetLaneOffset;
    class IAbsoluteTargetSpeed;
    class IAccelerationCondition;
    class IAcquirePositionAction;
    class IAct;
    class IAction;
    class IActivateControllerAction;
    class IActors;
    class IAddEntityAction;
    class IAssignControllerAction;
    class IAssignRouteAction;
    class IAxle;
    class IAxles;
    class IBoundingBox;
    class IByEntityCondition;
    class IByObjectType;
    class IByType;
    class IByValueCondition;
    class ICatalog;
    class ICatalogDefinition;
    class ICatalogLocations;
    class ICatalogReference;
    class ICenter;
    class ICentralSwarmObject;
    class IClothoid;
    class ICollisionCondition;
    class ICondition;
    class IConditionGroup;
    class IControlPoint;
    class IController;
    class IControllerAction;
    class IControllerCatalogLocation;
    class IControllerDistribution;
    class IControllerDistributionEntry;
    class ICustomCommandAction;
    class IDeleteEntityAction;
    class IDimensions;
    class IDirectory;
    class IDistanceCondition;
    class IDynamicConstraints;
    class IEndOfRoadCondition;
    class IEntities;
    class IEntityAction;
    class IEntityCondition;
    class IEntityObject;
    class IEntityRef;
    class IEntitySelection;
    class IEnvironment;
    class IEnvironmentAction;
    class IEnvironmentCatalogLocation;
    class IEvent;
    class IFile;
    class IFileHeader;
    class IFinalSpeed;
    class IFog;
    class IFollowTrajectoryAction;
    class IGlobalAction;
    class IInRoutePosition;
    class IInfrastructureAction;
    class IInit;
    class IInitActions;
    class IKnot;
    class ILaneChangeAction;
    class ILaneChangeTarget;
    class ILaneOffsetAction;
    class ILaneOffsetActionDynamics;
    class ILaneOffsetTarget;
    class ILanePosition;
    class ILateralAction;
    class ILateralDistanceAction;
    class ILongitudinalAction;
    class ILongitudinalDistanceAction;
    class IManeuver;
    class IManeuverCatalogLocation;
    class IManeuverGroup;
    class IMiscObject;
    class IMiscObjectCatalogLocation;
    class IModifyRule;
    class INone;
    class INurbs;
    class IObjectController;
    class IOffroadCondition;
    class IOpenScenario;
    class IOpenScenarioCategory;
    class IOrientation;
    class IOverrideBrakeAction;
    class IOverrideClutchAction;
    class IOverrideControllerValueAction;
    class IOverrideGearAction;
    class IOverrideParkingBrakeAction;
    class IOverrideSteeringWheelAction;
    class IOverrideThrottleAction;
    class IParameterAction;
    class IParameterAddValueRule;
    class IParameterAssignment;
    class IParameterCondition;
    class IParameterDeclaration;
    class IParameterModifyAction;
    class IParameterMultiplyByValueRule;
    class IParameterSetAction;
    class IPedestrian;
    class IPedestrianCatalogLocation;
    class IPerformance;
    class IPhase;
    class IPolyline;
    class IPosition;
    class IPositionInLaneCoordinates;
    class IPositionInRoadCoordinates;
    class IPositionOfCurrentEntity;
    class IPrecipitation;
    class IPrivate;
    class IPrivateAction;
    class IProperties;
    class IProperty;
    class IReachPositionCondition;
    class IRelativeDistanceCondition;
    class IRelativeLanePosition;
    class IRelativeObjectPosition;
    class IRelativeRoadPosition;
    class IRelativeSpeedCondition;
    class IRelativeSpeedToMaster;
    class IRelativeTargetLane;
    class IRelativeTargetLaneOffset;
    class IRelativeTargetSpeed;
    class IRelativeWorldPosition;
    class IRoadCondition;
    class IRoadNetwork;
    class IRoadPosition;
    class IRoute;
    class IRouteCatalogLocation;
    class IRoutePosition;
    class IRouteRef;
    class IRoutingAction;
    class IScenarioDefinition;
    class IScenarioObject;
    class ISelectedEntities;
    class IShape;
    class ISimulationTimeCondition;
    class ISpeedAction;
    class ISpeedActionTarget;
    class ISpeedCondition;
    class IStandStillCondition;
    class IStory;
    class IStoryboard;
    class IStoryboardElementStateCondition;
    class ISun;
    class ISynchronizeAction;
    class ITeleportAction;
    class ITimeHeadwayCondition;
    class ITimeOfDay;
    class ITimeOfDayCondition;
    class ITimeReference;
    class ITimeToCollisionCondition;
    class ITimeToCollisionConditionTarget;
    class ITiming;
    class ITrafficAction;
    class ITrafficDefinition;
    class ITrafficSignalAction;
    class ITrafficSignalCondition;
    class ITrafficSignalController;
    class ITrafficSignalControllerAction;
    class ITrafficSignalControllerCondition;
    class ITrafficSignalState;
    class ITrafficSignalStateAction;
    class ITrafficSinkAction;
    class ITrafficSourceAction;
    class ITrafficSwarmAction;
    class ITrajectory;
    class ITrajectoryCatalogLocation;
    class ITrajectoryFollowingMode;
    class ITransitionDynamics;
    class ITraveledDistanceCondition;
    class ITrigger;
    class ITriggeringEntities;
    class IUserDefinedAction;
    class IUserDefinedValueCondition;
    class IVehicle;
    class IVehicleCatalogLocation;
    class IVehicleCategoryDistribution;
    class IVehicleCategoryDistributionEntry;
    class IVertex;
    class IVisibilityAction;
    class IWaypoint;
    class IWeather;
    class IWorldPosition;



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Absolute speed definition.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAbsoluteSpeed : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Absolute speed. Unit: m/s. Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the number (ID) of the target lane.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAbsoluteTargetLane : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Number (ID) of the target lane the entity will change to.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Lane offset with respect to the entity's current lane's center line.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAbsoluteTargetLaneOffset : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Signed number in meters the vehicle should respect as an offset from the center of the current lane.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Absolute speed defined as a target for a SpeedAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAbsoluteTargetSpeed : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Target speed in m/s the vehicle should change to.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares the entity's acceleration to a reference value. The logical operator used for comparison is defined by the rule
 * attribute (less, greater, equal).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAccelerationCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Acceleration value. Unit: m/s^2.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the entity to acquire a target position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAcquirePositionAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A position to acquire.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A container for maneuver groups. Can be executed several times depending on the user provided settings. New executions
 * are only allowed to start when all contained maneuver groups are in the complete state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAct : public IOpenScenarioModelElement, public IStoryboardElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of this act.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of maneuver groups representing the act.
	 * 
	 * @return value of model property maneuverGroups
	*/
        virtual std::vector<std::shared_ptr<IManeuverGroup>> GetManeuverGroups() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a trigger to that starts the act.
	 * 
	 * @return value of model property startTrigger
	*/
        virtual std::shared_ptr<ITrigger> GetStartTrigger() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a trigger that stops the act.
	 * 
	 * @return value of model property stopTrigger
	*/
        virtual std::shared_ptr<ITrigger> GetStopTrigger() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * An action serves to create or modify all dynamic elements of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAction : public IOpenScenarioModelElement, public IStoryboardElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of this action.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The GlobalAction to be executed when the enclosing Action is startedis started.
	 * 
	 * @return value of model property globalAction
	*/
        virtual std::shared_ptr<IGlobalAction> GetGlobalAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The UserDefinedAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property userDefinedAction
	*/
        virtual std::shared_ptr<IUserDefinedAction> GetUserDefinedAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The PrivateAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property privateAction
	*/
        virtual std::shared_ptr<IPrivateAction> GetPrivateAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on the given entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IActivateControllerAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * In lateral domain: Activate or deactivate controller defined (e.g. automated, autonomous) behavior.
	 * 
	 * @return value of model property lateral
	*/
        virtual bool GetLateral() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * In longitudinal domain: Activate or deactivate autonomous behavior.
	 * 
	 * @return value of model property longitudinal
	*/
        virtual bool GetLongitudinal() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A set of entities representing the actors in a maneuver group.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IActors : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Indicates whether the triggering entities are considered actors.
	 * 
	 * @return value of model property selectTriggeringEntities
	*/
        virtual bool GetSelectTriggeringEntities() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entities this actor is referencing.
	 * 
	 * @return value of model property entityRefs
	*/
        virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Adds an entity to the scenario, at a predefined position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAddEntityAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Adds an entity at the specified position.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action assigns a controller to the given entity defined in the enclosing PrivateAction. Controllers could be
 * defined inline or by using a catalog reference.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAssignControllerAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a controller to a given entity.
	 * 
	 * @return value of model property controller
	*/
        virtual std::shared_ptr<IController> GetController() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Uses a CatalogReference to assign a controller to a given entity. CatalogReference must point to a Controller type.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls an entity to follow a route using waypoints on the road network. The corresponding route can be instantiated
 * from a catalog type, or defined within this declaration. This action does not override any action that controls either
 * lateral or longitudinal domain.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAssignRouteAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The route definition.
	 * 
	 * @return value of model property route
	*/
        virtual std::shared_ptr<IRoute> GetRoute() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the route definition in a catalog. The reference must point to a route.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The definition of vehicle axle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAxle : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum steering angle which can be performed by the wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.
	 * 
	 * @return value of model property maxSteering
	*/
        virtual double GetMaxSteering() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Diameter of the wheels on this axle. Unit: m; Range: ]0..inf[.
	 * 
	 * @return value of model property wheelDiameter
	*/
        virtual double GetWheelDiameter() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Distance of the wheels center lines at zero steering. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property trackWidth
	*/
        virtual double GetTrackWidth() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Longitudinal position of the axle with respect to the vehicles reference point. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property positionX
	*/
        virtual double GetPositionX() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Z-position of the axle with respect to the vehicles reference point. Usually this is half of wheel diameter. Unit:m;
	 * Range:[0..inf[.
	 * 
	 * @return value of model property positionZ
	*/
        virtual double GetPositionZ() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A set of the axles of a vehicle. A vehicle must have a front axle and a rear axle. It might have additional axles.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IAxles : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Front axle.
	 * 
	 * @return value of model property frontAxle
	*/
        virtual std::shared_ptr<IAxle> GetFrontAxle() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Rear axle.
	 * 
	 * @return value of model property rearAxle
	*/
        virtual std::shared_ptr<IAxle> GetRearAxle() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of optional additional axles.
	 * 
	 * @return value of model property additionalAxles
	*/
        virtual std::vector<std::shared_ptr<IAxle>> GetAdditionalAxles() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines geometric properties of the entities as a simplified three dimensional bounding box.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IBoundingBox : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
	 * the entity (e.g. the vehicle coordinate system).
	 * 
	 * @return value of model property center
	*/
        virtual std::shared_ptr<ICenter> GetCenter() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Width, length and height of the bounding box.
	 * 
	 * @return value of model property dimensions
	*/
        virtual std::shared_ptr<IDimensions> GetDimensions() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Conditions referring an entity need to know which entity shall trigger the condition. TriggeringEntities is a collection
 * of entities whose states are used to verify the given condition. An additional attribute needs to specify if one of the
 * entities is enough for the condition to become true, or if all of them are required.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IByEntityCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entities triggering this condition.
	 * 
	 * @return value of model property triggeringEntities
	*/
        virtual std::shared_ptr<ITriggeringEntities> GetTriggeringEntities() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The condition which is related to the triggering entities.
	 * 
	 * @return value of model property entityCondition
	*/
        virtual std::shared_ptr<IEntityCondition> GetEntityCondition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an object type to select entities.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IByObjectType : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the type.
	 * 
	 * @return value of model property type
	*/
        virtual ObjectType GetType() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A definition of a type, e. g. to be used to define members in an entity selection.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IByType : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * If a scenario object's entity object is of this type, it is part of the entity selection.
	 * 
	 * @return value of model property objectType
	*/
        virtual ObjectType GetObjectType() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Conditions referring a runtime value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IByValueCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A current parameter value is compared to a reference value.
	 * 
	 * @return value of model property parameterCondition
	*/
        virtual std::shared_ptr<IParameterCondition> GetParameterCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The current time of day is compared to a reference value.
	 * 
	 * @return value of model property timeOfDayCondition
	*/
        virtual std::shared_ptr<ITimeOfDayCondition> GetTimeOfDayCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The current simulation time is compared to a reference value.
	 * 
	 * @return value of model property simulationTimeCondition
	*/
        virtual std::shared_ptr<ISimulationTimeCondition> GetSimulationTimeCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced StoryboardElement terminates according to the given rule.
	 * 
	 * @return value of model property storyboardElementStateCondition
	*/
        virtual std::shared_ptr<IStoryboardElementStateCondition> GetStoryboardElementStateCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The current value of an externally defined named value is compared to a reference value (less, greater, equal).
	 * 
	 * @return value of model property userDefinedValueCondition
	*/
        virtual std::shared_ptr<IUserDefinedValueCondition> GetUserDefinedValueCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced signal reaches the indicated state.
	 * 
	 * @return value of model property trafficSignalCondition
	*/
        virtual std::shared_ptr<ITrafficSignalCondition> GetTrafficSignalCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced signal controller reaches the indicated state.
	 * 
	 * @return value of model property trafficSignalControllerCondition
	*/
        virtual std::shared_ptr<ITrafficSignalControllerCondition> GetTrafficSignalControllerCondition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A catalog may be used to make certain OpenSCENARIO elements reusable. In a catalog parameterizable types are maintained
 * and can be referenced to create runtime instances of those types.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICatalog : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the catalog.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of vehicle types that can be reused in a scenario.
	 * 
	 * @return value of model property vehicles
	*/
        virtual std::vector<std::shared_ptr<IVehicle>> GetVehicles() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of controller types that can be reused in a scenario.
	 * 
	 * @return value of model property controllers
	*/
        virtual std::vector<std::shared_ptr<IController>> GetControllers() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of pedestrian types that can be reused in a scenario.
	 * 
	 * @return value of model property pedestrians
	*/
        virtual std::vector<std::shared_ptr<IPedestrian>> GetPedestrians() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of miscellaneous object type that that can be reused in a scenario.
	 * 
	 * @return value of model property miscObjects
	*/
        virtual std::vector<std::shared_ptr<IMiscObject>> GetMiscObjects() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of environment types that can be reused in a scenario.
	 * 
	 * @return value of model property environments
	*/
        virtual std::vector<std::shared_ptr<IEnvironment>> GetEnvironments() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of maneuver types that can be reused in a scenario.
	 * 
	 * @return value of model property maneuvers
	*/
        virtual std::vector<std::shared_ptr<IManeuver>> GetManeuvers() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of trajectory types that can be reused in a scenario.
	 * 
	 * @return value of model property trajectories
	*/
        virtual std::vector<std::shared_ptr<ITrajectory>> GetTrajectories() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of route types that can be reused in a scenario.
	 * 
	 * @return value of model property routes
	*/
        virtual std::vector<std::shared_ptr<IRoute>> GetRoutes() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A marker stating that the OpenSCENARIO file is a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICatalogDefinition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a catalog.
	 * 
	 * @return value of model property catalog
	*/
        virtual std::shared_ptr<ICatalog> GetCatalog() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Set of catalogs which are referenced in a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICatalogLocations : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on vehicle types.
	 * 
	 * @return value of model property vehicleCatalog
	*/
        virtual std::shared_ptr<IVehicleCatalogLocation> GetVehicleCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on controller types.
	 * 
	 * @return value of model property controllerCatalog
	*/
        virtual std::shared_ptr<IControllerCatalogLocation> GetControllerCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on pedestrian types.
	 * 
	 * @return value of model property pedestrianCatalog
	*/
        virtual std::shared_ptr<IPedestrianCatalogLocation> GetPedestrianCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on miscellaneous object types.
	 * 
	 * @return value of model property miscObjectCatalog
	*/
        virtual std::shared_ptr<IMiscObjectCatalogLocation> GetMiscObjectCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on environment types.
	 * 
	 * @return value of model property environmentCatalog
	*/
        virtual std::shared_ptr<IEnvironmentCatalogLocation> GetEnvironmentCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on maneuver types.
	 * 
	 * @return value of model property maneuverCatalog
	*/
        virtual std::shared_ptr<IManeuverCatalogLocation> GetManeuverCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on trajectory types.
	 * 
	 * @return value of model property trajectoryCatalog
	*/
        virtual std::shared_ptr<ITrajectoryCatalogLocation> GetTrajectoryCatalog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on route types.
	 * 
	 * @return value of model property routeCatalog
	*/
        virtual std::shared_ptr<IRouteCatalogLocation> GetRouteCatalog() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A reference to type in a catalog. It is used when importing the type in a scenario. Furthermore, it hands over
 * additional parameter values.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICatalogReference : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the catalog.
	 * 
	 * @return value of model property catalogName
	*/
        virtual std::string GetCatalogName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of catalog entry.
	 * 
	 * @return value of model property entryName
	*/
        virtual std::string GetEntryName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * List of parameter assignments for instantiation.
	 * 
	 * @return value of model property parameterAssignments
	*/
        virtual std::vector<std::shared_ptr<IParameterAssignment>> GetParameterAssignments() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The resolved reference to a catalog element (out of the catalogName and entryName). Transient means, that it is not
	 * mapped to the schema.
	 * 
	 * @return value of model property ref
	*/
        virtual std::shared_ptr<ICatalogElement> GetRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
 * the entity (e.g. the vehicle coordinate system).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICenter : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in x direction.
	 * 
	 * @return value of model property x
	*/
        virtual double GetX() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in y direction.
	 * 
	 * @return value of model property y
	*/
        virtual double GetY() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in z direction.
	 * 
	 * @return value of model property z
	*/
        virtual double GetZ() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The entity that represents the center of a swarm.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICentralSwarmObject : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the central entity the swarm traffic is created around.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A shape of the trajectory of an entity. A clothoid is a curve whose curvature changes linearly with its curve length.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IClothoid : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Start curvature of clothoid.
	 * 
	 * @return value of model property curvature
	*/
        virtual double GetCurvature() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Rate of change of the curvature of the clothoid.Unit: 1/s;Range [0..inf[.
	 * 
	 * @return value of model property curvatureDot
	*/
        virtual double GetCurvatureDot() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Length of clothoid.
	 * 
	 * @return value of model property length
	*/
        virtual double GetLength() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification at the start of the clothoid. Unit: s;Range [0..inf[.
	 * 
	 * @return value of model property startTime
	*/
        virtual double GetStartTime() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification at the end of the clothoid. Unit: s;Range ]0..inf[.
	 * 
	 * @return value of model property stopTime
	*/
        virtual double GetStopTime() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Start position of a clothoid.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Condition becomes true when the triggering entity/entities collide with another given entity or any entity of a specific
 * type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICollisionCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a specific entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<IEntityRef> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Entities of this type can trigger the condition when collide.
	 * 
	 * @return value of model property byType
	*/
        virtual std::shared_ptr<IByObjectType> GetByType() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A condition represents a set of logical expressions that evaluate the relationship of values provided by the user. These
 * values may be entity states, scenario properties, scenario states or external signals. Conditions are the main
 * components in triggers.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the condition.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Time elapsed after the edge condition is verified, until the condition returns true to the scenario. Unit: s; Range:
	 * [0..inf[.
	 * 
	 * @return value of model property delay
	*/
        virtual double GetDelay() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Specifies the edge when the condition is evaluated to true (rising, falling, any).
	 * 
	 * @return value of model property conditionEdge
	*/
        virtual ConditionEdge GetConditionEdge() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A condition that refers to an entity.
	 * 
	 * @return value of model property byEntityCondition
	*/
        virtual std::shared_ptr<IByEntityCondition> GetByEntityCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A condition that refers to a runtime value.
	 * 
	 * @return value of model property byValueCondition
	*/
        virtual std::shared_ptr<IByValueCondition> GetByValueCondition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A condition group is an association of conditions that is assessed during simulation time and signals true when all
 * associated conditions are evaluated to true.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IConditionGroup : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A associated list of conditions.
	 * 
	 * @return value of model property conditions
	*/
        virtual std::vector<std::shared_ptr<ICondition>> GetConditions() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of one control point of a NURBS trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IControlPoint : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional specification of the time dimension of the control point. Unit: s;Range [0..inf[.
	 * 
	 * @return value of model property time
	*/
        virtual double GetTime() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional weight specification of the control point. If unspecified, all control points will be equal weighted. Range
	 * ]-inf..inf[.
	 * 
	 * @return value of model property weight
	*/
        virtual double GetWeight() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the control point.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a controller type and parameters for the controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IController : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the controller type.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Describing properties for the controller.
	 * 
	 * @return value of model property properties
	*/
        virtual std::shared_ptr<IProperties> GetProperties() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action that assigns a new controller or overrides an existing one.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IControllerAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Assign a controller to an entity.
	 * 
	 * @return value of model property assignControllerAction
	*/
        virtual std::shared_ptr<IAssignControllerAction> GetAssignControllerAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Values for throttle, brake, clutch, parking brake, steering wheel or gear.
	 * 
	 * @return value of model property overrideControllerValueAction
	*/
        virtual std::shared_ptr<IOverrideControllerValueAction> GetOverrideControllerValueAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up controller catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IControllerCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalog files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a distribution which controller should be used in a traffic.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IControllerDistribution : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The weights of controllers of a specific type in a traffic.
	 * 
	 * @return value of model property controllerDistributionEntries
	*/
        virtual std::vector<std::shared_ptr<IControllerDistributionEntry>> GetControllerDistributionEntries() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines that weight in a controller distribution, for the given controller type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IControllerDistributionEntry : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The weight of the entry. Range: ]0..inf[.
	 * 
	 * @return value of model property weight
	*/
        virtual double GetWeight() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The specified controller type.
	 * 
	 * @return value of model property controller
	*/
        virtual std::shared_ptr<IController> GetController() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A controller type import from a catalog.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to activate a custom action native to the specific user environment
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ICustomCommandAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Type that is defined as a contract between the simulation environment provider and the author of a scenario.
	 * 
	 * @return value of model property type
	*/
        virtual std::string GetType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The command that is defined as a contract between the simulation environment provider and the author of a scenario.
	 * 
	 * @return value of model property content
	*/
        virtual std::string GetContent() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Deletes an entity at runtime from the simulation (The entity reference is defined in the enclosing GlobalAction).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IDeleteEntityAction : public IOpenScenarioModelElement
    {
    public:

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Dimensions for a three dimensional box. Width, length and height are the absolute extensions in the (y,x,z) coordinate
 * system of the entity's local coordinate system.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IDimensions : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Width of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property width
	*/
        virtual double GetWidth() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Length of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property length
	*/
        virtual double GetLength() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Height of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property height
	*/
        virtual double GetHeight() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifies the path to a directory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IDirectory : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * File system path, e.g. path=/home/simulation/.
	 * 
	 * @return value of model property path
	*/
        virtual std::string GetPath() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The current distance between an entity and a reference entity is compared to a given distance (less, greater, equal).
 * Several additional parameters like free space etc. can be defined.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IDistanceCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The distance value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: distance is measured between closest bounding box points. False: reference point distance is used.
	 * 
	 * @return value of model property freespace
	*/
        virtual bool GetFreespace() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/
        virtual bool GetAlongRoute() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The given position the distance is related to.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Constraints that are limiting the acceleration, the deceleration and the speed. Used in lateral or longitudinal actions.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IDynamicConstraints : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum acceleration the distance controller is allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxAcceleration
	*/
        virtual double GetMaxAcceleration() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum deceleration the distance controller is allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxDeceleration
	*/
        virtual double GetMaxDeceleration() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum speed the distance controller is allowed to use for keeping the distance. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property maxSpeed
	*/
        virtual double GetMaxSpeed() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Condition becomes true after the triggering entity/entities has reached the end of a road for a given amount of time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEndOfRoadCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of time at end of road. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
        virtual double GetDuration() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of entities (scenario objects or entity selections) in a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEntities : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of scenario object definitions that pairs an entity object and a controller.
	 * 
	 * @return value of model property scenarioObjects
	*/
        virtual std::vector<std::shared_ptr<IScenarioObject>> GetScenarioObjects() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entity selection definitions.
	 * 
	 * @return value of model property entitySelections
	*/
        virtual std::vector<std::shared_ptr<IEntitySelection>> GetEntitySelections() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an action that adds
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEntityAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Action that adds the reference entity to the scenario.
	 * 
	 * @return value of model property addEntityAction
	*/
        virtual std::shared_ptr<IAddEntityAction> GetAddEntityAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Action that deletes the reference entity from the scenario.
	 * 
	 * @return value of model property deleteEntityAction
	*/
        virtual std::shared_ptr<IDeleteEntityAction> GetDeleteEntityAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a specific condition on an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEntityCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking for how long the reference entity has reached the end of the road.
	 * 
	 * @return value of model property endOfRoadCondition
	*/
        virtual std::shared_ptr<IEndOfRoadCondition> GetEndOfRoadCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking whether the reference entity was involved in a collision.
	 * 
	 * @return value of model property collisionCondition
	*/
        virtual std::shared_ptr<ICollisionCondition> GetCollisionCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking for how long the reference entity has left the road.
	 * 
	 * @return value of model property offroadCondition
	*/
        virtual std::shared_ptr<IOffroadCondition> GetOffroadCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the time headway between two entities.
	 * 
	 * @return value of model property timeHeadwayCondition
	*/
        virtual std::shared_ptr<ITimeHeadwayCondition> GetTimeHeadwayCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the time to collision between two entities.
	 * 
	 * @return value of model property timeToCollisionCondition
	*/
        virtual std::shared_ptr<ITimeToCollisionCondition> GetTimeToCollisionCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the current acceleration of an entity.
	 * 
	 * @return value of model property accelerationCondition
	*/
        virtual std::shared_ptr<IAccelerationCondition> GetAccelerationCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking for how long the reference entity has not moved.
	 * 
	 * @return value of model property standStillCondition
	*/
        virtual std::shared_ptr<IStandStillCondition> GetStandStillCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the current speed of the referenced entities.
	 * 
	 * @return value of model property speedCondition
	*/
        virtual std::shared_ptr<ISpeedCondition> GetSpeedCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the relative speed between two entity.
	 * 
	 * @return value of model property relativeSpeedCondition
	*/
        virtual std::shared_ptr<IRelativeSpeedCondition> GetRelativeSpeedCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the total traveled distance of the reference entity since the start of the scenario.
	 * 
	 * @return value of model property traveledDistanceCondition
	*/
        virtual std::shared_ptr<ITraveledDistanceCondition> GetTraveledDistanceCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking whether the reference entity has reached a given position within a given uncertainty.
	 * 
	 * @return value of model property reachPositionCondition
	*/
        virtual std::shared_ptr<IReachPositionCondition> GetReachPositionCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the distance between two entities or an entity and a position.
	 * 
	 * @return value of model property distanceCondition
	*/
        virtual std::shared_ptr<IDistanceCondition> GetDistanceCondition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the relative distance between two entities.
	 * 
	 * @return value of model property relativeDistanceCondition
	*/
        virtual std::shared_ptr<IRelativeDistanceCondition> GetRelativeDistanceCondition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A vehicle type, pedestrian type or miscellaneous object type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEntityObject : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to a catalog entry of type MiscObject, Vehicle or Pedestrian.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Vehicle definition.
	 * 
	 * @return value of model property vehicle
	*/
        virtual std::shared_ptr<IVehicle> GetVehicle() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Pedestrian definition.
	 * 
	 * @return value of model property pedestrian
	*/
        virtual std::shared_ptr<IPedestrian> GetPedestrian() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a MiscObject.
	 * 
	 * @return value of model property miscObject
	*/
        virtual std::shared_ptr<IMiscObject> GetMiscObject() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Unambiguous reference to an entity represented as its name.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEntityRef : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping of scenario objects by name and/or type. An instance of EntitySelection is considered also an instance of
 * Entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEntitySelection : public IOpenScenarioModelElement, public IEntity
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the entity selection. By this name, a selection can be referenced as an entity.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Selected entities as members of the entity selection.
	 * 
	 * @return value of model property members
	*/
        virtual std::shared_ptr<ISelectedEntities> GetMembers() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the environment conditions of a scenario, e.g. time of day, weather and road condition.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEnvironment : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the environment. If used in catalog name is required.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Time of the day during the simulation.
	 * 
	 * @return value of model property timeOfDay
	*/
        virtual std::shared_ptr<ITimeOfDay> GetTimeOfDay() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Weather conditions during the simulation.
	 * 
	 * @return value of model property weather
	*/
        virtual std::shared_ptr<IWeather> GetWeather() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Road conditions during the simulation.
	 * 
	 * @return value of model property roadCondition
	*/
        virtual std::shared_ptr<IRoadCondition> GetRoadCondition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Setting weather state, road conditions, and time of the day. An environment can be defined or an environment type from a
 * catalog can be used to instantiate an environment.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEnvironmentAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * New environment definition.
	 * 
	 * @return value of model property environment
	*/
        virtual std::shared_ptr<IEnvironment> GetEnvironment() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to a catalog entry of type Environment.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up environment catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEnvironmentCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for Actions. Its priority settings determine how to interact with other events within the same scope
 * (maneuver).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IEvent : public IOpenScenarioModelElement, public IStoryboardElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Priority of each event.
	 * 
	 * @return value of model property priority
	*/
        virtual Priority GetPriority() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum number of executions. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/
        virtual unsigned int GetMaximumExecutionCount() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the event.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * List of actions in an event.
	 * 
	 * @return value of model property actions
	*/
        virtual std::vector<std::shared_ptr<IAction>> GetActions() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Actions are executed as soon as the start trigger fires. This point in time represents the start of the event.
	 * 
	 * @return value of model property startTrigger
	*/
        virtual std::shared_ptr<ITrigger> GetStartTrigger() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * File on the file system, including its file path.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IFile : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Filepath e.g. filepath=/home/simulator/customDriverSpecification.xml.
	 * 
	 * @return value of model property filepath
	*/
        virtual std::string GetFilepath() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * File header used in OpenSCENARIO files, e.g. scenario file or catalog files.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IFileHeader : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Major OpenSCENARIO revision, this file conforms to Range: [0..inf[.
	 * 
	 * @return value of model property revMajor
	*/
        virtual unsigned short GetRevMajor() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Minor OpenSCENARIO revision, this file conforms to Range: [0..inf[.
	 * 
	 * @return value of model property revMinor
	*/
        virtual unsigned short GetRevMinor() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * User specific date and time recommended: YYYY-MM-DDThh:mm:ss.
	 * 
	 * @return value of model property date
	*/
        virtual std::time_t GetDate() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * User specific description.
	 * 
	 * @return value of model property description
	*/
        virtual std::string GetDescription() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Author of the scenario or the catalog.
	 * 
	 * @return value of model property author
	*/
        virtual std::string GetAuthor() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Final speed definition for a SynchronizeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IFinalSpeed : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The absolute speed a synchronized entity should have at its target position.
	 * 
	 * @return value of model property absoluteSpeed
	*/
        virtual std::shared_ptr<IAbsoluteSpeed> GetAbsoluteSpeed() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The speed a synchronized entity should have relative to its master entity at its target position.
	 * 
	 * @return value of model property relativeSpeedToMaster
	*/
        virtual std::shared_ptr<IRelativeSpeedToMaster> GetRelativeSpeedToMaster() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines fog at simulation runtime.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IFog : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property visualRange
	*/
        virtual double GetVisualRange() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Dimensions and center of fog in fixed coordinates.
	 * 
	 * @return value of model property boundingBox
	*/
        virtual std::shared_ptr<IBoundingBox> GetBoundingBox() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls an entity to follow a trajectory using vertices, timings (optionally) and a corresponding interpolation
 * strategy. The trajectory can be instantiated from a catalog type, or defined within this declaration.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IFollowTrajectoryAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Trajectory definition.
	 * 
	 * @return value of model property trajectory
	*/
        virtual std::shared_ptr<ITrajectory> GetTrajectory() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the trajectory type in a catalog.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines if time information provided within the trajectory should be considered. If so, it may be used as either
	 * absolute or relative time along the trajectory in order to define longitudinal velocity of the actor. Moreover, a time
	 * offset or time scaling may be applied.
	 * 
	 * @return value of model property timeReference
	*/
        virtual std::shared_ptr<ITimeReference> GetTimeReference() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The mode how to follow the given trajectory.
	 * 
	 * @return value of model property trajectoryFollowingMode
	*/
        virtual std::shared_ptr<ITrajectoryFollowingMode> GetTrajectoryFollowingMode() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions that does not explicitly target an entityâ€™s state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IGlobalAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Sets the weather state, road conditions, and time of the day.
	 * 
	 * @return value of model property environmentAction
	*/
        virtual std::shared_ptr<IEnvironmentAction> GetEnvironmentAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Removing or adding entities.
	 * 
	 * @return value of model property entityAction
	*/
        virtual std::shared_ptr<IEntityAction> GetEntityAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Setting/modifying values of parameters.
	 * 
	 * @return value of model property parameterAction
	*/
        virtual std::shared_ptr<IParameterAction> GetParameterAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Setting/modifying traffic signals.
	 * 
	 * @return value of model property infrastructureAction
	*/
        virtual std::shared_ptr<IInfrastructureAction> GetInfrastructureAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Populating ambient traffic.
	 * 
	 * @return value of model property trafficAction
	*/
        virtual std::shared_ptr<ITrafficAction> GetTrafficAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the current position in a given route, either through a position in the lane coordinate system, a position in a
 * road coordinate system or through the current position of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IInRoutePosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The position is defined through the current position of a given entity.
	 * 
	 * @return value of model property fromCurrentEntity
	*/
        virtual std::shared_ptr<IPositionOfCurrentEntity> GetFromCurrentEntity() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in road coordinate system.
	 * 
	 * @return value of model property fromRoadCoordinates
	*/
        virtual std::shared_ptr<IPositionInRoadCoordinates> GetFromRoadCoordinates() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in lane coordinate system.
	 * 
	 * @return value of model property fromLaneCoordinates
	*/
        virtual std::shared_ptr<IPositionInLaneCoordinates> GetFromLaneCoordinates() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an action which changes a state of a traffic signal or a traffic signal controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IInfrastructureAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Set or overwrite a signals state or a signal controllers state from a road network.
	 * 
	 * @return value of model property trafficSignalAction
	*/
        virtual std::shared_ptr<ITrafficSignalAction> GetTrafficSignalAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the actions which are executed during the initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IInit : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of actions initially executed when the enclosing storyboard starts.
	 * 
	 * @return value of model property actions
	*/
        virtual std::shared_ptr<IInitActions> GetActions() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A list of action instances (GlobalAction, UserDefinedAction, PrivateAction instances) which are executed during the
 * initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IInitActions : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of global actions.
	 * 
	 * @return value of model property globalActions
	*/
        virtual std::vector<std::shared_ptr<IGlobalAction>> GetGlobalActions() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of user defined actions.
	 * 
	 * @return value of model property userDefinedActions
	*/
        virtual std::vector<std::shared_ptr<IUserDefinedAction>> GetUserDefinedActions() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of private actions.
	 * 
	 * @return value of model property privates
	*/
        virtual std::vector<std::shared_ptr<IPrivate>> GetPrivates() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of one value of the knot vector of a NURBS trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IKnot : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Knot vector value. Range ]-inf..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes the transition between an entity's current lane and its target lane. The target lane may be given
 * in absolute or relative terms. The dynamics of the transition may be given either by providing the time or the distance
 * required for performing the transition. Time and distance are measured between the start position and the end position
 * of the action.. The transition starts at the current lane position, including the current lane offset and ends at the
 * target lane position, optionally including a targetLaneOffset.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILaneChangeAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane offset to be reached at the target lane; the action will end there. Unit: m.
	 * 
	 * @return value of model property targetLaneOffset
	*/
        virtual double GetTargetLaneOffset() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Shape/time of lane change action.
	 * 
	 * @return value of model property laneChangeActionDynamics
	*/
        virtual std::shared_ptr<ITransitionDynamics> GetLaneChangeActionDynamics() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Direction of lane change action.
	 * 
	 * @return value of model property laneChangeTarget
	*/
        virtual std::shared_ptr<ILaneChangeTarget> GetLaneChangeTarget() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the target lane of the LaneChangeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILaneChangeTarget : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane change direction relative to entity's lane.
	 * 
	 * @return value of model property relativeTargetLane
	*/
        virtual std::shared_ptr<IRelativeTargetLane> GetRelativeTargetLane() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane change target lane number.
	 * 
	 * @return value of model property absoluteTargetLane
	*/
        virtual std::shared_ptr<IAbsoluteTargetLane> GetAbsoluteTargetLane() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes a continuously kept lane offset of an entity and its initial transition to the new lane offset.
 * The lane offset may be given in absolute or relative terms. The dynamics are specified by providing the maxLateralAcc
 * used to keep the lane offset. Lane offset keeping starts immediately at start of the action and ends after the given
 * duration. Different shapes can be used for the initial transition. Step defines an immediate transition, i.e. a jump
 * from the current lane offset to the target lane offset. Usage of time and distance does not make any sense in
 * combination with step; linear will result in a linear movement between the start and target lane offset; cubic and
 * sinusoidal will result in smooth transitions (basically s-shaped) between start and end state. A smooth transition is
 * only given with cubic and sinusoidal shape.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILaneOffsetAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target lane is reached. If true it does not end but has to be stopped.
	 * 
	 * @return value of model property continuous
	*/
        virtual bool GetContinuous() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Parameters defining the dynamics of the LaneOffsetAction.
	 * 
	 * @return value of model property laneOffsetActionDynamics
	*/
        virtual std::shared_ptr<ILaneOffsetActionDynamics> GetLaneOffsetActionDynamics() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Parameters indicating if the lane offset is defined relative to another entity or absolute to the current lane's center
	 * line.
	 * 
	 * @return value of model property laneOffsetTarget
	*/
        virtual std::shared_ptr<ILaneOffsetTarget> GetLaneOffsetTarget() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines shape, duration and lateral acceleration which are used to do the lane offset action.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILaneOffsetActionDynamics : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum lateral acceleration used to initially reach and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxLateralAcc
	*/
        virtual double GetMaxLateralAcc() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Geometrical shape of the LaneOffsetAction's dynamics.
	 * 
	 * @return value of model property dynamicsShape
	*/
        virtual DynamicsShape GetDynamicsShape() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the target lane of the LaneOffsetAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILaneOffsetTarget : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative reference to the lane position of a specific entity.
	 * 
	 * @return value of model property relativeTargetLaneOffset
	*/
        virtual std::shared_ptr<IRelativeTargetLaneOffset> GetRelativeTargetLaneOffset() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Absolute reference to the current lane's center line.
	 * 
	 * @return value of model property absoluteTargetLaneOffset
	*/
        virtual std::shared_ptr<IAbsoluteTargetLaneOffset> GetAbsoluteTargetLaneOffset() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position along a lane with a given s coordinate, lane ID, road ID and orientation.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILanePosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the current road (ID of a road in road network).
	 * 
	 * @return value of model property roadId
	*/
        virtual std::string GetRoadId() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the current lane (ID of a lane in road network).
	 * 
	 * @return value of model property laneId
	*/
        virtual std::string GetLaneId() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset to the centerline of the current lane. Unit: m.
	 * 
	 * @return value of model property offset
	*/
        virtual double GetOffset() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The s coordinate of the current position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property s
	*/
        virtual double GetS() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the lateral behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILateralAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a lane change.
	 * 
	 * @return value of model property laneChangeAction
	*/
        virtual std::shared_ptr<ILaneChangeAction> GetLaneChangeAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lane offset.
	 * 
	 * @return value of model property laneOffsetAction
	*/
        virtual std::shared_ptr<ILaneOffsetAction> GetLaneOffsetAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lateral distance to a specific entity.
	 * 
	 * @return value of model property lateralDistanceAction
	*/
        virtual std::shared_ptr<ILateralDistanceAction> GetLateralDistanceAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes a continuously kept lateral distance of an entity with respect to a reference entity. The distance
 * can be maintained by using a controller, requiring limiting values for lateral acceleration, lateral deceleration and
 * lateral speed. Without this limiting parameters lateral distance is kept rigid. Distance measurement could either be
 * calculated from the distance between the entities' reference points or from the free space between the entities'
 * bounding boxes.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILateralDistanceAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity the lateral distance shall be kept to.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral distance value. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property distance
	*/
        virtual double GetDistance() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: Lateral distance is measured using the distance between closest bounding box points. False: Reference point
	 * distance is used.
	 * 
	 * @return value of model property freespace
	*/
        virtual bool GetFreespace() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
	 * 
	 * @return value of model property continuous
	*/
        virtual bool GetContinuous() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Parameter that assigns either unlimited dynamics (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the
	 * action.
	 * 
	 * @return value of model property dynamicConstraints
	*/
        virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the longitudinal behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILongitudinalAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * This action describes the transition between the current longitudinal speed of an entity and its target speed.
	 * 
	 * @return value of model property speedAction
	*/
        virtual std::shared_ptr<ISpeedAction> GetSpeedAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This Action defines a continuously kept longitudinal distance to a specific entity.
	 * 
	 * @return value of model property longitudinalDistanceAction
	*/
        virtual std::shared_ptr<ILongitudinalDistanceAction> GetLongitudinalDistanceAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action activates a controller for the longitudinal behavior of an entity in a way that a given distance or time gap
 * to the reference entity is maintained. The dynamic behavior of the controller may be limited by parameters. Choosing a
 * non-limited dynamic behavior represents a rigid time or distance connection between actor and object.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ILongitudinalDistanceAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity the distance shall be kept to.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Distance value, not to be used together with timeGap attribute. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property distance
	*/
        virtual double GetDistance() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Time gap value, not to be used together with distance attribute. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property timeGap
	*/
        virtual double GetTimeGap() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: Distance is measured using the distance between closest bounding box points False: Reference point distance is
	 * used.
	 * 
	 * @return value of model property freespace
	*/
        virtual bool GetFreespace() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
	 * 
	 * @return value of model property continuous
	*/
        virtual bool GetContinuous() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Parameter that assigns either unlimited dynamics (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to
	 * the action.
	 * 
	 * @return value of model property dynamicConstraints
	*/
        virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A container for Events. Can be stored in a maneuver catalog. Allows declaration of parameters within its scope.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IManeuver : public IOpenScenarioModelElement, public IStoryboardElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * List of events that are comprised by the maneuver.
	 * 
	 * @return value of model property events
	*/
        virtual std::vector<std::shared_ptr<IEvent>> GetEvents() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up maneuver catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IManeuverCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping element connecting a set of actors to a set maneuvers. Multiple maneuver groups can run independently in
 * parallel. Maneuvers can be defined or instantiated from a maneuver type in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IManeuverGroup : public IOpenScenarioModelElement, public IStoryboardElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Number of allowed executions of the maneuver group. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/
        virtual unsigned int GetMaximumExecutionCount() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver group.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Actors of the maneuver group.
	 * 
	 * @return value of model property actors
	*/
        virtual std::shared_ptr<IActors> GetActors() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Each element of this list of must reference a maneuver type in a catalog.
	 * 
	 * @return value of model property catalogReferences
	*/
        virtual std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Maneuver type definitions.
	 * 
	 * @return value of model property maneuvers
	*/
        virtual std::vector<std::shared_ptr<IManeuver>> GetManeuvers() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a miscellaneous object type. A miscellaneous object has no controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IMiscObject : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Categorization of the miscellaneous object.
	 * 
	 * @return value of model property miscObjectCategory
	*/
        virtual MiscObjectCategory GetMiscObjectCategory() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Mass of the miscellaneous object. Unit: kg; Range: [0..inf[.
	 * 
	 * @return value of model property mass
	*/
        virtual double GetMass() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the miscellaneous object type.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box definition for the miscellaneous object.
	 * 
	 * @return value of model property boundingBox
	*/
        virtual std::shared_ptr<IBoundingBox> GetBoundingBox() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Property definitions for the miscellaneous object.
	 * 
	 * @return value of model property properties
	*/
        virtual std::shared_ptr<IProperties> GetProperties() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up miscellaneous object catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IMiscObjectCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Enclosing type for either adding a value to a parameter or multiply the parameter by a value. Has to be match the
 * parameter type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IModifyRule : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Adding a value to a parameter.
	 * 
	 * @return value of model property addValue
	*/
        virtual std::shared_ptr<IParameterAddValueRule> GetAddValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Multiply a parameter by a value.
	 * 
	 * @return value of model property multiplyByValue
	*/
        virtual std::shared_ptr<IParameterMultiplyByValueRule> GetMultiplyByValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Empty container, indicating unused controlling behavior or dynamics limitations for specific axis.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class INone : public IOpenScenarioModelElement
    {
    public:

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Non-uniform rational b-spline (NURBS) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class INurbs : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Order of the NURBS trajectory. This is the order of the curve, not the degree of the polynomials, which will be one less
	 * than the order of the curve. Range [2..inf[.
	 * 
	 * @return value of model property order
	*/
        virtual unsigned int GetOrder() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Control point vector of the NURBS trajectory. The number of control points must be greater or equal to the order of the
	 * curve.
	 * 
	 * @return value of model property controlPoints
	*/
        virtual std::vector<std::shared_ptr<IControlPoint>> GetControlPoints() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Knot vector of the NURBS trajectory. Knot values must be given in ascending order. The number of knot vector values must
	 * be equal to the number of control points plus the order of the curve.
	 * 
	 * @return value of model property knots
	*/
        virtual std::vector<std::shared_ptr<IKnot>> GetKnots() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a controller for a scenario object. Either an inline definition or a catalog reference to a controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IObjectController : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Catalog reference to a controller.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Controller type definition.
	 * 
	 * @return value of model property controller
	*/
        virtual std::shared_ptr<IController> GetController() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Checks if an entity is of the road. The logical expression returns true after the entity has been offroad for a specific
 * duration.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOffroadCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of time of driving offroad. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
        virtual double GetDuration() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top level container for scenarios or catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOpenScenario : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Header information for the scenario or the catalog.
	 * 
	 * @return value of model property fileHeader
	*/
        virtual std::shared_ptr<IFileHeader> GetFileHeader() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Category (catalog or scenario) of the OpenSCENARIO description.
	 * 
	 * @return value of model property openScenarioCategory
	*/
        virtual std::shared_ptr<IOpenScenarioCategory> GetOpenScenarioCategory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Indicates if the following content defines a scenario or a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOpenScenarioCategory : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a scenario.
	 * 
	 * @return value of model property scenarioDefinition
	*/
        virtual std::shared_ptr<IScenarioDefinition> GetScenarioDefinition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a catalog.
	 * 
	 * @return value of model property catalogDefinition
	*/
        virtual std::shared_ptr<ICatalogDefinition> GetCatalogDefinition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an absolute or relative orientation (heading, pitch and roll).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOrientation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative or absolute definition.
	 * 
	 * @return value of model property type
	*/
        virtual ReferenceContext GetType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Heading angle. Unit: rad;.
	 * 
	 * @return value of model property h
	*/
        virtual double GetH() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Pitch angle. Unit: rad;.
	 * 
	 * @return value of model property p
	*/
        virtual double GetP() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Roll angle. Unit: rad;.
	 * 
	 * @return value of model property r
	*/
        virtual double GetR() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the brake of a vehicle, when overriding a brake value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideBrakeAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Brake pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the brake pedal.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
        virtual bool GetActive() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the clutch of a vehicle, when overriding a clutch value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideClutchAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the clutch pedal.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
        virtual bool GetActive() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Overrides entity controller values. Mostly suited for motor vehicles.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideControllerValueAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for throttle pedal position or unset value.
	 * 
	 * @return value of model property throttle
	*/
        virtual std::shared_ptr<IOverrideThrottleAction> GetThrottle() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for brake position or unset value.
	 * 
	 * @return value of model property brake
	*/
        virtual std::shared_ptr<IOverrideBrakeAction> GetBrake() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for clutch position or unset value.
	 * 
	 * @return value of model property clutch
	*/
        virtual std::shared_ptr<IOverrideClutchAction> GetClutch() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for parking brake position or unset value.
	 * 
	 * @return value of model property parkingBrake
	*/
        virtual std::shared_ptr<IOverrideParkingBrakeAction> GetParkingBrake() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for steering wheel position or unset value.
	 * 
	 * @return value of model property steeringWheel
	*/
        virtual std::shared_ptr<IOverrideSteeringWheelAction> GetSteeringWheel() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for gear position or unset value.
	 * 
	 * @return value of model property gear
	*/
        virtual std::shared_ptr<IOverrideGearAction> GetGear() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the gear of a vehicle, when overriding a gear value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideGearAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Gear number.
	 * 
	 * @return value of model property number
	*/
        virtual double GetNumber() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
        virtual bool GetActive() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the parking brake of a vehicle, when overriding a parking brake value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideParkingBrakeAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Parking brake value. Unit: %; Range: [0..1]. The value 1 represent the maximum parking brake state.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
        virtual bool GetActive() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the steering wheel of a vehicle, when overriding a steering wheel angle in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideSteeringWheelAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Steering wheel angle. Unit: rad.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
        virtual bool GetActive() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the throttle of a vehicle, when overriding a throttle value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IOverrideThrottleAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Throttle pedal value. Range: [0..1].0 represents 0%, 1 represents 100% of pressing the throttle pedal.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
        virtual bool GetActive() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Set or modify a named parameter. (Be aware of the data type).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter.
	 * 
	 * @return value of model property parameterRef
	*/
        virtual std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for the parameter.
	 * 
	 * @return value of model property setAction
	*/
        virtual std::shared_ptr<IParameterSetAction> GetSetAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Modifying rule for the parameter (Add value or multiply by value).
	 * 
	 * @return value of model property modifyAction
	*/
        virtual std::shared_ptr<IParameterModifyAction> GetModifyAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an addition of a value to a parameter as part of a ModifyRule.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterAddValueRule : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Add value to existing parameter.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Assignment of a value to a named parameter during runtime. This assignment is used when importing types of vehicles,
 * controllers etc. from a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterAssignment : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter that must be declared in the catalog.
	 * 
	 * @return value of model property parameterRef
	*/
        virtual std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter that is handed over to the parametrizable type.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares a named parameter's value to a reference value. The logical operator used for comparison is defined by the rule
 * attribute Less and greater operator will only be supported if the value given as string can unambiguously be converted
 * into a scalar value (e.g. value=5, value=16.667).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter that must be defined.
	 * 
	 * @return value of model property parameterRef
	*/
        virtual std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Declaration of a parameter.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterDeclaration : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Type of the parameter.
	 * 
	 * @return value of model property parameterType
	*/
        virtual ParameterType GetParameterType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter as its default value.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Modify a global parameter according to given rules.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterModifyAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Either adding a value to a parameter or multiply a parameter by a value. Has to match the parameter type.
	 * 
	 * @return value of model property rule
	*/
        virtual std::shared_ptr<IModifyRule> GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Multiply a parameter by a value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterMultiplyByValueRule : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Multiply existing parameter by the value (be aware of the parameter data type).
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Setting a parameter to a given value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IParameterSetAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The new value for the parameter.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a pedestrian type in a scenario or in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPedestrian : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the model of the pedestrian.
	 * 
	 * @return value of model property model
	*/
        virtual std::string GetModel() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The mass of a pedestrian in kg.
	 * 
	 * @return value of model property mass
	*/
        virtual double GetMass() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the pedestrian type. Required when used in catalog.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Category type of pedestrian.
	 * 
	 * @return value of model property pedestrianCategory
	*/
        virtual PedestrianCategory GetPedestrianCategory() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box of the pedestrian.
	 * 
	 * @return value of model property boundingBox
	*/
        virtual std::shared_ptr<IBoundingBox> GetBoundingBox() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Properties (values/files) of the pedestrian.
	 * 
	 * @return value of model property properties
	*/
        virtual std::shared_ptr<IProperties> GetProperties() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up pedestrian catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPedestrianCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * File path for the pedestrian catalog files.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for Performance values of a vehicle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPerformance : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum speed of the vehicle. Unit: m/s.
	 * 
	 * @return value of model property maxSpeed
	*/
        virtual double GetMaxSpeed() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum acceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
	 * 
	 * @return value of model property maxAcceleration
	*/
        virtual double GetMaxAcceleration() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum deceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
	 * 
	 * @return value of model property maxDeceleration
	*/
        virtual double GetMaxDeceleration() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Phase of a TrafficSignalController. A TrafficSignalController has sequential phases. Each phase has multiple
 * TrafficSignalStates.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPhase : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Duration of the phase. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
        virtual double GetDuration() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Each phase has multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1
	 * (trafficSignal1:true;false;false, trafficSignal2:false;false;true).
	 * 
	 * @return value of model property trafficSignalStates
	*/
        virtual std::vector<std::shared_ptr<ITrafficSignalState>> GetTrafficSignalStates() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Polygonal chain (polyline) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPolyline : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Ordered chain of vertices of the polygonal chain.
	 * 
	 * @return value of model property vertices
	*/
        virtual std::vector<std::shared_ptr<IVertex>> GetVertices() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for position types.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that uses global coordinates.
	 * 
	 * @return value of model property worldPosition
	*/
        virtual std::shared_ptr<IWorldPosition> GetWorldPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to a world position.
	 * 
	 * @return value of model property relativeWorldPosition
	*/
        virtual std::shared_ptr<IRelativeWorldPosition> GetRelativeWorldPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to an entity.
	 * 
	 * @return value of model property relativeObjectPosition
	*/
        virtual std::shared_ptr<IRelativeObjectPosition> GetRelativeObjectPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in road coordinates (t,s) applied to a given road.
	 * 
	 * @return value of model property roadPosition
	*/
        virtual std::shared_ptr<IRoadPosition> GetRoadPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position relative to an entity's road position (ds, dt).
	 * 
	 * @return value of model property relativeRoadPosition
	*/
        virtual std::shared_ptr<IRelativeRoadPosition> GetRelativeRoadPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
	 * 
	 * @return value of model property lanePosition
	*/
        virtual std::shared_ptr<ILanePosition> GetLanePosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined relative to the lane coordinates of a given entity. (Relative lane and relative s to this
	 * entity).
	 * 
	 * @return value of model property relativeLanePosition
	*/
        virtual std::shared_ptr<IRelativeLanePosition> GetRelativeLanePosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a given route.
	 * 
	 * @return value of model property routePosition
	*/
        virtual std::shared_ptr<IRoutePosition> GetRoutePosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a coordinate along a lane with a given s coordinate and lane ID.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPositionInLaneCoordinates : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * s-coordinate of the actual position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property pathS
	*/
        virtual double GetPathS() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane ID of the actual position.
	 * 
	 * @return value of model property laneId
	*/
        virtual std::string GetLaneId() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset (relative to the lane centerline) of the actual position. Unit: m.
	 * 
	 * @return value of model property laneOffset
	*/
        virtual double GetLaneOffset() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position defined in terms of distance along  a route (pathS) and lateral offset from the route's reference line (t) at
 * that point.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPositionInRoadCoordinates : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in s coordinates along the reference line of the road.
	 * 
	 * @return value of model property pathS
	*/
        virtual double GetPathS() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in t coordinates orthogonal to the reference line of the road.
	 * 
	 * @return value of model property t
	*/
        virtual double GetT() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Reference to the current Entity. The position in a route is defined through the position of this entity (used in
 * RoutePosition).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPositionOfCurrentEntity : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to an entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a precipitation by type and value of a weather.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPrecipitation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Type of the precipitation.
	 * 
	 * @return value of model property precipitationType
	*/
        virtual PrecipitationType GetPrecipitationType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The intensity of the precipitation. Range: [0..1].
	 * 
	 * @return value of model property intensity
	*/
        virtual double GetIntensity() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for private actions assigned to one specific entity and used in the initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPrivate : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * List of private actions to be executed when the enclosing container gets triggered.
	 * 
	 * @return value of model property privateActions
	*/
        virtual std::vector<std::shared_ptr<IPrivateAction>> GetPrivateActions() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions applied to one or multiple entities. Either the entities are referenced in the actors of the enclosing maneuver
 * group or the single entity is referenced in the enclosing Private instance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IPrivateAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Applies longitudinal control behavior on the reference entity/entities. Either a SpeedAction or a
	 * LongitudinalDistanceAction.
	 * 
	 * @return value of model property longitudinalAction
	*/
        virtual std::shared_ptr<ILongitudinalAction> GetLongitudinalAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Applies lateral control behavior on the reference entity/entities. Either a LaneChangeAction, LaneOffsetAction or a
	 * LateralDistanceAction.
	 * 
	 * @return value of model property lateralAction
	*/
        virtual std::shared_ptr<ILateralAction> GetLateralAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Sets visibility attributes on the reference entity/entities.
	 * 
	 * @return value of model property visibilityAction
	*/
        virtual std::shared_ptr<IVisibilityAction> GetVisibilityAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Synchronizes the reference entity/entities with a master entity. A target position is provided for the entity and for
	 * the master entity to be reached at the same time.
	 * 
	 * @return value of model property synchronizeAction
	*/
        virtual std::shared_ptr<ISynchronizeAction> GetSynchronizeAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Activates/ deactivates a controller on the reference entity/entities.
	 * 
	 * @return value of model property activateControllerAction
	*/
        virtual std::shared_ptr<IActivateControllerAction> GetActivateControllerAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a controller to the reference entity/entities.
	 * 
	 * @return value of model property controllerAction
	*/
        virtual std::shared_ptr<IControllerAction> GetControllerAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a position to the reference entity/entities.
	 * 
	 * @return value of model property teleportAction
	*/
        virtual std::shared_ptr<ITeleportAction> GetTeleportAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Applies an AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
	 * 
	 * @return value of model property routingAction
	*/
        virtual std::shared_ptr<IRoutingAction> GetRoutingAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for one or more properties. Properties encloses multiple property instances and/or multiple file references.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IProperties : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A name/value pair. The semantic of the name/values are subject of a contract between the provider of a simulation
	 * environment and the author of a scenario.
	 * 
	 * @return value of model property properties
	*/
        virtual std::vector<std::shared_ptr<IProperty>> GetProperties() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of arbitrary files attached to an object that owns the properties. The semantic and the file formats are subject
	 * of a contract between the provider of a simulation environment and the author of a scenario.
	 * 
	 * @return value of model property files
	*/
        virtual std::vector<std::shared_ptr<IFile>> GetFiles() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a property by name and value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IProperty : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a user defined property.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of a user defined property.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Checks if a triggering entity/entities has reached a given position, within some user specified tolerance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IReachPositionCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Radius of tolerance circle around given position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property tolerance
	*/
        virtual double GetTolerance() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The position to be reached with the defined tolerance.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The current relative distance of a triggering entity/entities to a reference entity is compared to a given value. The
 * logical operator used for comparison is defined in the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeDistanceCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The domain the distance is calculated in.
	 * 
	 * @return value of model property relativeDistanceType
	*/
        virtual RelativeDistanceType GetRelativeDistanceType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The distance value. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: distance is measured between closest bounding box points. False: reference point distance is used.
	 * 
	 * @return value of model property freespace
	*/
        virtual bool GetFreespace() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position derived from relative lane coordinates (dLane, ds and offset) to a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeLanePosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative dlane to the lane of the reference entity.
	 * 
	 * @return value of model property dLane
	*/
        virtual int GetDLane() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative ds to the s of reference entity.
	 * 
	 * @return value of model property ds
	*/
        virtual double GetDs() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset to the taqrget lane. Unit: m; Range: ]-inf..inf[
	 * 
	 * @return value of model property offset
	*/
        virtual double GetOffset() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced lane's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position derived from coordinates (dx, dy and dz) relative to a reference entity. The coordinate system for
 * the relative coordinates is the reference entity's coordinate system (taking the orientation of the entity into
 * account).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeObjectPosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the x axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dx
	*/
        virtual double GetDx() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the y axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dy
	*/
        virtual double GetDy() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the z axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dz
	*/
        virtual double GetDz() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an absolute position derived from relative road coordinates delta s [ds] and delta t [dt] to a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeRoadPosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative ds road coordinate to s coordinate of the reference entity.
	 * 
	 * @return value of model property ds
	*/
        virtual double GetDs() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative dt road coordinate to t coordinate of the reference entity.
	 * 
	 * @return value of model property dt
	*/
        virtual double GetDt() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The current relative speed of a triggering entity/entities to a reference entity is compared to a given value. The
 * logical operator used for the evaluation is defined by the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeSpeedCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative speed value. Unit: m/s.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Speed definition relative to the master entity's speed within a SynchronizeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeSpeedToMaster : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative speed. Unit: m/s. Range: ]-inf..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The semantics of the value (delta, offset, factor).
	 * 
	 * @return value of model property speedTargetValueType
	*/
        virtual SpeedTargetValueType GetSpeedTargetValueType() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the relative lane offset to a reference entity as target for a LaneChangeTarget.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeTargetLane : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Signed number of lanes that is offset the reference entity's current lane.
	 * 
	 * @return value of model property value
	*/
        virtual int GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the relative lane offset from a triggering entity/entities to a reference entity as a target for a
 * LaneOffsetTarget.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeTargetLaneOffset : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane offset with respect to the reference entity's current lane position. Unit: m.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a target speed relative to a reference entity's speed.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeTargetSpeed : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the relative speed. This value is either given as a delta or as a factor. E.g. value=10 together with
	 * valueType=delta means the entity/entities are supposed to drive 10m/s faster than the target reference entity. E.g.
	 * value=1.1 together with valueType=factor means that the entity/entities are supposed to drive 10% faster than the target
	 * reference entity. Unit: m/s or 1.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The value is either a delta (Unit m/s) or a factor (no Unit).
	 * 
	 * @return value of model property speedTargetValueType
	*/
        virtual SpeedTargetValueType GetSpeedTargetValueType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * By setting continuous to true a controller comes into place and tries to maintain a continuous relative speed. This may
	 * not be used together with Dynamics.time or Dynamics.distance.
	 * 
	 * @return value of model property continuous
	*/
        virtual bool GetContinuous() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position defined in terms of delta x, y, (z) relative to a reference entity's position. Optionally, an orientation can
 * be defined in either absolute or relative values.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRelativeWorldPosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity from which the relative world position is measured.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative x coordinate in the world coordinate system.
	 * 
	 * @return value of model property dx
	*/
        virtual double GetDx() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative y coordinate in the world coordinate system.
	 * 
	 * @return value of model property dy
	*/
        virtual double GetDy() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative z coordinate in the world coordinate system.
	 * 
	 * @return value of model property dz
	*/
        virtual double GetDz() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the reference entity's orientation.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of the road friction scale factor. Can be augmented with the addition of optional road properties.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRoadCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Friction scale factor. Range: [0..inf[
	 * 
	 * @return value of model property frictionScaleFactor
	*/
        virtual double GetFrictionScaleFactor() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Additional properties to describe the road condition.
	 * 
	 * @return value of model property properties
	*/
        virtual std::shared_ptr<IProperties> GetProperties() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The road network which provides the base layer (and road-relative coordinate systems) for all scenario elements is
 * defined as a reference to a road network file. This reference is optional; in case it is not specified, an infinite
 * non-inclined plane on level z=0 shall be assumed as base layer. Additionally and optionally, a visual 3D model file can
 * be referenced and any number of signals can be specified.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRoadNetwork : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * File path of the road network file (e.g. an ASAM OpenDRIVE file).
	 * 
	 * @return value of model property logicFile
	*/
        virtual std::shared_ptr<IFile> GetLogicFile() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * File path of a 3D model representing the virtual environment. This may be used for visual representation (rendering).
	 * 
	 * @return value of model property sceneGraphFile
	*/
        virtual std::shared_ptr<IFile> GetSceneGraphFile() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name references and description of dynamic behavior for traffic signals defined in the road network file.
	 * 
	 * @return value of model property trafficSignals
	*/
        virtual std::vector<std::shared_ptr<ITrafficSignalController>> GetTrafficSignals() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position defined in terms of road ID, distance (s) along that road segment and offset from reference lane (t) at that
 * point. Orientation is optional.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRoadPosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Identifier of the road, defined in the road network definition file (external to ASAM OpenSCENARIO).
	 * 
	 * @return value of model property roadId
	*/
        virtual std::string GetRoadId() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Represents s coordinate along the reference line of the road.
	 * 
	 * @return value of model property s
	*/
        virtual double GetS() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Represents t coordinate orthogonal to the reference line of the road.
	 * 
	 * @return value of model property t
	*/
        virtual double GetT() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A route is defined in a scenario or in a catalog. It represents a continuous path throughout the road network, defined
 * by a series of waypoints.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRoute : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the route. Required in catalogs.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * In a closed route, the last waypoint is followed by the first waypoint to create a closed route.
	 * 
	 * @return value of model property closed
	*/
        virtual bool GetClosed() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * At least two waypoints are needed to define a route.
	 * 
	 * @return value of model property waypoints
	*/
        virtual std::vector<std::shared_ptr<IWaypoint>> GetWaypoints() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up route catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRouteCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position along a route defined in terms of PositionInRoadCoordinates, PositionInLaneCoordinates or current position of a
 * reference object. Orientation definition is optional.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRoutePosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to the route the position is calculated from.
	 * 
	 * @return value of model property routeRef
	*/
        virtual std::shared_ptr<IRouteRef> GetRouteRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
	 * and t coordinates or to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/
        virtual std::shared_ptr<IOrientation> GetOrientation() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position along the route.
	 * 
	 * @return value of model property inRoutePosition
	*/
        virtual std::shared_ptr<IInRoutePosition> GetInRoutePosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a reference to a route. Either an inline definition of a route or a route in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRouteRef : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Route definition.
	 * 
	 * @return value of model property route
	*/
        virtual std::shared_ptr<IRoute> GetRoute() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to route in the catalog.
	 * 
	 * @return value of model property catalogReference
	*/
        virtual std::shared_ptr<ICatalogReference> GetCatalogReference() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls entity routing, either by following a predefined route or trajectory, alternatively by specifying a destination
 * position which the entity should aim to reach.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IRoutingAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a route to an entity. The route is defined by at least two waypoints.
	 * 
	 * @return value of model property assignRouteAction
	*/
        virtual std::shared_ptr<IAssignRouteAction> GetAssignRouteAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Controls an entity to follow a trajectory.
	 * 
	 * @return value of model property followTrajectoryAction
	*/
        virtual std::shared_ptr<IFollowTrajectoryAction> GetFollowTrajectoryAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a route to an entity. The route assigned will be the shortest route (along roads) between the entity's current
	 * position and the position specified.
	 * 
	 * @return value of model property acquirePositionAction
	*/
        virtual std::shared_ptr<IAcquirePositionAction> GetAcquirePositionAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top level container containing all scenario elements.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IScenarioDefinition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Global Parameter declaration. Some parameter represent placeholders to be resolved when the scenario file is loaded.
	 * Some parameters represent runtime values that can be controlled with ParameterActions and ParameterConditions during
	 * simulation time.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of locations to look up catalog files. Each catalog element type has its own list.
	 * 
	 * @return value of model property catalogLocations
	*/
        virtual std::shared_ptr<ICatalogLocations> GetCatalogLocations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to the road network.
	 * 
	 * @return value of model property roadNetwork
	*/
        virtual std::shared_ptr<IRoadNetwork> GetRoadNetwork() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Container for entity selections and scenario object definitions. Instances of ScenarioObject, of EntitySelection and of
	 * SpawnedObject considered instances of Entity.
	 * 
	 * @return value of model property entities
	*/
        virtual std::shared_ptr<IEntities> GetEntities() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Container for the dynamic content of the scenario.
	 * 
	 * @return value of model property storyboard
	*/
        virtual std::shared_ptr<IStoryboard> GetStoryboard() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A scenario object represents a runtime object that is created from an EntityObject (vehicle type, pedestrian type,
 * miscellaneous object type) and a Controller. Miscellaneous objects must not have a controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IScenarioObject : public IOpenScenarioModelElement, public IEntity
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Identifier of the scenario object.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The EntityObject (either instance of type Vehicle, Pedestrian or MiscObject).
	 * 
	 * @return value of model property entityObject
	*/
        virtual std::shared_ptr<IEntityObject> GetEntityObject() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Controller of the EntityObject instance.
	 * 
	 * @return value of model property objectController
	*/
        virtual std::shared_ptr<IObjectController> GetObjectController() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Collection of entities that includes entities explicitly by their reference or includes the entities by their type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISelectedEntities : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * References to the selected entities.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the type to determine that all entities of a specific type are members.
	 * 
	 * @return value of model property byType
	*/
        virtual std::vector<std::shared_ptr<IByType>> GetByType() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Shape for use in trajectories. Supported types: Polyline (line segments), Clothoid, Nurbs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IShape : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Polyline property of a shape.
	 * 
	 * @return value of model property polyline
	*/
        virtual std::shared_ptr<IPolyline> GetPolyline() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Clothoid property of a shape.
	 * 
	 * @return value of model property clothoid
	*/
        virtual std::shared_ptr<IClothoid> GetClothoid() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * NURBS property of a shape.
	 * 
	 * @return value of model property nurbs
	*/
        virtual std::shared_ptr<INurbs> GetNurbs() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares the simulation time to the specified value. The logical operator is defined by the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISimulationTimeCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Time value of the simulation time condition. Unit: s.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes the transition of an entity's longitudinal speed to a target longitudinal speed.
 * SpeedActionDynamics specifies the transition with respects to time or distance combined with a shape.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISpeedAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines how the target speed is reached.
	 * 
	 * @return value of model property speedActionDynamics
	*/
        virtual std::shared_ptr<ITransitionDynamics> GetSpeedActionDynamics() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed which should be reached.
	 * 
	 * @return value of model property speedActionTarget
	*/
        virtual std::shared_ptr<ISpeedActionTarget> GetSpeedActionTarget() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifies the target speed of a SpeedAction. Can be either an absolute speed value or a speed value relative to another
 * entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISpeedActionTarget : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed as relative speed to a reference entity. Unit: m/s.
	 * 
	 * @return value of model property relativeTargetSpeed
	*/
        virtual std::shared_ptr<IRelativeTargetSpeed> GetRelativeTargetSpeed() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed as absolute speed.Unit: m/s.
	 * 
	 * @return value of model property absoluteTargetSpeed
	*/
        virtual std::shared_ptr<IAbsoluteTargetSpeed> GetAbsoluteTargetSpeed() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares a triggering entity's/entities' speed to a target speed. The logical operator for the comparison is given by
 * the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISpeedCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Speed value of the speed condition. Unit m/s.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Logical expression in condition becomes true if the triggering entity/entities stands still for a given amount of time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IStandStillCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Duration time of still standing to let the logical expression become true. Unit: s. Range [0..inf[.
	 * 
	 * @return value of model property duration
	*/
        virtual double GetDuration() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping of independent executable parts of a scenario. The name of a story must be unique within an OpenSCENARIO file.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IStory : public IOpenScenarioModelElement, public IStoryboardElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the story, must be unique within an OpenSCENARIO file.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the acts of the story.
	 * 
	 * @return value of model property acts
	*/
        virtual std::vector<std::shared_ptr<IAct>> GetActs() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top container for the dynamic content of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IStoryboard : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Initialization of the storyboard instance. Initial conditions are set and initial actions are applied to entities.
	 * 
	 * @return value of model property init
	*/
        virtual std::shared_ptr<IInit> GetInit() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * List of stories defined in a story board.
	 * 
	 * @return value of model property stories
	*/
        virtual std::vector<std::shared_ptr<IStory>> GetStories() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Trigger to stop the Storyboard instance.
	 * 
	 * @return value of model property stopTrigger
	*/
        virtual std::shared_ptr<ITrigger> GetStopTrigger() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Considered true if a referenced storyboard element has reached a given runtime state (standbyState, runningState,
 * completeState) or if the referenced storyboard element undergoes a specific transition (startTransition, stopTransition,
 * endTransition, skipTransition) at a discrete time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IStoryboardElementStateCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Type of storyboard element instance.
	 * 
	 * @return value of model property storyboardElementType
	*/
        virtual StoryboardElementType GetStoryboardElementType() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the referenced Storyboard instance.
	 * 
	 * @return value of model property storyboardElementRef
	*/
        virtual std::shared_ptr<INamedReference<IStoryboardElement>> GetStoryboardElementRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The state or the transition of the storyboard element instance for which the condition becomes true.
	 * 
	 * @return value of model property state
	*/
        virtual StoryboardElementState GetState() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of sun properties.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISun : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Illuminance of the sun, direct sunlight is around 100,00 lx. Unit: lux; Range: [0..inf[.
	 * 
	 * @return value of model property intensity
	*/
        virtual double GetIntensity() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Azimuth of the sun, counted counterclockwise, 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: radian; Range:
	 * [0..2PI].
	 * 
	 * @return value of model property azimuth
	*/
        virtual double GetAzimuth() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: rad; Range: [-PI..PI].
	 * 
	 * @return value of model property elevation
	*/
        virtual double GetElevation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Synchronizes an entity's arrival at a destination with a master entity. Both entities are provided with their own
 * reference position which shall be reached at the same time. Final speed can be specified. Note that the reference
 * positions can be different or identical.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ISynchronizeAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the master entity.
	 * 
	 * @return value of model property masterEntityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetMasterEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The target position for the master entity.
	 * 
	 * @return value of model property targetPositionMaster
	*/
        virtual std::shared_ptr<IPosition> GetTargetPositionMaster() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The target position for the entity that should be synchronized.
	 * 
	 * @return value of model property targetPosition
	*/
        virtual std::shared_ptr<IPosition> GetTargetPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The speed that the synchronized entity should have at its target position.
	 * 
	 * @return value of model property finalSpeed
	*/
        virtual std::shared_ptr<IFinalSpeed> GetFinalSpeed() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifying a target position an entity is teleported to.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITeleportAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The position the entity/entities are teleported to.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Condition based on the headway time between a triggering entity/entities and a reference entity. The logical operator
 * used for comparison is defined by the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITimeHeadwayCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity to which the time headway is computed.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The time headway value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: time headway is measured using the distance between closest bounding box points. False: reference point distance
	 * is used.
	 * 
	 * @return value of model property freespace
	*/
        virtual bool GetFreespace() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/
        virtual bool GetAlongRoute() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the day and time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITimeOfDay : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * If true, the timeofday is animated with progressing simulation time, e.g. in order to animate the position of the sun.
	 * 
	 * @return value of model property animation
	*/
        virtual bool GetAnimation() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Datetime value.
	 * 
	 * @return value of model property dateTime
	*/
        virtual std::time_t GetDateTime() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The logical expression is considered true if the simulated time and date verifies the specified relation rule (bigger
 * than, smaller than, or equal to) relatively to a given time and date value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITimeOfDayCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Datetime value for comparison.
	 * 
	 * @return value of model property dateTime
	*/
        virtual std::time_t GetDateTime() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines whether time information present in trajectories should be considered. If considered, it may be used as either
 * absolute or relative time values. Moreover, a time offset or time scaling may be applied.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITimeReference : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * This property indicates Timing information is neglected.
	 * 
	 * @return value of model property none
	*/
        virtual std::shared_ptr<INone> GetNone() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * This property indicates timing information is taken into account. Its underlying properties allow specification of the
	 * time domain (absolute or relative), time scaling and a global time offset.
	 * 
	 * @return value of model property timing
	*/
        virtual std::shared_ptr<ITiming> GetTiming() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The currently predicted time to collision of a triggering entity/entities and either a reference entityâ€™s position or
 * an explicit position is compared to a given time value. The logical operator for comparison is defined by the rule
 * attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITimeToCollisionCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The time to collision value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: time to collision is measured using the distance between closest bounding box points.False: reference point
	 * distance is used.
	 * 
	 * @return value of model property freespace
	*/
        virtual bool GetFreespace() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/
        virtual bool GetAlongRoute() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The explicit position or a position defined through the current position of a reference entity.
	 * 
	 * @return value of model property timeToCollisionConditionTarget
	*/
        virtual std::shared_ptr<ITimeToCollisionConditionTarget> GetTimeToCollisionConditionTarget() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Target position used in the TimeToCollisionCondition. Can be defined as either an explicit position, or the position of
 * a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITimeToCollisionConditionTarget : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Position.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
        virtual std::shared_ptr<IEntityRef> GetEntityRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Adjust the timing within time references by scale and offset.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITiming : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of time value context as either absolute or relative.
	 * 
	 * @return value of model property domainAbsoluteRelative
	*/
        virtual ReferenceContext GetDomainAbsoluteRelative() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Scaling factor for time values. While values smaller than 1.0 represent negative scaling, values larger than 1.0 will
	 * result in positive scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
	 * 
	 * @return value of model property scale
	*/
        virtual double GetScale() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Introduction of a global offset for all time values. Unit: s; Range: ]-inf..inf[.
	 * 
	 * @return value of model property offset
	*/
        virtual double GetOffset() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions defining macroscopic traffic flow and behavior.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a source of traffic at a specific position.
	 * 
	 * @return value of model property trafficSourceAction
	*/
        virtual std::shared_ptr<ITrafficSourceAction> GetTrafficSourceAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a sink of traffic at a specific position.
	 * 
	 * @return value of model property trafficSinkAction
	*/
        virtual std::shared_ptr<ITrafficSinkAction> GetTrafficSinkAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines swarm traffic around a given central entity.
	 * 
	 * @return value of model property trafficSwarmAction
	*/
        virtual std::shared_ptr<ITrafficSwarmAction> GetTrafficSwarmAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of macroscopic traffic based on vehicle and controller definitions.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficDefinition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the traffic definition.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Distribution of vehicle categories within the traffic.
	 * 
	 * @return value of model property vehicleCategoryDistribution
	*/
        virtual std::shared_ptr<IVehicleCategoryDistribution> GetVehicleCategoryDistribution() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Distribution of controllers within this traffic.
	 * 
	 * @return value of model property controllerDistribution
	*/
        virtual std::shared_ptr<IControllerDistribution> GetControllerDistribution() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action used to set or overwrite a signals state or a signal controllers state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Action used to control the state of a signal.
	 * 
	 * @return value of model property trafficSignalControllerAction
	*/
        virtual std::shared_ptr<ITrafficSignalControllerAction> GetTrafficSignalControllerAction() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Action used to set a specific phase of a signal controller.
	 * 
	 * @return value of model property trafficSignalStateAction
	*/
        virtual std::shared_ptr<ITrafficSignalStateAction> GetTrafficSignalStateAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Considered true if a referenced traffic signal (e.g. from an OpenDRIVE file) reaches a specific states. Signal IDs are
 * listed in the TrafficSignal list of the RoadNetwork together with their states and their controllers to enable dynamic
 * signal modelling.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal defined in a road network. The signal ID must be listed in the TrafficSignal list of the
	 * RoadNetwork section.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal to be reached for the condition to become true.
	 * 
	 * @return value of model property state
	*/
        virtual std::string GetState() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the state of a collection of traffic signals.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalController : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the traffic signal controller in the road network.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The delay to the controller in the reference property. A controller having a delay to another one means that its first
	 * phase virtually starts delaytime seconds after the start of the reference's first phase. This can be used to define a
	 * progressive signal system, but only makes sense, if the total times of all connected controllers are the same. If delay
	 * is set, reference is required. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property delay
	*/
        virtual double GetDelay() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference (ID) to the connected controller in the road network. If reference is set, a delay is required.
	 * 
	 * @return value of model property reference
	*/
        virtual std::string GetReference() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Phases of a TrafficSignalController.
	 * 
	 * @return value of model property phases
	*/
        virtual std::vector<std::shared_ptr<IPhase>> GetPhases() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Sets a specific phase of a traffic signal controller, typically affecting a collection of signals.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalControllerAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the signal controller in a road network.
	 * 
	 * @return value of model property trafficSignalControllerRef
	*/
        virtual std::shared_ptr<INamedReference<ITrafficSignalController>> GetTrafficSignalControllerRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Targeted phase of the signal controller. The available phases are defined in type RoadNetwork under the property
	 * trafficSignalControllers.
	 * 
	 * @return value of model property phase
	*/
        virtual std::string GetPhase() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
	 * 
	 * @return value of model property phaseRef
	*/
        virtual std::vector<std::shared_ptr<IPhase>> GetPhaseRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Considered true if a given traffic signal controller (which may be defined within OpenSCENARIO or externally) reaches a
 * specific state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalControllerCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal controller in a road network.
	 * 
	 * @return value of model property trafficSignalControllerRef
	*/
        virtual std::shared_ptr<INamedReference<ITrafficSignalController>> GetTrafficSignalControllerRef() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase of the signal controller to be reached for the condition to become true. The available phases are
	 * defined in type RoadNetwork under the property trafficSignalControllers.
	 * 
	 * @return value of model property phase
	*/
        virtual std::string GetPhase() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
	 * 
	 * @return value of model property phaseRef
	*/
        virtual std::vector<std::shared_ptr<IPhase>> GetPhaseRef() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Possible state of traffic signal within a phase. One state per phase.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalState : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal in a road network. The signal ID must be listed in TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property trafficSignalId
	*/
        virtual std::string GetTrafficSignalId() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/
        virtual std::string GetState() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the state of a traffic signal.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSignalStateAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of a signal in a road network. The signal ID must be listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Targeted state of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/
        virtual std::string GetState() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a sink of traffic at a specific position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSinkAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the rate on which vehicles disappear at the sinks location. Unit: vehicles/s Range: [0..inf[.
	 * 
	 * @return value of model property rate
	*/
        virtual double GetRate() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the radius of the traffic sink where vehicles disappear around the specified position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property radius
	*/
        virtual double GetRadius() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the position of the traffic sink.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the vehicle and controller distribution for the sink.
	 * 
	 * @return value of model property trafficDefinition
	*/
        virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a source of traffic at a specific position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSourceAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the rate on which vehicles appear at the source location. Unit: vehicles/s. Range: [0..inf[.
	 * 
	 * @return value of model property rate
	*/
        virtual double GetRate() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the radius of the traffic source where vehicles appear around the specific position. Unit: m. Range: [0..inf[.
	 * 
	 * @return value of model property radius
	*/
        virtual double GetRadius() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The optional starting velocity of a scenario object. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property velocity
	*/
        virtual double GetVelocity() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the position of the traffic source.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the vehicle and controller distribution for the source.
	 * 
	 * @return value of model property trafficDefinition
	*/
        virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines swarm traffic within an elliptical planview around a given central entity. The innerRadius defines the minimum
 * distance between the central vehicle and swarm traffic. The latter is set up in the free space between the circular area
 * defined by innerRadius and the outline of the ellipsis defined by the two semi axis attributes. While vehicles are
 * created in this area, they are removed if they leave it crossing the it ellipsisâ€™ outline. Within the innerRadius,
 * vehicles are neither set up nor removed. Optionally, the swarm area can be longitudinally offset to the central scenario
 * object.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrafficSwarmAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMajorAxis defines the
	 * half length of the major axis of this ellipsis. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property semiMajorAxis
	*/
        virtual double GetSemiMajorAxis() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMinorAxis defines the
	 * half length of the minor axis of this ellipsis. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property semiMinorAxis
	*/
        virtual double GetSemiMinorAxis() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Radius of the inner circular area around the central entity. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property innerRadius
	*/
        virtual double GetInnerRadius() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Offset in longitudinal direction related to the x-axis of the central entity. Unit: m;.
	 * 
	 * @return value of model property offset
	*/
        virtual double GetOffset() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The maximum number of vehicles surrounding the central entity. Depending on the current road situation less than
	 * numberOfVehicles might be set up. Range: [0..inf[.
	 * 
	 * @return value of model property numberOfVehicles
	*/
        virtual unsigned int GetNumberOfVehicles() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The optional starting velocity of a created entity. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property velocity
	*/
        virtual double GetVelocity() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The entity that represents the center of a swarm.
	 * 
	 * @return value of model property centralObject
	*/
        virtual std::shared_ptr<ICentralSwarmObject> GetCentralObject() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Specifies properties of autonomous traffic with respect to vehicle and driver distributions.
	 * 
	 * @return value of model property trafficDefinition
	*/
        virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a trajectory type in terms of shape and optional time domain.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrajectory : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the trajectory type. Required if used in catalog.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True if trajectory is closed.
	 * 
	 * @return value of model property closed
	*/
        virtual bool GetClosed() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The shape of a trajectory (Polyline, Clothoid or Nurbs)
	 * 
	 * @return value of model property shape
	*/
        virtual std::shared_ptr<IShape> GetShape() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up trajectory catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrajectoryCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to define a steering trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrajectoryFollowingMode : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines (lateral) trajectory following behavior of the actor: Mode 'position' forces the actor to strictly adhere to the
	 * trajectory. In contrast, mode 'follow' hands over control to the actor. In this mode, the actor tries to follow the
	 * trajectory as best as he can. This may be restricted by dynamics constraints and/or control loop implementation.
	 * 
	 * @return value of model property followingMode
	*/
        virtual FollowingMode GetFollowingMode() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifies the dynamics of a value transition and defines how the value changes over time or distance. Different shapes
 * can be used for the transition. Step is an immediate transition, i.e. a jump from the current current value to the
 * target value. In this case value for time or distance must be 0. Linear will result in a linear transition between the
 * start and end value. A smooth transition is only given with cubic and sinusoidal shape.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITransitionDynamics : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The shape of the transition function f(x) between current and target value.
	 * 
	 * @return value of model property dynamicsShape
	*/
        virtual DynamicsShape GetDynamicsShape() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The value for a predefined rate (Unit: delta/s), time (Unit: s) or distance (Unit: m) to acquire the target value.
	 * Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The semantics of the value: 'rate', 'time' or 'distance'.
	 * 
	 * @return value of model property dynamicsDimension
	*/
        virtual DynamicsDimension GetDynamicsDimension() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Logical expression in condition becomes true after the triggering entity/entities have traveled the given distance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITraveledDistanceCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of traveled distance. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
        virtual double GetValue() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A trigger is then defined as an association of condition groups. A trigger evaluates to true if at least one of the
 * associated condition groups evaluates to true, otherwise it evaluates to false (OR operation).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITrigger : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * List of condition groups as a container of conditions.
	 * 
	 * @return value of model property conditionGroups
	*/
        virtual std::vector<std::shared_ptr<IConditionGroup>> GetConditionGroups() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A collection of entities evaluated for an EntityCondition to be triggered. It is optional whether the condition must be
 * fulfilled any or all of the objects.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ITriggeringEntities : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All or any.
	 * 
	 * @return value of model property triggeringEntitiesRule
	*/
        virtual TriggeringEntitiesRule GetTriggeringEntitiesRule() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * List of referenced entities that trigger the condition.
	 * 
	 * @return value of model property entityRefs
	*/
        virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to either issue a command to the simulation environment or start an external script. Allows the user to activate
 * custom actions in their simulation tool.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IUserDefinedAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The available commands are subject of a contract between simulation environment provider and scenario author.
	 * 
	 * @return value of model property customCommandAction
	*/
        virtual std::shared_ptr<ICustomCommandAction> GetCustomCommandAction() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This condition acts as a wrapper for external custom conditions which are implemented in the user software. This
 * condition is considered true if the given value verifies the specified relation rule (bigger than, smaller than, or
 * equal to) relatively to the provided reference.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IUserDefinedValueCondition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the external value.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference value the external value is compared to.
	 * 
	 * @return value of model property value
	*/
        virtual std::string GetValue() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
        virtual Rule GetRule() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a vehicle type in a scenario or in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IVehicle : public IOpenScenarioModelElement, public ICatalogElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the vehicle type.
	 * 
	 * @return value of model property name
	*/
        virtual std::string GetName() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Category of the vehicle (bicycle, train,...).
	 * 
	 * @return value of model property vehicleCategory
	*/
        virtual VehicleCategory GetVehicleCategory() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
        virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The three dimensional bounding box that encloses the vehicle.
	 * 
	 * @return value of model property boundingBox
	*/
        virtual std::shared_ptr<IBoundingBox> GetBoundingBox() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Performance properties of the vehicle.
	 * 
	 * @return value of model property performance
	*/
        virtual std::shared_ptr<IPerformance> GetPerformance() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * A set of axles (front, rear, additional) and their geometric locations.
	 * 
	 * @return value of model property axles
	*/
        virtual std::shared_ptr<IAxles> GetAxles() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Additional properties as name value pairs.
	 * 
	 * @return value of model property properties
	*/
        virtual std::shared_ptr<IProperties> GetProperties() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up vehicle catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IVehicleCatalogLocation : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/
        virtual std::shared_ptr<IDirectory> GetDirectory() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A distribution for vehicle in traffic. Category of vehicles and their weight (measure of relative likelihood, check
 * VehicleCategoryDistributionEntry).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IVehicleCategoryDistribution : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * List of elements that pair vehicle categories and their weight within the distribution.
	 * 
	 * @return value of model property vehicleCategoryDistributionEntries
	*/
        virtual std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> GetVehicleCategoryDistributionEntries() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Represents the weight of a given vehicle category within a traffic definition. The relative probability for the
 * occurence of this category is defined by the weight devided by the sum of all weights of this distribution.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IVehicleCategoryDistributionEntry : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The category of the vehicles that appear in traffic.
	 * 
	 * @return value of model property category
	*/
        virtual VehicleCategory GetCategory() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The weight of a vehicle category within a traffic distribution. Range: [0..inf[.
	 * 
	 * @return value of model property weight
	*/
        virtual double GetWeight() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Vertex of a polygonal chain (polyline) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IVertex : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification of the vertex.
	 * 
	 * @return value of model property time
	*/
        virtual double GetTime() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the vertex.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action that toggles (on or off) an entity's visibility attributes, with respect to sensors, other traffic or the
 * graphics engine.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IVisibilityAction : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in image generator(s). False: actor is not visible in image generator(s).
	 * 
	 * @return value of model property graphics
	*/
        virtual bool GetGraphics() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible for other traffic participants, particularly for autonomous driver models. False: actor is not
	 * visible for other traffic participants.
	 * 
	 * @return value of model property traffic
	*/
        virtual bool GetTraffic() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in sensor(s). False: actor is not visible in sensor(s).
	 * 
	 * @return value of model property sensors
	*/
        virtual bool GetSensors() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Reference position used to form a route.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IWaypoint : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The corresponding routing strategy (fastest, shortest, random, leastIntersections).
	 * 
	 * @return value of model property routeStrategy
	*/
        virtual RouteStrategy GetRouteStrategy() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The reference position to form the route.
	 * 
	 * @return value of model property position
	*/
        virtual std::shared_ptr<IPosition> GetPosition() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the weather conditions in terms of light, fog, precipitation and cloud states.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IWeather : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the cloud state, i.e. cloud state and sky visualization settings.
	 * 
	 * @return value of model property cloudState
	*/
        virtual CloudState GetCloudState() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the sun, i.e. position and intensity.
	 * 
	 * @return value of model property sun
	*/
        virtual std::shared_ptr<ISun> GetSun() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of fog, i.e. visual range and bounding box.
	 * 
	 * @return value of model property fog
	*/
        virtual std::shared_ptr<IFog> GetFog() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of precipitation, i.e. type and intensity.
	 * 
	 * @return value of model property precipitation
	*/
        virtual std::shared_ptr<IPrecipitation> GetPrecipitation() = 0;

    };



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A position which is fixed in the inertial reference frame of the simulation environment, the so-called world coordinate
 * system.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class IWorldPosition : public IOpenScenarioModelElement
    {
    public:

	/**
	 * From OpenSCENARIO class model specification:
	 * The x coordinate value.
	 * 
	 * @return value of model property x
	*/
        virtual double GetX() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The y coordinate value.
	 * 
	 * @return value of model property y
	*/
        virtual double GetY() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The z coordinate value.
	 * 
	 * @return value of model property z
	*/
        virtual double GetZ() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The heading angle of the object, defining a mathematically positive rotation about the z-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property h
	*/
        virtual double GetH() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The pitch angle of the object, defining a mathematically positive rotation about the y-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property p
	*/
        virtual double GetP() = 0;

	/**
	 * From OpenSCENARIO class model specification:
	 * The roll angle of the object, defining a mathematically positive rotation about the x-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property r
	*/
        virtual double GetR() = 0;

    };


}
