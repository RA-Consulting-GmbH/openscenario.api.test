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

#include <string>
#include <vector>
#include "INamedReference.h"
#include "Enumerations.h"
#include "OscInterfaces.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
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
        class IAbsoluteSpeed : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAbsoluteSpeed() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Absolute speed. Unit: m/s. Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the number (ID) of the target lane.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAbsoluteTargetLane : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAbsoluteTargetLane() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Number (ID) of the target lane the entity will change to.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Lane offset with respect to the entity's current lane's center line.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAbsoluteTargetLaneOffset : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAbsoluteTargetLaneOffset() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Signed number in meters the vehicle should respect as an offset from the center of the current lane.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Absolute speed defined as a target for a SpeedAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAbsoluteTargetSpeed : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAbsoluteTargetSpeed() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Target speed in m/s the vehicle should change to.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
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
        class IAccelerationCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAccelerationCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Acceleration value. Unit: m/s^2.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the entity to acquire a target position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAcquirePositionAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAcquirePositionAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A position to acquire.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
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
        class IAct : public virtual IOpenScenarioModelElement, public IStoryboardElement
        {
        public:
            virtual ~IAct() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of this act.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of maneuver groups representing the act.
	 * 
	 * @return value of model property maneuverGroups
	*/

                virtual std::vector<std::shared_ptr<IManeuverGroup>> GetManeuverGroups()
            {
                return std::vector<std::shared_ptr<IManeuverGroup>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a trigger to that starts the act.
	 * 
	 * @return value of model property startTrigger
	*/

                virtual std::shared_ptr<ITrigger> GetStartTrigger()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a trigger that stops the act.
	 * 
	 * @return value of model property stopTrigger
	*/

                virtual std::shared_ptr<ITrigger> GetStopTrigger()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * An action serves to create or modify all dynamic elements of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAction : public virtual IOpenScenarioModelElement, public IStoryboardElement
        {
        public:
            virtual ~IAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of this action.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The GlobalAction to be executed when the enclosing Action is startedis started.
	 * 
	 * @return value of model property globalAction
	*/

                virtual std::shared_ptr<IGlobalAction> GetGlobalAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The UserDefinedAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property userDefinedAction
	*/

                virtual std::shared_ptr<IUserDefinedAction> GetUserDefinedAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The PrivateAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property privateAction
	*/

                virtual std::shared_ptr<IPrivateAction> GetPrivateAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on the given entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IActivateControllerAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IActivateControllerAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * In lateral domain: Activate or deactivate controller defined (e.g. automated, autonomous) behavior.
	 * 
	 * @return value of model property lateral
	*/

                virtual bool GetLateral()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * In longitudinal domain: Activate or deactivate autonomous behavior.
	 * 
	 * @return value of model property longitudinal
	*/

                virtual bool GetLongitudinal()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A set of entities representing the actors in a maneuver group.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IActors : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IActors() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Indicates whether the triggering entities are considered actors.
	 * 
	 * @return value of model property selectTriggeringEntities
	*/

                virtual bool GetSelectTriggeringEntities()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entities this actor is referencing.
	 * 
	 * @return value of model property entityRefs
	*/

                virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs()
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Adds an entity to the scenario, at a predefined position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAddEntityAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAddEntityAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Adds an entity at the specified position.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
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
        class IAssignControllerAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAssignControllerAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a controller to a given entity.
	 * 
	 * @return value of model property controller
	*/

                virtual std::shared_ptr<IController> GetController()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Uses a CatalogReference to assign a controller to a given entity. CatalogReference must point to a Controller type.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
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
        class IAssignRouteAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAssignRouteAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The route definition.
	 * 
	 * @return value of model property route
	*/

                virtual std::shared_ptr<IRoute> GetRoute()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the route definition in a catalog. The reference must point to a route.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The definition of vehicle axle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAxle : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAxle() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum steering angle which can be performed by the wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.
	 * 
	 * @return value of model property maxSteering
	*/

                virtual double GetMaxSteering()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Diameter of the wheels on this axle. Unit: m; Range: ]0..inf[.
	 * 
	 * @return value of model property wheelDiameter
	*/

                virtual double GetWheelDiameter()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Distance of the wheels center lines at zero steering. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property trackWidth
	*/

                virtual double GetTrackWidth()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Longitudinal position of the axle with respect to the vehicles reference point. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property positionX
	*/

                virtual double GetPositionX()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Z-position of the axle with respect to the vehicles reference point. Usually this is half of wheel diameter. Unit:m;
	 * Range:[0..inf[.
	 * 
	 * @return value of model property positionZ
	*/

                virtual double GetPositionZ()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A set of the axles of a vehicle. A vehicle must have a front axle and a rear axle. It might have additional axles.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IAxles : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAxles() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Front axle.
	 * 
	 * @return value of model property frontAxle
	*/

                virtual std::shared_ptr<IAxle> GetFrontAxle()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Rear axle.
	 * 
	 * @return value of model property rearAxle
	*/

                virtual std::shared_ptr<IAxle> GetRearAxle()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of optional additional axles.
	 * 
	 * @return value of model property additionalAxles
	*/

                virtual std::vector<std::shared_ptr<IAxle>> GetAdditionalAxles()
            {
                return std::vector<std::shared_ptr<IAxle>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines geometric properties of the entities as a simplified three dimensional bounding box.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IBoundingBox : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IBoundingBox() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
	 * the entity (e.g. the vehicle coordinate system).
	 * 
	 * @return value of model property center
	*/

                virtual std::shared_ptr<ICenter> GetCenter()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Width, length and height of the bounding box.
	 * 
	 * @return value of model property dimensions
	*/

                virtual std::shared_ptr<IDimensions> GetDimensions()
            {
                return nullptr;
            }
        
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
        class IByEntityCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IByEntityCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entities triggering this condition.
	 * 
	 * @return value of model property triggeringEntities
	*/

                virtual std::shared_ptr<ITriggeringEntities> GetTriggeringEntities()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The condition which is related to the triggering entities.
	 * 
	 * @return value of model property entityCondition
	*/

                virtual std::shared_ptr<IEntityCondition> GetEntityCondition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an object type to select entities.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IByObjectType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IByObjectType() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the type.
	 * 
	 * @return value of model property type
	*/

                virtual ObjectType GetType()
            {
                return ObjectType();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A definition of a type, e. g. to be used to define members in an entity selection.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IByType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IByType() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * If a scenario object's entity object is of this type, it is part of the entity selection.
	 * 
	 * @return value of model property objectType
	*/

                virtual ObjectType GetObjectType()
            {
                return ObjectType();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Conditions referring a runtime value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IByValueCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IByValueCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A current parameter value is compared to a reference value.
	 * 
	 * @return value of model property parameterCondition
	*/

                virtual std::shared_ptr<IParameterCondition> GetParameterCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The current time of day is compared to a reference value.
	 * 
	 * @return value of model property timeOfDayCondition
	*/

                virtual std::shared_ptr<ITimeOfDayCondition> GetTimeOfDayCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The current simulation time is compared to a reference value.
	 * 
	 * @return value of model property simulationTimeCondition
	*/

                virtual std::shared_ptr<ISimulationTimeCondition> GetSimulationTimeCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced StoryboardElement terminates according to the given rule.
	 * 
	 * @return value of model property storyboardElementStateCondition
	*/

                virtual std::shared_ptr<IStoryboardElementStateCondition> GetStoryboardElementStateCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The current value of an externally defined named value is compared to a reference value (less, greater, equal).
	 * 
	 * @return value of model property userDefinedValueCondition
	*/

                virtual std::shared_ptr<IUserDefinedValueCondition> GetUserDefinedValueCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced signal reaches the indicated state.
	 * 
	 * @return value of model property trafficSignalCondition
	*/

                virtual std::shared_ptr<ITrafficSignalCondition> GetTrafficSignalCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced signal controller reaches the indicated state.
	 * 
	 * @return value of model property trafficSignalControllerCondition
	*/

                virtual std::shared_ptr<ITrafficSignalControllerCondition> GetTrafficSignalControllerCondition()
            {
                return nullptr;
            }
        
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
        class ICatalog : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICatalog() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the catalog.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of vehicle types that can be reused in a scenario.
	 * 
	 * @return value of model property vehicles
	*/

                virtual std::vector<std::shared_ptr<IVehicle>> GetVehicles()
            {
                return std::vector<std::shared_ptr<IVehicle>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of controller types that can be reused in a scenario.
	 * 
	 * @return value of model property controllers
	*/

                virtual std::vector<std::shared_ptr<IController>> GetControllers()
            {
                return std::vector<std::shared_ptr<IController>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of pedestrian types that can be reused in a scenario.
	 * 
	 * @return value of model property pedestrians
	*/

                virtual std::vector<std::shared_ptr<IPedestrian>> GetPedestrians()
            {
                return std::vector<std::shared_ptr<IPedestrian>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of miscellaneous object type that that can be reused in a scenario.
	 * 
	 * @return value of model property miscObjects
	*/

                virtual std::vector<std::shared_ptr<IMiscObject>> GetMiscObjects()
            {
                return std::vector<std::shared_ptr<IMiscObject>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of environment types that can be reused in a scenario.
	 * 
	 * @return value of model property environments
	*/

                virtual std::vector<std::shared_ptr<IEnvironment>> GetEnvironments()
            {
                return std::vector<std::shared_ptr<IEnvironment>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of maneuver types that can be reused in a scenario.
	 * 
	 * @return value of model property maneuvers
	*/

                virtual std::vector<std::shared_ptr<IManeuver>> GetManeuvers()
            {
                return std::vector<std::shared_ptr<IManeuver>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of trajectory types that can be reused in a scenario.
	 * 
	 * @return value of model property trajectories
	*/

                virtual std::vector<std::shared_ptr<ITrajectory>> GetTrajectories()
            {
                return std::vector<std::shared_ptr<ITrajectory>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of route types that can be reused in a scenario.
	 * 
	 * @return value of model property routes
	*/

                virtual std::vector<std::shared_ptr<IRoute>> GetRoutes()
            {
                return std::vector<std::shared_ptr<IRoute>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A marker stating that the OpenSCENARIO file is a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ICatalogDefinition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICatalogDefinition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a catalog.
	 * 
	 * @return value of model property catalog
	*/

                virtual std::shared_ptr<ICatalog> GetCatalog()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Set of catalogs which are referenced in a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ICatalogLocations : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICatalogLocations() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on vehicle types.
	 * 
	 * @return value of model property vehicleCatalog
	*/

                virtual std::shared_ptr<IVehicleCatalogLocation> GetVehicleCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on controller types.
	 * 
	 * @return value of model property controllerCatalog
	*/

                virtual std::shared_ptr<IControllerCatalogLocation> GetControllerCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on pedestrian types.
	 * 
	 * @return value of model property pedestrianCatalog
	*/

                virtual std::shared_ptr<IPedestrianCatalogLocation> GetPedestrianCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on miscellaneous object types.
	 * 
	 * @return value of model property miscObjectCatalog
	*/

                virtual std::shared_ptr<IMiscObjectCatalogLocation> GetMiscObjectCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on environment types.
	 * 
	 * @return value of model property environmentCatalog
	*/

                virtual std::shared_ptr<IEnvironmentCatalogLocation> GetEnvironmentCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on maneuver types.
	 * 
	 * @return value of model property maneuverCatalog
	*/

                virtual std::shared_ptr<IManeuverCatalogLocation> GetManeuverCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on trajectory types.
	 * 
	 * @return value of model property trajectoryCatalog
	*/

                virtual std::shared_ptr<ITrajectoryCatalogLocation> GetTrajectoryCatalog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on route types.
	 * 
	 * @return value of model property routeCatalog
	*/

                virtual std::shared_ptr<IRouteCatalogLocation> GetRouteCatalog()
            {
                return nullptr;
            }
        
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
        class ICatalogReference : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICatalogReference() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the catalog.
	 * 
	 * @return value of model property catalogName
	*/

                virtual std::string GetCatalogName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of catalog entry.
	 * 
	 * @return value of model property entryName
	*/

                virtual std::string GetEntryName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of parameter assignments for instantiation.
	 * 
	 * @return value of model property parameterAssignments
	*/

                virtual std::vector<std::shared_ptr<IParameterAssignment>> GetParameterAssignments()
            {
                return std::vector<std::shared_ptr<IParameterAssignment>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The resolved reference to a catalog element (out of the catalogName and entryName). Transient means, that it is not
	 * mapped to the schema.
	 * 
	 * @return value of model property ref
	*/

                virtual std::shared_ptr<ICatalogElement> GetRef()
            {
                return nullptr;
            }
        
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
        class ICenter : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICenter() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in x direction.
	 * 
	 * @return value of model property x
	*/

                virtual double GetX()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in y direction.
	 * 
	 * @return value of model property y
	*/

                virtual double GetY()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in z direction.
	 * 
	 * @return value of model property z
	*/

                virtual double GetZ()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The entity that represents the center of a swarm.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ICentralSwarmObject : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICentralSwarmObject() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the central entity the swarm traffic is created around.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A shape of the trajectory of an entity. A clothoid is a curve whose curvature changes linearly with its curve length.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IClothoid : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IClothoid() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Start curvature of clothoid.
	 * 
	 * @return value of model property curvature
	*/

                virtual double GetCurvature()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Rate of change of the curvature of the clothoid.Unit: 1/s;Range [0..inf[.
	 * 
	 * @return value of model property curvatureDot
	*/

                virtual double GetCurvatureDot()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Length of clothoid.
	 * 
	 * @return value of model property length
	*/

                virtual double GetLength()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification at the start of the clothoid. Unit: s;Range [0..inf[.
	 * 
	 * @return value of model property startTime
	*/

                virtual double GetStartTime()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification at the end of the clothoid. Unit: s;Range ]0..inf[.
	 * 
	 * @return value of model property stopTime
	*/

                virtual double GetStopTime()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Start position of a clothoid.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
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
        class ICollisionCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICollisionCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a specific entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual std::shared_ptr<IEntityRef> GetEntityRef()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Entities of this type can trigger the condition when collide.
	 * 
	 * @return value of model property byType
	*/

                virtual std::shared_ptr<IByObjectType> GetByType()
            {
                return nullptr;
            }
        
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
        class ICondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the condition.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Time elapsed after the edge condition is verified, until the condition returns true to the scenario. Unit: s; Range:
	 * [0..inf[.
	 * 
	 * @return value of model property delay
	*/

                virtual double GetDelay()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Specifies the edge when the condition is evaluated to true (rising, falling, any).
	 * 
	 * @return value of model property conditionEdge
	*/

                virtual ConditionEdge GetConditionEdge()
            {
                return ConditionEdge();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A condition that refers to an entity.
	 * 
	 * @return value of model property byEntityCondition
	*/

                virtual std::shared_ptr<IByEntityCondition> GetByEntityCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A condition that refers to a runtime value.
	 * 
	 * @return value of model property byValueCondition
	*/

                virtual std::shared_ptr<IByValueCondition> GetByValueCondition()
            {
                return nullptr;
            }
        
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
        class IConditionGroup : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IConditionGroup() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A associated list of conditions.
	 * 
	 * @return value of model property conditions
	*/

                virtual std::vector<std::shared_ptr<ICondition>> GetConditions()
            {
                return std::vector<std::shared_ptr<ICondition>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of one control point of a NURBS trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IControlPoint : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IControlPoint() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Optional specification of the time dimension of the control point. Unit: s;Range [0..inf[.
	 * 
	 * @return value of model property time
	*/

                virtual double GetTime()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Optional weight specification of the control point. If unspecified, all control points will be equal weighted. Range
	 * ]-inf..inf[.
	 * 
	 * @return value of model property weight
	*/

                virtual double GetWeight()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the control point.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a controller type and parameters for the controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IController : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~IController() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the controller type.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Describing properties for the controller.
	 * 
	 * @return value of model property properties
	*/

                virtual std::shared_ptr<IProperties> GetProperties()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action that assigns a new controller or overrides an existing one.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IControllerAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IControllerAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Assign a controller to an entity.
	 * 
	 * @return value of model property assignControllerAction
	*/

                virtual std::shared_ptr<IAssignControllerAction> GetAssignControllerAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Values for throttle, brake, clutch, parking brake, steering wheel or gear.
	 * 
	 * @return value of model property overrideControllerValueAction
	*/

                virtual std::shared_ptr<IOverrideControllerValueAction> GetOverrideControllerValueAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up controller catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IControllerCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IControllerCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalog files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a distribution which controller should be used in a traffic.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IControllerDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IControllerDistribution() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The weights of controllers of a specific type in a traffic.
	 * 
	 * @return value of model property controllerDistributionEntries
	*/

                virtual std::vector<std::shared_ptr<IControllerDistributionEntry>> GetControllerDistributionEntries()
            {
                return std::vector<std::shared_ptr<IControllerDistributionEntry>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines that weight in a controller distribution, for the given controller type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IControllerDistributionEntry : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IControllerDistributionEntry() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The weight of the entry. Range: ]0..inf[.
	 * 
	 * @return value of model property weight
	*/

                virtual double GetWeight()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The specified controller type.
	 * 
	 * @return value of model property controller
	*/

                virtual std::shared_ptr<IController> GetController()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A controller type import from a catalog.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to activate a custom action native to the specific user environment
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ICustomCommandAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICustomCommandAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Type that is defined as a contract between the simulation environment provider and the author of a scenario.
	 * 
	 * @return value of model property type
	*/

                virtual std::string GetType()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The command that is defined as a contract between the simulation environment provider and the author of a scenario.
	 * 
	 * @return value of model property content
	*/

                virtual std::string GetContent()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Deletes an entity at runtime from the simulation (The entity reference is defined in the enclosing GlobalAction).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IDeleteEntityAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeleteEntityAction() = default;
            
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
        class IDimensions : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDimensions() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Width of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property width
	*/

                virtual double GetWidth()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Length of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property length
	*/

                virtual double GetLength()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Height of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property height
	*/

                virtual double GetHeight()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifies the path to a directory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IDirectory : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDirectory() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * File system path, e.g. path=/home/simulation/.
	 * 
	 * @return value of model property path
	*/

                virtual std::string GetPath()
            {
                return "";
            }
        
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
        class IDistanceCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDistanceCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The distance value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: distance is measured between closest bounding box points. False: reference point distance is used.
	 * 
	 * @return value of model property freespace
	*/

                virtual bool GetFreespace()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/

                virtual bool GetAlongRoute()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The given position the distance is related to.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Constraints that are limiting the acceleration, the deceleration and the speed. Used in lateral or longitudinal actions.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IDynamicConstraints : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDynamicConstraints() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum acceleration the distance controller is allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxAcceleration
	*/

                virtual double GetMaxAcceleration()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum deceleration the distance controller is allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxDeceleration
	*/

                virtual double GetMaxDeceleration()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum speed the distance controller is allowed to use for keeping the distance. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property maxSpeed
	*/

                virtual double GetMaxSpeed()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Condition becomes true after the triggering entity/entities has reached the end of a road for a given amount of time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEndOfRoadCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEndOfRoadCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of time at end of road. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/

                virtual double GetDuration()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of entities (scenario objects or entity selections) in a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEntities : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEntities() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of scenario object definitions that pairs an entity object and a controller.
	 * 
	 * @return value of model property scenarioObjects
	*/

                virtual std::vector<std::shared_ptr<IScenarioObject>> GetScenarioObjects()
            {
                return std::vector<std::shared_ptr<IScenarioObject>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entity selection definitions.
	 * 
	 * @return value of model property entitySelections
	*/

                virtual std::vector<std::shared_ptr<IEntitySelection>> GetEntitySelections()
            {
                return std::vector<std::shared_ptr<IEntitySelection>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an action that adds
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEntityAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEntityAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action that adds the reference entity to the scenario.
	 * 
	 * @return value of model property addEntityAction
	*/

                virtual std::shared_ptr<IAddEntityAction> GetAddEntityAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action that deletes the reference entity from the scenario.
	 * 
	 * @return value of model property deleteEntityAction
	*/

                virtual std::shared_ptr<IDeleteEntityAction> GetDeleteEntityAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a specific condition on an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEntityCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEntityCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking for how long the reference entity has reached the end of the road.
	 * 
	 * @return value of model property endOfRoadCondition
	*/

                virtual std::shared_ptr<IEndOfRoadCondition> GetEndOfRoadCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking whether the reference entity was involved in a collision.
	 * 
	 * @return value of model property collisionCondition
	*/

                virtual std::shared_ptr<ICollisionCondition> GetCollisionCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking for how long the reference entity has left the road.
	 * 
	 * @return value of model property offroadCondition
	*/

                virtual std::shared_ptr<IOffroadCondition> GetOffroadCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the time headway between two entities.
	 * 
	 * @return value of model property timeHeadwayCondition
	*/

                virtual std::shared_ptr<ITimeHeadwayCondition> GetTimeHeadwayCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the time to collision between two entities.
	 * 
	 * @return value of model property timeToCollisionCondition
	*/

                virtual std::shared_ptr<ITimeToCollisionCondition> GetTimeToCollisionCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the current acceleration of an entity.
	 * 
	 * @return value of model property accelerationCondition
	*/

                virtual std::shared_ptr<IAccelerationCondition> GetAccelerationCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking for how long the reference entity has not moved.
	 * 
	 * @return value of model property standStillCondition
	*/

                virtual std::shared_ptr<IStandStillCondition> GetStandStillCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the current speed of the referenced entities.
	 * 
	 * @return value of model property speedCondition
	*/

                virtual std::shared_ptr<ISpeedCondition> GetSpeedCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the relative speed between two entity.
	 * 
	 * @return value of model property relativeSpeedCondition
	*/

                virtual std::shared_ptr<IRelativeSpeedCondition> GetRelativeSpeedCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the total traveled distance of the reference entity since the start of the scenario.
	 * 
	 * @return value of model property traveledDistanceCondition
	*/

                virtual std::shared_ptr<ITraveledDistanceCondition> GetTraveledDistanceCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking whether the reference entity has reached a given position within a given uncertainty.
	 * 
	 * @return value of model property reachPositionCondition
	*/

                virtual std::shared_ptr<IReachPositionCondition> GetReachPositionCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the distance between two entities or an entity and a position.
	 * 
	 * @return value of model property distanceCondition
	*/

                virtual std::shared_ptr<IDistanceCondition> GetDistanceCondition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Condition checking the relative distance between two entities.
	 * 
	 * @return value of model property relativeDistanceCondition
	*/

                virtual std::shared_ptr<IRelativeDistanceCondition> GetRelativeDistanceCondition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A vehicle type, pedestrian type or miscellaneous object type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEntityObject : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEntityObject() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to a catalog entry of type MiscObject, Vehicle or Pedestrian.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Vehicle definition.
	 * 
	 * @return value of model property vehicle
	*/

                virtual std::shared_ptr<IVehicle> GetVehicle()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Pedestrian definition.
	 * 
	 * @return value of model property pedestrian
	*/

                virtual std::shared_ptr<IPedestrian> GetPedestrian()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a MiscObject.
	 * 
	 * @return value of model property miscObject
	*/

                virtual std::shared_ptr<IMiscObject> GetMiscObject()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Unambiguous reference to an entity represented as its name.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEntityRef : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEntityRef() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
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
        class IEntitySelection : public virtual IOpenScenarioModelElement, public IEntity
        {
        public:
            virtual ~IEntitySelection() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the entity selection. By this name, a selection can be referenced as an entity.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Selected entities as members of the entity selection.
	 * 
	 * @return value of model property members
	*/

                virtual std::shared_ptr<ISelectedEntities> GetMembers()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the environment conditions of a scenario, e.g. time of day, weather and road condition.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEnvironment : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~IEnvironment() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the environment. If used in catalog name is required.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Time of the day during the simulation.
	 * 
	 * @return value of model property timeOfDay
	*/

                virtual std::shared_ptr<ITimeOfDay> GetTimeOfDay()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Weather conditions during the simulation.
	 * 
	 * @return value of model property weather
	*/

                virtual std::shared_ptr<IWeather> GetWeather()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Road conditions during the simulation.
	 * 
	 * @return value of model property roadCondition
	*/

                virtual std::shared_ptr<IRoadCondition> GetRoadCondition()
            {
                return nullptr;
            }
        
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
        class IEnvironmentAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEnvironmentAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * New environment definition.
	 * 
	 * @return value of model property environment
	*/

                virtual std::shared_ptr<IEnvironment> GetEnvironment()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to a catalog entry of type Environment.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up environment catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IEnvironmentCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IEnvironmentCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
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
        class IEvent : public virtual IOpenScenarioModelElement, public IStoryboardElement
        {
        public:
            virtual ~IEvent() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Priority of each event.
	 * 
	 * @return value of model property priority
	*/

                virtual Priority GetPriority()
            {
                return Priority();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum number of executions. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/

                virtual long long GetMaximumExecutionCount()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the event.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of actions in an event.
	 * 
	 * @return value of model property actions
	*/

                virtual std::vector<std::shared_ptr<IAction>> GetActions()
            {
                return std::vector<std::shared_ptr<IAction>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Actions are executed as soon as the start trigger fires. This point in time represents the start of the event.
	 * 
	 * @return value of model property startTrigger
	*/

                virtual std::shared_ptr<ITrigger> GetStartTrigger()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * File on the file system, including its file path.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IFile : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IFile() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Filepath e.g. filepath=/home/simulator/customDriverSpecification.xml.
	 * 
	 * @return value of model property filepath
	*/

                virtual std::string GetFilepath()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * File header used in OpenSCENARIO files, e.g. scenario file or catalog files.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IFileHeader : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IFileHeader() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Major OpenSCENARIO revision, this file conforms to Range: [0..inf[.
	 * 
	 * @return value of model property revMajor
	*/

                virtual long GetRevMajor()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Minor OpenSCENARIO revision, this file conforms to Range: [0..inf[.
	 * 
	 * @return value of model property revMinor
	*/

                virtual long GetRevMinor()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * User specific date and time recommended: YYYY-MM-DDThh:mm:ss.
	 * 
	 * @return value of model property date
	*/

                virtual DateTime GetDate()
            {
                return {};
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * User specific description.
	 * 
	 * @return value of model property description
	*/

                virtual std::string GetDescription()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Author of the scenario or the catalog.
	 * 
	 * @return value of model property author
	*/

                virtual std::string GetAuthor()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Final speed definition for a SynchronizeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IFinalSpeed : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IFinalSpeed() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The absolute speed a synchronized entity should have at its target position.
	 * 
	 * @return value of model property absoluteSpeed
	*/

                virtual std::shared_ptr<IAbsoluteSpeed> GetAbsoluteSpeed()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The speed a synchronized entity should have relative to its master entity at its target position.
	 * 
	 * @return value of model property relativeSpeedToMaster
	*/

                virtual std::shared_ptr<IRelativeSpeedToMaster> GetRelativeSpeedToMaster()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines fog at simulation runtime.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IFog : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IFog() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property visualRange
	*/

                virtual double GetVisualRange()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Dimensions and center of fog in fixed coordinates.
	 * 
	 * @return value of model property boundingBox
	*/

                virtual std::shared_ptr<IBoundingBox> GetBoundingBox()
            {
                return nullptr;
            }
        
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
        class IFollowTrajectoryAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IFollowTrajectoryAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Trajectory definition.
	 * 
	 * @return value of model property trajectory
	*/

                virtual std::shared_ptr<ITrajectory> GetTrajectory()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the trajectory type in a catalog.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines if time information provided within the trajectory should be considered. If so, it may be used as either
	 * absolute or relative time along the trajectory in order to define longitudinal velocity of the actor. Moreover, a time
	 * offset or time scaling may be applied.
	 * 
	 * @return value of model property timeReference
	*/

                virtual std::shared_ptr<ITimeReference> GetTimeReference()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The mode how to follow the given trajectory.
	 * 
	 * @return value of model property trajectoryFollowingMode
	*/

                virtual std::shared_ptr<ITrajectoryFollowingMode> GetTrajectoryFollowingMode()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions that does not explicitly target an entityâ€™s state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IGlobalAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IGlobalAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Sets the weather state, road conditions, and time of the day.
	 * 
	 * @return value of model property environmentAction
	*/

                virtual std::shared_ptr<IEnvironmentAction> GetEnvironmentAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Removing or adding entities.
	 * 
	 * @return value of model property entityAction
	*/

                virtual std::shared_ptr<IEntityAction> GetEntityAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Setting/modifying values of parameters.
	 * 
	 * @return value of model property parameterAction
	*/

                virtual std::shared_ptr<IParameterAction> GetParameterAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Setting/modifying traffic signals.
	 * 
	 * @return value of model property infrastructureAction
	*/

                virtual std::shared_ptr<IInfrastructureAction> GetInfrastructureAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Populating ambient traffic.
	 * 
	 * @return value of model property trafficAction
	*/

                virtual std::shared_ptr<ITrafficAction> GetTrafficAction()
            {
                return nullptr;
            }
        
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
        class IInRoutePosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IInRoutePosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The position is defined through the current position of a given entity.
	 * 
	 * @return value of model property fromCurrentEntity
	*/

                virtual std::shared_ptr<IPositionOfCurrentEntity> GetFromCurrentEntity()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in road coordinate system.
	 * 
	 * @return value of model property fromRoadCoordinates
	*/

                virtual std::shared_ptr<IPositionInRoadCoordinates> GetFromRoadCoordinates()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in lane coordinate system.
	 * 
	 * @return value of model property fromLaneCoordinates
	*/

                virtual std::shared_ptr<IPositionInLaneCoordinates> GetFromLaneCoordinates()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an action which changes a state of a traffic signal or a traffic signal controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IInfrastructureAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IInfrastructureAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Set or overwrite a signals state or a signal controllers state from a road network.
	 * 
	 * @return value of model property trafficSignalAction
	*/

                virtual std::shared_ptr<ITrafficSignalAction> GetTrafficSignalAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the actions which are executed during the initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IInit : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IInit() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of actions initially executed when the enclosing storyboard starts.
	 * 
	 * @return value of model property actions
	*/

                virtual std::shared_ptr<IInitActions> GetActions()
            {
                return nullptr;
            }
        
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
        class IInitActions : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IInitActions() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of global actions.
	 * 
	 * @return value of model property globalActions
	*/

                virtual std::vector<std::shared_ptr<IGlobalAction>> GetGlobalActions()
            {
                return std::vector<std::shared_ptr<IGlobalAction>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of user defined actions.
	 * 
	 * @return value of model property userDefinedActions
	*/

                virtual std::vector<std::shared_ptr<IUserDefinedAction>> GetUserDefinedActions()
            {
                return std::vector<std::shared_ptr<IUserDefinedAction>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of private actions.
	 * 
	 * @return value of model property privates
	*/

                virtual std::vector<std::shared_ptr<IPrivate>> GetPrivates()
            {
                return std::vector<std::shared_ptr<IPrivate>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of one value of the knot vector of a NURBS trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IKnot : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IKnot() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Knot vector value. Range ]-inf..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
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
        class ILaneChangeAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILaneChangeAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lane offset to be reached at the target lane; the action will end there. Unit: m.
	 * 
	 * @return value of model property targetLaneOffset
	*/

                virtual double GetTargetLaneOffset()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Shape/time of lane change action.
	 * 
	 * @return value of model property laneChangeActionDynamics
	*/

                virtual std::shared_ptr<ITransitionDynamics> GetLaneChangeActionDynamics()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Direction of lane change action.
	 * 
	 * @return value of model property laneChangeTarget
	*/

                virtual std::shared_ptr<ILaneChangeTarget> GetLaneChangeTarget()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the target lane of the LaneChangeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ILaneChangeTarget : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILaneChangeTarget() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lane change direction relative to entity's lane.
	 * 
	 * @return value of model property relativeTargetLane
	*/

                virtual std::shared_ptr<IRelativeTargetLane> GetRelativeTargetLane()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lane change target lane number.
	 * 
	 * @return value of model property absoluteTargetLane
	*/

                virtual std::shared_ptr<IAbsoluteTargetLane> GetAbsoluteTargetLane()
            {
                return nullptr;
            }
        
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
        class ILaneOffsetAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILaneOffsetAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target lane is reached. If true it does not end but has to be stopped.
	 * 
	 * @return value of model property continuous
	*/

                virtual bool GetContinuous()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Parameters defining the dynamics of the LaneOffsetAction.
	 * 
	 * @return value of model property laneOffsetActionDynamics
	*/

                virtual std::shared_ptr<ILaneOffsetActionDynamics> GetLaneOffsetActionDynamics()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Parameters indicating if the lane offset is defined relative to another entity or absolute to the current lane's center
	 * line.
	 * 
	 * @return value of model property laneOffsetTarget
	*/

                virtual std::shared_ptr<ILaneOffsetTarget> GetLaneOffsetTarget()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines shape, duration and lateral acceleration which are used to do the lane offset action.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ILaneOffsetActionDynamics : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILaneOffsetActionDynamics() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum lateral acceleration used to initially reach and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxLateralAcc
	*/

                virtual double GetMaxLateralAcc()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Geometrical shape of the LaneOffsetAction's dynamics.
	 * 
	 * @return value of model property dynamicsShape
	*/

                virtual DynamicsShape GetDynamicsShape()
            {
                return DynamicsShape();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the target lane of the LaneOffsetAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ILaneOffsetTarget : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILaneOffsetTarget() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative reference to the lane position of a specific entity.
	 * 
	 * @return value of model property relativeTargetLaneOffset
	*/

                virtual std::shared_ptr<IRelativeTargetLaneOffset> GetRelativeTargetLaneOffset()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Absolute reference to the current lane's center line.
	 * 
	 * @return value of model property absoluteTargetLaneOffset
	*/

                virtual std::shared_ptr<IAbsoluteTargetLaneOffset> GetAbsoluteTargetLaneOffset()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position along a lane with a given s coordinate, lane ID, road ID and orientation.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ILanePosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILanePosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the current road (ID of a road in road network).
	 * 
	 * @return value of model property roadId
	*/

                virtual std::string GetRoadId()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the current lane (ID of a lane in road network).
	 * 
	 * @return value of model property laneId
	*/

                virtual std::string GetLaneId()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset to the centerline of the current lane. Unit: m.
	 * 
	 * @return value of model property offset
	*/

                virtual double GetOffset()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The s coordinate of the current position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property s
	*/

                virtual double GetS()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the lateral behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ILateralAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILateralAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a lane change.
	 * 
	 * @return value of model property laneChangeAction
	*/

                virtual std::shared_ptr<ILaneChangeAction> GetLaneChangeAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lane offset.
	 * 
	 * @return value of model property laneOffsetAction
	*/

                virtual std::shared_ptr<ILaneOffsetAction> GetLaneOffsetAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lateral distance to a specific entity.
	 * 
	 * @return value of model property lateralDistanceAction
	*/

                virtual std::shared_ptr<ILateralDistanceAction> GetLateralDistanceAction()
            {
                return nullptr;
            }
        
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
        class ILateralDistanceAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILateralDistanceAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity the lateral distance shall be kept to.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral distance value. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property distance
	*/

                virtual double GetDistance()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: Lateral distance is measured using the distance between closest bounding box points. False: Reference point
	 * distance is used.
	 * 
	 * @return value of model property freespace
	*/

                virtual bool GetFreespace()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
	 * 
	 * @return value of model property continuous
	*/

                virtual bool GetContinuous()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Parameter that assigns either unlimited dynamics (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the
	 * action.
	 * 
	 * @return value of model property dynamicConstraints
	*/

                virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the longitudinal behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ILongitudinalAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILongitudinalAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * This action describes the transition between the current longitudinal speed of an entity and its target speed.
	 * 
	 * @return value of model property speedAction
	*/

                virtual std::shared_ptr<ISpeedAction> GetSpeedAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This Action defines a continuously kept longitudinal distance to a specific entity.
	 * 
	 * @return value of model property longitudinalDistanceAction
	*/

                virtual std::shared_ptr<ILongitudinalDistanceAction> GetLongitudinalDistanceAction()
            {
                return nullptr;
            }
        
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
        class ILongitudinalDistanceAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILongitudinalDistanceAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity the distance shall be kept to.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Distance value, not to be used together with timeGap attribute. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property distance
	*/

                virtual double GetDistance()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Time gap value, not to be used together with distance attribute. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property timeGap
	*/

                virtual double GetTimeGap()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: Distance is measured using the distance between closest bounding box points False: Reference point distance is
	 * used.
	 * 
	 * @return value of model property freespace
	*/

                virtual bool GetFreespace()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
	 * 
	 * @return value of model property continuous
	*/

                virtual bool GetContinuous()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Parameter that assigns either unlimited dynamics (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to
	 * the action.
	 * 
	 * @return value of model property dynamicConstraints
	*/

                virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A container for Events. Can be stored in a maneuver catalog. Allows declaration of parameters within its scope.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IManeuver : public virtual IOpenScenarioModelElement, public IStoryboardElement, public ICatalogElement
        {
        public:
            virtual ~IManeuver() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of events that are comprised by the maneuver.
	 * 
	 * @return value of model property events
	*/

                virtual std::vector<std::shared_ptr<IEvent>> GetEvents()
            {
                return std::vector<std::shared_ptr<IEvent>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up maneuver catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IManeuverCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IManeuverCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
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
        class IManeuverGroup : public virtual IOpenScenarioModelElement, public IStoryboardElement
        {
        public:
            virtual ~IManeuverGroup() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Number of allowed executions of the maneuver group. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/

                virtual long long GetMaximumExecutionCount()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver group.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Actors of the maneuver group.
	 * 
	 * @return value of model property actors
	*/

                virtual std::shared_ptr<IActors> GetActors()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Each element of this list of must reference a maneuver type in a catalog.
	 * 
	 * @return value of model property catalogReferences
	*/

                virtual std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences()
            {
                return std::vector<std::shared_ptr<ICatalogReference>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maneuver type definitions.
	 * 
	 * @return value of model property maneuvers
	*/

                virtual std::vector<std::shared_ptr<IManeuver>> GetManeuvers()
            {
                return std::vector<std::shared_ptr<IManeuver>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a miscellaneous object type. A miscellaneous object has no controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IMiscObject : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~IMiscObject() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Categorization of the miscellaneous object.
	 * 
	 * @return value of model property miscObjectCategory
	*/

                virtual MiscObjectCategory GetMiscObjectCategory()
            {
                return MiscObjectCategory();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Mass of the miscellaneous object. Unit: kg; Range: [0..inf[.
	 * 
	 * @return value of model property mass
	*/

                virtual double GetMass()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the miscellaneous object type.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box definition for the miscellaneous object.
	 * 
	 * @return value of model property boundingBox
	*/

                virtual std::shared_ptr<IBoundingBox> GetBoundingBox()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Property definitions for the miscellaneous object.
	 * 
	 * @return value of model property properties
	*/

                virtual std::shared_ptr<IProperties> GetProperties()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up miscellaneous object catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IMiscObjectCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IMiscObjectCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
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
        class IModifyRule : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IModifyRule() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Adding a value to a parameter.
	 * 
	 * @return value of model property addValue
	*/

                virtual std::shared_ptr<IParameterAddValueRule> GetAddValue()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Multiply a parameter by a value.
	 * 
	 * @return value of model property multiplyByValue
	*/

                virtual std::shared_ptr<IParameterMultiplyByValueRule> GetMultiplyByValue()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Empty container, indicating unused controlling behavior or dynamics limitations for specific axis.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class INone : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~INone() = default;
            
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Non-uniform rational b-spline (NURBS) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class INurbs : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~INurbs() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Order of the NURBS trajectory. This is the order of the curve, not the degree of the polynomials, which will be one less
	 * than the order of the curve. Range [2..inf[.
	 * 
	 * @return value of model property order
	*/

                virtual long long GetOrder()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Control point vector of the NURBS trajectory. The number of control points must be greater or equal to the order of the
	 * curve.
	 * 
	 * @return value of model property controlPoints
	*/

                virtual std::vector<std::shared_ptr<IControlPoint>> GetControlPoints()
            {
                return std::vector<std::shared_ptr<IControlPoint>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Knot vector of the NURBS trajectory. Knot values must be given in ascending order. The number of knot vector values must
	 * be equal to the number of control points plus the order of the curve.
	 * 
	 * @return value of model property knots
	*/

                virtual std::vector<std::shared_ptr<IKnot>> GetKnots()
            {
                return std::vector<std::shared_ptr<IKnot>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a controller for a scenario object. Either an inline definition or a catalog reference to a controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IObjectController : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IObjectController() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Catalog reference to a controller.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Controller type definition.
	 * 
	 * @return value of model property controller
	*/

                virtual std::shared_ptr<IController> GetController()
            {
                return nullptr;
            }
        
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
        class IOffroadCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOffroadCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of time of driving offroad. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/

                virtual double GetDuration()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top level container for scenarios or catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOpenScenario : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOpenScenario() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Header information for the scenario or the catalog.
	 * 
	 * @return value of model property fileHeader
	*/

                virtual std::shared_ptr<IFileHeader> GetFileHeader()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Category (catalog or scenario) of the OpenSCENARIO description.
	 * 
	 * @return value of model property openScenarioCategory
	*/

                virtual std::shared_ptr<IOpenScenarioCategory> GetOpenScenarioCategory()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Indicates if the following content defines a scenario or a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOpenScenarioCategory : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOpenScenarioCategory() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a scenario.
	 * 
	 * @return value of model property scenarioDefinition
	*/

                virtual std::shared_ptr<IScenarioDefinition> GetScenarioDefinition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a catalog.
	 * 
	 * @return value of model property catalogDefinition
	*/

                virtual std::shared_ptr<ICatalogDefinition> GetCatalogDefinition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an absolute or relative orientation (heading, pitch and roll).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOrientation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOrientation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative or absolute definition.
	 * 
	 * @return value of model property type
	*/

                virtual ReferenceContext GetType()
            {
                return ReferenceContext();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Heading angle. Unit: rad;.
	 * 
	 * @return value of model property h
	*/

                virtual double GetH()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Pitch angle. Unit: rad;.
	 * 
	 * @return value of model property p
	*/

                virtual double GetP()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Roll angle. Unit: rad;.
	 * 
	 * @return value of model property r
	*/

                virtual double GetR()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the brake of a vehicle, when overriding a brake value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideBrakeAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideBrakeAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Brake pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the brake pedal.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/

                virtual bool GetActive()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the clutch of a vehicle, when overriding a clutch value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideClutchAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideClutchAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the clutch pedal.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/

                virtual bool GetActive()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Overrides entity controller values. Mostly suited for motor vehicles.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideControllerValueAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideControllerValueAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for throttle pedal position or unset value.
	 * 
	 * @return value of model property throttle
	*/

                virtual std::shared_ptr<IOverrideThrottleAction> GetThrottle()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for brake position or unset value.
	 * 
	 * @return value of model property brake
	*/

                virtual std::shared_ptr<IOverrideBrakeAction> GetBrake()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for clutch position or unset value.
	 * 
	 * @return value of model property clutch
	*/

                virtual std::shared_ptr<IOverrideClutchAction> GetClutch()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for parking brake position or unset value.
	 * 
	 * @return value of model property parkingBrake
	*/

                virtual std::shared_ptr<IOverrideParkingBrakeAction> GetParkingBrake()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for steering wheel position or unset value.
	 * 
	 * @return value of model property steeringWheel
	*/

                virtual std::shared_ptr<IOverrideSteeringWheelAction> GetSteeringWheel()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for gear position or unset value.
	 * 
	 * @return value of model property gear
	*/

                virtual std::shared_ptr<IOverrideGearAction> GetGear()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the gear of a vehicle, when overriding a gear value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideGearAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideGearAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Gear number.
	 * 
	 * @return value of model property number
	*/

                virtual double GetNumber()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/

                virtual bool GetActive()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the parking brake of a vehicle, when overriding a parking brake value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideParkingBrakeAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideParkingBrakeAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Parking brake value. Unit: %; Range: [0..1]. The value 1 represent the maximum parking brake state.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/

                virtual bool GetActive()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the steering wheel of a vehicle, when overriding a steering wheel angle in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideSteeringWheelAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideSteeringWheelAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Steering wheel angle. Unit: rad.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/

                virtual bool GetActive()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the throttle of a vehicle, when overriding a throttle value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IOverrideThrottleAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOverrideThrottleAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Throttle pedal value. Range: [0..1].0 represents 0%, 1 represents 100% of pressing the throttle pedal.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/

                virtual bool GetActive()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Set or modify a named parameter. (Be aware of the data type).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IParameterAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter.
	 * 
	 * @return value of model property parameterRef
	*/

                virtual INamedReference<IParameterDeclaration>* GetParameterRef()
            {
                return new INamedReference<IParameterDeclaration>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * New value for the parameter.
	 * 
	 * @return value of model property setAction
	*/

                virtual std::shared_ptr<IParameterSetAction> GetSetAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Modifying rule for the parameter (Add value or multiply by value).
	 * 
	 * @return value of model property modifyAction
	*/

                virtual std::shared_ptr<IParameterModifyAction> GetModifyAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an addition of a value to a parameter as part of a ModifyRule.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IParameterAddValueRule : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterAddValueRule() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Add value to existing parameter.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
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
        class IParameterAssignment : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterAssignment() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter that must be declared in the catalog.
	 * 
	 * @return value of model property parameterRef
	*/

                virtual INamedReference<IParameterDeclaration>* GetParameterRef()
            {
                return new INamedReference<IParameterDeclaration>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter that is handed over to the parametrizable type.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
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
        class IParameterCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter that must be defined.
	 * 
	 * @return value of model property parameterRef
	*/

                virtual INamedReference<IParameterDeclaration>* GetParameterRef()
            {
                return new INamedReference<IParameterDeclaration>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Declaration of a parameter.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IParameterDeclaration : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterDeclaration() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Type of the parameter.
	 * 
	 * @return value of model property parameterType
	*/

                virtual ParameterType GetParameterType()
            {
                return ParameterType();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter as its default value.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Modify a global parameter according to given rules.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IParameterModifyAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterModifyAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Either adding a value to a parameter or multiply a parameter by a value. Has to match the parameter type.
	 * 
	 * @return value of model property rule
	*/

                virtual std::shared_ptr<IModifyRule> GetRule()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Multiply a parameter by a value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IParameterMultiplyByValueRule : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterMultiplyByValueRule() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Multiply existing parameter by the value (be aware of the parameter data type).
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Setting a parameter to a given value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IParameterSetAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterSetAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The new value for the parameter.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a pedestrian type in a scenario or in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPedestrian : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~IPedestrian() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the model of the pedestrian.
	 * 
	 * @return value of model property model
	*/

                virtual std::string GetModel()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The mass of a pedestrian in kg.
	 * 
	 * @return value of model property mass
	*/

                virtual double GetMass()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the pedestrian type. Required when used in catalog.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Category type of pedestrian.
	 * 
	 * @return value of model property pedestrianCategory
	*/

                virtual PedestrianCategory GetPedestrianCategory()
            {
                return PedestrianCategory();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box of the pedestrian.
	 * 
	 * @return value of model property boundingBox
	*/

                virtual std::shared_ptr<IBoundingBox> GetBoundingBox()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Properties (values/files) of the pedestrian.
	 * 
	 * @return value of model property properties
	*/

                virtual std::shared_ptr<IProperties> GetProperties()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up pedestrian catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPedestrianCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPedestrianCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * File path for the pedestrian catalog files.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for Performance values of a vehicle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPerformance : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPerformance() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum speed of the vehicle. Unit: m/s.
	 * 
	 * @return value of model property maxSpeed
	*/

                virtual double GetMaxSpeed()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum acceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
	 * 
	 * @return value of model property maxAcceleration
	*/

                virtual double GetMaxAcceleration()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum deceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
	 * 
	 * @return value of model property maxDeceleration
	*/

                virtual double GetMaxDeceleration()
            {
                return 0;
            }
        
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
        class IPhase : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPhase() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Duration of the phase. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/

                virtual double GetDuration()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Each phase has multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1
	 * (trafficSignal1:true;false;false, trafficSignal2:false;false;true).
	 * 
	 * @return value of model property trafficSignalStates
	*/

                virtual std::vector<std::shared_ptr<ITrafficSignalState>> GetTrafficSignalStates()
            {
                return std::vector<std::shared_ptr<ITrafficSignalState>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Polygonal chain (polyline) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPolyline : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPolyline() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Ordered chain of vertices of the polygonal chain.
	 * 
	 * @return value of model property vertices
	*/

                virtual std::vector<std::shared_ptr<IVertex>> GetVertices()
            {
                return std::vector<std::shared_ptr<IVertex>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for position types.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position that uses global coordinates.
	 * 
	 * @return value of model property worldPosition
	*/

                virtual std::shared_ptr<IWorldPosition> GetWorldPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to a world position.
	 * 
	 * @return value of model property relativeWorldPosition
	*/

                virtual std::shared_ptr<IRelativeWorldPosition> GetRelativeWorldPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to an entity.
	 * 
	 * @return value of model property relativeObjectPosition
	*/

                virtual std::shared_ptr<IRelativeObjectPosition> GetRelativeObjectPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position in road coordinates (t,s) applied to a given road.
	 * 
	 * @return value of model property roadPosition
	*/

                virtual std::shared_ptr<IRoadPosition> GetRoadPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position relative to an entity's road position (ds, dt).
	 * 
	 * @return value of model property relativeRoadPosition
	*/

                virtual std::shared_ptr<IRelativeRoadPosition> GetRelativeRoadPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
	 * 
	 * @return value of model property lanePosition
	*/

                virtual std::shared_ptr<ILanePosition> GetLanePosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined relative to the lane coordinates of a given entity. (Relative lane and relative s to this
	 * entity).
	 * 
	 * @return value of model property relativeLanePosition
	*/

                virtual std::shared_ptr<IRelativeLanePosition> GetRelativeLanePosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a given route.
	 * 
	 * @return value of model property routePosition
	*/

                virtual std::shared_ptr<IRoutePosition> GetRoutePosition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a coordinate along a lane with a given s coordinate and lane ID.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPositionInLaneCoordinates : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPositionInLaneCoordinates() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * s-coordinate of the actual position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property pathS
	*/

                virtual double GetPathS()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lane ID of the actual position.
	 * 
	 * @return value of model property laneId
	*/

                virtual std::string GetLaneId()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset (relative to the lane centerline) of the actual position. Unit: m.
	 * 
	 * @return value of model property laneOffset
	*/

                virtual double GetLaneOffset()
            {
                return 0;
            }
        
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
        class IPositionInRoadCoordinates : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPositionInRoadCoordinates() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position in s coordinates along the reference line of the road.
	 * 
	 * @return value of model property pathS
	*/

                virtual double GetPathS()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position in t coordinates orthogonal to the reference line of the road.
	 * 
	 * @return value of model property t
	*/

                virtual double GetT()
            {
                return 0;
            }
        
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
        class IPositionOfCurrentEntity : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPositionOfCurrentEntity() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to an entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a precipitation by type and value of a weather.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPrecipitation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPrecipitation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Type of the precipitation.
	 * 
	 * @return value of model property precipitationType
	*/

                virtual PrecipitationType GetPrecipitationType()
            {
                return PrecipitationType();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The intensity of the precipitation. Range: [0..1].
	 * 
	 * @return value of model property intensity
	*/

                virtual double GetIntensity()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for private actions assigned to one specific entity and used in the initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IPrivate : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPrivate() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of private actions to be executed when the enclosing container gets triggered.
	 * 
	 * @return value of model property privateActions
	*/

                virtual std::vector<std::shared_ptr<IPrivateAction>> GetPrivateActions()
            {
                return std::vector<std::shared_ptr<IPrivateAction>>();
            }
        
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
        class IPrivateAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPrivateAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Applies longitudinal control behavior on the reference entity/entities. Either a SpeedAction or a
	 * LongitudinalDistanceAction.
	 * 
	 * @return value of model property longitudinalAction
	*/

                virtual std::shared_ptr<ILongitudinalAction> GetLongitudinalAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Applies lateral control behavior on the reference entity/entities. Either a LaneChangeAction, LaneOffsetAction or a
	 * LateralDistanceAction.
	 * 
	 * @return value of model property lateralAction
	*/

                virtual std::shared_ptr<ILateralAction> GetLateralAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Sets visibility attributes on the reference entity/entities.
	 * 
	 * @return value of model property visibilityAction
	*/

                virtual std::shared_ptr<IVisibilityAction> GetVisibilityAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Synchronizes the reference entity/entities with a master entity. A target position is provided for the entity and for
	 * the master entity to be reached at the same time.
	 * 
	 * @return value of model property synchronizeAction
	*/

                virtual std::shared_ptr<ISynchronizeAction> GetSynchronizeAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Activates/ deactivates a controller on the reference entity/entities.
	 * 
	 * @return value of model property activateControllerAction
	*/

                virtual std::shared_ptr<IActivateControllerAction> GetActivateControllerAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a controller to the reference entity/entities.
	 * 
	 * @return value of model property controllerAction
	*/

                virtual std::shared_ptr<IControllerAction> GetControllerAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a position to the reference entity/entities.
	 * 
	 * @return value of model property teleportAction
	*/

                virtual std::shared_ptr<ITeleportAction> GetTeleportAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Applies an AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
	 * 
	 * @return value of model property routingAction
	*/

                virtual std::shared_ptr<IRoutingAction> GetRoutingAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for one or more properties. Properties encloses multiple property instances and/or multiple file references.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IProperties : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IProperties() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A name/value pair. The semantic of the name/values are subject of a contract between the provider of a simulation
	 * environment and the author of a scenario.
	 * 
	 * @return value of model property properties
	*/

                virtual std::vector<std::shared_ptr<IProperty>> GetProperties()
            {
                return std::vector<std::shared_ptr<IProperty>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of arbitrary files attached to an object that owns the properties. The semantic and the file formats are subject
	 * of a contract between the provider of a simulation environment and the author of a scenario.
	 * 
	 * @return value of model property files
	*/

                virtual std::vector<std::shared_ptr<IFile>> GetFiles()
            {
                return std::vector<std::shared_ptr<IFile>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a property by name and value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IProperty : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IProperty() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a user defined property.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Value of a user defined property.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Checks if a triggering entity/entities has reached a given position, within some user specified tolerance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IReachPositionCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IReachPositionCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Radius of tolerance circle around given position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property tolerance
	*/

                virtual double GetTolerance()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The position to be reached with the defined tolerance.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
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
        class IRelativeDistanceCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeDistanceCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The domain the distance is calculated in.
	 * 
	 * @return value of model property relativeDistanceType
	*/

                virtual RelativeDistanceType GetRelativeDistanceType()
            {
                return RelativeDistanceType();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The distance value. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: distance is measured between closest bounding box points. False: reference point distance is used.
	 * 
	 * @return value of model property freespace
	*/

                virtual bool GetFreespace()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position derived from relative lane coordinates (dLane, ds and offset) to a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRelativeLanePosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeLanePosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative dlane to the lane of the reference entity.
	 * 
	 * @return value of model property dLane
	*/

                virtual int GetDLane()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative ds to the s of reference entity.
	 * 
	 * @return value of model property ds
	*/

                virtual double GetDs()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset to the taqrget lane. Unit: m; Range: ]-inf..inf[
	 * 
	 * @return value of model property offset
	*/

                virtual double GetOffset()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced lane's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
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
        class IRelativeObjectPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeObjectPosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the x axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dx
	*/

                virtual double GetDx()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the y axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dy
	*/

                virtual double GetDy()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the z axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dz
	*/

                virtual double GetDz()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an absolute position derived from relative road coordinates delta s [ds] and delta t [dt] to a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRelativeRoadPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeRoadPosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative ds road coordinate to s coordinate of the reference entity.
	 * 
	 * @return value of model property ds
	*/

                virtual double GetDs()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative dt road coordinate to t coordinate of the reference entity.
	 * 
	 * @return value of model property dt
	*/

                virtual double GetDt()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
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
        class IRelativeSpeedCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeSpeedCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative speed value. Unit: m/s.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Speed definition relative to the master entity's speed within a SynchronizeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRelativeSpeedToMaster : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeSpeedToMaster() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative speed. Unit: m/s. Range: ]-inf..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The semantics of the value (delta, offset, factor).
	 * 
	 * @return value of model property speedTargetValueType
	*/

                virtual SpeedTargetValueType GetSpeedTargetValueType()
            {
                return SpeedTargetValueType();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the relative lane offset to a reference entity as target for a LaneChangeTarget.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRelativeTargetLane : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeTargetLane() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Signed number of lanes that is offset the reference entity's current lane.
	 * 
	 * @return value of model property value
	*/

                virtual int GetValue()
            {
                return 0;
            }
        
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
        class IRelativeTargetLaneOffset : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeTargetLaneOffset() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Lane offset with respect to the reference entity's current lane position. Unit: m.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a target speed relative to a reference entity's speed.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRelativeTargetSpeed : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeTargetSpeed() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the relative speed. This value is either given as a delta or as a factor. E.g. value=10 together with
	 * valueType=delta means the entity/entities are supposed to drive 10m/s faster than the target reference entity. E.g.
	 * value=1.1 together with valueType=factor means that the entity/entities are supposed to drive 10% faster than the target
	 * reference entity. Unit: m/s or 1.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The value is either a delta (Unit m/s) or a factor (no Unit).
	 * 
	 * @return value of model property speedTargetValueType
	*/

                virtual SpeedTargetValueType GetSpeedTargetValueType()
            {
                return SpeedTargetValueType();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * By setting continuous to true a controller comes into place and tries to maintain a continuous relative speed. This may
	 * not be used together with Dynamics.time or Dynamics.distance.
	 * 
	 * @return value of model property continuous
	*/

                virtual bool GetContinuous()
            {
                return false;
            }
        
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
        class IRelativeWorldPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeWorldPosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity from which the relative world position is measured.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative x coordinate in the world coordinate system.
	 * 
	 * @return value of model property dx
	*/

                virtual double GetDx()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative y coordinate in the world coordinate system.
	 * 
	 * @return value of model property dy
	*/

                virtual double GetDy()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Relative z coordinate in the world coordinate system.
	 * 
	 * @return value of model property dz
	*/

                virtual double GetDz()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the reference entity's orientation.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of the road friction scale factor. Can be augmented with the addition of optional road properties.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRoadCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRoadCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Friction scale factor. Range: [0..inf[
	 * 
	 * @return value of model property frictionScaleFactor
	*/

                virtual double GetFrictionScaleFactor()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Additional properties to describe the road condition.
	 * 
	 * @return value of model property properties
	*/

                virtual std::shared_ptr<IProperties> GetProperties()
            {
                return nullptr;
            }
        
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
        class IRoadNetwork : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRoadNetwork() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * File path of the road network file (e.g. an ASAM OpenDRIVE file).
	 * 
	 * @return value of model property logicFile
	*/

                virtual std::shared_ptr<IFile> GetLogicFile()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * File path of a 3D model representing the virtual environment. This may be used for visual representation (rendering).
	 * 
	 * @return value of model property sceneGraphFile
	*/

                virtual std::shared_ptr<IFile> GetSceneGraphFile()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name references and description of dynamic behavior for traffic signals defined in the road network file.
	 * 
	 * @return value of model property trafficSignals
	*/

                virtual std::vector<std::shared_ptr<ITrafficSignalController>> GetTrafficSignals()
            {
                return std::vector<std::shared_ptr<ITrafficSignalController>>();
            }
        
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
        class IRoadPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRoadPosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Identifier of the road, defined in the road network definition file (external to ASAM OpenSCENARIO).
	 * 
	 * @return value of model property roadId
	*/

                virtual std::string GetRoadId()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Represents s coordinate along the reference line of the road.
	 * 
	 * @return value of model property s
	*/

                virtual double GetS()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Represents t coordinate orthogonal to the reference line of the road.
	 * 
	 * @return value of model property t
	*/

                virtual double GetT()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
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
        class IRoute : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~IRoute() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the route. Required in catalogs.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * In a closed route, the last waypoint is followed by the first waypoint to create a closed route.
	 * 
	 * @return value of model property closed
	*/

                virtual bool GetClosed()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * At least two waypoints are needed to define a route.
	 * 
	 * @return value of model property waypoints
	*/

                virtual std::vector<std::shared_ptr<IWaypoint>> GetWaypoints()
            {
                return std::vector<std::shared_ptr<IWaypoint>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up route catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRouteCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRouteCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
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
        class IRoutePosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRoutePosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to the route the position is calculated from.
	 * 
	 * @return value of model property routeRef
	*/

                virtual std::shared_ptr<IRouteRef> GetRouteRef()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
	 * and t coordinates or to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/

                virtual std::shared_ptr<IOrientation> GetOrientation()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position along the route.
	 * 
	 * @return value of model property inRoutePosition
	*/

                virtual std::shared_ptr<IInRoutePosition> GetInRoutePosition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a reference to a route. Either an inline definition of a route or a route in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IRouteRef : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRouteRef() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Route definition.
	 * 
	 * @return value of model property route
	*/

                virtual std::shared_ptr<IRoute> GetRoute()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to route in the catalog.
	 * 
	 * @return value of model property catalogReference
	*/

                virtual std::shared_ptr<ICatalogReference> GetCatalogReference()
            {
                return nullptr;
            }
        
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
        class IRoutingAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRoutingAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a route to an entity. The route is defined by at least two waypoints.
	 * 
	 * @return value of model property assignRouteAction
	*/

                virtual std::shared_ptr<IAssignRouteAction> GetAssignRouteAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Controls an entity to follow a trajectory.
	 * 
	 * @return value of model property followTrajectoryAction
	*/

                virtual std::shared_ptr<IFollowTrajectoryAction> GetFollowTrajectoryAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a route to an entity. The route assigned will be the shortest route (along roads) between the entity's current
	 * position and the position specified.
	 * 
	 * @return value of model property acquirePositionAction
	*/

                virtual std::shared_ptr<IAcquirePositionAction> GetAcquirePositionAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top level container containing all scenario elements.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IScenarioDefinition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IScenarioDefinition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Global Parameter declaration. Some parameter represent placeholders to be resolved when the scenario file is loaded.
	 * Some parameters represent runtime values that can be controlled with ParameterActions and ParameterConditions during
	 * simulation time.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A list of locations to look up catalog files. Each catalog element type has its own list.
	 * 
	 * @return value of model property catalogLocations
	*/

                virtual std::shared_ptr<ICatalogLocations> GetCatalogLocations()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to the road network.
	 * 
	 * @return value of model property roadNetwork
	*/

                virtual std::shared_ptr<IRoadNetwork> GetRoadNetwork()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Container for entity selections and scenario object definitions. Instances of ScenarioObject, of EntitySelection and of
	 * SpawnedObject considered instances of Entity.
	 * 
	 * @return value of model property entities
	*/

                virtual std::shared_ptr<IEntities> GetEntities()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Container for the dynamic content of the scenario.
	 * 
	 * @return value of model property storyboard
	*/

                virtual std::shared_ptr<IStoryboard> GetStoryboard()
            {
                return nullptr;
            }
        
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
        class IScenarioObject : public virtual IOpenScenarioModelElement, public IEntity
        {
        public:
            virtual ~IScenarioObject() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Identifier of the scenario object.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The EntityObject (either instance of type Vehicle, Pedestrian or MiscObject).
	 * 
	 * @return value of model property entityObject
	*/

                virtual std::shared_ptr<IEntityObject> GetEntityObject()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Controller of the EntityObject instance.
	 * 
	 * @return value of model property objectController
	*/

                virtual std::shared_ptr<IObjectController> GetObjectController()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Collection of entities that includes entities explicitly by their reference or includes the entities by their type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ISelectedEntities : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISelectedEntities() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * References to the selected entities.
	 * 
	 * @return value of model property entityRef
	*/

                virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRef()
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the type to determine that all entities of a specific type are members.
	 * 
	 * @return value of model property byType
	*/

                virtual std::vector<std::shared_ptr<IByType>> GetByType()
            {
                return std::vector<std::shared_ptr<IByType>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Shape for use in trajectories. Supported types: Polyline (line segments), Clothoid, Nurbs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IShape : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IShape() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Polyline property of a shape.
	 * 
	 * @return value of model property polyline
	*/

                virtual std::shared_ptr<IPolyline> GetPolyline()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Clothoid property of a shape.
	 * 
	 * @return value of model property clothoid
	*/

                virtual std::shared_ptr<IClothoid> GetClothoid()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * NURBS property of a shape.
	 * 
	 * @return value of model property nurbs
	*/

                virtual std::shared_ptr<INurbs> GetNurbs()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares the simulation time to the specified value. The logical operator is defined by the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ISimulationTimeCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISimulationTimeCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Time value of the simulation time condition. Unit: s.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
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
        class ISpeedAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISpeedAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines how the target speed is reached.
	 * 
	 * @return value of model property speedActionDynamics
	*/

                virtual std::shared_ptr<ITransitionDynamics> GetSpeedActionDynamics()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed which should be reached.
	 * 
	 * @return value of model property speedActionTarget
	*/

                virtual std::shared_ptr<ISpeedActionTarget> GetSpeedActionTarget()
            {
                return nullptr;
            }
        
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
        class ISpeedActionTarget : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISpeedActionTarget() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed as relative speed to a reference entity. Unit: m/s.
	 * 
	 * @return value of model property relativeTargetSpeed
	*/

                virtual std::shared_ptr<IRelativeTargetSpeed> GetRelativeTargetSpeed()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed as absolute speed.Unit: m/s.
	 * 
	 * @return value of model property absoluteTargetSpeed
	*/

                virtual std::shared_ptr<IAbsoluteTargetSpeed> GetAbsoluteTargetSpeed()
            {
                return nullptr;
            }
        
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
        class ISpeedCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISpeedCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Speed value of the speed condition. Unit m/s.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Logical expression in condition becomes true if the triggering entity/entities stands still for a given amount of time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IStandStillCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IStandStillCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Duration time of still standing to let the logical expression become true. Unit: s. Range [0..inf[.
	 * 
	 * @return value of model property duration
	*/

                virtual double GetDuration()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping of independent executable parts of a scenario. The name of a story must be unique within an OpenSCENARIO file.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IStory : public virtual IOpenScenarioModelElement, public IStoryboardElement
        {
        public:
            virtual ~IStory() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the story, must be unique within an OpenSCENARIO file.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the acts of the story.
	 * 
	 * @return value of model property acts
	*/

                virtual std::vector<std::shared_ptr<IAct>> GetActs()
            {
                return std::vector<std::shared_ptr<IAct>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top container for the dynamic content of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IStoryboard : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IStoryboard() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Initialization of the storyboard instance. Initial conditions are set and initial actions are applied to entities.
	 * 
	 * @return value of model property init
	*/

                virtual std::shared_ptr<IInit> GetInit()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of stories defined in a story board.
	 * 
	 * @return value of model property stories
	*/

                virtual std::vector<std::shared_ptr<IStory>> GetStories()
            {
                return std::vector<std::shared_ptr<IStory>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Trigger to stop the Storyboard instance.
	 * 
	 * @return value of model property stopTrigger
	*/

                virtual std::shared_ptr<ITrigger> GetStopTrigger()
            {
                return nullptr;
            }
        
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
        class IStoryboardElementStateCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IStoryboardElementStateCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Type of storyboard element instance.
	 * 
	 * @return value of model property storyboardElementType
	*/

                virtual StoryboardElementType GetStoryboardElementType()
            {
                return StoryboardElementType();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the referenced Storyboard instance.
	 * 
	 * @return value of model property storyboardElementRef
	*/

                virtual INamedReference<IStoryboardElement>* GetStoryboardElementRef()
            {
                return new INamedReference<IStoryboardElement>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The state or the transition of the storyboard element instance for which the condition becomes true.
	 * 
	 * @return value of model property state
	*/

                virtual StoryboardElementState GetState()
            {
                return StoryboardElementState();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of sun properties.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ISun : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISun() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Illuminance of the sun, direct sunlight is around 100,00 lx. Unit: lux; Range: [0..inf[.
	 * 
	 * @return value of model property intensity
	*/

                virtual double GetIntensity()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Azimuth of the sun, counted counterclockwise, 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: radian; Range:
	 * [0..2PI].
	 * 
	 * @return value of model property azimuth
	*/

                virtual double GetAzimuth()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: rad; Range: [-PI..PI].
	 * 
	 * @return value of model property elevation
	*/

                virtual double GetElevation()
            {
                return 0;
            }
        
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
        class ISynchronizeAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISynchronizeAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the master entity.
	 * 
	 * @return value of model property masterEntityRef
	*/

                virtual INamedReference<IEntity>* GetMasterEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The target position for the master entity.
	 * 
	 * @return value of model property targetPositionMaster
	*/

                virtual std::shared_ptr<IPosition> GetTargetPositionMaster()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The target position for the entity that should be synchronized.
	 * 
	 * @return value of model property targetPosition
	*/

                virtual std::shared_ptr<IPosition> GetTargetPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The speed that the synchronized entity should have at its target position.
	 * 
	 * @return value of model property finalSpeed
	*/

                virtual std::shared_ptr<IFinalSpeed> GetFinalSpeed()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifying a target position an entity is teleported to.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITeleportAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITeleportAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The position the entity/entities are teleported to.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
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
        class ITimeHeadwayCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeHeadwayCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity to which the time headway is computed.
	 * 
	 * @return value of model property entityRef
	*/

                virtual INamedReference<IEntity>* GetEntityRef()
            {
                return new INamedReference<IEntity>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The time headway value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: time headway is measured using the distance between closest bounding box points. False: reference point distance
	 * is used.
	 * 
	 * @return value of model property freespace
	*/

                virtual bool GetFreespace()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/

                virtual bool GetAlongRoute()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the day and time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITimeOfDay : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeOfDay() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * If true, the timeofday is animated with progressing simulation time, e.g. in order to animate the position of the sun.
	 * 
	 * @return value of model property animation
	*/

                virtual bool GetAnimation()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Datetime value.
	 * 
	 * @return value of model property dateTime
	*/

                virtual DateTime GetDateTime()
            {
                return {};
            }
        
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
        class ITimeOfDayCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeOfDayCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Datetime value for comparison.
	 * 
	 * @return value of model property dateTime
	*/

                virtual DateTime GetDateTime()
            {
                return {};
            }
        
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
        class ITimeReference : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeReference() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * This property indicates Timing information is neglected.
	 * 
	 * @return value of model property none
	*/

                virtual std::shared_ptr<INone> GetNone()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * This property indicates timing information is taken into account. Its underlying properties allow specification of the
	 * time domain (absolute or relative), time scaling and a global time offset.
	 * 
	 * @return value of model property timing
	*/

                virtual std::shared_ptr<ITiming> GetTiming()
            {
                return nullptr;
            }
        
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
        class ITimeToCollisionCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeToCollisionCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The time to collision value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: time to collision is measured using the distance between closest bounding box points.False: reference point
	 * distance is used.
	 * 
	 * @return value of model property freespace
	*/

                virtual bool GetFreespace()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/

                virtual bool GetAlongRoute()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The explicit position or a position defined through the current position of a reference entity.
	 * 
	 * @return value of model property timeToCollisionConditionTarget
	*/

                virtual std::shared_ptr<ITimeToCollisionConditionTarget> GetTimeToCollisionConditionTarget()
            {
                return nullptr;
            }
        
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
        class ITimeToCollisionConditionTarget : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeToCollisionConditionTarget() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/

                virtual std::shared_ptr<IEntityRef> GetEntityRef()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Adjust the timing within time references by scale and offset.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITiming : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITiming() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of time value context as either absolute or relative.
	 * 
	 * @return value of model property domainAbsoluteRelative
	*/

                virtual ReferenceContext GetDomainAbsoluteRelative()
            {
                return ReferenceContext();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Scaling factor for time values. While values smaller than 1.0 represent negative scaling, values larger than 1.0 will
	 * result in positive scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
	 * 
	 * @return value of model property scale
	*/

                virtual double GetScale()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Introduction of a global offset for all time values. Unit: s; Range: ]-inf..inf[.
	 * 
	 * @return value of model property offset
	*/

                virtual double GetOffset()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions defining macroscopic traffic flow and behavior.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a source of traffic at a specific position.
	 * 
	 * @return value of model property trafficSourceAction
	*/

                virtual std::shared_ptr<ITrafficSourceAction> GetTrafficSourceAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a sink of traffic at a specific position.
	 * 
	 * @return value of model property trafficSinkAction
	*/

                virtual std::shared_ptr<ITrafficSinkAction> GetTrafficSinkAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines swarm traffic around a given central entity.
	 * 
	 * @return value of model property trafficSwarmAction
	*/

                virtual std::shared_ptr<ITrafficSwarmAction> GetTrafficSwarmAction()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of macroscopic traffic based on vehicle and controller definitions.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficDefinition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficDefinition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the traffic definition.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Distribution of vehicle categories within the traffic.
	 * 
	 * @return value of model property vehicleCategoryDistribution
	*/

                virtual std::shared_ptr<IVehicleCategoryDistribution> GetVehicleCategoryDistribution()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Distribution of controllers within this traffic.
	 * 
	 * @return value of model property controllerDistribution
	*/

                virtual std::shared_ptr<IControllerDistribution> GetControllerDistribution()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action used to set or overwrite a signals state or a signal controllers state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSignalAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action used to control the state of a signal.
	 * 
	 * @return value of model property trafficSignalControllerAction
	*/

                virtual std::shared_ptr<ITrafficSignalControllerAction> GetTrafficSignalControllerAction()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Action used to set a specific phase of a signal controller.
	 * 
	 * @return value of model property trafficSignalStateAction
	*/

                virtual std::shared_ptr<ITrafficSignalStateAction> GetTrafficSignalStateAction()
            {
                return nullptr;
            }
        
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
        class ITrafficSignalCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal defined in a road network. The signal ID must be listed in the TrafficSignal list of the
	 * RoadNetwork section.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal to be reached for the condition to become true.
	 * 
	 * @return value of model property state
	*/

                virtual std::string GetState()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the state of a collection of traffic signals.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSignalController : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalController() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the traffic signal controller in the road network.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The delay to the controller in the reference property. A controller having a delay to another one means that its first
	 * phase virtually starts delaytime seconds after the start of the reference's first phase. This can be used to define a
	 * progressive signal system, but only makes sense, if the total times of all connected controllers are the same. If delay
	 * is set, reference is required. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property delay
	*/

                virtual double GetDelay()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A reference (ID) to the connected controller in the road network. If reference is set, a delay is required.
	 * 
	 * @return value of model property reference
	*/

                virtual std::string GetReference()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Phases of a TrafficSignalController.
	 * 
	 * @return value of model property phases
	*/

                virtual std::vector<std::shared_ptr<IPhase>> GetPhases()
            {
                return std::vector<std::shared_ptr<IPhase>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Sets a specific phase of a traffic signal controller, typically affecting a collection of signals.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSignalControllerAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalControllerAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the signal controller in a road network.
	 * 
	 * @return value of model property trafficSignalControllerRef
	*/

                virtual INamedReference<ITrafficSignalController>* GetTrafficSignalControllerRef()
            {
                return new INamedReference<ITrafficSignalController>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Targeted phase of the signal controller. The available phases are defined in type RoadNetwork under the property
	 * trafficSignalControllers.
	 * 
	 * @return value of model property phase
	*/

                virtual std::string GetPhase()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
	 * 
	 * @return value of model property phaseRef
	*/

                virtual std::vector<std::shared_ptr<IPhase>> GetPhaseRef()
            {
                return std::vector<std::shared_ptr<IPhase>>();
            }
        
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
        class ITrafficSignalControllerCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalControllerCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal controller in a road network.
	 * 
	 * @return value of model property trafficSignalControllerRef
	*/

                virtual INamedReference<ITrafficSignalController>* GetTrafficSignalControllerRef()
            {
                return new INamedReference<ITrafficSignalController>();
            }
    
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase of the signal controller to be reached for the condition to become true. The available phases are
	 * defined in type RoadNetwork under the property trafficSignalControllers.
	 * 
	 * @return value of model property phase
	*/

                virtual std::string GetPhase()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
	 * 
	 * @return value of model property phaseRef
	*/

                virtual std::vector<std::shared_ptr<IPhase>> GetPhaseRef()
            {
                return std::vector<std::shared_ptr<IPhase>>();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Possible state of traffic signal within a phase. One state per phase.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSignalState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalState() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal in a road network. The signal ID must be listed in TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property trafficSignalId
	*/

                virtual std::string GetTrafficSignalId()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/

                virtual std::string GetState()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the state of a traffic signal.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSignalStateAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalStateAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * ID of a signal in a road network. The signal ID must be listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Targeted state of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/

                virtual std::string GetState()
            {
                return "";
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a sink of traffic at a specific position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSinkAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSinkAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the rate on which vehicles disappear at the sinks location. Unit: vehicles/s Range: [0..inf[.
	 * 
	 * @return value of model property rate
	*/

                virtual double GetRate()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the radius of the traffic sink where vehicles disappear around the specified position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property radius
	*/

                virtual double GetRadius()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the position of the traffic sink.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the vehicle and controller distribution for the sink.
	 * 
	 * @return value of model property trafficDefinition
	*/

                virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a source of traffic at a specific position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrafficSourceAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSourceAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the rate on which vehicles appear at the source location. Unit: vehicles/s. Range: [0..inf[.
	 * 
	 * @return value of model property rate
	*/

                virtual double GetRate()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the radius of the traffic source where vehicles appear around the specific position. Unit: m. Range: [0..inf[.
	 * 
	 * @return value of model property radius
	*/

                virtual double GetRadius()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The optional starting velocity of a scenario object. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property velocity
	*/

                virtual double GetVelocity()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the position of the traffic source.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the vehicle and controller distribution for the source.
	 * 
	 * @return value of model property trafficDefinition
	*/

                virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition()
            {
                return nullptr;
            }
        
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
        class ITrafficSwarmAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSwarmAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMajorAxis defines the
	 * half length of the major axis of this ellipsis. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property semiMajorAxis
	*/

                virtual double GetSemiMajorAxis()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMinorAxis defines the
	 * half length of the minor axis of this ellipsis. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property semiMinorAxis
	*/

                virtual double GetSemiMinorAxis()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Radius of the inner circular area around the central entity. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property innerRadius
	*/

                virtual double GetInnerRadius()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Offset in longitudinal direction related to the x-axis of the central entity. Unit: m;.
	 * 
	 * @return value of model property offset
	*/

                virtual double GetOffset()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The maximum number of vehicles surrounding the central entity. Depending on the current road situation less than
	 * numberOfVehicles might be set up. Range: [0..inf[.
	 * 
	 * @return value of model property numberOfVehicles
	*/

                virtual long long GetNumberOfVehicles()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The optional starting velocity of a created entity. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property velocity
	*/

                virtual double GetVelocity()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The entity that represents the center of a swarm.
	 * 
	 * @return value of model property centralObject
	*/

                virtual std::shared_ptr<ICentralSwarmObject> GetCentralObject()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Specifies properties of autonomous traffic with respect to vehicle and driver distributions.
	 * 
	 * @return value of model property trafficDefinition
	*/

                virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a trajectory type in terms of shape and optional time domain.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrajectory : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~ITrajectory() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the trajectory type. Required if used in catalog.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True if trajectory is closed.
	 * 
	 * @return value of model property closed
	*/

                virtual bool GetClosed()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The shape of a trajectory (Polyline, Clothoid or Nurbs)
	 * 
	 * @return value of model property shape
	*/

                virtual std::shared_ptr<IShape> GetShape()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up trajectory catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrajectoryCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrajectoryCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to define a steering trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITrajectoryFollowingMode : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrajectoryFollowingMode() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Defines (lateral) trajectory following behavior of the actor: Mode 'position' forces the actor to strictly adhere to the
	 * trajectory. In contrast, mode 'follow' hands over control to the actor. In this mode, the actor tries to follow the
	 * trajectory as best as he can. This may be restricted by dynamics constraints and/or control loop implementation.
	 * 
	 * @return value of model property followingMode
	*/

                virtual FollowingMode GetFollowingMode()
            {
                return FollowingMode();
            }
        
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
        class ITransitionDynamics : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITransitionDynamics() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The shape of the transition function f(x) between current and target value.
	 * 
	 * @return value of model property dynamicsShape
	*/

                virtual DynamicsShape GetDynamicsShape()
            {
                return DynamicsShape();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The value for a predefined rate (Unit: delta/s), time (Unit: s) or distance (Unit: m) to acquire the target value.
	 * Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The semantics of the value: 'rate', 'time' or 'distance'.
	 * 
	 * @return value of model property dynamicsDimension
	*/

                virtual DynamicsDimension GetDynamicsDimension()
            {
                return DynamicsDimension();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Logical expression in condition becomes true after the triggering entity/entities have traveled the given distance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class ITraveledDistanceCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITraveledDistanceCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of traveled distance. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/

                virtual double GetValue()
            {
                return 0;
            }
        
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
        class ITrigger : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrigger() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of condition groups as a container of conditions.
	 * 
	 * @return value of model property conditionGroups
	*/

                virtual std::vector<std::shared_ptr<IConditionGroup>> GetConditionGroups()
            {
                return std::vector<std::shared_ptr<IConditionGroup>>();
            }
        
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
        class ITriggeringEntities : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITriggeringEntities() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All or any.
	 * 
	 * @return value of model property triggeringEntitiesRule
	*/

                virtual TriggeringEntitiesRule GetTriggeringEntitiesRule()
            {
                return TriggeringEntitiesRule();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of referenced entities that trigger the condition.
	 * 
	 * @return value of model property entityRefs
	*/

                virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs()
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }
        
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
        class IUserDefinedAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUserDefinedAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The available commands are subject of a contract between simulation environment provider and scenario author.
	 * 
	 * @return value of model property customCommandAction
	*/

                virtual std::shared_ptr<ICustomCommandAction> GetCustomCommandAction()
            {
                return nullptr;
            }
        
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
        class IUserDefinedValueCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUserDefinedValueCondition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the external value.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Reference value the external value is compared to.
	 * 
	 * @return value of model property value
	*/

                virtual std::string GetValue()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/

                virtual Rule GetRule()
            {
                return Rule();
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a vehicle type in a scenario or in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IVehicle : public virtual IOpenScenarioModelElement, public ICatalogElement
        {
        public:
            virtual ~IVehicle() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the vehicle type.
	 * 
	 * @return value of model property name
	*/

                virtual std::string GetName()
            {
                return "";
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Category of the vehicle (bicycle, train,...).
	 * 
	 * @return value of model property vehicleCategory
	*/

                virtual VehicleCategory GetVehicleCategory()
            {
                return VehicleCategory();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/

                virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations()
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The three dimensional bounding box that encloses the vehicle.
	 * 
	 * @return value of model property boundingBox
	*/

                virtual std::shared_ptr<IBoundingBox> GetBoundingBox()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Performance properties of the vehicle.
	 * 
	 * @return value of model property performance
	*/

                virtual std::shared_ptr<IPerformance> GetPerformance()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * A set of axles (front, rear, additional) and their geometric locations.
	 * 
	 * @return value of model property axles
	*/

                virtual std::shared_ptr<IAxles> GetAxles()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Additional properties as name value pairs.
	 * 
	 * @return value of model property properties
	*/

                virtual std::shared_ptr<IProperties> GetProperties()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The directory where to look up vehicle catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IVehicleCatalogLocation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleCatalogLocation() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * All catalogs files in this directory must be evaluated.
	 * 
	 * @return value of model property directory
	*/

                virtual std::shared_ptr<IDirectory> GetDirectory()
            {
                return nullptr;
            }
        
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
        class IVehicleCategoryDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleCategoryDistribution() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * List of elements that pair vehicle categories and their weight within the distribution.
	 * 
	 * @return value of model property vehicleCategoryDistributionEntries
	*/

                virtual std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> GetVehicleCategoryDistributionEntries()
            {
                return std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>>();
            }
        
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
        class IVehicleCategoryDistributionEntry : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleCategoryDistributionEntry() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The category of the vehicles that appear in traffic.
	 * 
	 * @return value of model property category
	*/

                virtual VehicleCategory GetCategory()
            {
                return VehicleCategory();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The weight of a vehicle category within a traffic distribution. Range: [0..inf[.
	 * 
	 * @return value of model property weight
	*/

                virtual double GetWeight()
            {
                return 0;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Vertex of a polygonal chain (polyline) trajectory specification.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IVertex : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVertex() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Optional time specification of the vertex.
	 * 
	 * @return value of model property time
	*/

                virtual double GetTime()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the vertex.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
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
        class IVisibilityAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVisibilityAction() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in image generator(s). False: actor is not visible in image generator(s).
	 * 
	 * @return value of model property graphics
	*/

                virtual bool GetGraphics()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible for other traffic participants, particularly for autonomous driver models. False: actor is not
	 * visible for other traffic participants.
	 * 
	 * @return value of model property traffic
	*/

                virtual bool GetTraffic()
            {
                return false;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in sensor(s). False: actor is not visible in sensor(s).
	 * 
	 * @return value of model property sensors
	*/

                virtual bool GetSensors()
            {
                return false;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Reference position used to form a route.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IWaypoint : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IWaypoint() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The corresponding routing strategy (fastest, shortest, random, leastIntersections).
	 * 
	 * @return value of model property routeStrategy
	*/

                virtual RouteStrategy GetRouteStrategy()
            {
                return RouteStrategy();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The reference position to form the route.
	 * 
	 * @return value of model property position
	*/

                virtual std::shared_ptr<IPosition> GetPosition()
            {
                return nullptr;
            }
        
        };


    
    /**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the weather conditions in terms of light, fog, precipitation and cloud states.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
        class IWeather : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IWeather() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the cloud state, i.e. cloud state and sky visualization settings.
	 * 
	 * @return value of model property cloudState
	*/

                virtual CloudState GetCloudState()
            {
                return CloudState();
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the sun, i.e. position and intensity.
	 * 
	 * @return value of model property sun
	*/

                virtual std::shared_ptr<ISun> GetSun()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of fog, i.e. visual range and bounding box.
	 * 
	 * @return value of model property fog
	*/

                virtual std::shared_ptr<IFog> GetFog()
            {
                return nullptr;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of precipitation, i.e. type and intensity.
	 * 
	 * @return value of model property precipitation
	*/

                virtual std::shared_ptr<IPrecipitation> GetPrecipitation()
            {
                return nullptr;
            }
        
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
        class IWorldPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IWorldPosition() = default;
            
    	/**
	 * From OpenSCENARIO class model specification:
	 * The x coordinate value.
	 * 
	 * @return value of model property x
	*/

                virtual double GetX()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The y coordinate value.
	 * 
	 * @return value of model property y
	*/

                virtual double GetY()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The z coordinate value.
	 * 
	 * @return value of model property z
	*/

                virtual double GetZ()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The heading angle of the object, defining a mathematically positive rotation about the z-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property h
	*/

                virtual double GetH()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The pitch angle of the object, defining a mathematically positive rotation about the y-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property p
	*/

                virtual double GetP()
            {
                return 0;
            }
        
    	/**
	 * From OpenSCENARIO class model specification:
	 * The roll angle of the object, defining a mathematically positive rotation about the x-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property r
	*/

                virtual double GetR()
            {
                return 0;
            }
        
        };


    }
}
