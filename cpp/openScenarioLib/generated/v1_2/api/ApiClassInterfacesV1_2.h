
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
#include "EnumerationsV1_2.h"
#include "OscInterfacesV1_2.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
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
        class IAnimationAction;
        class IAnimationFile;
        class IAnimationState;
        class IAnimationType;
        class IAppearanceAction;
        class IAssignControllerAction;
        class IAssignRouteAction;
        class IAutomaticGear;
        class IAxle;
        class IAxles;
        class IBoundingBox;
        class IBrake;
        class IBrakeInput;
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
        class IColor;
        class IColorCmyk;
        class IColorRgb;
        class IComponentAnimation;
        class ICondition;
        class IConditionGroup;
        class IControlPoint;
        class IController;
        class IControllerAction;
        class IControllerCatalogLocation;
        class IControllerDistribution;
        class IControllerDistributionEntry;
        class ICustomCommandAction;
        class ICustomContent;
        class IDeleteEntityAction;
        class IDeterministic;
        class IDeterministicMultiParameterDistribution;
        class IDeterministicMultiParameterDistributionType;
        class IDeterministicParameterDistribution;
        class IDeterministicSingleParameterDistribution;
        class IDeterministicSingleParameterDistributionType;
        class IDimensions;
        class IDirectionOfTravelDistribution;
        class IDirectory;
        class IDistanceCondition;
        class IDistributionDefinition;
        class IDistributionRange;
        class IDistributionSet;
        class IDistributionSetElement;
        class IDomeImage;
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
        class IExternalObjectReference;
        class IFile;
        class IFileHeader;
        class IFinalSpeed;
        class IFog;
        class IFollowTrajectoryAction;
        class IGear;
        class IGeoPosition;
        class IGlobalAction;
        class IHistogram;
        class IHistogramBin;
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
        class ILicense;
        class ILightState;
        class ILightStateAction;
        class ILightType;
        class ILongitudinalAction;
        class ILongitudinalDistanceAction;
        class IManeuver;
        class IManeuverCatalogLocation;
        class IManeuverGroup;
        class IManualGear;
        class IMiscObject;
        class IMiscObjectCatalogLocation;
        class IModifyRule;
        class INone;
        class INormalDistribution;
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
        class IParameterValueDistribution;
        class IParameterValueDistributionDefinition;
        class IParameterValueSet;
        class IPedestrian;
        class IPedestrianAnimation;
        class IPedestrianCatalogLocation;
        class IPedestrianGesture;
        class IPerformance;
        class IPhase;
        class IPoissonDistribution;
        class IPolyline;
        class IPosition;
        class IPositionInLaneCoordinates;
        class IPositionInRoadCoordinates;
        class IPositionOfCurrentEntity;
        class IPrecipitation;
        class IPrivate;
        class IPrivateAction;
        class IProbabilityDistributionSet;
        class IProbabilityDistributionSetElement;
        class IProperties;
        class IProperty;
        class IRange;
        class IReachPositionCondition;
        class IRelativeClearanceCondition;
        class IRelativeDistanceCondition;
        class IRelativeLanePosition;
        class IRelativeLaneRange;
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
        class ISensorReference;
        class ISensorReferenceSet;
        class IShape;
        class ISimulationTimeCondition;
        class ISpeedAction;
        class ISpeedActionTarget;
        class ISpeedCondition;
        class ISpeedProfileAction;
        class ISpeedProfileEntry;
        class IStandStillCondition;
        class ISteadyState;
        class IStochastic;
        class IStochasticDistribution;
        class IStochasticDistributionType;
        class IStory;
        class IStoryboard;
        class IStoryboardElementStateCondition;
        class ISun;
        class ISynchronizeAction;
        class ITargetDistanceSteadyState;
        class ITargetTimeSteadyState;
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
        class ITrafficSignalGroupState;
        class ITrafficSignalState;
        class ITrafficSignalStateAction;
        class ITrafficSinkAction;
        class ITrafficSourceAction;
        class ITrafficStopAction;
        class ITrafficSwarmAction;
        class ITrajectory;
        class ITrajectoryCatalogLocation;
        class ITrajectoryFollowingMode;
        class ITrajectoryPosition;
        class ITrajectoryRef;
        class ITransitionDynamics;
        class ITraveledDistanceCondition;
        class ITrigger;
        class ITriggeringEntities;
        class IUniformDistribution;
        class IUsedArea;
        class IUserDefinedAction;
        class IUserDefinedAnimation;
        class IUserDefinedComponent;
        class IUserDefinedDistribution;
        class IUserDefinedLight;
        class IUserDefinedValueCondition;
        class IValueConstraint;
        class IValueConstraintGroup;
        class IValueSetDistribution;
        class IVariableAction;
        class IVariableAddValueRule;
        class IVariableCondition;
        class IVariableDeclaration;
        class IVariableModifyAction;
        class IVariableModifyRule;
        class IVariableMultiplyByValueRule;
        class IVariableSetAction;
        class IVehicle;
        class IVehicleCatalogLocation;
        class IVehicleCategoryDistribution;
        class IVehicleCategoryDistributionEntry;
        class IVehicleComponent;
        class IVehicleLight;
        class IVehicleRoleDistribution;
        class IVehicleRoleDistributionEntry;
        class IVertex;
        class IVisibilityAction;
        class IWaypoint;
        class IWeather;
        class IWind;
        class IWorldPosition;



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Absolute speed. Unit: [m/s]. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Optional final phase of constant (final) speed.
             * 
             * @return value of model property steadyState
            */
            virtual std::shared_ptr<ISteadyState> GetSteadyState() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property steadyState is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSteadyState() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Target speed the vehicle should change to. Unit: [m/s].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Compares the entity's acceleration to a reference value. The logical operator used for comparison is defined by the rule
         * attribute (less, greater, equal). If direction is used, only the projection to that direction is used in the comparison.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAccelerationCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAccelerationCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Direction of the acceleration (if not given, the total acceleration is considered).
             * 
             * @return value of model property direction
            */
            virtual DirectionalDimension GetDirection() const
            {
                return DirectionalDimension();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Acceleration value. Unit: [m/s&#178;].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property direction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDirection() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of maneuver groups representing the act.
             * 
             * @return value of model property maneuverGroups
            */
            virtual std::vector<std::shared_ptr<IManeuverGroup>> GetManeuverGroups() const
            {
                return std::vector<std::shared_ptr<IManeuverGroup>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a trigger to that starts the act.
             * 
             * @return value of model property startTrigger
            */
            virtual std::shared_ptr<ITrigger> GetStartTrigger() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a trigger that stops the act.
             * 
             * @return value of model property stopTrigger
            */
            virtual std::shared_ptr<ITrigger> GetStopTrigger() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetManeuverGroupsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IManeuverGroup> GetManeuverGroupsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property stopTrigger is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStopTrigger() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The GlobalAction to be executed when the enclosing Action is started.
             * 
             * @return value of model property globalAction
            */
            virtual std::shared_ptr<IGlobalAction> GetGlobalAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The UserDefinedAction to be executed when the enclosing Action is started.
             * 
             * @return value of model property userDefinedAction
            */
            virtual std::shared_ptr<IUserDefinedAction> GetUserDefinedAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The PrivateAction to be executed when the enclosing Action is started.
             * 
             * @return value of model property privateAction
            */
            virtual std::shared_ptr<IPrivateAction> GetPrivateAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property globalAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetGlobalAction() const = 0;
            /**
            * Retrieves whether property userDefinedAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetUserDefinedAction() const = 0;
            /**
            * Retrieves whether property privateAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPrivateAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on the given entity. A
         * controller cannot be activated in a domain in which it is not defined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IActivateControllerAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IActivateControllerAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * In animation domain: Activate or deactivate an animation. If not specified: No change for controlling the animation
             * domain is applied.
             * 
             * @return value of model property animation
            */
            virtual bool GetAnimation() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a controller assigned to the entity.
Note: Although the OpenSCENARIO v1.2 allows to omit the controllerRef
             * attribute for the sake of a backward compatibility if only a single controller is assigned (regardless implicitly or
             * explicitly) to the concerned Entity, it is considered unmeaningful in case of multiple controllers are assigned. This is
             * expected to be addressed in one of the follow-up major versions, where the attribute shall be defined as mandatory to
             * exclude an ambiguity in specifying the reference controller.
             * 
             * @return value of model property controllerRef
            */
            virtual std::shared_ptr<INamedReference<IController>> GetControllerRef() const
            {
                return std::make_shared<INamedReference<IController>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * In lateral domain: Activate or deactivate controller defined (e.g. automated, autonomous) behavior. If not specified: No
             * change for controlling the lateral domain is applied.
             * 
             * @return value of model property lateral
            */
            virtual bool GetLateral() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * In lighting domain: Activate or deactivate lights. If not specified: No change for controlling the lighting domain is
             * applied.
             * 
             * @return value of model property lighting
            */
            virtual bool GetLighting() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * In longitudinal domain: Activate or deactivate autonomous behavior. If not specified: No change for controlling the
             * longitudinal domain is applied.
             * 
             * @return value of model property longitudinal
            */
            virtual bool GetLongitudinal() const
            {
                return false;
            }


            /**
            * Retrieves whether property animation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAnimation() const = 0;
            /**
            * Retrieves whether property controllerRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetControllerRef() const = 0;
            /**
            * Retrieves whether property lateral is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLateral() const = 0;
            /**
            * Retrieves whether property lighting is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLighting() const = 0;
            /**
            * Retrieves whether property longitudinal is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLongitudinal() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual bool GetSelectTriggeringEntities() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of entities this actor is referencing.
             * 
             * @return value of model property entityRefs
            */
            virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() const
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEntityRefsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEntityRef> GetEntityRefsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property entityRefs is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityRefs() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action describes the transition of a current component state to the target component state or more complex
         * animations like pedestrian motions and gestures as well as animations with a referenced file.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAnimationAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAnimationAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Duration of an animation. Default if omitted: depending on the animation itself and the implementation of the simulator.
             * Unit: [s].
             * 
             * @return value of model property animationDuration
            */
            virtual double GetAnimationDuration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * If set to true, the animation will be looped. Default if omitted: false.
             * 
             * @return value of model property loop
            */
            virtual bool GetLoop() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to the type of animation that will be addressed in this AnimationAction.
             * 
             * @return value of model property animationType
            */
            virtual std::shared_ptr<IAnimationType> GetAnimationType() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * AnimationState after execution of the AnimationAction. Only required for AnimationType componentAnimation.
             * 
             * @return value of model property animationState
            */
            virtual std::shared_ptr<IAnimationState> GetAnimationState() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property animationDuration is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAnimationDuration() const = 0;
            /**
            * Retrieves whether property loop is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLoop() const = 0;
            /**
            * Retrieves whether property animationState is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAnimationState() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Reference to a file which contains an animation / motion definition (e.g. an fbx file containing a motion from motion
         * capturing).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAnimationFile : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAnimationFile() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Time offset from beginning of animation. Unit: [s]. Range: [0..inf[. Default, if omitted is 0 (start from beginning of
             * animation).
             * 
             * @return value of model property timeOffset
            */
            virtual double GetTimeOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Filepath of the animation / motion file.
             * 
             * @return value of model property file
            */
            virtual std::shared_ptr<IFile> GetFile() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property timeOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTimeOffset() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the animation state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAnimationState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAnimationState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The goal state of a component after the AnimationStateAction is executed (rotation: 0% -&gt; lower limiting angle / 100%
             * -&gt; upper limiting angle; translation: 0% -&gt; lower limiting position on movement axis / 100% -&gt; upper limiting
             * position on movement axis). Range: [0..1].
             * 
             * @return value of model property state
            */
            virtual double GetState() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines the type of the animation. A conflicting animation will override a currently active animation.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAnimationType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAnimationType() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Animation of a component along or around one axis. Field animationState in AnimationAction is required.
             * 
             * @return value of model property componentAnimation
            */
            virtual std::shared_ptr<IComponentAnimation> GetComponentAnimation() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a pedestrian's motion and gestures.
             * 
             * @return value of model property pedestrianAnimation
            */
            virtual std::shared_ptr<IPedestrianAnimation> GetPedestrianAnimation() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a file which contains an animation / motion definition.
             * 
             * @return value of model property animationFile
            */
            virtual std::shared_ptr<IAnimationFile> GetAnimationFile() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The animation type is not covered by the above options and is therefore user defined.
             * 
             * @return value of model property userDefinedAnimation
            */
            virtual std::shared_ptr<IUserDefinedAnimation> GetUserDefinedAnimation() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Actions defining the behaviour of an entity without moving it in the world, e.g. turning on a light or opening a door.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAppearanceAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAppearanceAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a target light state for a certain light.
             * 
             * @return value of model property lightStateAction
            */
            virtual std::shared_ptr<ILightStateAction> GetLightStateAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines an animation based on the animation type.
             * 
             * @return value of model property animationAction
            */
            virtual std::shared_ptr<IAnimationAction> GetAnimationAction() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: The assigned controller gets activated the animation domain. False: the assigned animation controller gets
             * deactivated. If not specified: No change for controlling the animation domain is applied.
             * 
             * @return value of model property activateAnimation
            */
            virtual bool GetActivateAnimation() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: The assigned controller gets activated for the lateral dimension. False: the assigned controller gets deactivated
             * for the lateral dimension. If not specified: No change for controlling the lateral dimension is applied.
             * 
             * @return value of model property activateLateral
            */
            virtual bool GetActivateLateral() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: The assigned controller gets activated the lighting domain. False: the assigned lighting controller gets
             * deactivated. If not specified: No change for controlling the lighting domain is applied.
             * 
             * @return value of model property activateLighting
            */
            virtual bool GetActivateLighting() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: The assigned controller gets activated for the longitudinal dimension. False: the assigned controller gets
             * deactivated for the longitudinal dimension. If not specified: No change for controlling the longitudinal  dimension is
             * applied.
             * 
             * @return value of model property activateLongitudinal
            */
            virtual bool GetActivateLongitudinal() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a controller to a given entity.
             * 
             * @return value of model property controller
            */
            virtual std::shared_ptr<IController> GetController() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Uses a CatalogReference to assign a controller to a given entity. CatalogReference must point to a Controller type.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property activateAnimation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetActivateAnimation() const = 0;
            /**
            * Retrieves whether property activateLateral is set
            * @return true when the optional property is set
            */
            virtual bool IsSetActivateLateral() const = 0;
            /**
            * Retrieves whether property activateLighting is set
            * @return true when the optional property is set
            */
            virtual bool IsSetActivateLighting() const = 0;
            /**
            * Retrieves whether property activateLongitudinal is set
            * @return true when the optional property is set
            */
            virtual bool IsSetActivateLongitudinal() const = 0;
            /**
            * Retrieves whether property controller is set
            * @return true when the optional property is set
            */
            virtual bool IsSetController() const = 0;
            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IRoute> GetRoute() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A reference to the route definition in a catalog. The reference must point to a route.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property route is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoute() const = 0;
            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Automatic  gear description.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAutomaticGear : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IAutomaticGear() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Gear type.
             * 
             * @return value of model property gear
            */
            virtual AutomaticGearType GetGear() const
            {
                return AutomaticGearType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Maximum steering angle which can be performed by the wheels on this axle. Unit: [rad]. Range: [0..PI], symmetrical.
             * 
             * @return value of model property maxSteering
            */
            virtual double GetMaxSteering() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Longitudinal position of the axle with respect to the vehicles reference point. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property positionX
            */
            virtual double GetPositionX() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Z-position of the axle with respect to the vehicles reference point. Usually this is half of wheel diameter. Unit: [m].
             * Range: [0..inf[.
             * 
             * @return value of model property positionZ
            */
            virtual double GetPositionZ() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Distance of the wheels center lines at zero steering. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property trackWidth
            */
            virtual double GetTrackWidth() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Diameter of the wheels on this axle. Unit: [m]. Range: ]0..inf[.
             * 
             * @return value of model property wheelDiameter
            */
            virtual double GetWheelDiameter() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IAxle> GetFrontAxle() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Rear axle.
             * 
             * @return value of model property rearAxle
            */
            virtual std::shared_ptr<IAxle> GetRearAxle() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of optional additional axles.
             * 
             * @return value of model property additionalAxles
            */
            virtual std::vector<std::shared_ptr<IAxle>> GetAdditionalAxles() const
            {
                return std::vector<std::shared_ptr<IAxle>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetAdditionalAxlesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IAxle> GetAdditionalAxlesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property additionalAxles is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAdditionalAxles() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<ICenter> GetCenter() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Width, length and height of the bounding box.
             * 
             * @return value of model property dimensions
            */
            virtual std::shared_ptr<IDimensions> GetDimensions() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines a brake input
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IBrake : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IBrake() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Rate of the change. Unit: [%/s] if used by as BrakePercent, [N/s] if used as BrakeForce.
             * 
             * @return value of model property maxRate
            */
            virtual double GetMaxRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Wanted value of the brake. Unit: [%] if used by as BrakePercent, [N] if used as BrakeForce.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxRate() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * An action serves to create or modify all dynamic elements of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IBrakeInput : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IBrakeInput() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Used if the brake input should be interpret as Percent
             * 
             * @return value of model property brakePercent
            */
            virtual std::shared_ptr<IBrake> GetBrakePercent() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Used if the brake input should be interpret as Force
             * 
             * @return value of model property brakeForce
            */
            virtual std::shared_ptr<IBrake> GetBrakeForce() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<ITriggeringEntities> GetTriggeringEntities() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The condition which is related to the triggering entities.
             * 
             * @return value of model property entityCondition
            */
            virtual std::shared_ptr<IEntityCondition> GetEntityCondition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual ObjectType GetType() const
            {
                return ObjectType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual ObjectType GetObjectType() const
            {
                return ObjectType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IParameterCondition> GetParameterCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The current time of day is compared to a reference value.
             * 
             * @return value of model property timeOfDayCondition
            */
            virtual std::shared_ptr<ITimeOfDayCondition> GetTimeOfDayCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The current simulation time is compared to a reference value.
             * 
             * @return value of model property simulationTimeCondition
            */
            virtual std::shared_ptr<ISimulationTimeCondition> GetSimulationTimeCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced StoryboardElement terminates according to the given rule.
             * 
             * @return value of model property storyboardElementStateCondition
            */
            virtual std::shared_ptr<IStoryboardElementStateCondition> GetStoryboardElementStateCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The current value of an externally defined named value is compared to a reference value (less, greater, equal).
             * 
             * @return value of model property userDefinedValueCondition
            */
            virtual std::shared_ptr<IUserDefinedValueCondition> GetUserDefinedValueCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced signal reaches the indicated state.
             * 
             * @return value of model property trafficSignalCondition
            */
            virtual std::shared_ptr<ITrafficSignalCondition> GetTrafficSignalCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced signal controller reaches the indicated state.
             * 
             * @return value of model property trafficSignalControllerCondition
            */
            virtual std::shared_ptr<ITrafficSignalControllerCondition> GetTrafficSignalControllerCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A current variable value is compared to a reference value.
             * 
             * @return value of model property variableCondition
            */
            virtual std::shared_ptr<IVariableCondition> GetVariableCondition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property parameterCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterCondition() const = 0;
            /**
            * Retrieves whether property timeOfDayCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTimeOfDayCondition() const = 0;
            /**
            * Retrieves whether property simulationTimeCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSimulationTimeCondition() const = 0;
            /**
            * Retrieves whether property storyboardElementStateCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStoryboardElementStateCondition() const = 0;
            /**
            * Retrieves whether property userDefinedValueCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetUserDefinedValueCondition() const = 0;
            /**
            * Retrieves whether property trafficSignalCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSignalCondition() const = 0;
            /**
            * Retrieves whether property trafficSignalControllerCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSignalControllerCondition() const = 0;
            /**
            * Retrieves whether property variableCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVariableCondition() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of vehicle types that can be reused in a scenario.
             * 
             * @return value of model property vehicles
            */
            virtual std::vector<std::shared_ptr<IVehicle>> GetVehicles() const
            {
                return std::vector<std::shared_ptr<IVehicle>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of controller types that can be reused in a scenario.
             * 
             * @return value of model property controllers
            */
            virtual std::vector<std::shared_ptr<IController>> GetControllers() const
            {
                return std::vector<std::shared_ptr<IController>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of pedestrian types that can be reused in a scenario.
             * 
             * @return value of model property pedestrians
            */
            virtual std::vector<std::shared_ptr<IPedestrian>> GetPedestrians() const
            {
                return std::vector<std::shared_ptr<IPedestrian>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of miscellaneous object type that that can be reused in a scenario.
             * 
             * @return value of model property miscObjects
            */
            virtual std::vector<std::shared_ptr<IMiscObject>> GetMiscObjects() const
            {
                return std::vector<std::shared_ptr<IMiscObject>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of environment types that can be reused in a scenario.
             * 
             * @return value of model property environments
            */
            virtual std::vector<std::shared_ptr<IEnvironment>> GetEnvironments() const
            {
                return std::vector<std::shared_ptr<IEnvironment>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of maneuver types that can be reused in a scenario.
             * 
             * @return value of model property maneuvers
            */
            virtual std::vector<std::shared_ptr<IManeuver>> GetManeuvers() const
            {
                return std::vector<std::shared_ptr<IManeuver>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of trajectory types that can be reused in a scenario.
             * 
             * @return value of model property trajectories
            */
            virtual std::vector<std::shared_ptr<ITrajectory>> GetTrajectories() const
            {
                return std::vector<std::shared_ptr<ITrajectory>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of route types that can be reused in a scenario.
             * 
             * @return value of model property routes
            */
            virtual std::vector<std::shared_ptr<IRoute>> GetRoutes() const
            {
                return std::vector<std::shared_ptr<IRoute>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetVehiclesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IVehicle> GetVehiclesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetControllersSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IController> GetControllersAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPedestriansSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPedestrian> GetPedestriansAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetMiscObjectsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IMiscObject> GetMiscObjectsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEnvironmentsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEnvironment> GetEnvironmentsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetManeuversSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IManeuver> GetManeuversAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetTrajectoriesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ITrajectory> GetTrajectoriesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetRoutesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IRoute> GetRoutesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property name is set
            * @return true when the optional property is set
            */
            virtual bool IsSetName() const = 0;
            /**
            * Retrieves whether property vehicles is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVehicles() const = 0;
            /**
            * Retrieves whether property controllers is set
            * @return true when the optional property is set
            */
            virtual bool IsSetControllers() const = 0;
            /**
            * Retrieves whether property pedestrians is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPedestrians() const = 0;
            /**
            * Retrieves whether property miscObjects is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMiscObjects() const = 0;
            /**
            * Retrieves whether property environments is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEnvironments() const = 0;
            /**
            * Retrieves whether property maneuvers is set
            * @return true when the optional property is set
            */
            virtual bool IsSetManeuvers() const = 0;
            /**
            * Retrieves whether property trajectories is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrajectories() const = 0;
            /**
            * Retrieves whether property routes is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutes() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<ICatalog> GetCatalog() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IVehicleCatalogLocation> GetVehicleCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on controller types.
             * 
             * @return value of model property controllerCatalog
            */
            virtual std::shared_ptr<IControllerCatalogLocation> GetControllerCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on pedestrian types.
             * 
             * @return value of model property pedestrianCatalog
            */
            virtual std::shared_ptr<IPedestrianCatalogLocation> GetPedestrianCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on miscellaneous object types.
             * 
             * @return value of model property miscObjectCatalog
            */
            virtual std::shared_ptr<IMiscObjectCatalogLocation> GetMiscObjectCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on environment types.
             * 
             * @return value of model property environmentCatalog
            */
            virtual std::shared_ptr<IEnvironmentCatalogLocation> GetEnvironmentCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on maneuver types.
             * 
             * @return value of model property maneuverCatalog
            */
            virtual std::shared_ptr<IManeuverCatalogLocation> GetManeuverCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on trajectory types.
             * 
             * @return value of model property trajectoryCatalog
            */
            virtual std::shared_ptr<ITrajectoryCatalogLocation> GetTrajectoryCatalog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on route types.
             * 
             * @return value of model property routeCatalog
            */
            virtual std::shared_ptr<IRouteCatalogLocation> GetRouteCatalog() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property vehicleCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVehicleCatalog() const = 0;
            /**
            * Retrieves whether property controllerCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetControllerCatalog() const = 0;
            /**
            * Retrieves whether property pedestrianCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPedestrianCatalog() const = 0;
            /**
            * Retrieves whether property miscObjectCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMiscObjectCatalog() const = 0;
            /**
            * Retrieves whether property environmentCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEnvironmentCatalog() const = 0;
            /**
            * Retrieves whether property maneuverCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetManeuverCatalog() const = 0;
            /**
            * Retrieves whether property trajectoryCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrajectoryCatalog() const = 0;
            /**
            * Retrieves whether property routeCatalog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRouteCatalog() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetCatalogName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of catalog entry.
             * 
             * @return value of model property entryName
            */
            virtual std::string GetEntryName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * List of parameter assignments for instantiation.
             * 
             * @return value of model property parameterAssignments
            */
            virtual std::vector<std::shared_ptr<IParameterAssignment>> GetParameterAssignments() const
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
            virtual std::shared_ptr<ICatalogElement> GetRef() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterAssignmentsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterAssignment> GetParameterAssignmentsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterAssignments is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterAssignments() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual double GetX() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Center offset in y direction.
             * 
             * @return value of model property y
            */
            virtual double GetY() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Center offset in z direction.
             * 
             * @return value of model property z
            */
            virtual double GetZ() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A shape of the trajectory of an entity. A clothoid is a curve whose curvature changes linearly with its curve length. If
         * curvaturePrime is 0, then the resulting trajectory is a circular arc. If curvaturePrime is 0 and additionally curvature
         * is 0, then the resulting trajectory is a line.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IClothoid : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IClothoid() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Start curvature of clothoid. Unit: [1/m]. Range: ]-inf..inf[.
             * 
             * @return value of model property curvature
            */
            virtual double GetCurvature() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Rate of change of the curvature of the clothoid. Unit: [1/s]. Range: [0..inf[.
             * 
             * @return value of model property curvatureDot
            */
            virtual double GetCurvatureDot() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Rate of change of the curvature of the clothoid. Unit: [1/m&#178;]. Range: ]-inf..inf[.
             * 
             * @return value of model property curvaturePrime
            */
            virtual double GetCurvaturePrime() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Length of clothoid. Unit: [m]. Range: ]0..inf[.
             * 
             * @return value of model property length
            */
            virtual double GetLength() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Optional time specification at the start of the clothoid. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property startTime
            */
            virtual double GetStartTime() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Optional time specification at the end of the clothoid. Unit: [s]. Range: ]0..inf[.
             * 
             * @return value of model property stopTime
            */
            virtual double GetStopTime() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Start position of a clothoid. If in the start position for an orientation dimension no value is provided, then a default
             * of 0 is assumed.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property curvatureDot is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCurvatureDot() const = 0;
            /**
            * Retrieves whether property curvaturePrime is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCurvaturePrime() const = 0;
            /**
            * Retrieves whether property startTime is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStartTime() const = 0;
            /**
            * Retrieves whether property stopTime is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStopTime() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IEntityRef> GetEntityRef() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Entities of this type can trigger the condition when collide.
             * 
             * @return value of model property byType
            */
            virtual std::shared_ptr<IByObjectType> GetByType() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property entityRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityRef() const = 0;
            /**
            * Retrieves whether property byType is set
            * @return true when the optional property is set
            */
            virtual bool IsSetByType() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Color description with a semantic color value and an optional detailed value for visualization.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IColor : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IColor() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Semantic value of the color.
             * 
             * @return value of model property colorType
            */
            virtual ColorType GetColorType() const
            {
                return ColorType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Color description in RGB schema.
             * 
             * @return value of model property colorRgb
            */
            virtual std::shared_ptr<IColorRgb> GetColorRgb() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Color description in CMYK schema.
             * 
             * @return value of model property colorCmyk
            */
            virtual std::shared_ptr<IColorCmyk> GetColorCmyk() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Color description in CMYK schema.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IColorCmyk : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IColorCmyk() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Cyan component of the color. Range: [0..1].
             * 
             * @return value of model property cyan
            */
            virtual double GetCyan() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Black component of the color. Range: [0..1].
             * 
             * @return value of model property key
            */
            virtual double GetKey() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Magenta component of the color. Range: [0..1].
             * 
             * @return value of model property magenta
            */
            virtual double GetMagenta() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Yellow component of the color. Range: [0..1].
             * 
             * @return value of model property yellow
            */
            virtual double GetYellow() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Color description in RGB schema.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IColorRgb : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IColorRgb() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Blue component of the color. Range: [0..1].
             * 
             * @return value of model property blue
            */
            virtual double GetBlue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Green component of the color. Range: [0..1].
             * 
             * @return value of model property green
            */
            virtual double GetGreen() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Red component of the color. Range: [0..1].
             * 
             * @return value of model property red
            */
            virtual double GetRed() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines an animation of a component along or around one axis. Field animationState in AnimationAction is required.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IComponentAnimation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IComponentAnimation() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Available components attached to a vehicle.
             * 
             * @return value of model property vehicleComponent
            */
            virtual std::shared_ptr<IVehicleComponent> GetVehicleComponent() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The component type is not covered by the above options and is therefore user defined.
             * 
             * @return value of model property userDefinedComponent
            */
            virtual std::shared_ptr<IUserDefinedComponent> GetUserDefinedComponent() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Specifies the edge when the condition is evaluated to true (rising, falling, risingOrFalling, none).
             * 
             * @return value of model property conditionEdge
            */
            virtual ConditionEdge GetConditionEdge() const
            {
                return ConditionEdge();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Time elapsed after the edge condition is verified, until the condition returns true to the scenario. Unit: [s]. Range:
             * [0..inf[.
             * 
             * @return value of model property delay
            */
            virtual double GetDelay() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the condition.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * A condition that refers to an entity.
             * 
             * @return value of model property byEntityCondition
            */
            virtual std::shared_ptr<IByEntityCondition> GetByEntityCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A condition that refers to a runtime value.
             * 
             * @return value of model property byValueCondition
            */
            virtual std::shared_ptr<IByValueCondition> GetByValueCondition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property byEntityCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetByEntityCondition() const = 0;
            /**
            * Retrieves whether property byValueCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetByValueCondition() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<ICondition>> GetConditions() const
            {
                return std::vector<std::shared_ptr<ICondition>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetConditionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ICondition> GetConditionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Optional specification of the time dimension of the control point. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property time
            */
            virtual double GetTime() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Optional weight specification of the control point. If unspecified, all control points will be equal weighted. Range:
             * ]-inf..inf[.
             * 
             * @return value of model property weight
            */
            virtual double GetWeight() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position of the control point.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property time is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTime() const = 0;
            /**
            * Retrieves whether property weight is set
            * @return true when the optional property is set
            */
            virtual bool IsSetWeight() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Defines what domain the controller acts on (Default: movement)
             * 
             * @return value of model property controllerType
            */
            virtual ControllerType GetControllerType() const
            {
                return ControllerType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the controller type.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Describing properties for the controller.
             * 
             * @return value of model property properties
            */
            virtual std::shared_ptr<IProperties> GetProperties() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property controllerType is set
            * @return true when the optional property is set
            */
            virtual bool IsSetControllerType() const = 0;
            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IAssignControllerAction> GetAssignControllerAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Values for throttle, brake, clutch, parking brake, steering wheel or gear.
             * 
             * @return value of model property overrideControllerValueAction
            */
            virtual std::shared_ptr<IOverrideControllerValueAction> GetOverrideControllerValueAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Activate/ deactivate a controller on the reference entity/entities. Replaces the deprecated element in PrivateAction in
             * 1.1.
             * 
             * @return value of model property activateControllerAction
            */
            virtual std::shared_ptr<IActivateControllerAction> GetActivateControllerAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property assignControllerAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAssignControllerAction() const = 0;
            /**
            * Retrieves whether property overrideControllerValueAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOverrideControllerValueAction() const = 0;
            /**
            * Retrieves whether property activateControllerAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetActivateControllerAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IControllerDistributionEntry>> GetControllerDistributionEntries() const
            {
                return std::vector<std::shared_ptr<IControllerDistributionEntry>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetControllerDistributionEntriesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IControllerDistributionEntry> GetControllerDistributionEntriesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual double GetWeight() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The specified controller type.
             * 
             * @return value of model property controller
            */
            virtual std::shared_ptr<IController> GetController() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A controller type import from a catalog.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property controller is set
            * @return true when the optional property is set
            */
            virtual bool IsSetController() const = 0;
            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Used to activate a custom action native to the specific user environment. By using this action, the executability of the
         * scenario will be dependent on a specific user environment.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICustomCommandAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICustomCommandAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The command that is defined as a contract between the simulation environment provider and the author of a scenario.
             * 
             * @return value of model property content
            */
            virtual std::string GetContent() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Type that is defined as a contract between the simulation environment provider and the author of a scenario.
             * 
             * @return value of model property type
            */
            virtual std::string GetType() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The semantic is subject of a contract between the provider of a simulation environment and the author of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICustomContent : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ICustomContent() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The semantic is subject of a contract between the provider of a simulation environment and the author of a scenario.
             * 
             * @return value of model property content
            */
            virtual std::string GetContent() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Top level container containing all deterministic distribution elements.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeterministic : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeterministic() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines deterministic parameter distributions.
             * 
             * @return value of model property deterministicParameterDistributions
            */
            virtual std::vector<std::shared_ptr<IDeterministicParameterDistribution>> GetDeterministicParameterDistributions() const
            {
                return std::vector<std::shared_ptr<IDeterministicParameterDistribution>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetDeterministicParameterDistributionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IDeterministicParameterDistribution> GetDeterministicParameterDistributionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property deterministicParameterDistributions is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDeterministicParameterDistributions() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Container for a deterministic distribution which is applied to multiple parameters.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeterministicMultiParameterDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeterministicMultiParameterDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the type of the deterministic multi-parameter distribution.
             * 
             * @return value of model property deterministicMultiParameterDistributionType
            */
            virtual std::shared_ptr<IDeterministicMultiParameterDistributionType> GetDeterministicMultiParameterDistributionType() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A deterministic distribution type which can be applied to multiple parameters.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeterministicMultiParameterDistributionType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeterministicMultiParameterDistributionType() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Deterministic multi-parameter distribution, where one or multiple sets of parameter values can be defined.
             * 
             * @return value of model property valueSetDistribution
            */
            virtual std::shared_ptr<IValueSetDistribution> GetValueSetDistribution() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Either a DeterministicMultiParameterDistribution or a DeterministicSingleParameterDistribution
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeterministicParameterDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeterministicParameterDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * A deterministic multi-parameter distribution.
             * 
             * @return value of model property deterministicMultiParameterDistribution
            */
            virtual std::shared_ptr<IDeterministicMultiParameterDistribution> GetDeterministicMultiParameterDistribution() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A deterministic single-parameter distribution.
             * 
             * @return value of model property deterministicSingleParameterDistribution
            */
            virtual std::shared_ptr<IDeterministicSingleParameterDistribution> GetDeterministicSingleParameterDistribution() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Container for a deterministic distribution which is applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeterministicSingleParameterDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeterministicSingleParameterDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the parameter name these distribution values should be applied to.
             * 
             * @return value of model property parameterName
            */
            virtual std::string GetParameterName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the type of the deterministic single-parameter distribution.
             * 
             * @return value of model property deterministicSingleParameterDistributionType
            */
            virtual std::shared_ptr<IDeterministicSingleParameterDistributionType> GetDeterministicSingleParameterDistributionType() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A deterministic distribution type which can be applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeterministicSingleParameterDistributionType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDeterministicSingleParameterDistributionType() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a set of values which can be applied to a parameter.
             * 
             * @return value of model property distributionSet
            */
            virtual std::shared_ptr<IDistributionSet> GetDistributionSet() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a range of values which can be applied to a parameter.
             * 
             * @return value of model property distributionRange
            */
            virtual std::shared_ptr<IDistributionRange> GetDistributionRange() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a user defined deterministic distribution.
             * 
             * @return value of model property userDefinedDistribution
            */
            virtual std::shared_ptr<IUserDefinedDistribution> GetUserDefinedDistribution() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Height of the entity's bounding box. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property height
            */
            virtual double GetHeight() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Length of the entity's bounding box. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property length
            */
            virtual double GetLength() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Width of the entity's bounding box. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property width
            */
            virtual double GetWidth() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines a distribution, which direction of travel of the swarm traffic relative to the central object should be used.
         * Represents the weight of a given direction of travel. The relative probability for the occurence of this direction of
         * travel is defined by the weight devided by the sum of all weights of this distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDirectionOfTravelDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDirectionOfTravelDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The weight of vehicles moving in the opposite direction as the central object. Range: [0..inf[.
             * 
             * @return value of model property opposite
            */
            virtual double GetOpposite() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The weight of vehicles moving in the same direction as the central object. Range: [0..inf[.
             * 
             * @return value of model property same
            */
            virtual double GetSame() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetPath() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The current distance between an entity and a position is compared to a given distance (less, greater, equal). Several
         * additional parameters like free space etc. can be defined. The property "alongRoute" is deprecated. If
         * "coordinateSystem" or "relativeDistanceType" are set, "alongRoute" is ignored.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDistanceCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDistanceCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
             * 
             * @return value of model property alongRoute
            */
            virtual bool GetAlongRoute() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system to be used for calculations. If not provided the value is interpreted as "entity".
             * If set, "alongRoute" is ignored.
             * 
             * @return value of model property coordinateSystem
            */
            virtual CoordinateSystem GetCoordinateSystem() const
            {
                return CoordinateSystem();
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: distance is measured between closest bounding box points. False: reference point distance is used.
             * 
             * @return value of model property freespace
            */
            virtual bool GetFreespace() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system dimension(s) to be used for calculating distances. If set, "alongRoute" is ignored.
             * If not provided, value is interpreted as "euclideanDistance".
             * 
             * @return value of model property relativeDistanceType
            */
            virtual RelativeDistanceType GetRelativeDistanceType() const
            {
                return RelativeDistanceType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Algorithm for path selection/calculation between two positions across roads. Only relevant, if CoordinateSystem is
             * "road"/"lane". Default value if omitted: "undefined".
             * 
             * @return value of model property routingAlgorithm
            */
            virtual RoutingAlgorithm GetRoutingAlgorithm() const
            {
                return RoutingAlgorithm();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The distance value. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The given position the distance is related to.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property alongRoute is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAlongRoute() const = 0;
            /**
            * Retrieves whether property coordinateSystem is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCoordinateSystem() const = 0;
            /**
            * Retrieves whether property relativeDistanceType is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeDistanceType() const = 0;
            /**
            * Retrieves whether property routingAlgorithm is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutingAlgorithm() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Indicates whether the content defines a deterministic or stochastic parameter distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDistributionDefinition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDistributionDefinition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a deterministic distribution for multiple parameters.
             * 
             * @return value of model property deterministic
            */
            virtual std::shared_ptr<IDeterministic> GetDeterministic() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a stochastic distribution for multiple parameters.
             * 
             * @return value of model property stochastic
            */
            virtual std::shared_ptr<IStochastic> GetStochastic() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A range of values used for a deterministic distribution. The range starts with lower limit, Each additional value is
         * defined by adding the step value to the previous value until the value is greater than upper limit. Upper limit can be
         * part of the range.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDistributionRange : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDistributionRange() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The steps between the lower limit and upper limit.
             * 
             * @return value of model property stepWidth
            */
            virtual double GetStepWidth() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the upper limit and lower limit in range.
             * 
             * @return value of model property range
            */
            virtual std::shared_ptr<IRange> GetRange() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A set of possible values which can occur in a deterministic distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDistributionSet : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDistributionSet() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Possible values in the deterministic distribution.
             * 
             * @return value of model property elements
            */
            virtual std::vector<std::shared_ptr<IDistributionSetElement>> GetElements() const
            {
                return std::vector<std::shared_ptr<IDistributionSetElement>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetElementsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IDistributionSetElement> GetElementsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Indicates an element for a deterministic distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDistributionSetElement : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDistributionSetElement() = default;

            /**
             * From OpenSCENARIO class model specification:
             * A possible value in a deterministic distribution.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Image reference to represent the sky and optionally the lighting if the image also contains lighting information.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDomeImage : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IDomeImage() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Offset to north / y-axis of world coordinate system (counter-clockwise). Unit: [rad]. Range: [0..2*PI]. 0 means the left
             * and right borders of the image are aligned with the y-axis of the world coordinate system. Default if omitted: 0.
             * 
             * @return value of model property azimuthOffset
            */
            virtual double GetAzimuthOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Filepath to the dome file.
             * 
             * @return value of model property domeFile
            */
            virtual std::shared_ptr<IFile> GetDomeFile() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property azimuthOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAzimuthOffset() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Maximum acceleration the distance controller is allowed to use for keeping the distance. Missing value is interpreted as
             * 'inf'. Unit: [m/s&#178;]. Range: [0..inf[.
             * 
             * @return value of model property maxAcceleration
            */
            virtual double GetMaxAcceleration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum acceleration rate the distance controller is allowed to use for keeping the distance. Missing value is
             * interpreted as 'inf'. Unit: [m/s&#179;]. Range: [0..inf[.
             * 
             * @return value of model property maxAccelerationRate
            */
            virtual double GetMaxAccelerationRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum deceleration the distance controller is allowed to use for keeping the distance. Missing value is interpreted as
             * 'inf'. Unit: [m/s&#178;]. Range: [0..inf[.
             * 
             * @return value of model property maxDeceleration
            */
            virtual double GetMaxDeceleration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum deceleration rate the distance controller is allowed to use for keeping the distance. Missing value is
             * interpreted as 'inf'. Unit: [m/s&#179;]. Range: [0..inf[.
             * 
             * @return value of model property maxDecelerationRate
            */
            virtual double GetMaxDecelerationRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum speed the distance controller is allowed to use for keeping the distance. Missing value is interpreted as 'inf'.
             * Unit: [m/s]. Range: [0..inf[.
             * 
             * @return value of model property maxSpeed
            */
            virtual double GetMaxSpeed() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxAcceleration is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxAcceleration() const = 0;
            /**
            * Retrieves whether property maxAccelerationRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxAccelerationRate() const = 0;
            /**
            * Retrieves whether property maxDeceleration is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxDeceleration() const = 0;
            /**
            * Retrieves whether property maxDecelerationRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxDecelerationRate() const = 0;
            /**
            * Retrieves whether property maxSpeed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxSpeed() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Amount of time at end of road. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual double GetDuration() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IScenarioObject>> GetScenarioObjects() const
            {
                return std::vector<std::shared_ptr<IScenarioObject>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of entity selection definitions.
             * 
             * @return value of model property entitySelections
            */
            virtual std::vector<std::shared_ptr<IEntitySelection>> GetEntitySelections() const
            {
                return std::vector<std::shared_ptr<IEntitySelection>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetScenarioObjectsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IScenarioObject> GetScenarioObjectsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEntitySelectionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEntitySelection> GetEntitySelectionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property scenarioObjects is set
            * @return true when the optional property is set
            */
            virtual bool IsSetScenarioObjects() const = 0;
            /**
            * Retrieves whether property entitySelections is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntitySelections() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines an action that adds or deletes a referred entity.
Entities to be added or deleted must be defined in the
         * Entities section.
An entity can only exist in one copy. Adding an already active entity will have no effect, neither
         * will deleting an already inactive entity.
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
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Action that adds the reference entity to the scenario.
             * 
             * @return value of model property addEntityAction
            */
            virtual std::shared_ptr<IAddEntityAction> GetAddEntityAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Action that deletes the reference entity from the scenario.
             * 
             * @return value of model property deleteEntityAction
            */
            virtual std::shared_ptr<IDeleteEntityAction> GetDeleteEntityAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property addEntityAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAddEntityAction() const = 0;
            /**
            * Retrieves whether property deleteEntityAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDeleteEntityAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IEndOfRoadCondition> GetEndOfRoadCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking whether the reference entity was involved in a collision.
             * 
             * @return value of model property collisionCondition
            */
            virtual std::shared_ptr<ICollisionCondition> GetCollisionCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has left the road.
             * 
             * @return value of model property offroadCondition
            */
            virtual std::shared_ptr<IOffroadCondition> GetOffroadCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the time headway between two entities.
             * 
             * @return value of model property timeHeadwayCondition
            */
            virtual std::shared_ptr<ITimeHeadwayCondition> GetTimeHeadwayCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the time to collision between two entities.
             * 
             * @return value of model property timeToCollisionCondition
            */
            virtual std::shared_ptr<ITimeToCollisionCondition> GetTimeToCollisionCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the current acceleration of an entity.
             * 
             * @return value of model property accelerationCondition
            */
            virtual std::shared_ptr<IAccelerationCondition> GetAccelerationCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has not moved.
             * 
             * @return value of model property standStillCondition
            */
            virtual std::shared_ptr<IStandStillCondition> GetStandStillCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the current speed of the referenced entities.
             * 
             * @return value of model property speedCondition
            */
            virtual std::shared_ptr<ISpeedCondition> GetSpeedCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative speed between two entity.
             * 
             * @return value of model property relativeSpeedCondition
            */
            virtual std::shared_ptr<IRelativeSpeedCondition> GetRelativeSpeedCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the total traveled distance of the reference entity since the start of the scenario.
             * 
             * @return value of model property traveledDistanceCondition
            */
            virtual std::shared_ptr<ITraveledDistanceCondition> GetTraveledDistanceCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking whether the reference entity has reached a given position within a given uncertainty.
             * 
             * @return value of model property reachPositionCondition
            */
            virtual std::shared_ptr<IReachPositionCondition> GetReachPositionCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the distance between two entities or an entity and a position.
             * 
             * @return value of model property distanceCondition
            */
            virtual std::shared_ptr<IDistanceCondition> GetDistanceCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative distance between two entities.
             * 
             * @return value of model property relativeDistanceCondition
            */
            virtual std::shared_ptr<IRelativeDistanceCondition> GetRelativeDistanceCondition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative clearance of an entity.
             * 
             * @return value of model property relativeClearanceCondition
            */
            virtual std::shared_ptr<IRelativeClearanceCondition> GetRelativeClearanceCondition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property endOfRoadCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEndOfRoadCondition() const = 0;
            /**
            * Retrieves whether property collisionCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCollisionCondition() const = 0;
            /**
            * Retrieves whether property offroadCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOffroadCondition() const = 0;
            /**
            * Retrieves whether property timeHeadwayCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTimeHeadwayCondition() const = 0;
            /**
            * Retrieves whether property timeToCollisionCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTimeToCollisionCondition() const = 0;
            /**
            * Retrieves whether property accelerationCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAccelerationCondition() const = 0;
            /**
            * Retrieves whether property standStillCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStandStillCondition() const = 0;
            /**
            * Retrieves whether property speedCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSpeedCondition() const = 0;
            /**
            * Retrieves whether property relativeSpeedCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeSpeedCondition() const = 0;
            /**
            * Retrieves whether property traveledDistanceCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTraveledDistanceCondition() const = 0;
            /**
            * Retrieves whether property reachPositionCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetReachPositionCondition() const = 0;
            /**
            * Retrieves whether property distanceCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDistanceCondition() const = 0;
            /**
            * Retrieves whether property relativeDistanceCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeDistanceCondition() const = 0;
            /**
            * Retrieves whether property relativeClearanceCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeClearanceCondition() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Vehicle definition.
             * 
             * @return value of model property vehicle
            */
            virtual std::shared_ptr<IVehicle> GetVehicle() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Pedestrian definition.
             * 
             * @return value of model property pedestrian
            */
            virtual std::shared_ptr<IPedestrian> GetPedestrian() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a MiscObject.
             * 
             * @return value of model property miscObject
            */
            virtual std::shared_ptr<IMiscObject> GetMiscObject() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * An reference to an external object that is defined outside of a scenario or catalog (e.g. in the road network)
             * 
             * @return value of model property externalObjectReference
            */
            virtual std::shared_ptr<IExternalObjectReference> GetExternalObjectReference() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;
            /**
            * Retrieves whether property vehicle is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVehicle() const = 0;
            /**
            * Retrieves whether property pedestrian is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPedestrian() const = 0;
            /**
            * Retrieves whether property miscObject is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMiscObject() const = 0;
            /**
            * Retrieves whether property externalObjectReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetExternalObjectReference() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Selected entities as members of the entity selection.
             * 
             * @return value of model property members
            */
            virtual std::shared_ptr<ISelectedEntities> GetMembers() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines the environment conditions of a scenario, e.g. time of day, weather and road condition. If one of the conditions
         * is missing it means that it doesn't change.
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Time of the day during the simulation.
             * 
             * @return value of model property timeOfDay
            */
            virtual std::shared_ptr<ITimeOfDay> GetTimeOfDay() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Weather conditions during the simulation.
             * 
             * @return value of model property weather
            */
            virtual std::shared_ptr<IWeather> GetWeather() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Road conditions during the simulation.
             * 
             * @return value of model property roadCondition
            */
            virtual std::shared_ptr<IRoadCondition> GetRoadCondition() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;
            /**
            * Retrieves whether property timeOfDay is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTimeOfDay() const = 0;
            /**
            * Retrieves whether property weather is set
            * @return true when the optional property is set
            */
            virtual bool IsSetWeather() const = 0;
            /**
            * Retrieves whether property roadCondition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoadCondition() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IEnvironment> GetEnvironment() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a catalog entry of type Environment.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property environment is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEnvironment() const = 0;
            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Maximum number of executions. Default value is 1. Range: [1..inf[.
             * 
             * @return value of model property maximumExecutionCount
            */
            virtual uint32_t GetMaximumExecutionCount() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the event.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Priority of each event.
             * 
             * @return value of model property priority
            */
            virtual Priority GetPriority() const
            {
                return Priority();
            }

            /**
             * From OpenSCENARIO class model specification:
             * List of actions in an event.
             * 
             * @return value of model property actions
            */
            virtual std::vector<std::shared_ptr<IAction>> GetActions() const
            {
                return std::vector<std::shared_ptr<IAction>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Actions are executed as soon as the start trigger fires. This point in time represents the start of the event. If this
             * optional field is missing, the event starts as soon as the start trigger of the enclosing act starts.
             * 
             * @return value of model property startTrigger
            */
            virtual std::shared_ptr<ITrigger> GetStartTrigger() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetActionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IAction> GetActionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property maximumExecutionCount is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaximumExecutionCount() const = 0;
            /**
            * Retrieves whether property startTrigger is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStartTrigger() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Reference to an external object that is defined beyond  OpenSCENARIO files and catalogs, i.e. in the road network (=
         * road object or traffic signal).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IExternalObjectReference : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IExternalObjectReference() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Unique identifier of the referenced external object in the road network.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetFilepath() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Author of the scenario or the catalog.
             * 
             * @return value of model property author
            */
            virtual std::string GetAuthor() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * User specific date and time recommended: YYYY-MM-DDThh:mm:ss.
             * 
             * @return value of model property date
            */
            virtual DateTime GetDate() const
            {
                return {};
            }

            /**
             * From OpenSCENARIO class model specification:
             * User specific description.
             * 
             * @return value of model property description
            */
            virtual std::string GetDescription() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Major OpenSCENARIO revision, this file conforms to Range: [0..inf[.
             * 
             * @return value of model property revMajor
            */
            virtual uint16_t GetRevMajor() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Minor OpenSCENARIO revision, this file conforms to Range: [0..inf[.
             * 
             * @return value of model property revMinor
            */
            virtual uint16_t GetRevMinor() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Licensing information.
             * 
             * @return value of model property license
            */
            virtual std::shared_ptr<ILicense> GetLicense() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Additional custom information about the scenario.
             * 
             * @return value of model property properties
            */
            virtual std::shared_ptr<IProperties> GetProperties() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property license is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLicense() const = 0;
            /**
            * Retrieves whether property properties is set
            * @return true when the optional property is set
            */
            virtual bool IsSetProperties() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IAbsoluteSpeed> GetAbsoluteSpeed() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The speed a synchronized entity should have relative to its master entity at its target position.
             * 
             * @return value of model property relativeSpeedToMaster
            */
            virtual std::shared_ptr<IRelativeSpeedToMaster> GetRelativeSpeedToMaster() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property absoluteSpeed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAbsoluteSpeed() const = 0;
            /**
            * Retrieves whether property relativeSpeedToMaster is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeSpeedToMaster() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property visualRange
            */
            virtual double GetVisualRange() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Dimensions and center of fog in fixed coordinates.
             * 
             * @return value of model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBox> GetBoundingBox() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property boundingBox is set
            * @return true when the optional property is set
            */
            virtual bool IsSetBoundingBox() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Controls an entity to follow a trajectory using vertices, timings (optionally) and a corresponding interpolation
         * strategy. The trajectory can be instantiated from a catalog type, or defined within this declaration. Use trajectoryRef
         * to define a trajectory.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IFollowTrajectoryAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~IFollowTrajectoryAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * An offset into the trajectory.  This has the effect of logically truncating the trajectory, so the resulting new
             * trajectory starts at that distance offset.  Where a timing TimeReference fields is provided, the time that would be
             * taken to reach this point is deducted from all calculated waypoint time values.  Unit: [m]. Range: [0..arclength of the
             * trajectory].
             * 
             * @return value of model property initialDistanceOffset
            */
            virtual double GetInitialDistanceOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Trajectory definition. Must not be used when catalogReference or trajectoryRef is set.
             * 
             * @return value of model property trajectory
            */
            virtual std::shared_ptr<ITrajectory> GetTrajectory() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A reference to the trajectory type in a catalog. Must not be used when trajectory or trajectoryRef is set.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
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
            virtual std::shared_ptr<ITimeReference> GetTimeReference() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The mode how to follow the given trajectory.
             * 
             * @return value of model property trajectoryFollowingMode
            */
            virtual std::shared_ptr<ITrajectoryFollowingMode> GetTrajectoryFollowingMode() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Either a trajectory definition or a catalog reference to the trajectory to be followed.
             * 
             * @return value of model property trajectoryRef
            */
            virtual std::shared_ptr<ITrajectoryRef> GetTrajectoryRef() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property initialDistanceOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetInitialDistanceOffset() const = 0;
            /**
            * Retrieves whether property trajectory is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrajectory() const = 0;
            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;
            /**
            * Retrieves whether property trajectoryRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrajectoryRef() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Gear description.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IGear : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IGear() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Manual gear description.
             * 
             * @return value of model property manualGear
            */
            virtual std::shared_ptr<IManualGear> GetManualGear() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Automatic gear description.
             * 
             * @return value of model property automaticGear
            */
            virtual std::shared_ptr<IAutomaticGear> GetAutomaticGear() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Position defined in terms of the spherical geographic coordinates (angular Longitude and Latitude) derived from the
         * geodetic datum specified in the respective road network definition file (external to the ASAM OpenSCENARIO). Optionally,
         * the orientation of the position can be specified.
In the general case, the altitude of the target position above a
         * conventional reference level (e.g., the mean sea level on the Earth) is determined by the surface of the underlying
         * road, which is derived from the Longitude/Latitude-coordinates of the position. However, optionally, the altitude of the
         * target position with respect to the road surface can be specified.
The orientation of the road in the inertial
         * (X,Y,Z)-coordinate system, in turn, is specified in the respective road network definition file too.
The transformation
         * of angular geographic coordinates into the flat (X,Y)-projection in the World coordinate system is entrusted to a
         * simulation environment. However, if the target position would be outside the road boundaries, the Z-coordinate of the
         * position is undefined by the OpenSCENARIO standard.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IGeoPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IGeoPosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Altitude is the Earth gravity-related vertical distance from the target position, specified horizontally by its
             * Longitude/Latitude coordinates, to the closest point on the underlying road surface.When calculating the closest point,
             * it is accounted for an elevation of the road, an entire road super-elevation, or, in more complex cases, a road lateral
             * shape profile that are specified in the road network definition (external to the OpenSCENARIO).Missing value is
             * interpreted as altitude=0. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property altitude
            */
            virtual double GetAltitude() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Height above a reference surface (e.g. sea level, earth surface). Unit: [m]. If the value is omitted, height is
             * interpreted as 0.
             * 
             * @return value of model property height
            */
            virtual double GetHeight() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The latitude  of a point on earth's surface is the angle between the equatorial plane and the straight line that passes
             * through that point and through the center of the earth. Unit: [rad]. Range: [-PI..PI].
             * 
             * @return value of model property latitude
            */
            virtual double GetLatitude() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The latitude of a point on earth's surface is the angle between the equatorial plane and the straight line that passes
             * through that point and through the center of the earth. Unit: [&#176;]. Range: [-90..90]. Missing value is interpreted
             * as 0.
             * 
             * @return value of model property latitudeDeg
            */
            virtual double GetLatitudeDeg() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The longitude of a point on earth's surface is the angle east or west of a reference meridian to another meridian that
             * passes through that point. Unit: [rad]. Range: [-PI/2..PI/2].
             * 
             * @return value of model property longitude
            */
            virtual double GetLongitude() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The longitude of a point on earth's surface is the angle east or west of a reference meridian to another meridian that
             * passes through that point. Unit: [&#176;]. Range: [-180..180]. Missing value is interpreted as 0.
             * 
             * @return value of model property longitudeDeg
            */
            virtual double GetLongitudeDeg() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * In the case of altitude=0, the Pitch and Roll angles are determined by the underlying road surface at the target
             * position and therefore undefined by the OpenSCENARIO standard.
The absolute reference context refers to the orientation
             * with respect to the World coordinate system, which is assumed to be the projected coordinate system based on the
             * spherical geographic coordinate system.
The relative reference context refers to the orientation with respect to the
             * reference (s,t)-coordinate system of the lane on the road underlying the target position. The Heading angle at the
             * target position on the (s,t)-plane can be arbitrarily specified. To calculate the Heading, the imaginary straight axis
             * at the target position is built parallel to the tangent to the reference lane s-axis on the reference road. The Heading
             * is counted from this imaginary axis.
Missing Orientation property is interpreted as the absolute reference context with
             * Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property altitude is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAltitude() const = 0;
            /**
            * Retrieves whether property height is set
            * @return true when the optional property is set
            */
            virtual bool IsSetHeight() const = 0;
            /**
            * Retrieves whether property latitude is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLatitude() const = 0;
            /**
            * Retrieves whether property latitudeDeg is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLatitudeDeg() const = 0;
            /**
            * Retrieves whether property longitude is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLongitude() const = 0;
            /**
            * Retrieves whether property longitudeDeg is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLongitudeDeg() const = 0;
            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Actions that does not explicitly target an entity’s state.
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
            virtual std::shared_ptr<IEnvironmentAction> GetEnvironmentAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Removing or adding entities.
             * 
             * @return value of model property entityAction
            */
            virtual std::shared_ptr<IEntityAction> GetEntityAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying values of parameters.
             * 
             * @return value of model property parameterAction
            */
            virtual std::shared_ptr<IParameterAction> GetParameterAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying traffic signals.
             * 
             * @return value of model property infrastructureAction
            */
            virtual std::shared_ptr<IInfrastructureAction> GetInfrastructureAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Populating ambient traffic.
             * 
             * @return value of model property trafficAction
            */
            virtual std::shared_ptr<ITrafficAction> GetTrafficAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying values of variables.
             * 
             * @return value of model property variableAction
            */
            virtual std::shared_ptr<IVariableAction> GetVariableAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property environmentAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEnvironmentAction() const = 0;
            /**
            * Retrieves whether property entityAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityAction() const = 0;
            /**
            * Retrieves whether property parameterAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterAction() const = 0;
            /**
            * Retrieves whether property infrastructureAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetInfrastructureAction() const = 0;
            /**
            * Retrieves whether property trafficAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficAction() const = 0;
            /**
            * Retrieves whether property variableAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVariableAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Histogram which can be applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IHistogram : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IHistogram() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines all the available bins in the histogram. Ranges of bins must not overlap.
             * 
             * @return value of model property bins
            */
            virtual std::vector<std::shared_ptr<IHistogramBin>> GetBins() const
            {
                return std::vector<std::shared_ptr<IHistogramBin>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetBinsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IHistogramBin> GetBinsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A bin in a histogram.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IHistogramBin : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IHistogramBin() = default;

            /**
             * From OpenSCENARIO class model specification:
             * This is used to define a probability for a value to end up in a specific interval represented by range. Instead of a
             * probability a defined count or weight has to be defined. The probability can be calculated by the (1/sum(all weights
             * from histogram bins)) * weight.
             * 
             * @return value of model property weight
            */
            virtual double GetWeight() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the range or interval of the bin in a histogram.
             * 
             * @return value of model property range
            */
            virtual std::shared_ptr<IRange> GetRange() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IPositionOfCurrentEntity> GetFromCurrentEntity() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Route position in road coordinate system.
             * 
             * @return value of model property fromRoadCoordinates
            */
            virtual std::shared_ptr<IPositionInRoadCoordinates> GetFromRoadCoordinates() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Route position in lane coordinate system.
             * 
             * @return value of model property fromLaneCoordinates
            */
            virtual std::shared_ptr<IPositionInLaneCoordinates> GetFromLaneCoordinates() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property fromCurrentEntity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFromCurrentEntity() const = 0;
            /**
            * Retrieves whether property fromRoadCoordinates is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFromRoadCoordinates() const = 0;
            /**
            * Retrieves whether property fromLaneCoordinates is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFromLaneCoordinates() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Set or override a signals state or a signal controllers state from a road network.
             * 
             * @return value of model property trafficSignalAction
            */
            virtual std::shared_ptr<ITrafficSignalAction> GetTrafficSignalAction() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IInitActions> GetActions() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IGlobalAction>> GetGlobalActions() const
            {
                return std::vector<std::shared_ptr<IGlobalAction>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * An optional list of user defined actions.
             * 
             * @return value of model property userDefinedActions
            */
            virtual std::vector<std::shared_ptr<IUserDefinedAction>> GetUserDefinedActions() const
            {
                return std::vector<std::shared_ptr<IUserDefinedAction>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * An optional list of private actions.
             * 
             * @return value of model property privates
            */
            virtual std::vector<std::shared_ptr<IPrivate>> GetPrivates() const
            {
                return std::vector<std::shared_ptr<IPrivate>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetGlobalActionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IGlobalAction> GetGlobalActionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetUserDefinedActionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IUserDefinedAction> GetUserDefinedActionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPrivatesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPrivate> GetPrivatesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property globalActions is set
            * @return true when the optional property is set
            */
            virtual bool IsSetGlobalActions() const = 0;
            /**
            * Retrieves whether property userDefinedActions is set
            * @return true when the optional property is set
            */
            virtual bool IsSetUserDefinedActions() const = 0;
            /**
            * Retrieves whether property privates is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPrivates() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Knot vector value. Range: ]-inf..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action describes the transition between an entity's current lane and its target lane. The target lane may be given
         * in absolute or relative terms. The dynamics of the transition may be given either by providing the time or the distance
         * required for performing the transition. Time and distance are measured between the start position and the end position
         * of the action. The transition starts at the current lane position, including the current lane offset and ends at the
         * target lane position, optionally including a targetLaneOffset. If no targetLaneOffset is specified, it shall be zero
         * after completing the action, so that any previous offset is not taken into account.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneChangeAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~ILaneChangeAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Lane offset to be reached at the target lane; the action will end there. Missing value is interpreted as 0. Unit: [m].
             * 
             * @return value of model property targetLaneOffset
            */
            virtual double GetTargetLaneOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Shape/time of lane change action.
             * 
             * @return value of model property laneChangeActionDynamics
            */
            virtual std::shared_ptr<ITransitionDynamics> GetLaneChangeActionDynamics() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Target lane of lane change action.
             * 
             * @return value of model property laneChangeTarget
            */
            virtual std::shared_ptr<ILaneChangeTarget> GetLaneChangeTarget() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property targetLaneOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTargetLaneOffset() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IRelativeTargetLane> GetRelativeTargetLane() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Lane change target lane number.
             * 
             * @return value of model property absoluteTargetLane
            */
            virtual std::shared_ptr<IAbsoluteTargetLane> GetAbsoluteTargetLane() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property relativeTargetLane is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeTargetLane() const = 0;
            /**
            * Retrieves whether property absoluteTargetLane is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAbsoluteTargetLane() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action describes the transition to a defined lane offset of an entity. The lane offset will be kept if the action
         * is set as continuous. The lane offset may be given in absolute or relative terms. The dynamics are specified by
         * providing the maxLateralAcc used to keep the lane offset. Lane offset keeping starts immediately at start of the action
         * and ends after the given duration. Different shapes can be used for the initial transition. Step defines an immediate
         * transition, i.e. a jump from the current lane offset to the target lane offset. Usage of time and distance does not make
         * any sense in combination with step; linear will result in a linear movement between the start and target lane offset;
         * cubic and sinusoidal will result in smooth transitions (basically s-shaped) between start and end state. A smooth
         * transition is only given with cubic and sinusoidal shape.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneOffsetAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~ILaneOffsetAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * If false, the action ends when the target lane-offset is reached. If true it does not end but has to be stopped.
             * 
             * @return value of model property continuous
            */
            virtual bool GetContinuous() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Parameters defining the dynamics of the LaneOffsetAction.
             * 
             * @return value of model property laneOffsetActionDynamics
            */
            virtual std::shared_ptr<ILaneOffsetActionDynamics> GetLaneOffsetActionDynamics() const
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
            virtual std::shared_ptr<ILaneOffsetTarget> GetLaneOffsetTarget() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines shape and lateral acceleration which are used to do the lane offset action.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneOffsetActionDynamics : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILaneOffsetActionDynamics() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Geometrical shape of the LaneOffsetAction's dynamics.
             * 
             * @return value of model property dynamicsShape
            */
            virtual DynamicsShape GetDynamicsShape() const
            {
                return DynamicsShape();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum lateral acceleration used to initially reach and afterwards keep the lane offset. Missing value is interpreted
             * as 'inf'. Unit: [m/s&#178;]. Range: [0..inf[.
             * 
             * @return value of model property maxLateralAcc
            */
            virtual double GetMaxLateralAcc() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxLateralAcc is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxLateralAcc() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines the target lane offset of the LaneOffsetAction.
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
            virtual std::shared_ptr<IRelativeTargetLaneOffset> GetRelativeTargetLaneOffset() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Absolute reference to the current lane's center line.
             * 
             * @return value of model property absoluteTargetLaneOffset
            */
            virtual std::shared_ptr<IAbsoluteTargetLaneOffset> GetAbsoluteTargetLaneOffset() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property relativeTargetLaneOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeTargetLaneOffset() const = 0;
            /**
            * Retrieves whether property absoluteTargetLaneOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAbsoluteTargetLaneOffset() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Position defined in terms of the road segment (roadId), the lane (laneId) of the road, the distance (s) along the road's
         * reference line, and the lateral offset to the lane's center line along the normal to the road's reference line.
         * Orientation is optional.

The s-coordinate and the offset should be specified so that the target position is within a
         * road defined by roadId taken from the respective road network definition file (external to the ASAM OpenSCENARIO). If
         * the target position would be outside the road boundaries, the z-coordinate of the position is undefined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILanePosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILanePosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The ID of the target lane belonging to the target road (taken from the respective road network definition file).
             * 
             * @return value of model property laneId
            */
            virtual std::string GetLaneId() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The lateral offset to the center line of the target lane (along the normal to the road's reference line). Missing value
             * is interpreted as 0. The positive value means the offset is applied in the direction of the t-axis being imagined at the
             * target s-position. Unit: [m].
             * 
             * @return value of model property offset
            */
            virtual double GetOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The ID of the target road taken from the respective road network definition file.
             * 
             * @return value of model property roadId
            */
            virtual std::string GetRoadId() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The s-coordinate taken along the road's reference line from the start point of the target road. Unit: [m]. Range:
             * [0..inf[.
             * 
             * @return value of model property s
            */
            virtual double GetS() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The Pitch and Roll angles are determined by the underlying road surface and therefore undefined by the OpenSCENARIO
             * standard.
The absolute reference context refers to the orientation with respect to the World coordinate system. Only the
             * Heading angle at the target position can be arbitrarily specified on the (X,Y)-plane counting from the X-axis.
The
             * relative reference context refers to the orientation with respect to the (s,t)-coordinate system of the target road that
             * is considered a reference orientation. Only the Heading angle at the target position can be arbitrarily specified on the
             * (s,t)-plane counting from the tangent to the road s-axis at the point with the target s-coordinate.
Missing Orientation
             * property is interpreted as the absolute reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property offset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOffset() const = 0;
            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<ILaneChangeAction> GetLaneChangeAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This action defines a transition to a defined lane offset.
             * 
             * @return value of model property laneOffsetAction
            */
            virtual std::shared_ptr<ILaneOffsetAction> GetLaneOffsetAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This action defines a transition to a lateral distance to a referenced entity.
             * 
             * @return value of model property lateralDistanceAction
            */
            virtual std::shared_ptr<ILateralDistanceAction> GetLateralDistanceAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property laneChangeAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLaneChangeAction() const = 0;
            /**
            * Retrieves whether property laneOffsetAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLaneOffsetAction() const = 0;
            /**
            * Retrieves whether property lateralDistanceAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLateralDistanceAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
        class ILateralDistanceAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~ILateralDistanceAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
             * 
             * @return value of model property continuous
            */
            virtual bool GetContinuous() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system to be used for calculations. If not provided the value is interpreted as "entity".
             * If "entity", the coordinate system is interpreted as the actor's local coordinate system.
             * 
             * @return value of model property coordinateSystem
            */
            virtual CoordinateSystem GetCoordinateSystem() const
            {
                return CoordinateSystem();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The displacement in which the distance or time gap applies. Where omitted, 'any' is assumed.
             * 
             * @return value of model property displacement
            */
            virtual LateralDisplacement GetDisplacement() const
            {
                return LateralDisplacement();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Lateral distance value. Missing value is interpreted as 0. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property distance
            */
            virtual double GetDistance() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the reference entity the lateral distance shall be kept to.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: Lateral distance is measured using the distance between closest bounding box points. False: Reference point
             * distance is used.
             * 
             * @return value of model property freespace
            */
            virtual bool GetFreespace() const
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
            virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property coordinateSystem is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCoordinateSystem() const = 0;
            /**
            * Retrieves whether property displacement is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDisplacement() const = 0;
            /**
            * Retrieves whether property distance is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDistance() const = 0;
            /**
            * Retrieves whether property dynamicConstraints is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDynamicConstraints() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Licensing information about the OpenSCENARIO file.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILicense : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILicense() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The full license text.
             * 
             * @return value of model property text
            */
            virtual std::string GetText() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The full name of the license. Informational only.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Link to an URL where the full license text can be found.
             * 
             * @return value of model property resource
            */
            virtual std::string GetResource() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The identifier of the license from the <a href="$inet://https://spdx.org/licenses/"><font color="#0000ff"><u>SPDX
             * license list</u></font></a>. Can also be an SPDX License Expression, which is also applicable to custom licenses
             * (LicenseRef-...).
             * 
             * @return value of model property spdxId
            */
            virtual std::string GetSpdxId() const
            {
                return "";
            }


            /**
            * Retrieves whether property text is set
            * @return true when the optional property is set
            */
            virtual bool IsSetText() const = 0;
            /**
            * Retrieves whether property resource is set
            * @return true when the optional property is set
            */
            virtual bool IsSetResource() const = 0;
            /**
            * Retrieves whether property spdxId is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSpdxId() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the light state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILightState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILightState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * When mode is set to flashing (e.g. hazard lights of a parking car), this attribute describes the duration of the 'off'
             * phase of the flashing. Unit: [s]. Default: 0.5s.
             * 
             * @return value of model property flashingOffDuration
            */
            virtual double GetFlashingOffDuration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * When mode is set to flashing (e.g. hazard lights of a parking car), this attribute describes the duration of the 'on'
             * phase of the flashing. Unit: [s]. Default: 0.5s.
             * 
             * @return value of model property flashingOnDuration
            */
            virtual double GetFlashingOnDuration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Luminous intensity of the light. Unit: [cd].
             * 
             * @return value of model property luminousIntensity
            */
            virtual double GetLuminousIntensity() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Indication if a light should be switched on, off or flashing.
             * 
             * @return value of model property mode
            */
            virtual LightMode GetMode() const
            {
                return LightMode();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Color of the light.
             * 
             * @return value of model property color
            */
            virtual std::shared_ptr<IColor> GetColor() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property flashingOffDuration is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFlashingOffDuration() const = 0;
            /**
            * Retrieves whether property flashingOnDuration is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFlashingOnDuration() const = 0;
            /**
            * Retrieves whether property luminousIntensity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLuminousIntensity() const = 0;
            /**
            * Retrieves whether property color is set
            * @return true when the optional property is set
            */
            virtual bool IsSetColor() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action describes the transition of a current light state to the target light state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILightStateAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILightStateAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Time to transition from current lightState to given new lightState (default: transitionTime = 0). Unit: [s].
             * 
             * @return value of model property transitionTime
            */
            virtual double GetTransitionTime() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a certain light of a entity that will be addressed in this LightStateAction.
             * 
             * @return value of model property lightType
            */
            virtual std::shared_ptr<ILightType> GetLightType() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * LightState after execution of the LightStateAction.
             * 
             * @return value of model property lightState
            */
            virtual std::shared_ptr<ILightState> GetLightState() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property transitionTime is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTransitionTime() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of light types.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILightType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ILightType() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Available lights attached to a vehicle.
             * 
             * @return value of model property vehicleLight
            */
            virtual std::shared_ptr<IVehicleLight> GetVehicleLight() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Light type cannot be handled be the above options and is therefore user defined.
             * 
             * @return value of model property userDefinedLight
            */
            virtual std::shared_ptr<IUserDefinedLight> GetUserDefinedLight() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * This action describes the transition between the current speed of an entity and its target speed.
             * 
             * @return value of model property speedAction
            */
            virtual std::shared_ptr<ISpeedAction> GetSpeedAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This action defines a transition to a defined longitudinal distance to a referenced entity.
             * 
             * @return value of model property longitudinalDistanceAction
            */
            virtual std::shared_ptr<ILongitudinalDistanceAction> GetLongitudinalDistanceAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * This action describes the change of speed in terms of a series of speed targets over time.
             * 
             * @return value of model property speedProfileAction
            */
            virtual std::shared_ptr<ISpeedProfileAction> GetSpeedProfileAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property speedAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSpeedAction() const = 0;
            /**
            * Retrieves whether property longitudinalDistanceAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLongitudinalDistanceAction() const = 0;
            /**
            * Retrieves whether property speedProfileAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSpeedProfileAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action activates a controller for the longitudinal behavior of an entity in a way that a given distance or time gap
         * to the reference entity is maintained.
The target position may be either on the same road segment where the reference
         * entity is positioned or on a connecting road. In the latter case for coordinate systems lane and road, the distance or
         * time gap is calculated along the road reference line / lane centerline of the connecting road. It is assumed that the
         * reference line of the road / lane centerline of the reference entity continues seamlessly on the connecting road (even
         * if its shape changes). It is assumed that the target position relates to the routing of the reference entity. Otherwise,
         * the calculation of the target position cannot be interpreted within the OpenSCENARIO standard.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILongitudinalDistanceAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~ILongitudinalDistanceAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
             * 
             * @return value of model property continuous
            */
            virtual bool GetContinuous() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system to be used for calculations. If not provided the value is interpreted as "entity".
             * If "entity", the coordinate system is interpreted as the actor's local coordinate system.
             * 
             * @return value of model property coordinateSystem
            */
            virtual CoordinateSystem GetCoordinateSystem() const
            {
                return CoordinateSystem();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The displacement in which the distance or time gap applies. Where omitted, 'trailingReferencedEntity' is assumed.
             * 
             * @return value of model property displacement
            */
            virtual LongitudinalDisplacement GetDisplacement() const
            {
                return LongitudinalDisplacement();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Distance value, not to be used together with timeGap attribute. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property distance
            */
            virtual double GetDistance() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity the distance shall be kept to.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: Distance is measured using the distance between closest bounding box points False: Reference point distance is
             * used.
             * 
             * @return value of model property freespace
            */
            virtual bool GetFreespace() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Time gap value, not to be used together with distance attribute. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property timeGap
            */
            virtual double GetTimeGap() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Parameter that assigns either unlimited dynamics (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to
             * the action.
             * 
             * @return value of model property dynamicConstraints
            */
            virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property coordinateSystem is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCoordinateSystem() const = 0;
            /**
            * Retrieves whether property displacement is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDisplacement() const = 0;
            /**
            * Retrieves whether property distance is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDistance() const = 0;
            /**
            * Retrieves whether property timeGap is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTimeGap() const = 0;
            /**
            * Retrieves whether property dynamicConstraints is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDynamicConstraints() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * List of events that are comprised by the maneuver.
             * 
             * @return value of model property events
            */
            virtual std::vector<std::shared_ptr<IEvent>> GetEvents() const
            {
                return std::vector<std::shared_ptr<IEvent>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEventsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEvent> GetEventsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual uint32_t GetMaximumExecutionCount() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the maneuver group.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Actors of the maneuver group.
             * 
             * @return value of model property actors
            */
            virtual std::shared_ptr<IActors> GetActors() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Each element of this list of must reference a maneuver type in a catalog.
             * 
             * @return value of model property catalogReferences
            */
            virtual std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences() const
            {
                return std::vector<std::shared_ptr<ICatalogReference>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maneuver type definitions.
             * 
             * @return value of model property maneuvers
            */
            virtual std::vector<std::shared_ptr<IManeuver>> GetManeuvers() const
            {
                return std::vector<std::shared_ptr<IManeuver>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetCatalogReferencesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReferencesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetManeuversSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IManeuver> GetManeuversAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property catalogReferences is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReferences() const = 0;
            /**
            * Retrieves whether property maneuvers is set
            * @return true when the optional property is set
            */
            virtual bool IsSetManeuvers() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Manual gear description.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IManualGear : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IManualGear() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Gear number. Negative values are indicating reverse gears. Zero is neutral gear.
             * 
             * @return value of model property number
            */
            virtual int GetNumber() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Mass of the miscellaneous object. Unit: [kg]. Range: [0..inf[.
             * 
             * @return value of model property mass
            */
            virtual double GetMass() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Categorization of the miscellaneous object.
             * 
             * @return value of model property miscObjectCategory
            */
            virtual MiscObjectCategory GetMiscObjectCategory() const
            {
                return MiscObjectCategory();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the model of the miscellaneous object as a model type or a relative or absolute file path.
             * 
             * @return value of model property model3d
            */
            virtual std::string GetModel3d() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the miscellaneous object type.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Bounding box definition for the miscellaneous object.
             * 
             * @return value of model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBox> GetBoundingBox() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Property definitions for the miscellaneous object.
             * 
             * @return value of model property properties
            */
            virtual std::shared_ptr<IProperties> GetProperties() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property model3d is set
            * @return true when the optional property is set
            */
            virtual bool IsSetModel3d() const = 0;
            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IParameterAddValueRule> GetAddValue() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Multiply a parameter by a value.
             * 
             * @return value of model property multiplyByValue
            */
            virtual std::shared_ptr<IParameterMultiplyByValueRule> GetMultiplyByValue() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property addValue is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAddValue() const = 0;
            /**
            * Retrieves whether property multiplyByValue is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMultiplyByValue() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Normal distribution which can be applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class INormalDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~INormalDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the expected value (mean) for a normal distribution.
             * 
             * @return value of model property expectedValue
            */
            virtual double GetExpectedValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the variance for a normal distribution.(Square of standard deviation).
             * 
             * @return value of model property variance
            */
            virtual double GetVariance() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the limits of the normal distribution regarding to the definition space.
             * 
             * @return value of model property range
            */
            virtual std::shared_ptr<IRange> GetRange() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property range is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRange() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * than the order of the curve. Range: [2..inf[.
             * 
             * @return value of model property order
            */
            virtual uint32_t GetOrder() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Control point vector of the NURBS trajectory. The number of control points must be greater or equal to the order of the
             * curve. It's an ordered list, therefore the first control point determines the start of the trajectory and the last
             * control point determines the end of the trajectory.
             * 
             * @return value of model property controlPoints
            */
            virtual std::vector<std::shared_ptr<IControlPoint>> GetControlPoints() const
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
            virtual std::vector<std::shared_ptr<IKnot>> GetKnots() const
            {
                return std::vector<std::shared_ptr<IKnot>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetControlPointsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IControlPoint> GetControlPointsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetKnotsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IKnot> GetKnotsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Controller type definition.
             * 
             * @return value of model property controller
            */
            virtual std::shared_ptr<IController> GetController() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;
            /**
            * Retrieves whether property controller is set
            * @return true when the optional property is set
            */
            virtual bool IsSetController() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Amount of time of driving offroad. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual double GetDuration() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IFileHeader> GetFileHeader() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Category (catalog or scenario) of the OpenSCENARIO description.
             * 
             * @return value of model property openScenarioCategory
            */
            virtual std::shared_ptr<IOpenScenarioCategory> GetOpenScenarioCategory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IScenarioDefinition> GetScenarioDefinition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a catalog.
             * 
             * @return value of model property catalogDefinition
            */
            virtual std::shared_ptr<ICatalogDefinition> GetCatalogDefinition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a parameter value distribution.
             * 
             * @return value of model property parameterValueDistributionDefinition
            */
            virtual std::shared_ptr<IParameterValueDistributionDefinition> GetParameterValueDistributionDefinition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Orientation is defined in terms of the Heading/Pitch/Roll orientation angles in the Cartesian coordinate system and
         * considered in the absolute or relative reference context.
The absolute reference context refers to the orientation with
         * respect to the World coordinate system.
If more than one orientation angle are specified at the same time, rotations are
         * applied in the order: about Z-axis (Heading), then Y-axis (Pitch), then X-axis (Roll), assumed the positive rotation to
         * be counter-clockwise. Heading=Pitch=Roll=0 means the orientation is aligned with coordinate axes (no rotation).
The
         * relative reference context refers to the orientation with respect to a reference coordinate system. In the case of
         * referencing to the road- or lane coordinate system, Pitch and Roll angles are determined by a surface tilt of an
         * underlying road and therefore cannot be meaningfully interpreted within the OpenSCENARIO standard. As well, the
         * Heading=0 means the Heading is aligned with the direction of the reference lane or road s-axis. In other cases,
         * Heading=Pitch=Roll=0 means the orientation is identical to the reference orientation.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOrientation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IOrientation() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Heading angle. Missing h value is interpreted as 0. Unit: [rad].
             * 
             * @return value of model property h
            */
            virtual double GetH() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Pitch angle. Missing p value is interpreted as 0. Unit: [rad].
             * 
             * @return value of model property p
            */
            virtual double GetP() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Roll angle. Missing r value is interpreted as 0. Unit: [rad].
             * 
             * @return value of model property r
            */
            virtual double GetR() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative or absolute definition. Missing type value is interpreted as absolute.
             * 
             * @return value of model property type
            */
            virtual ReferenceContext GetType() const
            {
                return ReferenceContext();
            }


            /**
            * Retrieves whether property h is set
            * @return true when the optional property is set
            */
            virtual bool IsSetH() const = 0;
            /**
            * Retrieves whether property p is set
            * @return true when the optional property is set
            */
            virtual bool IsSetP() const = 0;
            /**
            * Retrieves whether property r is set
            * @return true when the optional property is set
            */
            virtual bool IsSetR() const = 0;
            /**
            * Retrieves whether property type is set
            * @return true when the optional property is set
            */
            virtual bool IsSetType() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual bool GetActive() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Brake pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the brake pedal.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Input for the brake, either as force or percent. Should be set if the deprecated "value" is not used.
             * 
             * @return value of model property brakeInput
            */
            virtual std::shared_ptr<IBrakeInput> GetBrakeInput() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property value is set
            * @return true when the optional property is set
            */
            virtual bool IsSetValue() const = 0;
            /**
            * Retrieves whether property brakeInput is set
            * @return true when the optional property is set
            */
            virtual bool IsSetBrakeInput() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual bool GetActive() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The rate of how fast the new clutch position should be acquired. Unit: [%/s].
             * 
             * @return value of model property maxRate
            */
            virtual double GetMaxRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the clutch pedal.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxRate() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Overrides entity controller values. Mostly suited for motor vehicles.
It is assumed that a respective user-defined
         * Controller is assigned to the entity, defined in the "movement" domain, and activated.
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
            virtual std::shared_ptr<IOverrideThrottleAction> GetThrottle() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for brake position or unset value.
             * 
             * @return value of model property brake
            */
            virtual std::shared_ptr<IOverrideBrakeAction> GetBrake() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for clutch position or unset value.
             * 
             * @return value of model property clutch
            */
            virtual std::shared_ptr<IOverrideClutchAction> GetClutch() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for parking brake position or unset value.
             * 
             * @return value of model property parkingBrake
            */
            virtual std::shared_ptr<IOverrideParkingBrakeAction> GetParkingBrake() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for steering wheel position or unset value.
             * 
             * @return value of model property steeringWheel
            */
            virtual std::shared_ptr<IOverrideSteeringWheelAction> GetSteeringWheel() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for gear position or unset value.
             * 
             * @return value of model property gear
            */
            virtual std::shared_ptr<IOverrideGearAction> GetGear() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property throttle is set
            * @return true when the optional property is set
            */
            virtual bool IsSetThrottle() const = 0;
            /**
            * Retrieves whether property brake is set
            * @return true when the optional property is set
            */
            virtual bool IsSetBrake() const = 0;
            /**
            * Retrieves whether property clutch is set
            * @return true when the optional property is set
            */
            virtual bool IsSetClutch() const = 0;
            /**
            * Retrieves whether property parkingBrake is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParkingBrake() const = 0;
            /**
            * Retrieves whether property steeringWheel is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSteeringWheel() const = 0;
            /**
            * Retrieves whether property gear is set
            * @return true when the optional property is set
            */
            virtual bool IsSetGear() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual bool GetActive() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Gear number.
             * 
             * @return value of model property number
            */
            virtual double GetNumber() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Gear description.
             * 
             * @return value of model property gear
            */
            virtual std::shared_ptr<IGear> GetGear() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property number is set
            * @return true when the optional property is set
            */
            virtual bool IsSetNumber() const = 0;
            /**
            * Retrieves whether property gear is set
            * @return true when the optional property is set
            */
            virtual bool IsSetGear() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual bool GetActive() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Parking brake value. Unit: [%]. Range: [0..1]. The value 1 represent the maximum parking brake state.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Input for the parking brake, either as force or percent. Should be set if the deprecated "value" is not used.
             * 
             * @return value of model property brakeInput
            */
            virtual std::shared_ptr<IBrakeInput> GetBrakeInput() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property value is set
            * @return true when the optional property is set
            */
            virtual bool IsSetValue() const = 0;
            /**
            * Retrieves whether property brakeInput is set
            * @return true when the optional property is set
            */
            virtual bool IsSetBrakeInput() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual bool GetActive() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The rate of how fast the new steering wheel position should be acquired. Unit: [%/s].
             * 
             * @return value of model property maxRate
            */
            virtual double GetMaxRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The maximum torque that can be applied to acquire/keep an angle. Unit: [Nm].
             * 
             * @return value of model property maxTorque
            */
            virtual double GetMaxTorque() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Steering wheel angle. Unit: [rad].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxRate() const = 0;
            /**
            * Retrieves whether property maxTorque is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxTorque() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual bool GetActive() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The rate of how fast the new throttle position should be acquired. Unit: [%/s].
             * 
             * @return value of model property maxRate
            */
            virtual double GetMaxRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Throttle pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the throttle pedal.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxRate() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() const
            {
                return std::make_shared<INamedReference<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for the parameter.
             * 
             * @return value of model property setAction
            */
            virtual std::shared_ptr<IParameterSetAction> GetSetAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Modifying rule for the parameter (Add value or multiply by value).
             * 
             * @return value of model property modifyAction
            */
            virtual std::shared_ptr<IParameterModifyAction> GetModifyAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property setAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSetAction() const = 0;
            /**
            * Retrieves whether property modifyAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetModifyAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Assignment of a value to a named parameter. It is either used when importing types of vehicles, controllers etc. from a
         * catalog during startup of a simulator. It is also used when generating concrete scenarios from logical scenarios with
         * ParameterValueSets during runtime of a scenario generator.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterAssignment : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterAssignment() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the parameter that must be declared in the catalog (when used in CatalogReference) or in the global
             * ParameterDeclaration of the scenario (when used in ParameterValueSet).
             * 
             * @return value of model property parameterRef
            */
            virtual std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() const
            {
                return std::make_shared<INamedReference<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Value of the parameter that is handed over to the parametrizable type.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IParameterDeclaration>> GetParameterRef() const
            {
                return std::make_shared<INamedReference<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Value of the parameter.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Declaration of a typed parameter with a name and a default value. It is used for creating variations of the same
         * scenario by using the ParameterValueDistributionDefinition in an additional file.
There are two options for applying
         * ParameterValueDistributions:

* Pre-startup: Copy the scenario file and change/override the default value
* On startup:
         * Keep the scenario file but on startup of the OSC Director inject parameter values e.g. through the command line.

The
         * value of a parameter cannot change after startup during runtime.
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Type of the parameter.
             * 
             * @return value of model property parameterType
            */
            virtual ParameterType GetParameterType() const
            {
                return ParameterType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Value of the parameter as its default value.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines zero or more constraint groups to the parameter value. Multiple constraint groups are combined by an OR. That
             * means at least one constraint group has to evaluate to true to get the simulation started. If none of the constraint
             * groups is satisfied the scenario should not be evaluated.
             * 
             * @return value of model property constraintGroups
            */
            virtual std::vector<std::shared_ptr<IValueConstraintGroup>> GetConstraintGroups() const
            {
                return std::vector<std::shared_ptr<IValueConstraintGroup>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetConstraintGroupsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IValueConstraintGroup> GetConstraintGroupsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property constraintGroups is set
            * @return true when the optional property is set
            */
            virtual bool IsSetConstraintGroups() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IModifyRule> GetRule() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The ParameterValueDistribution represents the top level container of a parameter distribution file.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterValueDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterValueDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the scenario file which shall be linked to the parameter distribution file.
             * 
             * @return value of model property scenarioFile
            */
            virtual std::shared_ptr<IFile> GetScenarioFile() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines distributions of the parameter which can be deterministic or stochastic
             * 
             * @return value of model property distributionDefinition
            */
            virtual std::shared_ptr<IDistributionDefinition> GetDistributionDefinition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A marker stating that the OpenSCENARIO file is a parameter value distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterValueDistributionDefinition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterValueDistributionDefinition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a parameter value distribution.
             * 
             * @return value of model property parameterValueDistribution
            */
            virtual std::shared_ptr<IParameterValueDistribution> GetParameterValueDistribution() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Set of parameter values that have to be assigned for a single concrete scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterValueSet : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IParameterValueSet() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Assignment of a value to a named parameter.
             * 
             * @return value of model property parameterAssignments
            */
            virtual std::vector<std::shared_ptr<IParameterAssignment>> GetParameterAssignments() const
            {
                return std::vector<std::shared_ptr<IParameterAssignment>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterAssignmentsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterAssignment> GetParameterAssignmentsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The mass of a pedestrian. Unit: [kg]. Range: [0..inf[.
             * 
             * @return value of model property mass
            */
            virtual double GetMass() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the model of the pedestrian.
             * 
             * @return value of model property model
            */
            virtual std::string GetModel() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the model of the pedestrian as a model type or a relative or absolute file path.
             * 
             * @return value of model property model3d
            */
            virtual std::string GetModel3d() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the pedestrian type. Required when used in catalog.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Category type of pedestrian.
             * 
             * @return value of model property pedestrianCategory
            */
            virtual PedestrianCategory GetPedestrianCategory() const
            {
                return PedestrianCategory();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Role of the pedestrian (police, civil,...). The default pedestrian role if not specified is None.
             * 
             * @return value of model property role
            */
            virtual Role GetRole() const
            {
                return Role();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Bounding box of the pedestrian.
             * 
             * @return value of model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBox> GetBoundingBox() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Properties (values/files) of the pedestrian.
             * 
             * @return value of model property properties
            */
            virtual std::shared_ptr<IProperties> GetProperties() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property model is set
            * @return true when the optional property is set
            */
            virtual bool IsSetModel() const = 0;
            /**
            * Retrieves whether property model3d is set
            * @return true when the optional property is set
            */
            virtual bool IsSetModel3d() const = 0;
            /**
            * Retrieves whether property role is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRole() const = 0;
            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines a pedestrian's motion and gestures. A motion will override a currently active motion. A conflicting gesture will
         * override currently active gestures.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPedestrianAnimation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPedestrianAnimation() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Motion of a pedestrian.
             * 
             * @return value of model property motion
            */
            virtual PedestrianMotionType GetMotion() const
            {
                return PedestrianMotionType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * User defined pedestrian animation.
             * 
             * @return value of model property userDefinedPedestrianAnimation
            */
            virtual std::string GetUserDefinedPedestrianAnimation() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Gestures of a pedestrian.
             * 
             * @return value of model property gestures
            */
            virtual std::vector<std::shared_ptr<IPedestrianGesture>> GetGestures() const
            {
                return std::vector<std::shared_ptr<IPedestrianGesture>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetGesturesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPedestrianGesture> GetGesturesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property motion is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMotion() const = 0;
            /**
            * Retrieves whether property userDefinedPedestrianAnimation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetUserDefinedPedestrianAnimation() const = 0;
            /**
            * Retrieves whether property gestures is set
            * @return true when the optional property is set
            */
            virtual bool IsSetGestures() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines a pedestrian's gesture. A conflicting gesture will override currently active gestures.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPedestrianGesture : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPedestrianGesture() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Specific gesture of a pedestrian.
             * 
             * @return value of model property gesture
            */
            virtual PedestrianGestureType GetGesture() const
            {
                return PedestrianGestureType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Maximum acceleration of the vehicle. Unit: [m/s&#178;]. Range: [0..inf[.
             * 
             * @return value of model property maxAcceleration
            */
            virtual double GetMaxAcceleration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum acceleration rate of the vehicle. Unit: [m/s&#179;]. Range: [0..inf[. If omitted then infinity is assumed.
             * 
             * @return value of model property maxAccelerationRate
            */
            virtual double GetMaxAccelerationRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum deceleration of the vehicle. Unit: [m/s&#178;]. Range: [0..inf[.
             * 
             * @return value of model property maxDeceleration
            */
            virtual double GetMaxDeceleration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum deceleration rate of the vehicle. Unit: [m/s&#179;]. Range: [0..inf[. If omitted then infinity is assumed.
             * 
             * @return value of model property maxDecelerationRate
            */
            virtual double GetMaxDecelerationRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Maximum speed of the vehicle. Unit: [m/s].
             * 
             * @return value of model property maxSpeed
            */
            virtual double GetMaxSpeed() const
            {
                return 0;
            }


            /**
            * Retrieves whether property maxAccelerationRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxAccelerationRate() const = 0;
            /**
            * Retrieves whether property maxDecelerationRate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMaxDecelerationRate() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Phase of a TrafficSignalController. A TrafficSignalController has sequential phases. Each phase can have multiple
         * TrafficSignalStates or one TrafficSignalGroupState (mutually exclusive). When TrafficSignalStates are used to model the
         * states of a traffic signal individually, exactly one TrafficSignalState has to be defined for every traffic signal
         * controlled by this TrafficSignalController.
The semantic information like go, attention, stop, etc. is set in Phase
         * attribute name and the state like the visual information "off;off;on" in trafficSignalStates or trafficSignalGroupState.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPhase : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPhase() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Duration of the phase. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual double GetDuration() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Semantic information about the phase. Typical values are: off, stop, attention, stop_attention, go, go_exclusive
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Each phase can have multiple TrafficSignalStates to provide the state for all traffic signals individually that are
             * controlled by the controller. One for each TrafficSignal. E.g. name="go" (trafficSignal1:"off;off;on",
             * trafficSignal2:"off;off;on").
             * 
             * @return value of model property trafficSignalStates
            */
            virtual std::vector<std::shared_ptr<ITrafficSignalState>> GetTrafficSignalStates() const
            {
                return std::vector<std::shared_ptr<ITrafficSignalState>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Each phase can have one TrafficSignalGroupState to provide the state for all traffic signals that are controlled by the
             * controller if they share the same state. E.g. name="go" ("off;off;on").
             * 
             * @return value of model property trafficeSignalGroupState
            */
            virtual std::shared_ptr<ITrafficSignalGroupState> GetTrafficeSignalGroupState() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetTrafficSignalStatesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ITrafficSignalState> GetTrafficSignalStatesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property trafficSignalStates is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSignalStates() const = 0;
            /**
            * Retrieves whether property trafficeSignalGroupState is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficeSignalGroupState() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Poisson distribution which can be applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPoissonDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IPoissonDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the expected value for a poisson distribution.
             * 
             * @return value of model property expectedValue
            */
            virtual double GetExpectedValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the lower limit and the upper limit of the poisson distribution regarding to the definition space.
             * 
             * @return value of model property range
            */
            virtual std::shared_ptr<IRange> GetRange() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property range is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRange() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IVertex>> GetVertices() const
            {
                return std::vector<std::shared_ptr<IVertex>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetVerticesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IVertex> GetVerticesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IWorldPosition> GetWorldPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position is given relative to an entity, expressed in world coordinates.
             * 
             * @return value of model property relativeWorldPosition
            */
            virtual std::shared_ptr<IRelativeWorldPosition> GetRelativeWorldPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position is given relative to an entity.
             * 
             * @return value of model property relativeObjectPosition
            */
            virtual std::shared_ptr<IRelativeObjectPosition> GetRelativeObjectPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position in road coordinates (t,s) applied to a given road.
             * 
             * @return value of model property roadPosition
            */
            virtual std::shared_ptr<IRoadPosition> GetRoadPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position relative to an entity's road position (ds, dt).
             * 
             * @return value of model property relativeRoadPosition
            */
            virtual std::shared_ptr<IRelativeRoadPosition> GetRelativeRoadPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
             * 
             * @return value of model property lanePosition
            */
            virtual std::shared_ptr<ILanePosition> GetLanePosition() const
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
            virtual std::shared_ptr<IRelativeLanePosition> GetRelativeLanePosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a given route.
             * 
             * @return value of model property routePosition
            */
            virtual std::shared_ptr<IRoutePosition> GetRoutePosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position that uses geo coordinates
             * 
             * @return value of model property geoPosition
            */
            virtual std::shared_ptr<IGeoPosition> GetGeoPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a given trajectory.
             * 
             * @return value of model property trajectoryPosition
            */
            virtual std::shared_ptr<ITrajectoryPosition> GetTrajectoryPosition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property worldPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetWorldPosition() const = 0;
            /**
            * Retrieves whether property relativeWorldPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeWorldPosition() const = 0;
            /**
            * Retrieves whether property relativeObjectPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeObjectPosition() const = 0;
            /**
            * Retrieves whether property roadPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoadPosition() const = 0;
            /**
            * Retrieves whether property relativeRoadPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeRoadPosition() const = 0;
            /**
            * Retrieves whether property lanePosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLanePosition() const = 0;
            /**
            * Retrieves whether property relativeLanePosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeLanePosition() const = 0;
            /**
            * Retrieves whether property routePosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutePosition() const = 0;
            /**
            * Retrieves whether property geoPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetGeoPosition() const = 0;
            /**
            * Retrieves whether property trajectoryPosition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrajectoryPosition() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Lane ID of the actual position.
             * 
             * @return value of model property laneId
            */
            virtual std::string GetLaneId() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Lateral offset (relative to the lane centerline) of the actual position. If omitted, the lane offset is interpreted as
             * 0. Unit: [m].
             * 
             * @return value of model property laneOffset
            */
            virtual double GetLaneOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * s-coordinate of the actual position. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property pathS
            */
            virtual double GetPathS() const
            {
                return 0;
            }


            /**
            * Retrieves whether property laneOffset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLaneOffset() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Position in s coordinates along the reference line of the route.
             * 
             * @return value of model property pathS
            */
            virtual double GetPathS() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position in t coordinates orthogonal to the reference line of the route.
             * 
             * @return value of model property t
            */
            virtual double GetT() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The intensity of the precipitation. Range: [0..1].
             * 
             * @return value of model property intensity
            */
            virtual double GetIntensity() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The intensity of the precipitation (valid for all precipitation types). Unit: [mm/h]. Range: [0..inf[.
             * 
             * @return value of model property precipitationIntensity
            */
            virtual double GetPrecipitationIntensity() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Type of the precipitation.
             * 
             * @return value of model property precipitationType
            */
            virtual PrecipitationType GetPrecipitationType() const
            {
                return PrecipitationType();
            }


            /**
            * Retrieves whether property intensity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetIntensity() const = 0;
            /**
            * Retrieves whether property precipitationIntensity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPrecipitationIntensity() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * List of private actions to be executed when the enclosing container gets triggered.
             * 
             * @return value of model property privateActions
            */
            virtual std::vector<std::shared_ptr<IPrivateAction>> GetPrivateActions() const
            {
                return std::vector<std::shared_ptr<IPrivateAction>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPrivateActionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPrivateAction> GetPrivateActionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Applies longitudinal control behavior on the reference entity/entities. Either a SpeedAction, LongitudinalDistanceAction
             * or a SpeedProfileAction.
             * 
             * @return value of model property longitudinalAction
            */
            virtual std::shared_ptr<ILongitudinalAction> GetLongitudinalAction() const
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
            virtual std::shared_ptr<ILateralAction> GetLateralAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Sets visibility attributes on the reference entity/entities.
             * 
             * @return value of model property visibilityAction
            */
            virtual std::shared_ptr<IVisibilityAction> GetVisibilityAction() const
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
            virtual std::shared_ptr<ISynchronizeAction> GetSynchronizeAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Activates/ deactivates a controller on the reference entity/entities.
             * 
             * @return value of model property activateControllerAction
            */
            virtual std::shared_ptr<IActivateControllerAction> GetActivateControllerAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a controller to the reference entity/entities.
             * 
             * @return value of model property controllerAction
            */
            virtual std::shared_ptr<IControllerAction> GetControllerAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a position to the reference entity/entities.
             * 
             * @return value of model property teleportAction
            */
            virtual std::shared_ptr<ITeleportAction> GetTeleportAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Applies an AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
             * 
             * @return value of model property routingAction
            */
            virtual std::shared_ptr<IRoutingAction> GetRoutingAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the behaviour of an entity without moving it in the world, e.g. turning on a light or opening a door.
             * 
             * @return value of model property appearanceAction
            */
            virtual std::shared_ptr<IAppearanceAction> GetAppearanceAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property longitudinalAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLongitudinalAction() const = 0;
            /**
            * Retrieves whether property lateralAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLateralAction() const = 0;
            /**
            * Retrieves whether property visibilityAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVisibilityAction() const = 0;
            /**
            * Retrieves whether property synchronizeAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSynchronizeAction() const = 0;
            /**
            * Retrieves whether property activateControllerAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetActivateControllerAction() const = 0;
            /**
            * Retrieves whether property controllerAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetControllerAction() const = 0;
            /**
            * Retrieves whether property teleportAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTeleportAction() const = 0;
            /**
            * Retrieves whether property routingAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutingAction() const = 0;
            /**
            * Retrieves whether property appearanceAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAppearanceAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Container for a set of single values with a defined probability.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IProbabilityDistributionSet : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IProbabilityDistributionSet() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines set of elements with a defined probability.
             * 
             * @return value of model property elements
            */
            virtual std::vector<std::shared_ptr<IProbabilityDistributionSetElement>> GetElements() const
            {
                return std::vector<std::shared_ptr<IProbabilityDistributionSetElement>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetElementsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IProbabilityDistributionSetElement> GetElementsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Indicates a value and probability in a stochastic distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IProbabilityDistributionSetElement : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IProbabilityDistributionSetElement() = default;

            /**
             * From OpenSCENARIO class model specification:
             * A possible value in a stochastic distribution.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * This is used to define a propability of occurences for a specific value. Instead of a probability a defined count or
             * weight has to be defined. The probability can be calculated by the (1/sum(all weights in the
             * ProbabilityDistributionSet)) * weight.
             * 
             * @return value of model property weight
            */
            virtual double GetWeight() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IProperty>> GetProperties() const
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
            virtual std::vector<std::shared_ptr<IFile>> GetFiles() const
            {
                return std::vector<std::shared_ptr<IFile>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The semantic is subject of a contract between the provider of a simulation environment and the author of a scenario.
             * 
             * @return value of model property customContent
            */
            virtual std::vector<std::shared_ptr<ICustomContent>> GetCustomContent() const
            {
                return std::vector<std::shared_ptr<ICustomContent>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPropertiesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IProperty> GetPropertiesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetFilesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IFile> GetFilesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetCustomContentSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ICustomContent> GetCustomContentAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property properties is set
            * @return true when the optional property is set
            */
            virtual bool IsSetProperties() const = 0;
            /**
            * Retrieves whether property files is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFiles() const = 0;
            /**
            * Retrieves whether property customContent is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCustomContent() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Value of a user defined property.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Indicates a range for a distribution where the following rule applies: lowerLimit &lt;= value &lt;= upperLimit.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRange : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRange() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the lower limit of a range.
             * 
             * @return value of model property lowerLimit
            */
            virtual double GetLowerLimit() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the upper limit of a range.
             * 
             * @return value of model property upperLimit
            */
            virtual double GetUpperLimit() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Radius of tolerance circle around given position. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property tolerance
            */
            virtual double GetTolerance() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The position to be reached with the defined tolerance.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Checks if an amount of lanes next to the triggering entity is free from other entities. Evaluates to true, if the
         * specified area exists and is free, otherwise evaluates to false. The longitudinal distance to be checked is defined in
         * the lane coordinate system of the current lane of the triggering entity. In lateral direction the checked area is
         * defined by the lane boundaries.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeClearanceCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeClearanceCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Longitudinal distance behind reference point of the entity to be checked along lane centerline of the current lane of
             * the triggering entity. Orientation of entity towards lane determines backward direction. Velocity of entity is
             * irrelevant. Unit: [m]. Range: [0..inf[. Default if omitted: 0
             * 
             * @return value of model property distanceBackward
            */
            virtual double GetDistanceBackward() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Longitudinal distance in front of reference point of the entity to be checked along lane centerline of the current lane
             * of the triggering entity. Orientation of entity towards lane determines forward direction. Velocity of entity is
             * irrelevant. Unit: [m]. Range: [0..inf[. Default if omitted: 0
             * 
             * @return value of model property distanceForward
            */
            virtual double GetDistanceForward() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * If false, then entityRefs are only considered to be on the lane if their reference point is within the checked area;
             * otherwise the whole bounding box is considered.
             * 
             * @return value of model property freeSpace
            */
            virtual bool GetFreeSpace() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * If true, then also lanes in the opposite direction are considered; otherwise only lanes in the same direction are
             * considered.
             * 
             * @return value of model property oppositeLanes
            */
            virtual bool GetOppositeLanes() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The lanes to be checked to left and right of the triggering entity (positive to the y-axis). If omitted: all lanes are
             * checked.
             * 
             * @return value of model property relativeLaneRange
            */
            virtual std::vector<std::shared_ptr<IRelativeLaneRange>> GetRelativeLaneRange() const
            {
                return std::vector<std::shared_ptr<IRelativeLaneRange>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Constraint to check only specific entities. If it is not used then all entities are considered.
             * 
             * @return value of model property entityRef
            */
            virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRef() const
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetRelativeLaneRangeSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IRelativeLaneRange> GetRelativeLaneRangeAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEntityRefSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEntityRef> GetEntityRefAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property distanceBackward is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDistanceBackward() const = 0;
            /**
            * Retrieves whether property distanceForward is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDistanceForward() const = 0;
            /**
            * Retrieves whether property relativeLaneRange is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeLaneRange() const = 0;
            /**
            * Retrieves whether property entityRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityRef() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Definition of the coordinate system to be used for calculations. If not provided the value is interpreted as "entity".
             * 
             * @return value of model property coordinateSystem
            */
            virtual CoordinateSystem GetCoordinateSystem() const
            {
                return CoordinateSystem();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: distance is measured between closest bounding box points. False: reference point distance is used.
             * 
             * @return value of model property freespace
            */
            virtual bool GetFreespace() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system dimension(s) to be used for calculating distances.
             * 
             * @return value of model property relativeDistanceType
            */
            virtual RelativeDistanceType GetRelativeDistanceType() const
            {
                return RelativeDistanceType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Algorithm for path selection/calculation between two positions across roads. Only relevant, if CoordinateSystem is
             * "road"/"lane". Default value if omitted: "undefined".
             * 
             * @return value of model property routingAlgorithm
            */
            virtual RoutingAlgorithm GetRoutingAlgorithm() const
            {
                return RoutingAlgorithm();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The distance value. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property coordinateSystem is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCoordinateSystem() const = 0;
            /**
            * Retrieves whether property routingAlgorithm is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutingAlgorithm() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines a position derived from relative lane coordinates (dLane, ds / dsLane and offset) to a reference entity.
Where
         * ds is provided, the position is computed by the following process:
&nbsp;
<ol>
 <li>Find the closest road reference line
         * point to the reference entity. Travel the road reference line difference ds from the position of the reference
         * entity.</li>
 <li>Find the target lane by adding dLane to that of the reference entity and the intersection of the road
         * reference line's normal with its center lane.</li>
 <li>Apply offset as a lateral offset.</li>
</ol>

Alternatively
         * where dsLane is provided, the following process is used:
&nbsp;
<ol>
 <li>Find the closest lane center line point to the
         * reference entity. Travel the lane center line difference dsLane from the position of the reference entity in the
         * direction the reference entity is facing.</li>
 <li>Find the target lane by adding dLane to that of the reference
         * entity's and the intersection of the source lane's center lane normal with its center lane.</li>
 <li>Apply offset as a
         * lateral offset.</li>
</ol>

The target position may be either on the same road segment (defined by roadId), where the
         * reference entity is positioned, or on a connecting road. In the latter case, the ds-coordinate is calculated assuming
         * that the reference line of the road of the reference entity continues seamlessly on the connecting road (even if its
         * shape changes). It is also assumed that the lane, where the reference entity is located, continues seamlessly on the
         * connecting road (provided the lane's center line is unbroken between roads). It is assumed that the target position
         * relates to the routing of the reference entity. Otherwise, the calculation of the target position cannot be interpreted
         * within the OpenSCENARIO standard.

The relative lane coordinates (dLane, ds/dsLane, and offset) should be specified so
         * that the target position is within a road defined by roadId taken from the respective road network definition file
         * (external to the ASAM OpenSCENARIO). If the target position would be outside the road boundaries, the z-coordinate of
         * the position is undefined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeLanePosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeLanePosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The deviation value between the laneId of the lane, where the reference entity is located, and the target laneId.
             * 
             * @return value of model property dLane
            */
            virtual int GetDLane() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The offset along the road's reference line relative to the s-coordinate of the reference entity. Mutually exclusive with
             * dsLane. Unit: [m].
             * 
             * @return value of model property ds
            */
            virtual double GetDs() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The offset along the center line of the lane, where the reference entity is located. Mutually exclusive with ds. Unit:
             * [m].
             * 
             * @return value of model property dsLane
            */
            virtual double GetDsLane() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The lateral offset to the center line of the target lane (along the normal to the road's reference line). Missing value
             * is interpreted as 0. The positive value means the offset is applied in the direction of the t-axis being imagined at the
             * target s-position. Unit: [m].
             * 
             * @return value of model property offset
            */
            virtual double GetOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The Pitch and Roll angles are determined by the underlying road surface at the target position and therefore undefined
             * by the OpenSCENARIO standard.
The absolute reference context refers to the orientation with respect to the World
             * coordinate system. Only the Heading angle at the target position can be arbitrarily specified on the (X,Y)-plane
             * counting from the X-axis.
The relative reference context refers to the orientation with respect to the (s,t)-coordinate
             * system of the lane where the reference entity is located. Only the Heading angle at the target position on the
             * (s,t)-plane can be arbitrarily specified. To calculate the Heading, the imaginary straight axis at the target position
             * is built parallel to the tangent to the reference lane s-axis at the reference entity s-position on the reference road
             * s-axis. The Heading is counted from this imaginary axis.
Missing Orientation property is interpreted as the absolute
             * reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property ds is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDs() const = 0;
            /**
            * Retrieves whether property dsLane is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDsLane() const = 0;
            /**
            * Retrieves whether property offset is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOffset() const = 0;
            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A range of lanes to the left and/or right of a referenced entity. The properties "from" and "to" define the signed
         * numbers of lanes that are offset the referenced entity's current lane. (0 is the entity's current lane, positive is left
         * of the entity, negative is right of the entity).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeLaneRange : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeLaneRange() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The lower limit of the range, if missing "-inf"
             * 
             * @return value of model property from
            */
            virtual int GetFrom() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The upper limit of the range, if missing "+inf"
             * 
             * @return value of model property to
            */
            virtual int GetTo() const
            {
                return 0;
            }


            /**
            * Retrieves whether property from is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFrom() const = 0;
            /**
            * Retrieves whether property to is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTo() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Relative position in the x axis, using the coordinate system of the reference entity.
             * 
             * @return value of model property dx
            */
            virtual double GetDx() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative position in the y axis, using the coordinate system of the reference entity.
             * 
             * @return value of model property dy
            */
            virtual double GetDy() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative position in the z axis, using the coordinate system of the reference entity. Missing value is interpreted as 0.
             * 
             * @return value of model property dz
            */
            virtual double GetDz() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The absolute reference context refers to the orientation with respect to the World coordinate system (i.e., the
             * orientation of the reference entity is ignored).
The relative reference context refers to the orientation with respect
             * to the corresponding axes of the local (X,Y,Z)-coordinate system of the reference entity.
Missing Orientation property
             * is interpreted as the absolute reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property dz is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDz() const = 0;
            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Position defined in terms of the relative distance (ds) along the road's reference line and the relative lateral offset
         * (dt) to the road's reference line which are derived from the position of the reference entity.

The target position may
         * be either on the same road segment (defined by roadId) where the reference entity is positioned or on a connecting road.
         * In the latter case, the ds-coordinate is calculated along the road reference line of the connecting road. It is assumed
         * that the reference line of the road of the reference entity continues seamlessly on the connecting road (even if its
         * shape changes). It is assumed that the target position relates to the routing of the reference entity. Otherwise, the
         * calculation of the target position cannot be interpreted within the OpenSCENARIO standard.

The ds- and dt-coordinates
         * should be specified so that the target position is within a road defined by roadId taken from the respective road
         * network definition file (external to the ASAM OpenSCENARIO). If the target position would be outside the road
         * boundaries, the z-coordinate of the position is undefined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeRoadPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeRoadPosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The offset along the road's reference line relative to the s-coordinate of the reference entity. Unit: [m].
             * 
             * @return value of model property ds
            */
            virtual double GetDs() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The offset on the axis orthogonal to the road's reference line relative to the t-coordinate of the reference entity.
             * Unit: [m].
             * 
             * @return value of model property dt
            */
            virtual double GetDt() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The Pitch and Roll angles are determined by the underlying road surface at the target position and therefore undefined
             * by the OpenSCENARIO standard.
The absolute reference context refers to the orientation with respect to the World
             * coordinate system. Only the Heading angle at the target position can be arbitrarily specified on the (X,Y)-plane
             * counting from the X-axis.
The relative reference context refers to the orientation with respect to the (s,t)-coordinate
             * system of the road of the reference entity. Only the Heading angle at the target position on the (s,t)-plane can be
             * arbitrarily specified. To calculate the Heading, the imaginary straight axis at the target position is built parallel to
             * the tangent to the reference road s-axis at the s-position of the reference entity. The Heading is counted from this
             * imaginary axis.
Missing Orientation property is interpreted as the absolute reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The current relative speed of a triggering entity/entities to a reference entity is compared to a given value. The
         * logical operator used for the evaluation is defined by the rule attribute. If direction is used, only the projection to
         * that direction is used in the comparison, with the triggering entity/entities as the reference.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeSpeedCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeSpeedCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Direction of the speed (if not given, the total speed is considered).
             * 
             * @return value of model property direction
            */
            virtual DirectionalDimension GetDirection() const
            {
                return DirectionalDimension();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative speed value. Unit: [m/s].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property direction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDirection() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The semantics of the value (delta, offset, factor).
             * 
             * @return value of model property speedTargetValueType
            */
            virtual SpeedTargetValueType GetSpeedTargetValueType() const
            {
                return SpeedTargetValueType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative speed. Unit: [m/s]. Range: ]-inf..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Optional final phase of constant (final) speed.
             * 
             * @return value of model property steadyState
            */
            virtual std::shared_ptr<ISteadyState> GetSteadyState() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property steadyState is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSteadyState() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Signed number of lanes that is offset the reference entity's current lane.
             * 
             * @return value of model property value
            */
            virtual int GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Lane offset with respect to the reference entity's current lane position. Unit: [m].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * By setting continuous to true a controller comes into place and tries to maintain a continuous relative speed. This may
             * not be used together with Dynamics.time or Dynamics.distance.
             * 
             * @return value of model property continuous
            */
            virtual bool GetContinuous() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The value is either a delta (Unit: [m/s]) or a factor (no Unit).
             * 
             * @return value of model property speedTargetValueType
            */
            virtual SpeedTargetValueType GetSpeedTargetValueType() const
            {
                return SpeedTargetValueType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Value of the relative speed. This value is either given as a delta or as a factor. E.g. value=10 together with
             * valueType=delta means the entity/entities are supposed to drive 10m/s faster than the target reference entity. E.g.
             * value=1.1 together with valueType=factor means that the entity/entities are supposed to drive 10% faster than the target
             * reference entity. Unit: [m/s] or [1].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Position defined in terms of delta x, y, (z) relative to a reference entity's position in world coordinate space.
         * Optionally, an orientation can be defined in either absolute or relative values.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeWorldPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRelativeWorldPosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Relative x coordinate in the world coordinate system. Unit: [m].
             * 
             * @return value of model property dx
            */
            virtual double GetDx() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative y coordinate in the world coordinate system. Unit: [m].
             * 
             * @return value of model property dy
            */
            virtual double GetDy() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Relative z coordinate in the world coordinate system. Missing value is interpreted as 0. Unit: [m].
             * 
             * @return value of model property dz
            */
            virtual double GetDz() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity from which the relative world position is measured.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The absolute reference context refers to the orientation with respect to the World coordinate system (i.e., the
             * orientation of the reference entity is ignored).
The relative reference context refers to the angular shift of
             * orientation angles with respect to the corresponding orientation angles of the reference entity in the World coordinate
             * system. The positive value means a counter-clockwise shift.
Missing Orientation property is interpreted as the absolute
             * reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property dz is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDz() const = 0;
            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Friction scale factor. Range: [0..inf[.
             * 
             * @return value of model property frictionScaleFactor
            */
            virtual double GetFrictionScaleFactor() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the wetness of the road.
             * 
             * @return value of model property wetness
            */
            virtual Wetness GetWetness() const
            {
                return Wetness();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Additional properties to describe the road condition.
             * 
             * @return value of model property properties
            */
            virtual std::shared_ptr<IProperties> GetProperties() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property wetness is set
            * @return true when the optional property is set
            */
            virtual bool IsSetWetness() const = 0;
            /**
            * Retrieves whether property properties is set
            * @return true when the optional property is set
            */
            virtual bool IsSetProperties() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IFile> GetLogicFile() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * File path of a 3D model representing the virtual environment. This may be used for visual representation (rendering).
             * 
             * @return value of model property sceneGraphFile
            */
            virtual std::shared_ptr<IFile> GetSceneGraphFile() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name references and description of dynamic behavior for traffic signals defined in the road network file.
             * 
             * @return value of model property trafficSignals
            */
            virtual std::vector<std::shared_ptr<ITrafficSignalController>> GetTrafficSignals() const
            {
                return std::vector<std::shared_ptr<ITrafficSignalController>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the area of the road network, which is used by the entities. If not provided, then the whole logicFile and
             * sceneGraphFile will be used/loaded.
             * 
             * @return value of model property usedArea
            */
            virtual std::shared_ptr<IUsedArea> GetUsedArea() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetTrafficSignalsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ITrafficSignalController> GetTrafficSignalsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property logicFile is set
            * @return true when the optional property is set
            */
            virtual bool IsSetLogicFile() const = 0;
            /**
            * Retrieves whether property sceneGraphFile is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSceneGraphFile() const = 0;
            /**
            * Retrieves whether property trafficSignals is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSignals() const = 0;
            /**
            * Retrieves whether property usedArea is set
            * @return true when the optional property is set
            */
            virtual bool IsSetUsedArea() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Position defined in terms of the road segment (roadId), the distance (s) along the road's reference line, and the
         * lateral offset (t) to the road's reference line at that point. Orientation is optional.

The s- and t-coordinates should
         * be specified so that the target position is within a road defined by roadId taken from the respective road network
         * definition file (external to the ASAM OpenSCENARIO). If the target position would be outside the road boundaries, the
         * z-coordinate of the position is undefined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRoadPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IRoadPosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The ID of the target road taken from the respective road network definition file.
             * 
             * @return value of model property roadId
            */
            virtual std::string GetRoadId() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The s-coordinate taken along the road's reference line from the start point of the target road. Unit: [m]. Range:
             * [0..inf[.
             * 
             * @return value of model property s
            */
            virtual double GetS() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The t-coordinate taken on the axis orthogonal to the reference line of the road. Unit: [m].
             * 
             * @return value of model property t
            */
            virtual double GetT() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The Pitch and Roll angles are determined by the underlying road surface and therefore undefined by the OpenSCENARIO
             * standard.
The absolute reference context refers to the orientation with respect to the World coordinate system. Only the
             * Heading angle at the target position can be arbitrarily specified on the (X,Y)-plane counting from the X-axis.
The
             * relative reference context refers to the orientation with respect to the (s,t)-coordinate system of the target road that
             * is considered a reference orientation. Only the Heading angle at the target position can be arbitrarily specified on the
             * (s,t)-plane counting from the tangent to the road s-axis at the point with the target s-coordinate.
Missing Orientation
             * property is interpreted as the absolute reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * In a closed route, the last waypoint is followed by the first waypoint to create a closed route.
             * 
             * @return value of model property closed
            */
            virtual bool GetClosed() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the route. Required in catalogs.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * At least two waypoints are needed to define a route.
             * 
             * @return value of model property waypoints
            */
            virtual std::vector<std::shared_ptr<IWaypoint>> GetWaypoints() const
            {
                return std::vector<std::shared_ptr<IWaypoint>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetWaypointsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IWaypoint> GetWaypointsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Either a route definition or a catalog reference to the route the position is calculated from.
             * 
             * @return value of model property routeRef
            */
            virtual std::shared_ptr<IRouteRef> GetRouteRef() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
             * and t coordinates or to the orientation of the reference entity. Missing value is interpreted as (heading=0, pitch=0,
             * roll=0, type='absolute').
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position along the route.
             * 
             * @return value of model property inRoutePosition
            */
            virtual std::shared_ptr<IInRoutePosition> GetInRoutePosition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IRoute> GetRoute() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to route in the catalog.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property route is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoute() const = 0;
            /**
            * Retrieves whether property catalogReference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCatalogReference() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IAssignRouteAction> GetAssignRouteAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Controls an entity to follow a trajectory.
             * 
             * @return value of model property followTrajectoryAction
            */
            virtual std::shared_ptr<IFollowTrajectoryAction> GetFollowTrajectoryAction() const
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
            virtual std::shared_ptr<IAcquirePositionAction> GetAcquirePositionAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property assignRouteAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAssignRouteAction() const = 0;
            /**
            * Retrieves whether property followTrajectoryAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFollowTrajectoryAction() const = 0;
            /**
            * Retrieves whether property acquirePositionAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAcquirePositionAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Declaration of typed parameters with names and default values. It is used for creating variations of the same scenario.
             * The value of the parameters cannot change after startup during runtime.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Declaration of typed variables with names and default values. Their value can change during runtime, and can be used to
             * trigger Events in the scenario or on external side.
             * 
             * @return value of model property variableDeclarations
            */
            virtual std::vector<std::shared_ptr<IVariableDeclaration>> GetVariableDeclarations() const
            {
                return std::vector<std::shared_ptr<IVariableDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A list of locations to look up catalog files. Each catalog element type has its own list.
             * 
             * @return value of model property catalogLocations
            */
            virtual std::shared_ptr<ICatalogLocations> GetCatalogLocations() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to the road network.
             * 
             * @return value of model property roadNetwork
            */
            virtual std::shared_ptr<IRoadNetwork> GetRoadNetwork() const
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
            virtual std::shared_ptr<IEntities> GetEntities() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Container for the dynamic content of the scenario.
             * 
             * @return value of model property storyboard
            */
            virtual std::shared_ptr<IStoryboard> GetStoryboard() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetVariableDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IVariableDeclaration> GetVariableDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;
            /**
            * Retrieves whether property variableDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVariableDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A scenario object represents a runtime object that is created from an EntityObject (vehicle type, pedestrian type,
         * miscellaneous object type and external object reference type) and Controllers. Miscellaneous objects and external object
         * references must not have controllers.
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The EntityObject (either instance of type Vehicle, Pedestrian or MiscObject).
             * 
             * @return value of model property entityObject
            */
            virtual std::shared_ptr<IEntityObject> GetEntityObject() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Controller of the EntityObject instance.
             * 
             * @return value of model property objectController
            */
            virtual std::vector<std::shared_ptr<IObjectController>> GetObjectController() const
            {
                return std::vector<std::shared_ptr<IObjectController>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetObjectControllerSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IObjectController> GetObjectControllerAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property objectController is set
            * @return true when the optional property is set
            */
            virtual bool IsSetObjectController() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRef() const
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the type to determine that all entities of a specific type are members.
             * 
             * @return value of model property byType
            */
            virtual std::vector<std::shared_ptr<IByType>> GetByType() const
            {
                return std::vector<std::shared_ptr<IByType>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEntityRefSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEntityRef> GetEntityRefAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetByTypeSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IByType> GetByTypeAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property entityRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityRef() const = 0;
            /**
            * Retrieves whether property byType is set
            * @return true when the optional property is set
            */
            virtual bool IsSetByType() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Reference to a sensor, whose definition is beyond OpenSCENARIO files and catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISensorReference : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISensorReference() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the sensor. The semantics of the sensor names are subject of a contract between the author of a scenario and the
             * provider of a simulation environment.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Set of references to sensors, whose definition is beyond OpenSCENARIO files and catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISensorReferenceSet : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISensorReferenceSet() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Set of references to sensors.
             * 
             * @return value of model property sensorReferences
            */
            virtual std::vector<std::shared_ptr<ISensorReference>> GetSensorReferences() const
            {
                return std::vector<std::shared_ptr<ISensorReference>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetSensorReferencesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ISensorReference> GetSensorReferencesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IPolyline> GetPolyline() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Clothoid property of a shape.
             * 
             * @return value of model property clothoid
            */
            virtual std::shared_ptr<IClothoid> GetClothoid() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * NURBS property of a shape.
             * 
             * @return value of model property nurbs
            */
            virtual std::shared_ptr<INurbs> GetNurbs() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property polyline is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPolyline() const = 0;
            /**
            * Retrieves whether property clothoid is set
            * @return true when the optional property is set
            */
            virtual bool IsSetClothoid() const = 0;
            /**
            * Retrieves whether property nurbs is set
            * @return true when the optional property is set
            */
            virtual bool IsSetNurbs() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Time value of the simulation time condition. Unit: [s].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action describes the transition of an entity's speed to a target speed. SpeedActionDynamics specifies the
         * transition with respects to time or distance combined with a shape.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~ISpeedAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines how the target speed is reached.
             * 
             * @return value of model property speedActionDynamics
            */
            virtual std::shared_ptr<ITransitionDynamics> GetSpeedActionDynamics() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed which should be reached.
             * 
             * @return value of model property speedActionTarget
            */
            virtual std::shared_ptr<ISpeedActionTarget> GetSpeedActionTarget() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Defines the target speed as relative speed to a reference entity. Unit: [m/s].
             * 
             * @return value of model property relativeTargetSpeed
            */
            virtual std::shared_ptr<IRelativeTargetSpeed> GetRelativeTargetSpeed() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed as absolute speed. Unit: [m/s].
             * 
             * @return value of model property absoluteTargetSpeed
            */
            virtual std::shared_ptr<IAbsoluteTargetSpeed> GetAbsoluteTargetSpeed() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property relativeTargetSpeed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeTargetSpeed() const = 0;
            /**
            * Retrieves whether property absoluteTargetSpeed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAbsoluteTargetSpeed() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Compares a triggering entity's/entities' speed to a target speed. The logical operator for the comparison is given by
         * the rule attribute. If direction is used, only the projection to that direction is used in the comparison.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISpeedCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Direction of the speed (if not given, the total speed is considered).
             * 
             * @return value of model property direction
            */
            virtual DirectionalDimension GetDirection() const
            {
                return DirectionalDimension();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Speed value of the speed condition. Unit: [m/s].
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property direction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDirection() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action describes the change of speed in terms of a series of speed targets over time.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedProfileAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISpeedProfileAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity. If set, the speed values will be interpreted as relative delta to the speed of the referenced entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines whether to apply strictly linear interpolation between speed target values (mode=position), or to apply jerk
             * (change rate of acceleration/deceleration) and other optional constraints of the Performance class of a Vehicle entity
             * resulting in a smoother speed profile curve (mode=follow). For mode=follow the acceleration is zero at the start and end
             * of the profile.
             * 
             * @return value of model property followingMode
            */
            virtual FollowingMode GetFollowingMode() const
            {
                return FollowingMode();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines limitations to the action in terms of acceleration, deceleration, speed and/or jerk. These settings has
             * precedence over any Performance settings (applies to vehicles only).
             * 
             * @return value of model property dynamicConstraints
            */
            virtual std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a series of speed targets.
             * 
             * @return value of model property speedProfileEntry
            */
            virtual std::vector<std::shared_ptr<ISpeedProfileEntry>> GetSpeedProfileEntry() const
            {
                return std::vector<std::shared_ptr<ISpeedProfileEntry>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetSpeedProfileEntrySize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<ISpeedProfileEntry> GetSpeedProfileEntryAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property entityRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityRef() const = 0;
            /**
            * Retrieves whether property dynamicConstraints is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDynamicConstraints() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Describes a speed target for a SpeedProfileAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedProfileEntry : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISpeedProfileEntry() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The speed to reach. Unit: [m/s].
             * 
             * @return value of model property speed
            */
            virtual double GetSpeed() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The time to reach the specified speed. First entry specifies delta from start of the action, remaining entries delta
             * from previous entry. If omitted, the speed will be reached as soon as possible given the performance settings. Unit:
             * [s]. Range: [0..inf[.
             * 
             * @return value of model property time
            */
            virtual double GetTime() const
            {
                return 0;
            }


            /**
            * Retrieves whether property time is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTime() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Duration time of still standing to let the logical expression become true. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual double GetDuration() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Final phase of constant (final) speed, start of which defined by distance or time.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISteadyState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ISteadyState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The target distance steady state (distance from object to target)
             * 
             * @return value of model property targetDistanceSteadyState
            */
            virtual std::shared_ptr<ITargetDistanceSteadyState> GetTargetDistanceSteadyState() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The target time steady state (remaining time for object to reach target position).
             * 
             * @return value of model property targetTimeSteadyState
            */
            virtual std::shared_ptr<ITargetTimeSteadyState> GetTargetTimeSteadyState() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Top level container for all stochastic distribution elements.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStochastic : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IStochastic() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the total number of runs for each stochastic distribution.
             * 
             * @return value of model property numberOfTestRuns
            */
            virtual uint32_t GetNumberOfTestRuns() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the seed which is used to generate the random values. A identical seed shall generate the same set of random
             * values.
             * 
             * @return value of model property randomSeed
            */
            virtual double GetRandomSeed() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a single stochastic distribution to one parameter.
             * 
             * @return value of model property stochasticDistributions
            */
            virtual std::vector<std::shared_ptr<IStochasticDistribution>> GetStochasticDistributions() const
            {
                return std::vector<std::shared_ptr<IStochasticDistribution>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetStochasticDistributionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IStochasticDistribution> GetStochasticDistributionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property randomSeed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRandomSeed() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Container for a stochastic distribution which applies to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStochasticDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IStochasticDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the parameter name these distribution values should be applied to.
             * 
             * @return value of model property parameterName
            */
            virtual std::string GetParameterName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a single stochastic distribution to one parameter.
             * 
             * @return value of model property stochasticDistributionType
            */
            virtual std::shared_ptr<IStochasticDistributionType> GetStochasticDistributionType() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Container for a stochastic distribution type which can be applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStochasticDistributionType : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IStochasticDistributionType() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a set of values with a defined probability
             * 
             * @return value of model property probabilityDistributionSet
            */
            virtual std::shared_ptr<IProbabilityDistributionSet> GetProbabilityDistributionSet() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a normal distribution.
             * 
             * @return value of model property normalDistribution
            */
            virtual std::shared_ptr<INormalDistribution> GetNormalDistribution() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a uniform distribution.
             * 
             * @return value of model property uniformDistribution
            */
            virtual std::shared_ptr<IUniformDistribution> GetUniformDistribution() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a poisson distribution.
             * 
             * @return value of model property poissonDistribution
            */
            virtual std::shared_ptr<IPoissonDistribution> GetPoissonDistribution() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a histogram.
             * 
             * @return value of model property histogram
            */
            virtual std::shared_ptr<IHistogram> GetHistogram() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a user defined stochastic distribution.
             * 
             * @return value of model property userDefinedDistribution
            */
            virtual std::shared_ptr<IUserDefinedDistribution> GetUserDefinedDistribution() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the acts of the story.
             * 
             * @return value of model property acts
            */
            virtual std::vector<std::shared_ptr<IAct>> GetActs() const
            {
                return std::vector<std::shared_ptr<IAct>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetActsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IAct> GetActsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IInit> GetInit() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * List of stories defined in a story board.
             * 
             * @return value of model property stories
            */
            virtual std::vector<std::shared_ptr<IStory>> GetStories() const
            {
                return std::vector<std::shared_ptr<IStory>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Trigger to stop the Storyboard instance.
             * 
             * @return value of model property stopTrigger
            */
            virtual std::shared_ptr<ITrigger> GetStopTrigger() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetStoriesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IStory> GetStoriesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property stories is set
            * @return true when the optional property is set
            */
            virtual bool IsSetStories() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The state or the transition of the storyboard element instance for which the condition becomes true.
             * 
             * @return value of model property state
            */
            virtual StoryboardElementState GetState() const
            {
                return StoryboardElementState();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the referenced Storyboard instance.
             * 
             * @return value of model property storyboardElementRef
            */
            virtual std::shared_ptr<INamedReference<IStoryboardElement>> GetStoryboardElementRef() const
            {
                return std::make_shared<INamedReference<IStoryboardElement>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Type of storyboard element instance.
             * 
             * @return value of model property storyboardElementType
            */
            virtual StoryboardElementType GetStoryboardElementType() const
            {
                return StoryboardElementType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Azimuth of the sun, counted clockwise, 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: [rad]. Range: [0..2*PI].
             * 
             * @return value of model property azimuth
            */
            virtual double GetAzimuth() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: [rad]. Range: [-PI..PI].
             * 
             * @return value of model property elevation
            */
            virtual double GetElevation() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Illuminance of the sun, direct sunlight is around 100,000 lx. Unit: [lx]. Range: [0..inf[. Default if missing: 0.
             * 
             * @return value of model property illuminance
            */
            virtual double GetIlluminance() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Illuminance of the sun, direct sunlight is around 100,000 lx. Unit: [lx]. Range: [0..inf[.
             * 
             * @return value of model property intensity
            */
            virtual double GetIntensity() const
            {
                return 0;
            }


            /**
            * Retrieves whether property illuminance is set
            * @return true when the optional property is set
            */
            virtual bool IsSetIlluminance() const = 0;
            /**
            * Retrieves whether property intensity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetIntensity() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Synchronizes an entity's arrival at a destination with a master entity. Both entities are provided with their own
         * reference position which shall be reached at the same time. Final speed can be specified. Note that the reference
         * positions can be different or identical.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISynchronizeAction : public virtual IOpenScenarioModelElement, public IMotionControlAction
        {
        public:
            virtual ~ISynchronizeAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * A reference to the master entity.
             * 
             * @return value of model property masterEntityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetMasterEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Radius of tolerance circle around given TargetPosition. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property targetTolerance
            */
            virtual double GetTargetTolerance() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Radius of tolerance circle around given TargetPositionMaster. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property targetToleranceMaster
            */
            virtual double GetTargetToleranceMaster() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The target position for the master entity.
             * 
             * @return value of model property targetPositionMaster
            */
            virtual std::shared_ptr<IPosition> GetTargetPositionMaster() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The target position for the entity that should be synchronized.
             * 
             * @return value of model property targetPosition
            */
            virtual std::shared_ptr<IPosition> GetTargetPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The speed that the synchronized entity should have at its target position.
             * 
             * @return value of model property finalSpeed
            */
            virtual std::shared_ptr<IFinalSpeed> GetFinalSpeed() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property targetTolerance is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTargetTolerance() const = 0;
            /**
            * Retrieves whether property targetToleranceMaster is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTargetToleranceMaster() const = 0;
            /**
            * Retrieves whether property finalSpeed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFinalSpeed() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The distance between object and target position.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITargetDistanceSteadyState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITargetDistanceSteadyState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The distance. Unit: [m]. Range: ]0..inf[.
             * 
             * @return value of model property distance
            */
            virtual double GetDistance() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The remaining time for object to reach target position.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITargetTimeSteadyState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITargetTimeSteadyState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The time to reach target position. Unit: [s]. Range: ]0..inf[.
             * 
             * @return value of model property time
            */
            virtual double GetTime() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Condition based on the headway time between a triggering entity and a reference entity. The reference entity is assumed
         * to be leading/ahead, so the triggering entity is trailing. TimeHeadway is calculated similar to TimeToCollision
         * (distance divided by relative speed, no acceleration) with the following exception: For the relative speed only the
         * speed of the triggering entity is considered but not the speed of the reference entity. This is because it doesn't
         * matter where the reference entity moves, only the time it takes for the triggering entity to reach the current position
         * of the reference entity is calculated. The logical operator used for comparison is defined by the rule attribute. The
         * property "alongRoute" is deprecated. If "coordinateSystem" or "relativeDistanceType" are set, "alongRoute" is ignored.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeHeadwayCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeHeadwayCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
             * 
             * @return value of model property alongRoute
            */
            virtual bool GetAlongRoute() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system to be used for calculations. If not provided the value is interpreted as "entity".
             * If set, "alongRoute" is ignored.
             * 
             * @return value of model property coordinateSystem
            */
            virtual CoordinateSystem GetCoordinateSystem() const
            {
                return CoordinateSystem();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity to which the time headway is computed.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<INamedReference<IEntity>> GetEntityRef() const
            {
                return std::make_shared<INamedReference<IEntity>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: time headway is measured using the distance between closest bounding box points. False: reference point distance
             * is used.
             * 
             * @return value of model property freespace
            */
            virtual bool GetFreespace() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system dimension(s) to be used for calculating distances. If set "alongRoute" is ignored.
             * If not provided, value is interpreted as "euclideanDistance".
             * 
             * @return value of model property relativeDistanceType
            */
            virtual RelativeDistanceType GetRelativeDistanceType() const
            {
                return RelativeDistanceType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Algorithm for path selection/calculation between two positions across roads. Only relevant, if CoordinateSystem is
             * "road"/"lane". Default value if omitted: "undefined".
             * 
             * @return value of model property routingAlgorithm
            */
            virtual RoutingAlgorithm GetRoutingAlgorithm() const
            {
                return RoutingAlgorithm();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The time headway value. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property alongRoute is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAlongRoute() const = 0;
            /**
            * Retrieves whether property coordinateSystem is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCoordinateSystem() const = 0;
            /**
            * Retrieves whether property relativeDistanceType is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeDistanceType() const = 0;
            /**
            * Retrieves whether property routingAlgorithm is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutingAlgorithm() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual bool GetAnimation() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Datetime value.
             * 
             * @return value of model property dateTime
            */
            virtual DateTime GetDateTime() const
            {
                return {};
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Datetime value for comparison.
             * 
             * @return value of model property dateTime
            */
            virtual DateTime GetDateTime() const
            {
                return {};
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<INone> GetNone() const
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
            virtual std::shared_ptr<ITiming> GetTiming() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property none is set
            * @return true when the optional property is set
            */
            virtual bool IsSetNone() const = 0;
            /**
            * Retrieves whether property timing is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTiming() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The currently predicted time to collision of a triggering entity/entities and either a reference entity or an explicit
         * position is compared to a given time value. Time to collision is calculated as the distance divided by the relative
         * speed. Acceleration of entities is not taken into consideration. For the relative speed calculation the same coordinate
         * system and relative distance type applies as for the distance calculation. If the relative speed is negative, which
         * means the entity is moving away from the position / the entities are moving away from each other, then the time to
         * collision cannot be predicted and the condition evaluates to false. The logical operator for comparison is defined by
         * the rule attribute. The property "alongRoute" is deprecated. If "coordinateSystem" or "relativeDistanceType" are set,
         * "alongRoute" is ignored.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeToCollisionCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITimeToCollisionCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used. This
             * value is ignored if "coordinateSystem" or "relativeDistanceType" is set.
             * 
             * @return value of model property alongRoute
            */
            virtual bool GetAlongRoute() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system to be used for calculations. If not provided the value is interpreted as "entity".
             * If set, "alongRoute" is ignored.
             * 
             * @return value of model property coordinateSystem
            */
            virtual CoordinateSystem GetCoordinateSystem() const
            {
                return CoordinateSystem();
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: time to collision is measured using the distance between closest bounding box points. False: reference point
             * distance is used.
             * 
             * @return value of model property freespace
            */
            virtual bool GetFreespace() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the coordinate system dimension(s) to be used for calculating distances. If set "alongRoute" is ignored.
             * If not provided, value is interpreted as "euclideanDistance".
             * 
             * @return value of model property relativeDistanceType
            */
            virtual RelativeDistanceType GetRelativeDistanceType() const
            {
                return RelativeDistanceType();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Algorithm for path selection/calculation between two positions across roads. Only relevant, if CoordinateSystem is
             * "road"/"lane". Default value if omitted: "undefined".
             * 
             * @return value of model property routingAlgorithm
            */
            virtual RoutingAlgorithm GetRoutingAlgorithm() const
            {
                return RoutingAlgorithm();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The time to collision value. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The explicit position or a position defined through the current position of a reference entity.
             * 
             * @return value of model property timeToCollisionConditionTarget
            */
            virtual std::shared_ptr<ITimeToCollisionConditionTarget> GetTimeToCollisionConditionTarget() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property alongRoute is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAlongRoute() const = 0;
            /**
            * Retrieves whether property coordinateSystem is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCoordinateSystem() const = 0;
            /**
            * Retrieves whether property relativeDistanceType is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRelativeDistanceType() const = 0;
            /**
            * Retrieves whether property routingAlgorithm is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRoutingAlgorithm() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual std::shared_ptr<IEntityRef> GetEntityRef() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property position is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPosition() const = 0;
            /**
            * Retrieves whether property entityRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetEntityRef() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual ReferenceContext GetDomainAbsoluteRelative() const
            {
                return ReferenceContext();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Introduction of a global offset for all time values. Unit: [s]. Range: ]-inf..inf[.
             * 
             * @return value of model property offset
            */
            virtual double GetOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Scaling factor for time values. While values smaller than 1.0 represent negative scaling, values larger than 1.0 will
             * result in positive scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
             * 
             * @return value of model property scale
            */
            virtual double GetScale() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Name of the traffic that is created. This name can be referenced when stopping the traffic with StopTrafficAction.
             * 
             * @return value of model property trafficName
            */
            virtual std::string GetTrafficName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a source of traffic at a specific position.
             * 
             * @return value of model property trafficSourceAction
            */
            virtual std::shared_ptr<ITrafficSourceAction> GetTrafficSourceAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines a sink of traffic at a specific position.
             * 
             * @return value of model property trafficSinkAction
            */
            virtual std::shared_ptr<ITrafficSinkAction> GetTrafficSinkAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines swarm traffic around a given central entity.
             * 
             * @return value of model property trafficSwarmAction
            */
            virtual std::shared_ptr<ITrafficSwarmAction> GetTrafficSwarmAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Stops traffic instances (swarm, source, sink).
             * 
             * @return value of model property trafficStopAction
            */
            virtual std::shared_ptr<ITrafficStopAction> GetTrafficStopAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property trafficName is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficName() const = 0;
            /**
            * Retrieves whether property trafficSourceAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSourceAction() const = 0;
            /**
            * Retrieves whether property trafficSinkAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSinkAction() const = 0;
            /**
            * Retrieves whether property trafficSwarmAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSwarmAction() const = 0;
            /**
            * Retrieves whether property trafficStopAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficStopAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Distribution of vehicle categories within the traffic.
             * 
             * @return value of model property vehicleCategoryDistribution
            */
            virtual std::shared_ptr<IVehicleCategoryDistribution> GetVehicleCategoryDistribution() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Distribution of vehicle roles within the traffic.
             * 
             * @return value of model property vehicleRoleDistribution
            */
            virtual std::shared_ptr<IVehicleRoleDistribution> GetVehicleRoleDistribution() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Distribution of controllers within this traffic.
             * 
             * @return value of model property controllerDistribution
            */
            virtual std::shared_ptr<IControllerDistribution> GetControllerDistribution() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property vehicleRoleDistribution is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVehicleRoleDistribution() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Action used to set or override a signals state or a signal controllers state.
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
            virtual std::shared_ptr<ITrafficSignalControllerAction> GetTrafficSignalControllerAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Action used to set a specific phase of a signal controller.
             * 
             * @return value of model property trafficSignalStateAction
            */
            virtual std::shared_ptr<ITrafficSignalStateAction> GetTrafficSignalStateAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property trafficSignalControllerAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSignalControllerAction() const = 0;
            /**
            * Retrieves whether property trafficSignalStateAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficSignalStateAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * State of the signal to be reached for the condition to become true.
             * 
             * @return value of model property state
            */
            virtual std::string GetState() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The controller provides identical Phases for one or more dynamic signals. Controllers serve as wrappers for the behavior
         * of a group of signals. (see OpenDRIVE definition of a Controller and civil engineering specifications like the German
         * "Richtlinien f&#252;r Lichtsignalanlagen" about Signalgroups)
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalController : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalController() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The delay to the controller in the reference property. A controller having a delay to another one means that its first
             * phase virtually starts delaytime seconds after the start of the reference's first phase. This can be used to define a
             * progressive signal system, but only makes sense, if the total times of all connected controllers are the same. If delay
             * is set, reference is required. Unit: [s]. Range: [0..inf[.
             * 
             * @return value of model property delay
            */
            virtual double GetDelay() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * ID of the traffic signal controller in the road network, e.g. a OpenDRIVE controller ID.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * A reference (ID) to the connected controller in the road network. If reference is set, a delay is required.
             * 
             * @return value of model property reference
            */
            virtual std::string GetReference() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Phases of a TrafficSignalController.
             * 
             * @return value of model property phases
            */
            virtual std::vector<std::shared_ptr<IPhase>> GetPhases() const
            {
                return std::vector<std::shared_ptr<IPhase>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPhasesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPhase> GetPhasesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property delay is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDelay() const = 0;
            /**
            * Retrieves whether property reference is set
            * @return true when the optional property is set
            */
            virtual bool IsSetReference() const = 0;
            /**
            * Retrieves whether property phases is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPhases() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Targeted phase of the signal controller. The available phases are defined in type RoadNetwork under the property
             * trafficSignalControllers.
             * 
             * @return value of model property phase
            */
            virtual std::string GetPhase() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * ID of the signal controller in a road network.
             * 
             * @return value of model property trafficSignalControllerRef
            */
            virtual std::shared_ptr<INamedReference<ITrafficSignalController>> GetTrafficSignalControllerRef() const
            {
                return std::make_shared<INamedReference<ITrafficSignalController>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
             * 
             * @return value of model property phaseRef
            */
            virtual std::vector<std::shared_ptr<IPhase>> GetPhaseRef() const
            {
                return std::vector<std::shared_ptr<IPhase>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPhaseRefSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPhase> GetPhaseRefAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property phaseRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPhaseRef() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Name of the phase of the signal controller to be reached for the condition to become true. The available phases are
             * defined in type RoadNetwork under the property trafficSignalControllers.
             * 
             * @return value of model property phase
            */
            virtual std::string GetPhase() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * ID of the referenced signal controller in a road network.
             * 
             * @return value of model property trafficSignalControllerRef
            */
            virtual std::shared_ptr<INamedReference<ITrafficSignalController>> GetTrafficSignalControllerRef() const
            {
                return std::make_shared<INamedReference<ITrafficSignalController>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
             * 
             * @return value of model property phaseRef
            */
            virtual std::vector<std::shared_ptr<IPhase>> GetPhaseRef() const
            {
                return std::vector<std::shared_ptr<IPhase>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPhaseRefSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPhase> GetPhaseRefAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property phaseRef is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPhaseRef() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * State of a traffic signal group controlled with the same controller within a phase. One group state per phase.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalGroupState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalGroupState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * State of all signals controlled by this TrafficSignalController, e.g. the visual information "off;off;on". The number of
             * values in the state depends on the traffic signal in the roadnetwork , e.g. type and subtype in OpenDRIVE
             * 
             * @return value of model property state
            */
            virtual std::string GetState() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * State of a traffic signal for this phase. One state per phase and traffic signal.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalState : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficSignalState() = default;

            /**
             * From OpenSCENARIO class model specification:
             * State of the signal, e.g. the visual information "off;off;on". The number of values in the state depends on the traffic
             * signal in the roadnetwork , e.g. type and subtype in OpenDRIVE
             * 
             * @return value of model property state
            */
            virtual std::string GetState() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * ID of the referenced signal in a road network. The signal ID must be listed in TrafficSignal list of the RoadNetwork.
             * 
             * @return value of model property trafficSignalId
            */
            virtual std::string GetTrafficSignalId() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Targeted state of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
             * 
             * @return value of model property state
            */
            virtual std::string GetState() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Defines the radius of the traffic sink where vehicles disappear around the specified position. Unit: [m]. Range:
             * [0..inf[.
             * 
             * @return value of model property radius
            */
            virtual double GetRadius() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the rate on which vehicles disappear at the sinks location. If omitted, rate is interpreted as 'inf'. Unit:
             * [vehicles/s]. Range: [0..inf[.
             * 
             * @return value of model property rate
            */
            virtual double GetRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the position of the traffic sink.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the vehicle and controller distribution for the sink.
             * 
             * @return value of model property trafficDefinition
            */
            virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property rate is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRate() const = 0;
            /**
            * Retrieves whether property trafficDefinition is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTrafficDefinition() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Defines the radius of the traffic source where vehicles appear around the specific position. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property radius
            */
            virtual double GetRadius() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the rate on which vehicles appear at the source location. Unit: [vehicles/s]. Range: [0..inf[.
             * 
             * @return value of model property rate
            */
            virtual double GetRate() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The optional starting speed of a scenario object. Unit: [m/s]. Range: [0..inf[.
             * 
             * @return value of model property speed
            */
            virtual double GetSpeed() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The optional starting velocity of a scenario object. Unit: [m/s]. Range: [0..inf[.
             * 
             * @return value of model property velocity
            */
            virtual double GetVelocity() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the position of the traffic source.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the vehicle and controller distribution for the source.
             * 
             * @return value of model property trafficDefinition
            */
            virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property speed is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSpeed() const = 0;
            /**
            * Retrieves whether property velocity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVelocity() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This action stops one or more  traffic instances. The instances to be stopped are identified by their name. All active
         * traffic instances with this name are stopped.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficStopAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrafficStopAction() = default;



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines swarm traffic within an elliptical planview around a given central entity. The innerRadius defines the minimum
         * distance between the central vehicle and swarm traffic. The latter is set up in the free space between the circular area
         * defined by innerRadius and the outline of the ellipsis defined by the two semi axis attributes. While vehicles are
         * created in this area, they are removed if they leave it crossing the it ellipsis’ outline. Within the innerRadius,
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
             * Radius of the inner circular area around the central entity. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property innerRadius
            */
            virtual double GetInnerRadius() const
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
            virtual uint32_t GetNumberOfVehicles() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Offset in longitudinal direction related to the x-axis of the central entity. Unit: [m].
             * 
             * @return value of model property offset
            */
            virtual double GetOffset() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMajorAxis defines the
             * half length of the major axis of this ellipsis. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property semiMajorAxis
            */
            virtual double GetSemiMajorAxis() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMinorAxis defines the
             * half length of the minor axis of this ellipsis. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property semiMinorAxis
            */
            virtual double GetSemiMinorAxis() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The optional starting velocity of the created entities.<b> </b>Unit: [m/s]. Range: [0..inf[.
             * 
             * @return value of model property velocity
            */
            virtual double GetVelocity() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The entity that represents the center of a swarm.
             * 
             * @return value of model property centralObject
            */
            virtual std::shared_ptr<ICentralSwarmObject> GetCentralObject() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Specifies properties of autonomous traffic with respect to vehicle and driver distributions.
             * 
             * @return value of model property trafficDefinition
            */
            virtual std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The optional starting speeds of the created entities. Unit: [m/s]; Range for lower and upper limit: [0..inf[.
             * Distributed uniformly/equally.
             * 
             * @return value of model property initialSpeedRange
            */
            virtual std::shared_ptr<IRange> GetInitialSpeedRange() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Distribution of vehicle directions of travel relative to the centralObject. If omitted, direction of travel is
             * distributed uniformly.
             * 
             * @return value of model property directionOfTravelDistribution
            */
            virtual std::shared_ptr<IDirectionOfTravelDistribution> GetDirectionOfTravelDistribution() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property velocity is set
            * @return true when the optional property is set
            */
            virtual bool IsSetVelocity() const = 0;
            /**
            * Retrieves whether property initialSpeedRange is set
            * @return true when the optional property is set
            */
            virtual bool IsSetInitialSpeedRange() const = 0;
            /**
            * Retrieves whether property directionOfTravelDistribution is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDirectionOfTravelDistribution() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * If 'true', then the trajectory forms a loop, where the end of the trajectory is connected to the start of the trajectory
             * by a straight line. For continuous derivatives of this segment, end and start point can also be at the same position and
             * form a zero-length segment. A FollowTrajectoryAction with a closed trajectory doesn't end regularly but has to be
             * stopped. If 'true' then the timing information in the trajectory cannot be used as absolute values.
             * 
             * @return value of model property closed
            */
            virtual bool GetClosed() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the trajectory type. Required if used in catalog.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The shape of a trajectory (Polyline, Clothoid or Nurbs)
             * 
             * @return value of model property shape
            */
            virtual std::shared_ptr<IShape> GetShape() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Defines the (lateral) trajectory following behavior of the actor: Mode 'position' forces the actor to strictly adhere to
             * the trajectory. In contrast, mode 'follow' hands over control to the actor. In this mode, the actor tries to follow the
             * trajectory as best as he can. This may be restricted by dynamics constraints and/or control loop implementation. In mode
             * 'follow' the resulting path of the entity is not guaranteed to be identical for every simulation environment.
             * 
             * @return value of model property followingMode
            */
            virtual FollowingMode GetFollowingMode() const
            {
                return FollowingMode();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of a trajectory type in terms of shape and optional time domain.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrajectoryPosition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrajectoryPosition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Represents the s coordinate from the start of the trajectory. Unit: [m]. Range: [0..arclength of the trajectory].
             * 
             * @return value of model property s
            */
            virtual double GetS() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Represents the t coordinate orthogonal to the arclength of the trajectory. Missing value is interpreted as 0. Unit: [m].
             * 
             * @return value of model property t
            */
            virtual double GetT() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The Pitch and Roll angles are determined by the underlying road surface at the target position and therefore undefined
             * by the OpenSCENARIO standard.
The absolute reference context refers to the orientation with respect to the World
             * coordinate system. Only the Heading angle at the target position can be arbitrarily specified on the (X,Y)-plane
             * counting from the X-axis.
The relative reference context refers to the orientation with respect to the (s,t)-coordinate
             * system of the reference trajectory. Only the Heading angle at the target position on the (s,t)-plane can be arbitrarily
             * specified. To calculate the Heading, the imaginary straight axis at the target position is built parallel to the tangent
             * to the reference trajectory s-axis at the point with the target s-coordinate. The Heading is counted from this imaginary
             * axis.
If the reference trajectory s-axis shape contains sharp "kinks" (e.g., vertices on the polyline shape), the
             * relative reference context with respect to such points cannot be interpreted within the OpenSCENARIO standard.
Missing
             * Orientation property is interpreted as the absolute reference context with Heading=Pitch=Roll=0.
             * 
             * @return value of model property orientation
            */
            virtual std::shared_ptr<IOrientation> GetOrientation() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Either a trajectory definition or a catalog reference to the trajectory the position is calculated from.
             * 
             * @return value of model property trajectoryRef
            */
            virtual std::shared_ptr<ITrajectoryRef> GetTrajectoryRef() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property t is set
            * @return true when the optional property is set
            */
            virtual bool IsSetT() const = 0;
            /**
            * Retrieves whether property orientation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetOrientation() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines a reference to a trajectory. Either an inline definition of a trajectory or a trajectory in a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrajectoryRef : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~ITrajectoryRef() = default;

            /**
             * From OpenSCENARIO class model specification:
             * A trajectory definition.
             * 
             * @return value of model property trajectory
            */
            virtual std::shared_ptr<ITrajectory> GetTrajectory() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a trajectory in a catalog.
             * 
             * @return value of model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReference> GetCatalogReference() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The semantics of the value: 'rate', 'time' or 'distance'.
             * 
             * @return value of model property dynamicsDimension
            */
            virtual DynamicsDimension GetDynamicsDimension() const
            {
                return DynamicsDimension();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The shape of the transition function f(x) between current and target value.
             * 
             * @return value of model property dynamicsShape
            */
            virtual DynamicsShape GetDynamicsShape() const
            {
                return DynamicsShape();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the shape following behavior of the actor: Mode 'position' forces the actor to strictly adhere to a given shape.
             * In contrast, in mode 'follow' the actor tries to follow the shape as best as it can. This may be restricted by the
             * 'Performance' properties (for vehicles), dynamic constraints of an external agent (if the actor is not controlled by the
             * default controller) and/or control loop implementation. In mode 'follow' the resulting path of the entity is not
             * guaranteed to be identical for every simulation environment. Default value if omitted: position
             * 
             * @return value of model property followingMode
            */
            virtual FollowingMode GetFollowingMode() const
            {
                return FollowingMode();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The value for a predefined rate (Unit: [delta/s]), time (Unit: [s]) or distance (Unit: [m]) to acquire the target value.
             * Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }


            /**
            * Retrieves whether property followingMode is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFollowingMode() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * Amount of traveled distance. Unit: [m]. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IConditionGroup>> GetConditionGroups() const
            {
                return std::vector<std::shared_ptr<IConditionGroup>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetConditionGroupsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IConditionGroup> GetConditionGroupsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property conditionGroups is set
            * @return true when the optional property is set
            */
            virtual bool IsSetConditionGroups() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual TriggeringEntitiesRule GetTriggeringEntitiesRule() const
            {
                return TriggeringEntitiesRule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * List of referenced entities that trigger the condition.
             * 
             * @return value of model property entityRefs
            */
            virtual std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() const
            {
                return std::vector<std::shared_ptr<IEntityRef>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetEntityRefsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IEntityRef> GetEntityRefsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Uniform distribution which can be applied to a single parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUniformDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUniformDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the lower limit and upper limit of the uniform distribution regarding to the definition space.
             * 
             * @return value of model property range
            */
            virtual std::shared_ptr<IRange> GetRange() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * The area that is used by the entities. When using big road network and/or scene files (several GB, e.g. for whole
         * Europe), a simulator shall not load the whole road network for performance reasons.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUsedArea : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUsedArea() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the used area. A minimum of 2 positions needs to be provided.
             * 
             * @return value of model property positions
            */
            virtual std::vector<std::shared_ptr<IPosition>> GetPositions() const
            {
                return std::vector<std::shared_ptr<IPosition>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetPositionsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IPosition> GetPositionsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Used to either issue a command to the simulation environment (e.g. test software, system under test, simulation models)
         * or start an external script. Allows the user to activate custom actions in their simulation user software.
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
            virtual std::shared_ptr<ICustomCommandAction> GetCustomCommandAction() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of user defined animation types.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUserDefinedAnimation : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUserDefinedAnimation() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The available user defined animation types are subject of a contract between simulation environment provider and
             * scenario author.
             * 
             * @return value of model property userDefinedAnimationType
            */
            virtual std::string GetUserDefinedAnimationType() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Type of the user defined component.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUserDefinedComponent : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUserDefinedComponent() = default;

            /**
             * From OpenSCENARIO class model specification:
             * User defined component type.
             * 
             * @return value of model property userDefinedComponentType
            */
            virtual std::string GetUserDefinedComponentType() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Indicates a user defined distribution which can be deterministic or stochastic. This distribution contains a property
         * with the name type and some user defined content.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUserDefinedDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUserDefinedDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * User defined content.
             * 
             * @return value of model property content
            */
            virtual std::string GetContent() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Defines the type of the UserDefinedDistribution
             * 
             * @return value of model property type
            */
            virtual std::string GetType() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of user defined light types.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUserDefinedLight : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IUserDefinedLight() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The available user defined light types are subject of a contract between simulation environment provider and scenario
             * author.
             * 
             * @return value of model property userDefinedLightType
            */
            virtual std::string GetUserDefinedLightType() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * This condition acts as a wrapper for external custom conditions which are implemented in the simulation user software.
         * It can compare e.g. complex types, which are not covered by the primitive types of OpenSCENARIO (boolean, int,
         * double...). This condition is considered true if the given external value verifies the specified relation rule (&lt;,
         * &lt;=, ==, &gt;=, &gt;) relatively to the provided reference value.
The external value can only be set from outside the
         * scenario. Therefore this condition creates an interface from the scenario to the simulator or other components (e.g.
         * test software, test case, system under test or simulation models).
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
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference value the external value is compared to.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Value constraints represent a single rule to a given parameter in a parameter declaration. Note that value must match
         * the type of the enclosing parameter declaration. A ValueConstraint for  parameter declaration of type "string" must use
         * either "equalTo" or "notEqualTo" for the rule property.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IValueConstraint : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IValueConstraint() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Available operators for the validation of the constraint. Note that either "equalTo" or "notEqualTo" must be used in
             * parameter declarations of type "string".
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * A constant value, parameter or parameter expression. The value must match the type of the enclosing parameter
             * declaration.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A ValueConstraintGroup represents a set of logical constraints which need to evaluate to true for a defined parameter
         * value to start the simulation. A constraint group needs to have at least one constraint.
Multiple constraint groups are
         * combined by an OR.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IValueConstraintGroup : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IValueConstraintGroup() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Defines one or more constraints for a constraint group. Multiple constraints are combined by an AND.
             * 
             * @return value of model property constraints
            */
            virtual std::vector<std::shared_ptr<IValueConstraint>> GetConstraints() const
            {
                return std::vector<std::shared_ptr<IValueConstraint>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetConstraintsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IValueConstraint> GetConstraintsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Deterministic multi-parameter distribution, where one or multiple sets of parameter values can be defined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IValueSetDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IValueSetDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Set of parameter values that have to be assigned for a single concrete scenario.
             * 
             * @return value of model property parameterValueSets
            */
            virtual std::vector<std::shared_ptr<IParameterValueSet>> GetParameterValueSets() const
            {
                return std::vector<std::shared_ptr<IParameterValueSet>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterValueSetsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterValueSet> GetParameterValueSetsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Set or modify a variable. (Be aware of the data type).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the variable.
             * 
             * @return value of model property variableRef
            */
            virtual std::shared_ptr<INamedReference<IVariableDeclaration>> GetVariableRef() const
            {
                return std::make_shared<INamedReference<IVariableDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * New value for the variable.
             * 
             * @return value of model property setAction
            */
            virtual std::shared_ptr<IVariableSetAction> GetSetAction() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Modifying rule for the variable (Add value or multiply by value).
             * 
             * @return value of model property modifyAction
            */
            virtual std::shared_ptr<IVariableModifyAction> GetModifyAction() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property setAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSetAction() const = 0;
            /**
            * Retrieves whether property modifyAction is set
            * @return true when the optional property is set
            */
            virtual bool IsSetModifyAction() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines an addition of a value to a variable as part of a ModifyRule.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableAddValueRule : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableAddValueRule() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Add value to existing variable.
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Compares a named variable's value to a reference value. The logical operator used for comparison is defined by the rule
         * attribute. Less and greater operators will only be supported if the value given as string can unambiguously be converted
         * into a scalar value (e.g. value=5, value=16.667).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableCondition : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableCondition() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (&lt;, &lt;=, ==, &gt;=, &gt;).
             * 
             * @return value of model property rule
            */
            virtual Rule GetRule() const
            {
                return Rule();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Value to which the value of the variable shall be compared to.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the variable that must be defined.
             * 
             * @return value of model property variableRef
            */
            virtual std::shared_ptr<INamedReference<IVariableDeclaration>> GetVariableRef() const
            {
                return std::make_shared<INamedReference<IVariableDeclaration>>();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Declaration of a typed variable with a name and a default value. Its value can change during runtime either from within
         * the scenario (OSC Model instance) by using a VariableAction or can be also set from external side, e.g. by a test
         * software. For this the Simulator Core needs to provide an interface to change variable values. The value can be used to
         * either trigger Events in the scenario with VariableConditions or it can be used on external side, e.g. a test software
         * to trigger test steps. For this the Simulator Core needs to provide an interface to read the variable values.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableDeclaration : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableDeclaration() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the variable.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Initialization value of the variable (must be convertible to variableType).
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Type of the variable.
             * 
             * @return value of model property variableType
            */
            virtual ParameterType GetVariableType() const
            {
                return ParameterType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Modify a variable according to given rules.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableModifyAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableModifyAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Either adding a value to a variable or multiply a variable by a value. Has to match the variable type.
             * 
             * @return value of model property rule
            */
            virtual std::shared_ptr<IVariableModifyRule> GetRule() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Enclosing type for either adding a value to a variable or multiply the variable by a value. Has to be match the variable
         * type.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableModifyRule : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableModifyRule() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Adding a value to a variable.
             * 
             * @return value of model property addValue
            */
            virtual std::shared_ptr<IVariableAddValueRule> GetAddValue() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Multiply a variable by a value.
             * 
             * @return value of model property multiplyByValue
            */
            virtual std::shared_ptr<IVariableMultiplyByValueRule> GetMultiplyByValue() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property addValue is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAddValue() const = 0;
            /**
            * Retrieves whether property multiplyByValue is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMultiplyByValue() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Multiply a variable by a value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableMultiplyByValueRule : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableMultiplyByValueRule() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Multiply existing variable by the value (be aware of the variable data type).
             * 
             * @return value of model property value
            */
            virtual double GetValue() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Setting a variable to a given value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVariableSetAction : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVariableSetAction() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The new value for the variable.
             * 
             * @return value of model property value
            */
            virtual std::string GetValue() const
            {
                return "";
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The mass of a vehicle. Unit: [kg]. Range: [0..inf[.
             * 
             * @return value of model property mass
            */
            virtual double GetMass() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the model of the vehicle as a model type or a relative or absolute file path.
             * 
             * @return value of model property model3d
            */
            virtual std::string GetModel3d() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Name of the vehicle type.
             * 
             * @return value of model property name
            */
            virtual std::string GetName() const
            {
                return "";
            }

            /**
             * From OpenSCENARIO class model specification:
             * Role of the vehicle (ambulance, police,...). The default vehicle role if not specified is None.
             * 
             * @return value of model property role
            */
            virtual Role GetRole() const
            {
                return Role();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Category of the vehicle (bicycle, train,...).
             * 
             * @return value of model property vehicleCategory
            */
            virtual VehicleCategory GetVehicleCategory() const
            {
                return VehicleCategory();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() const
            {
                return std::vector<std::shared_ptr<IParameterDeclaration>>();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The three dimensional bounding box that encloses the vehicle.
             * 
             * @return value of model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBox> GetBoundingBox() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Performance properties of the vehicle.
             * 
             * @return value of model property performance
            */
            virtual std::shared_ptr<IPerformance> GetPerformance() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * A set of axles (front, rear, additional) and their geometric locations.
             * 
             * @return value of model property axles
            */
            virtual std::shared_ptr<IAxles> GetAxles() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Additional properties as name value pairs.
             * 
             * @return value of model property properties
            */
            virtual std::shared_ptr<IProperties> GetProperties() const
            {
                return nullptr;
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetParameterDeclarationsSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IParameterDeclaration> GetParameterDeclarationsAtIndex(const unsigned int index) const
            {
                return nullptr;
            }

            /**
            * Retrieves whether property mass is set
            * @return true when the optional property is set
            */
            virtual bool IsSetMass() const = 0;
            /**
            * Retrieves whether property model3d is set
            * @return true when the optional property is set
            */
            virtual bool IsSetModel3d() const = 0;
            /**
            * Retrieves whether property role is set
            * @return true when the optional property is set
            */
            virtual bool IsSetRole() const = 0;
            /**
            * Retrieves whether property parameterDeclarations is set
            * @return true when the optional property is set
            */
            virtual bool IsSetParameterDeclarations() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::shared_ptr<IDirectory> GetDirectory() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> GetVehicleCategoryDistributionEntries() const
            {
                return std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetVehicleCategoryDistributionEntriesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IVehicleCategoryDistributionEntry> GetVehicleCategoryDistributionEntriesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual VehicleCategory GetCategory() const
            {
                return VehicleCategory();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The weight of a vehicle category within a traffic distribution. Range: [0..inf[.
             * 
             * @return value of model property weight
            */
            virtual double GetWeight() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Type of the vehicle component.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleComponent : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleComponent() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Available component types attached to a vehicle.
             * 
             * @return value of model property vehicleComponentType
            */
            virtual VehicleComponentType GetVehicleComponentType() const
            {
                return VehicleComponentType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Type of the vehicle light.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleLight : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleLight() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Available light types attached to a vehicle.
             * 
             * @return value of model property vehicleLightType
            */
            virtual VehicleLightType GetVehicleLightType() const
            {
                return VehicleLightType();
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A distribution for vehicle in traffic. Roles of vehicles and their weight (measure of relative likelihood, check
         * VehicleRoleDistributionEntry).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleRoleDistribution : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleRoleDistribution() = default;

            /**
             * From OpenSCENARIO class model specification:
             * List of elements that pair vehicle roles and their weight within the distribution.
             * 
             * @return value of model property vehicleRoleDistributionEntries
            */
            virtual std::vector<std::shared_ptr<IVehicleRoleDistributionEntry>> GetVehicleRoleDistributionEntries() const
            {
                return std::vector<std::shared_ptr<IVehicleRoleDistributionEntry>>();
            }

            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int GetVehicleRoleDistributionEntriesSize() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual std::shared_ptr<IVehicleRoleDistributionEntry> GetVehicleRoleDistributionEntriesAtIndex(const unsigned int index) const
            {
                return nullptr;
            }


        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Represents the weight of a given vehicle role within a traffic definition. The relative probability for the occurrence
         * of this role is defined by the weight divided by the sum of all weights of this distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleRoleDistributionEntry : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IVehicleRoleDistributionEntry() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The role of the vehicles that appear in traffic.
             * 
             * @return value of model property role
            */
            virtual Role GetRole() const
            {
                return Role();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The weight of a vehicle role within a traffic distribution. Range: [0..inf[.
             * 
             * @return value of model property weight
            */
            virtual double GetWeight() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual double GetTime() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Position of the vertex.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property time is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTime() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Action that toggles (on or off) an entity's visibility attributes, with respect to sensors, other traffic or the
         * graphics engine. The default for entities is that they are visible everywhere.
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
            virtual bool GetGraphics() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * True: actor is visible in sensor(s). False: actor is not visible in sensor(s).
             * 
             * @return value of model property sensors
            */
            virtual bool GetSensors() const
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
            virtual bool GetTraffic() const
            {
                return false;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Reference to names of single sensors, for which the actor shall be (not) visible. For the other not named sensors
             * implicitly the opposite applies. If no sensor references are provided, the actor is (not) visible for all sensors. E.g.
             * a false positive for the front camera and lidar sensor could be specified with traffic="false", sensors="true",
             * SensorReferenceSet={SensorReference{name="front camera"}, SensorReference{name="lidar"}}. The semantics of the sensor
             * names are subject of a contract between the author of a scenario and the provider of a simulation environment.
             * 
             * @return value of model property sensorReferenceSet
            */
            virtual std::shared_ptr<ISensorReferenceSet> GetSensorReferenceSet() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property sensorReferenceSet is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSensorReferenceSet() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            virtual RouteStrategy GetRouteStrategy() const
            {
                return RouteStrategy();
            }

            /**
             * From OpenSCENARIO class model specification:
             * The reference position to form the route.
             * 
             * @return value of model property position
            */
            virtual std::shared_ptr<IPosition> GetPosition() const
            {
                return nullptr;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines the weather conditions in terms of light, fog, precipitation, cloud, temperature and atmospheric pressure
         * states. If one of the conditions is missing it means that it doesn't change.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IWeather : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IWeather() = default;

            /**
             * From OpenSCENARIO class model specification:
             * Reference atmospheric pressure at z=0.0 in world coordinate system. Unit: [Pa]. Range: [80000..120000]. The actual
             * atmospheric pressure around the entities of the scenario has to be calculated depending on their z position. See also
             * the Standard Atmosphere as defined in <a href="$inet://https://www.iso.org/standard/7472.html"><font
             * color="#0000ff"><u>ISO2533</u></font></a>.
             * 
             * @return value of model property atmosphericPressure
            */
            virtual double GetAtmosphericPressure() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the cloud state, i.e. cloud state and sky visualization settings.
             * 
             * @return value of model property cloudState
            */
            virtual CloudState GetCloudState() const
            {
                return CloudState();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of cloud states using the fractional cloud cover in oktas.
             * 
             * @return value of model property fractionalCloudCover
            */
            virtual FractionalCloudCover GetFractionalCloudCover() const
            {
                return FractionalCloudCover();
            }

            /**
             * From OpenSCENARIO class model specification:
             * Outside temperature at z=0.0 in world coordinate system. Unit: [K]. Range: [170..340]. The actual outside temperature
             * around the entities of the scenario has to be calculated depending on their z position.
             * 
             * @return value of model property temperature
            */
            virtual double GetTemperature() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the sun, i.e. position and intensity.
             * 
             * @return value of model property sun
            */
            virtual std::shared_ptr<ISun> GetSun() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of fog, i.e. visual range and bounding box.
             * 
             * @return value of model property fog
            */
            virtual std::shared_ptr<IFog> GetFog() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of precipitation, i.e. type and intensity.
             * 
             * @return value of model property precipitation
            */
            virtual std::shared_ptr<IPrecipitation> GetPrecipitation() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the wind: direction and speed.
             * 
             * @return value of model property wind
            */
            virtual std::shared_ptr<IWind> GetWind() const
            {
                return nullptr;
            }

            /**
             * From OpenSCENARIO class model specification:
             * Image reference to represent the sky. Mutually exclusive with "fractionalCloudCover". If the image also contains
             * lighting information (HDRi) it is also mutually exclusive with "sun".
             * 
             * @return value of model property domeImage
            */
            virtual std::shared_ptr<IDomeImage> GetDomeImage() const
            {
                return nullptr;
            }


            /**
            * Retrieves whether property atmosphericPressure is set
            * @return true when the optional property is set
            */
            virtual bool IsSetAtmosphericPressure() const = 0;
            /**
            * Retrieves whether property cloudState is set
            * @return true when the optional property is set
            */
            virtual bool IsSetCloudState() const = 0;
            /**
            * Retrieves whether property fractionalCloudCover is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFractionalCloudCover() const = 0;
            /**
            * Retrieves whether property temperature is set
            * @return true when the optional property is set
            */
            virtual bool IsSetTemperature() const = 0;
            /**
            * Retrieves whether property sun is set
            * @return true when the optional property is set
            */
            virtual bool IsSetSun() const = 0;
            /**
            * Retrieves whether property fog is set
            * @return true when the optional property is set
            */
            virtual bool IsSetFog() const = 0;
            /**
            * Retrieves whether property precipitation is set
            * @return true when the optional property is set
            */
            virtual bool IsSetPrecipitation() const = 0;
            /**
            * Retrieves whether property wind is set
            * @return true when the optional property is set
            */
            virtual bool IsSetWind() const = 0;
            /**
            * Retrieves whether property domeImage is set
            * @return true when the optional property is set
            */
            virtual bool IsSetDomeImage() const = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines wind properties.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IWind : public virtual IOpenScenarioModelElement
        {
        public:
            virtual ~IWind() = default;

            /**
             * From OpenSCENARIO class model specification:
             * The target direction of the wind (not the origin direction) in the ground/xy-plane of the world coordinate system.
             * Corresponds to the heading/yaw angle. x-axis-direction is 0 rad. Unit: [rad]. Range: [0..2*PI[.
             * 
             * @return value of model property direction
            */
            virtual double GetDirection() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The wind speed. Unit: [m/s]. Range: [0..inf[
             * 
             * @return value of model property speed
            */
            virtual double GetSpeed() const
            {
                return 0;
            }



        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
             * The heading angle of the object, defining a mathematically positive rotation about the z-axis (see ISO 8855:2011).
             * Missing value is interpreted as 0. Unit: [rad].
             * 
             * @return value of model property h
            */
            virtual double GetH() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The pitch angle of the object, defining a mathematically positive rotation about the y-axis (see ISO 8855:2011). Missing
             * value is interpreted as 0. Unit: [rad].
             * 
             * @return value of model property p
            */
            virtual double GetP() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The roll angle of the object, defining a mathematically positive rotation about the x-axis (see ISO 8855:2011). Missing
             * value is interpreted as 0. Unit: [rad].
             * 
             * @return value of model property r
            */
            virtual double GetR() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The x coordinate value. Missing value is interpreted as 0. Unit: [m].
             * 
             * @return value of model property x
            */
            virtual double GetX() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The y coordinate value. Missing value is interpreted as 0. Unit: [m].
             * 
             * @return value of model property y
            */
            virtual double GetY() const
            {
                return 0;
            }

            /**
             * From OpenSCENARIO class model specification:
             * The z coordinate value. Missing value is interpreted as 0. Unit: [m].
             * 
             * @return value of model property z
            */
            virtual double GetZ() const
            {
                return 0;
            }


            /**
            * Retrieves whether property h is set
            * @return true when the optional property is set
            */
            virtual bool IsSetH() const = 0;
            /**
            * Retrieves whether property p is set
            * @return true when the optional property is set
            */
            virtual bool IsSetP() const = 0;
            /**
            * Retrieves whether property r is set
            * @return true when the optional property is set
            */
            virtual bool IsSetR() const = 0;
            /**
            * Retrieves whether property z is set
            * @return true when the optional property is set
            */
            virtual bool IsSetZ() const = 0;

        };

    }
}
