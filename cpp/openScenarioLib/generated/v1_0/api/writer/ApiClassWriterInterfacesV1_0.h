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
#include "IOpenScenarioModelElement.h"
#include "EnumerationsV1_0.h"
#include "OscInterfacesV1_0.h"
#include "ApiClassInterfacesV1_0.h"
#include "ApiWriterInterfacesV1_0.h"
#include "IOpenScenarioElementWriter.h"
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

        class IAbsoluteSpeedWriter;
        class IAbsoluteTargetLaneWriter;
        class IAbsoluteTargetLaneOffsetWriter;
        class IAbsoluteTargetSpeedWriter;
        class IAccelerationConditionWriter;
        class IAcquirePositionActionWriter;
        class IActWriter;
        class IActionWriter;
        class IActivateControllerActionWriter;
        class IActorsWriter;
        class IAddEntityActionWriter;
        class IAssignControllerActionWriter;
        class IAssignRouteActionWriter;
        class IAxleWriter;
        class IAxlesWriter;
        class IBoundingBoxWriter;
        class IByEntityConditionWriter;
        class IByObjectTypeWriter;
        class IByTypeWriter;
        class IByValueConditionWriter;
        class ICatalogWriter;
        class ICatalogDefinitionWriter;
        class ICatalogLocationsWriter;
        class ICatalogReferenceWriter;
        class ICenterWriter;
        class ICentralSwarmObjectWriter;
        class IClothoidWriter;
        class ICollisionConditionWriter;
        class IConditionWriter;
        class IConditionGroupWriter;
        class IControlPointWriter;
        class IControllerWriter;
        class IControllerActionWriter;
        class IControllerCatalogLocationWriter;
        class IControllerDistributionWriter;
        class IControllerDistributionEntryWriter;
        class ICustomCommandActionWriter;
        class IDeleteEntityActionWriter;
        class IDimensionsWriter;
        class IDirectoryWriter;
        class IDistanceConditionWriter;
        class IDynamicConstraintsWriter;
        class IEndOfRoadConditionWriter;
        class IEntitiesWriter;
        class IEntityActionWriter;
        class IEntityConditionWriter;
        class IEntityObjectWriter;
        class IEntityRefWriter;
        class IEntitySelectionWriter;
        class IEnvironmentWriter;
        class IEnvironmentActionWriter;
        class IEnvironmentCatalogLocationWriter;
        class IEventWriter;
        class IFileWriter;
        class IFileHeaderWriter;
        class IFinalSpeedWriter;
        class IFogWriter;
        class IFollowTrajectoryActionWriter;
        class IGlobalActionWriter;
        class IInRoutePositionWriter;
        class IInfrastructureActionWriter;
        class IInitWriter;
        class IInitActionsWriter;
        class IKnotWriter;
        class ILaneChangeActionWriter;
        class ILaneChangeTargetWriter;
        class ILaneOffsetActionWriter;
        class ILaneOffsetActionDynamicsWriter;
        class ILaneOffsetTargetWriter;
        class ILanePositionWriter;
        class ILateralActionWriter;
        class ILateralDistanceActionWriter;
        class ILongitudinalActionWriter;
        class ILongitudinalDistanceActionWriter;
        class IManeuverWriter;
        class IManeuverCatalogLocationWriter;
        class IManeuverGroupWriter;
        class IMiscObjectWriter;
        class IMiscObjectCatalogLocationWriter;
        class IModifyRuleWriter;
        class INoneWriter;
        class INurbsWriter;
        class IObjectControllerWriter;
        class IOffroadConditionWriter;
        class IOpenScenarioWriter;
        class IOpenScenarioCategoryWriter;
        class IOrientationWriter;
        class IOverrideBrakeActionWriter;
        class IOverrideClutchActionWriter;
        class IOverrideControllerValueActionWriter;
        class IOverrideGearActionWriter;
        class IOverrideParkingBrakeActionWriter;
        class IOverrideSteeringWheelActionWriter;
        class IOverrideThrottleActionWriter;
        class IParameterActionWriter;
        class IParameterAddValueRuleWriter;
        class IParameterAssignmentWriter;
        class IParameterConditionWriter;
        class IParameterDeclarationWriter;
        class IParameterModifyActionWriter;
        class IParameterMultiplyByValueRuleWriter;
        class IParameterSetActionWriter;
        class IPedestrianWriter;
        class IPedestrianCatalogLocationWriter;
        class IPerformanceWriter;
        class IPhaseWriter;
        class IPolylineWriter;
        class IPositionWriter;
        class IPositionInLaneCoordinatesWriter;
        class IPositionInRoadCoordinatesWriter;
        class IPositionOfCurrentEntityWriter;
        class IPrecipitationWriter;
        class IPrivateWriter;
        class IPrivateActionWriter;
        class IPropertiesWriter;
        class IPropertyWriter;
        class IReachPositionConditionWriter;
        class IRelativeDistanceConditionWriter;
        class IRelativeLanePositionWriter;
        class IRelativeObjectPositionWriter;
        class IRelativeRoadPositionWriter;
        class IRelativeSpeedConditionWriter;
        class IRelativeSpeedToMasterWriter;
        class IRelativeTargetLaneWriter;
        class IRelativeTargetLaneOffsetWriter;
        class IRelativeTargetSpeedWriter;
        class IRelativeWorldPositionWriter;
        class IRoadConditionWriter;
        class IRoadNetworkWriter;
        class IRoadPositionWriter;
        class IRouteWriter;
        class IRouteCatalogLocationWriter;
        class IRoutePositionWriter;
        class IRouteRefWriter;
        class IRoutingActionWriter;
        class IScenarioDefinitionWriter;
        class IScenarioObjectWriter;
        class ISelectedEntitiesWriter;
        class IShapeWriter;
        class ISimulationTimeConditionWriter;
        class ISpeedActionWriter;
        class ISpeedActionTargetWriter;
        class ISpeedConditionWriter;
        class IStandStillConditionWriter;
        class IStoryWriter;
        class IStoryboardWriter;
        class IStoryboardElementStateConditionWriter;
        class ISunWriter;
        class ISynchronizeActionWriter;
        class ITeleportActionWriter;
        class ITimeHeadwayConditionWriter;
        class ITimeOfDayWriter;
        class ITimeOfDayConditionWriter;
        class ITimeReferenceWriter;
        class ITimeToCollisionConditionWriter;
        class ITimeToCollisionConditionTargetWriter;
        class ITimingWriter;
        class ITrafficActionWriter;
        class ITrafficDefinitionWriter;
        class ITrafficSignalActionWriter;
        class ITrafficSignalConditionWriter;
        class ITrafficSignalControllerWriter;
        class ITrafficSignalControllerActionWriter;
        class ITrafficSignalControllerConditionWriter;
        class ITrafficSignalStateWriter;
        class ITrafficSignalStateActionWriter;
        class ITrafficSinkActionWriter;
        class ITrafficSourceActionWriter;
        class ITrafficSwarmActionWriter;
        class ITrajectoryWriter;
        class ITrajectoryCatalogLocationWriter;
        class ITrajectoryFollowingModeWriter;
        class ITransitionDynamicsWriter;
        class ITraveledDistanceConditionWriter;
        class ITriggerWriter;
        class ITriggeringEntitiesWriter;
        class IUserDefinedActionWriter;
        class IUserDefinedValueConditionWriter;
        class IVehicleWriter;
        class IVehicleCatalogLocationWriter;
        class IVehicleCategoryDistributionWriter;
        class IVehicleCategoryDistributionEntryWriter;
        class IVertexWriter;
        class IVisibilityActionWriter;
        class IWaypointWriter;
        class IWeatherWriter;
        class IWorldPositionWriter;



        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AbsoluteSpeed'
         * From OpenSCENARIO class model specification:
         * Absolute speed definition.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAbsoluteSpeedWriter : public IOpenScenarioElementWriter, public IAbsoluteSpeed
        {
        public:
            virtual ~IAbsoluteSpeedWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Absolute speed. Unit: m/s. Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AbsoluteTargetLane'
         * From OpenSCENARIO class model specification:
         * Defines the number (ID) of the target lane.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAbsoluteTargetLaneWriter : public IOpenScenarioElementWriter, public IAbsoluteTargetLane
        {
        public:
            virtual ~IAbsoluteTargetLaneWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Number (ID) of the target lane the entity will change to.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AbsoluteTargetLaneOffset'
         * From OpenSCENARIO class model specification:
         * Lane offset with respect to the entity's current lane's center line.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAbsoluteTargetLaneOffsetWriter : public IOpenScenarioElementWriter, public IAbsoluteTargetLaneOffset
        {
        public:
            virtual ~IAbsoluteTargetLaneOffsetWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Signed number in meters the vehicle should respect as an offset from the center of the current lane.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AbsoluteTargetSpeed'
         * From OpenSCENARIO class model specification:
         * Absolute speed defined as a target for a SpeedAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAbsoluteTargetSpeedWriter : public IOpenScenarioElementWriter, public IAbsoluteTargetSpeed
        {
        public:
            virtual ~IAbsoluteTargetSpeedWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Target speed in m/s the vehicle should change to.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AccelerationCondition'
         * From OpenSCENARIO class model specification:
         * Compares the entity's acceleration to a reference value. The logical operator used for comparison is defined by the rule
         * attribute (less, greater, equal).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAccelerationConditionWriter : public IOpenScenarioElementWriter, public IAccelerationCondition
        {
        public:
            virtual ~IAccelerationConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Acceleration value. Unit: m/s^2.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AcquirePositionAction'
         * From OpenSCENARIO class model specification:
         * Controls the entity to acquire a target position.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAcquirePositionActionWriter : public IOpenScenarioElementWriter, public IAcquirePositionAction
        {
        public:
            virtual ~IAcquirePositionActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A position to acquire.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * A position to acquire.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Act'
         * From OpenSCENARIO class model specification:
         * A container for maneuver groups. Can be executed several times depending on the user provided settings. New executions
         * are only allowed to start when all contained maneuver groups are in the complete state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IActWriter : public IOpenScenarioElementWriter, public IAct, public IStoryboardElementWriter
        {
        public:
            virtual ~IActWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of this act.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of maneuver groups representing the act.
             * 
             * @return value of model property maneuverGroups
            */
            virtual void SetManeuverGroups(std::vector<std::shared_ptr<IManeuverGroupWriter>>& maneuverGroups)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a trigger to that starts the act.
             * 
             * @return value of model property startTrigger
            */
            virtual void SetStartTrigger(std::shared_ptr<ITriggerWriter> startTrigger)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a trigger that stops the act.
             * 
             * @return value of model property stopTrigger
            */
            virtual void SetStopTrigger(std::shared_ptr<ITriggerWriter> stopTrigger)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Defines a trigger to that starts the act.
             * 
             * @return a writer for model property startTrigger
            */
            virtual std::shared_ptr<ITriggerWriter> GetWriterStartTrigger() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines a trigger that stops the act.
             * 
             * @return a writer for model property stopTrigger
            */
            virtual std::shared_ptr<ITriggerWriter> GetWriterStopTrigger() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of maneuver groups representing the act.
             * 
             * @return a list of writers for model property maneuverGroups
            */
            virtual std::vector<std::shared_ptr<IManeuverGroupWriter>> GetWriterManeuverGroups() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Action'
         * From OpenSCENARIO class model specification:
         * An action serves to create or modify all dynamic elements of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IActionWriter : public IOpenScenarioElementWriter, public IAction, public IStoryboardElementWriter
        {
        public:
            virtual ~IActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of this action.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The GlobalAction to be executed when the enclosing Action is startedis started.
             * 
             * @return value of model property globalAction
            */
            virtual void SetGlobalAction(std::shared_ptr<IGlobalActionWriter> globalAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The UserDefinedAction to be executed when the enclosing Action is started.
             * 
             * @return value of model property userDefinedAction
            */
            virtual void SetUserDefinedAction(std::shared_ptr<IUserDefinedActionWriter> userDefinedAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The PrivateAction to be executed when the enclosing Action is started.
             * 
             * @return value of model property privateAction
            */
            virtual void SetPrivateAction(std::shared_ptr<IPrivateActionWriter> privateAction)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The GlobalAction to be executed when the enclosing Action is startedis started.
             * 
             * @return a writer for model property globalAction
            */
            virtual std::shared_ptr<IGlobalActionWriter> GetWriterGlobalAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The UserDefinedAction to be executed when the enclosing Action is started.
             * 
             * @return a writer for model property userDefinedAction
            */
            virtual std::shared_ptr<IUserDefinedActionWriter> GetWriterUserDefinedAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The PrivateAction to be executed when the enclosing Action is started.
             * 
             * @return a writer for model property privateAction
            */
            virtual std::shared_ptr<IPrivateActionWriter> GetWriterPrivateAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ActivateControllerAction'
         * From OpenSCENARIO class model specification:
         * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on the given entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IActivateControllerActionWriter : public IOpenScenarioElementWriter, public IActivateControllerAction
        {
        public:
            virtual ~IActivateControllerActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * In lateral domain: Activate or deactivate controller defined (e.g. automated, autonomous) behavior.
             * 
             * @return value of model property lateral
            */
            virtual void SetLateral(const bool lateral)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * In longitudinal domain: Activate or deactivate autonomous behavior.
             * 
             * @return value of model property longitudinal
            */
            virtual void SetLongitudinal(const bool longitudinal)  = 0;

            /**
             * Set a parameter for the attribute  lateral
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLateral(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  longitudinal
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLongitudinal(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  lateral
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLateral() const  = 0;
            /**
             * Get the parameter for the attribute  longitudinal
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLongitudinal() const  = 0;

            /**
             * Retrieves whether the attribute lateral is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLateralParameterized()  = 0;
            /**
             * Retrieves whether the attribute longitudinal is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLongitudinalParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Actors'
         * From OpenSCENARIO class model specification:
         * A set of entities representing the actors in a maneuver group.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IActorsWriter : public IOpenScenarioElementWriter, public IActors
        {
        public:
            virtual ~IActorsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Indicates whether the triggering entities are considered actors.
             * 
             * @return value of model property selectTriggeringEntities
            */
            virtual void SetSelectTriggeringEntities(const bool selectTriggeringEntities)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of entities this actor is referencing.
             * 
             * @return value of model property entityRefs
            */
            virtual void SetEntityRefs(std::vector<std::shared_ptr<IEntityRefWriter>>& entityRefs)  = 0;

            /**
             * Set a parameter for the attribute  selectTriggeringEntities
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToSelectTriggeringEntities(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  selectTriggeringEntities
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromSelectTriggeringEntities() const  = 0;

            /**
             * Retrieves whether the attribute selectTriggeringEntities is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSelectTriggeringEntitiesParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * A list of entities this actor is referencing.
             * 
             * @return a list of writers for model property entityRefs
            */
            virtual std::vector<std::shared_ptr<IEntityRefWriter>> GetWriterEntityRefs() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AddEntityAction'
         * From OpenSCENARIO class model specification:
         * Adds an entity to the scenario, at a predefined position.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAddEntityActionWriter : public IOpenScenarioElementWriter, public IAddEntityAction
        {
        public:
            virtual ~IAddEntityActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Adds an entity at the specified position.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Adds an entity at the specified position.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AssignControllerAction'
         * From OpenSCENARIO class model specification:
         * This action assigns a controller to the given entity defined in the enclosing PrivateAction. Controllers could be
         * defined inline or by using a catalog reference.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAssignControllerActionWriter : public IOpenScenarioElementWriter, public IAssignControllerAction
        {
        public:
            virtual ~IAssignControllerActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a controller to a given entity.
             * 
             * @return value of model property controller
            */
            virtual void SetController(std::shared_ptr<IControllerWriter> controller)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Uses a CatalogReference to assign a controller to a given entity. CatalogReference must point to a Controller type.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Assigns a controller to a given entity.
             * 
             * @return a writer for model property controller
            */
            virtual std::shared_ptr<IControllerWriter> GetWriterController() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Uses a CatalogReference to assign a controller to a given entity. CatalogReference must point to a Controller type.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'AssignRouteAction'
         * From OpenSCENARIO class model specification:
         * Controls an entity to follow a route using waypoints on the road network. The corresponding route can be instantiated
         * from a catalog type, or defined within this declaration. This action does not override any action that controls either
         * lateral or longitudinal domain.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAssignRouteActionWriter : public IOpenScenarioElementWriter, public IAssignRouteAction
        {
        public:
            virtual ~IAssignRouteActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The route definition.
             * 
             * @return value of model property route
            */
            virtual void SetRoute(std::shared_ptr<IRouteWriter> route)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A reference to the route definition in a catalog. The reference must point to a route.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * The route definition.
             * 
             * @return a writer for model property route
            */
            virtual std::shared_ptr<IRouteWriter> GetWriterRoute() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A reference to the route definition in a catalog. The reference must point to a route.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Axle'
         * From OpenSCENARIO class model specification:
         * The definition of vehicle axle.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAxleWriter : public IOpenScenarioElementWriter, public IAxle
        {
        public:
            virtual ~IAxleWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Maximum steering angle which can be performed by the wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.
             * 
             * @return value of model property maxSteering
            */
            virtual void SetMaxSteering(const double maxSteering)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Longitudinal position of the axle with respect to the vehicles reference point. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property positionX
            */
            virtual void SetPositionX(const double positionX)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Z-position of the axle with respect to the vehicles reference point. Usually this is half of wheel diameter. Unit:m;
             * Range:[0..inf[.
             * 
             * @return value of model property positionZ
            */
            virtual void SetPositionZ(const double positionZ)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Distance of the wheels center lines at zero steering. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property trackWidth
            */
            virtual void SetTrackWidth(const double trackWidth)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Diameter of the wheels on this axle. Unit: m; Range: ]0..inf[.
             * 
             * @return value of model property wheelDiameter
            */
            virtual void SetWheelDiameter(const double wheelDiameter)  = 0;

            /**
             * Set a parameter for the attribute  maxSteering
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxSteering(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  positionX
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPositionX(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  positionZ
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPositionZ(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  trackWidth
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTrackWidth(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  wheelDiameter
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToWheelDiameter(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  maxSteering
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxSteering() const  = 0;
            /**
             * Get the parameter for the attribute  positionX
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPositionX() const  = 0;
            /**
             * Get the parameter for the attribute  positionZ
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPositionZ() const  = 0;
            /**
             * Get the parameter for the attribute  trackWidth
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTrackWidth() const  = 0;
            /**
             * Get the parameter for the attribute  wheelDiameter
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromWheelDiameter() const  = 0;

            /**
             * Retrieves whether the attribute maxSteering is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxSteeringParameterized()  = 0;
            /**
             * Retrieves whether the attribute positionX is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPositionXParameterized()  = 0;
            /**
             * Retrieves whether the attribute positionZ is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPositionZParameterized()  = 0;
            /**
             * Retrieves whether the attribute trackWidth is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTrackWidthParameterized()  = 0;
            /**
             * Retrieves whether the attribute wheelDiameter is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsWheelDiameterParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Axles'
         * From OpenSCENARIO class model specification:
         * A set of the axles of a vehicle. A vehicle must have a front axle and a rear axle. It might have additional axles.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IAxlesWriter : public IOpenScenarioElementWriter, public IAxles
        {
        public:
            virtual ~IAxlesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Front axle.
             * 
             * @return value of model property frontAxle
            */
            virtual void SetFrontAxle(std::shared_ptr<IAxleWriter> frontAxle)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Rear axle.
             * 
             * @return value of model property rearAxle
            */
            virtual void SetRearAxle(std::shared_ptr<IAxleWriter> rearAxle)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of optional additional axles.
             * 
             * @return value of model property additionalAxles
            */
            virtual void SetAdditionalAxles(std::vector<std::shared_ptr<IAxleWriter>>& additionalAxles)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Front axle.
             * 
             * @return a writer for model property frontAxle
            */
            virtual std::shared_ptr<IAxleWriter> GetWriterFrontAxle() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Rear axle.
             * 
             * @return a writer for model property rearAxle
            */
            virtual std::shared_ptr<IAxleWriter> GetWriterRearAxle() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of optional additional axles.
             * 
             * @return a list of writers for model property additionalAxles
            */
            virtual std::vector<std::shared_ptr<IAxleWriter>> GetWriterAdditionalAxles() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'BoundingBox'
         * From OpenSCENARIO class model specification:
         * Defines geometric properties of the entities as a simplified three dimensional bounding box.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IBoundingBoxWriter : public IOpenScenarioElementWriter, public IBoundingBox
        {
        public:
            virtual ~IBoundingBoxWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
             * the entity (e.g. the vehicle coordinate system).
             * 
             * @return value of model property center
            */
            virtual void SetCenter(std::shared_ptr<ICenterWriter> center)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Width, length and height of the bounding box.
             * 
             * @return value of model property dimensions
            */
            virtual void SetDimensions(std::shared_ptr<IDimensionsWriter> dimensions)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
             * the entity (e.g. the vehicle coordinate system).
             * 
             * @return a writer for model property center
            */
            virtual std::shared_ptr<ICenterWriter> GetWriterCenter() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Width, length and height of the bounding box.
             * 
             * @return a writer for model property dimensions
            */
            virtual std::shared_ptr<IDimensionsWriter> GetWriterDimensions() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ByEntityCondition'
         * From OpenSCENARIO class model specification:
         * Conditions referring an entity need to know which entity shall trigger the condition. TriggeringEntities is a collection
         * of entities whose states are used to verify the given condition. An additional attribute needs to specify if one of the
         * entities is enough for the condition to become true, or if all of them are required.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IByEntityConditionWriter : public IOpenScenarioElementWriter, public IByEntityCondition
        {
        public:
            virtual ~IByEntityConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A list of entities triggering this condition.
             * 
             * @return value of model property triggeringEntities
            */
            virtual void SetTriggeringEntities(std::shared_ptr<ITriggeringEntitiesWriter> triggeringEntities)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The condition which is related to the triggering entities.
             * 
             * @return value of model property entityCondition
            */
            virtual void SetEntityCondition(std::shared_ptr<IEntityConditionWriter> entityCondition)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * A list of entities triggering this condition.
             * 
             * @return a writer for model property triggeringEntities
            */
            virtual std::shared_ptr<ITriggeringEntitiesWriter> GetWriterTriggeringEntities() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The condition which is related to the triggering entities.
             * 
             * @return a writer for model property entityCondition
            */
            virtual std::shared_ptr<IEntityConditionWriter> GetWriterEntityCondition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ByObjectType'
         * From OpenSCENARIO class model specification:
         * Defines an object type to select entities.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IByObjectTypeWriter : public IOpenScenarioElementWriter, public IByObjectType
        {
        public:
            virtual ~IByObjectTypeWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines the type.
             * 
             * @return value of model property type
            */
            virtual void SetType(const ObjectType type)  = 0;

            /**
             * Set a parameter for the attribute  type
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToType(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  type
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromType() const  = 0;

            /**
             * Retrieves whether the attribute type is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTypeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ByType'
         * From OpenSCENARIO class model specification:
         * A definition of a type, e. g. to be used to define members in an entity selection.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IByTypeWriter : public IOpenScenarioElementWriter, public IByType
        {
        public:
            virtual ~IByTypeWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * If a scenario object's entity object is of this type, it is part of the entity selection.
             * 
             * @return value of model property objectType
            */
            virtual void SetObjectType(const ObjectType objectType)  = 0;

            /**
             * Set a parameter for the attribute  objectType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToObjectType(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  objectType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromObjectType() const  = 0;

            /**
             * Retrieves whether the attribute objectType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsObjectTypeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ByValueCondition'
         * From OpenSCENARIO class model specification:
         * Conditions referring a runtime value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IByValueConditionWriter : public IOpenScenarioElementWriter, public IByValueCondition
        {
        public:
            virtual ~IByValueConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A current parameter value is compared to a reference value.
             * 
             * @return value of model property parameterCondition
            */
            virtual void SetParameterCondition(std::shared_ptr<IParameterConditionWriter> parameterCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The current time of day is compared to a reference value.
             * 
             * @return value of model property timeOfDayCondition
            */
            virtual void SetTimeOfDayCondition(std::shared_ptr<ITimeOfDayConditionWriter> timeOfDayCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The current simulation time is compared to a reference value.
             * 
             * @return value of model property simulationTimeCondition
            */
            virtual void SetSimulationTimeCondition(std::shared_ptr<ISimulationTimeConditionWriter> simulationTimeCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced StoryboardElement terminates according to the given rule.
             * 
             * @return value of model property storyboardElementStateCondition
            */
            virtual void SetStoryboardElementStateCondition(std::shared_ptr<IStoryboardElementStateConditionWriter> storyboardElementStateCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The current value of an externally defined named value is compared to a reference value (less, greater, equal).
             * 
             * @return value of model property userDefinedValueCondition
            */
            virtual void SetUserDefinedValueCondition(std::shared_ptr<IUserDefinedValueConditionWriter> userDefinedValueCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced signal reaches the indicated state.
             * 
             * @return value of model property trafficSignalCondition
            */
            virtual void SetTrafficSignalCondition(std::shared_ptr<ITrafficSignalConditionWriter> trafficSignalCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced signal controller reaches the indicated state.
             * 
             * @return value of model property trafficSignalControllerCondition
            */
            virtual void SetTrafficSignalControllerCondition(std::shared_ptr<ITrafficSignalControllerConditionWriter> trafficSignalControllerCondition)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * A current parameter value is compared to a reference value.
             * 
             * @return a writer for model property parameterCondition
            */
            virtual std::shared_ptr<IParameterConditionWriter> GetWriterParameterCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The current time of day is compared to a reference value.
             * 
             * @return a writer for model property timeOfDayCondition
            */
            virtual std::shared_ptr<ITimeOfDayConditionWriter> GetWriterTimeOfDayCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The current simulation time is compared to a reference value.
             * 
             * @return a writer for model property simulationTimeCondition
            */
            virtual std::shared_ptr<ISimulationTimeConditionWriter> GetWriterSimulationTimeCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced StoryboardElement terminates according to the given rule.
             * 
             * @return a writer for model property storyboardElementStateCondition
            */
            virtual std::shared_ptr<IStoryboardElementStateConditionWriter> GetWriterStoryboardElementStateCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The current value of an externally defined named value is compared to a reference value (less, greater, equal).
             * 
             * @return a writer for model property userDefinedValueCondition
            */
            virtual std::shared_ptr<IUserDefinedValueConditionWriter> GetWriterUserDefinedValueCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced signal reaches the indicated state.
             * 
             * @return a writer for model property trafficSignalCondition
            */
            virtual std::shared_ptr<ITrafficSignalConditionWriter> GetWriterTrafficSignalCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition becomes true if the referenced signal controller reaches the indicated state.
             * 
             * @return a writer for model property trafficSignalControllerCondition
            */
            virtual std::shared_ptr<ITrafficSignalControllerConditionWriter> GetWriterTrafficSignalControllerCondition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Catalog'
         * From OpenSCENARIO class model specification:
         * A catalog may be used to make certain OpenSCENARIO elements reusable. In a catalog parameterizable types are maintained
         * and can be referenced to create runtime instances of those types.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICatalogWriter : public IOpenScenarioElementWriter, public ICatalog
        {
        public:
            virtual ~ICatalogWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the catalog.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of vehicle types that can be reused in a scenario.
             * 
             * @return value of model property vehicles
            */
            virtual void SetVehicles(std::vector<std::shared_ptr<IVehicleWriter>>& vehicles)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of controller types that can be reused in a scenario.
             * 
             * @return value of model property controllers
            */
            virtual void SetControllers(std::vector<std::shared_ptr<IControllerWriter>>& controllers)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of pedestrian types that can be reused in a scenario.
             * 
             * @return value of model property pedestrians
            */
            virtual void SetPedestrians(std::vector<std::shared_ptr<IPedestrianWriter>>& pedestrians)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of miscellaneous object type that that can be reused in a scenario.
             * 
             * @return value of model property miscObjects
            */
            virtual void SetMiscObjects(std::vector<std::shared_ptr<IMiscObjectWriter>>& miscObjects)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of environment types that can be reused in a scenario.
             * 
             * @return value of model property environments
            */
            virtual void SetEnvironments(std::vector<std::shared_ptr<IEnvironmentWriter>>& environments)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of maneuver types that can be reused in a scenario.
             * 
             * @return value of model property maneuvers
            */
            virtual void SetManeuvers(std::vector<std::shared_ptr<IManeuverWriter>>& maneuvers)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of trajectory types that can be reused in a scenario.
             * 
             * @return value of model property trajectories
            */
            virtual void SetTrajectories(std::vector<std::shared_ptr<ITrajectoryWriter>>& trajectories)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of route types that can be reused in a scenario.
             * 
             * @return value of model property routes
            */
            virtual void SetRoutes(std::vector<std::shared_ptr<IRouteWriter>>& routes)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * A list of vehicle types that can be reused in a scenario.
             * 
             * @return a list of writers for model property vehicles
            */
            virtual std::vector<std::shared_ptr<IVehicleWriter>> GetWriterVehicles() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of controller types that can be reused in a scenario.
             * 
             * @return a list of writers for model property controllers
            */
            virtual std::vector<std::shared_ptr<IControllerWriter>> GetWriterControllers() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of pedestrian types that can be reused in a scenario.
             * 
             * @return a list of writers for model property pedestrians
            */
            virtual std::vector<std::shared_ptr<IPedestrianWriter>> GetWriterPedestrians() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of miscellaneous object type that that can be reused in a scenario.
             * 
             * @return a list of writers for model property miscObjects
            */
            virtual std::vector<std::shared_ptr<IMiscObjectWriter>> GetWriterMiscObjects() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of environment types that can be reused in a scenario.
             * 
             * @return a list of writers for model property environments
            */
            virtual std::vector<std::shared_ptr<IEnvironmentWriter>> GetWriterEnvironments() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of maneuver types that can be reused in a scenario.
             * 
             * @return a list of writers for model property maneuvers
            */
            virtual std::vector<std::shared_ptr<IManeuverWriter>> GetWriterManeuvers() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of trajectory types that can be reused in a scenario.
             * 
             * @return a list of writers for model property trajectories
            */
            virtual std::vector<std::shared_ptr<ITrajectoryWriter>> GetWriterTrajectories() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of route types that can be reused in a scenario.
             * 
             * @return a list of writers for model property routes
            */
            virtual std::vector<std::shared_ptr<IRouteWriter>> GetWriterRoutes() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CatalogDefinition'
         * From OpenSCENARIO class model specification:
         * A marker stating that the OpenSCENARIO file is a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICatalogDefinitionWriter : public IOpenScenarioElementWriter, public ICatalogDefinition
        {
        public:
            virtual ~ICatalogDefinitionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a catalog.
             * 
             * @return value of model property catalog
            */
            virtual void SetCatalog(std::shared_ptr<ICatalogWriter> catalog)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Definition of a catalog.
             * 
             * @return a writer for model property catalog
            */
            virtual std::shared_ptr<ICatalogWriter> GetWriterCatalog() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CatalogLocations'
         * From OpenSCENARIO class model specification:
         * Set of catalogs which are referenced in a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICatalogLocationsWriter : public IOpenScenarioElementWriter, public ICatalogLocations
        {
        public:
            virtual ~ICatalogLocationsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on vehicle types.
             * 
             * @return value of model property vehicleCatalog
            */
            virtual void SetVehicleCatalog(std::shared_ptr<IVehicleCatalogLocationWriter> vehicleCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on controller types.
             * 
             * @return value of model property controllerCatalog
            */
            virtual void SetControllerCatalog(std::shared_ptr<IControllerCatalogLocationWriter> controllerCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on pedestrian types.
             * 
             * @return value of model property pedestrianCatalog
            */
            virtual void SetPedestrianCatalog(std::shared_ptr<IPedestrianCatalogLocationWriter> pedestrianCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on miscellaneous object types.
             * 
             * @return value of model property miscObjectCatalog
            */
            virtual void SetMiscObjectCatalog(std::shared_ptr<IMiscObjectCatalogLocationWriter> miscObjectCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on environment types.
             * 
             * @return value of model property environmentCatalog
            */
            virtual void SetEnvironmentCatalog(std::shared_ptr<IEnvironmentCatalogLocationWriter> environmentCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on maneuver types.
             * 
             * @return value of model property maneuverCatalog
            */
            virtual void SetManeuverCatalog(std::shared_ptr<IManeuverCatalogLocationWriter> maneuverCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on trajectory types.
             * 
             * @return value of model property trajectoryCatalog
            */
            virtual void SetTrajectoryCatalog(std::shared_ptr<ITrajectoryCatalogLocationWriter> trajectoryCatalog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on route types.
             * 
             * @return value of model property routeCatalog
            */
            virtual void SetRouteCatalog(std::shared_ptr<IRouteCatalogLocationWriter> routeCatalog)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on vehicle types.
             * 
             * @return a writer for model property vehicleCatalog
            */
            virtual std::shared_ptr<IVehicleCatalogLocationWriter> GetWriterVehicleCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on controller types.
             * 
             * @return a writer for model property controllerCatalog
            */
            virtual std::shared_ptr<IControllerCatalogLocationWriter> GetWriterControllerCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on pedestrian types.
             * 
             * @return a writer for model property pedestrianCatalog
            */
            virtual std::shared_ptr<IPedestrianCatalogLocationWriter> GetWriterPedestrianCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on miscellaneous object types.
             * 
             * @return a writer for model property miscObjectCatalog
            */
            virtual std::shared_ptr<IMiscObjectCatalogLocationWriter> GetWriterMiscObjectCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on environment types.
             * 
             * @return a writer for model property environmentCatalog
            */
            virtual std::shared_ptr<IEnvironmentCatalogLocationWriter> GetWriterEnvironmentCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on maneuver types.
             * 
             * @return a writer for model property maneuverCatalog
            */
            virtual std::shared_ptr<IManeuverCatalogLocationWriter> GetWriterManeuverCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on trajectory types.
             * 
             * @return a writer for model property trajectoryCatalog
            */
            virtual std::shared_ptr<ITrajectoryCatalogLocationWriter> GetWriterTrajectoryCatalog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This catalog location is the first choice to resolve CatalogReferences on route types.
             * 
             * @return a writer for model property routeCatalog
            */
            virtual std::shared_ptr<IRouteCatalogLocationWriter> GetWriterRouteCatalog() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CatalogReference'
         * From OpenSCENARIO class model specification:
         * A reference to type in a catalog. It is used when importing the type in a scenario. Furthermore, it hands over
         * additional parameter values.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICatalogReferenceWriter : public IOpenScenarioElementWriter, public ICatalogReference
        {
        public:
            virtual ~ICatalogReferenceWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the catalog.
             * 
             * @return value of model property catalogName
            */
            virtual void SetCatalogName(const std::string catalogName)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of catalog entry.
             * 
             * @return value of model property entryName
            */
            virtual void SetEntryName(const std::string entryName)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of parameter assignments for instantiation.
             * 
             * @return value of model property parameterAssignments
            */
            virtual void SetParameterAssignments(std::vector<std::shared_ptr<IParameterAssignmentWriter>>& parameterAssignments)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The resolved reference to a catalog element (out of the catalogName and entryName). Transient means, that it is not
             * mapped to the schema.
             * 
             * @return value of model property ref
            */
            virtual void SetRef(const std::shared_ptr<ICatalogElement> ref) = 0;

            /**
             * Set a parameter for the attribute  catalogName
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToCatalogName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entryName
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntryName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  catalogName
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromCatalogName() const  = 0;
            /**
             * Get the parameter for the attribute  entryName
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntryName() const  = 0;

            /**
             * Retrieves whether the attribute catalogName is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsCatalogNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute entryName is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntryNameParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * List of parameter assignments for instantiation.
             * 
             * @return a list of writers for model property parameterAssignments
            */
            virtual std::vector<std::shared_ptr<IParameterAssignmentWriter>> GetWriterParameterAssignments() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Center'
         * From OpenSCENARIO class model specification:
         * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
         * the entity (e.g. the vehicle coordinate system).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICenterWriter : public IOpenScenarioElementWriter, public ICenter
        {
        public:
            virtual ~ICenterWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Center offset in x direction.
             * 
             * @return value of model property x
            */
            virtual void SetX(const double x)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Center offset in y direction.
             * 
             * @return value of model property y
            */
            virtual void SetY(const double y)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Center offset in z direction.
             * 
             * @return value of model property z
            */
            virtual void SetZ(const double z)  = 0;

            /**
             * Set a parameter for the attribute  x
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToX(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  y
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToY(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  z
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToZ(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  x
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromX() const  = 0;
            /**
             * Get the parameter for the attribute  y
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromY() const  = 0;
            /**
             * Get the parameter for the attribute  z
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromZ() const  = 0;

            /**
             * Retrieves whether the attribute x is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsXParameterized()  = 0;
            /**
             * Retrieves whether the attribute y is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsYParameterized()  = 0;
            /**
             * Retrieves whether the attribute z is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsZParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CentralSwarmObject'
         * From OpenSCENARIO class model specification:
         * The entity that represents the center of a swarm.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICentralSwarmObjectWriter : public IOpenScenarioElementWriter, public ICentralSwarmObject
        {
        public:
            virtual ~ICentralSwarmObjectWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the central entity the swarm traffic is created around.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Clothoid'
         * From OpenSCENARIO class model specification:
         * A shape of the trajectory of an entity. A clothoid is a curve whose curvature changes linearly with its curve length.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IClothoidWriter : public IOpenScenarioElementWriter, public IClothoid
        {
        public:
            virtual ~IClothoidWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Start curvature of clothoid.
             * 
             * @return value of model property curvature
            */
            virtual void SetCurvature(const double curvature)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Rate of change of the curvature of the clothoid.Unit: 1/s;Range [0..inf[.
             * 
             * @return value of model property curvatureDot
            */
            virtual void SetCurvatureDot(const double curvatureDot)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Length of clothoid.
             * 
             * @return value of model property length
            */
            virtual void SetLength(const double length)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Optional time specification at the start of the clothoid. Unit: s;Range [0..inf[.
             * 
             * @return value of model property startTime
            */
            virtual void SetStartTime(const double startTime)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Optional time specification at the end of the clothoid. Unit: s;Range ]0..inf[.
             * 
             * @return value of model property stopTime
            */
            virtual void SetStopTime(const double stopTime)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Start position of a clothoid.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * Set a parameter for the attribute  curvature
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToCurvature(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  curvatureDot
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToCurvatureDot(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  length
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLength(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  startTime
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToStartTime(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  stopTime
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToStopTime(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  curvature
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromCurvature() const  = 0;
            /**
             * Get the parameter for the attribute  curvatureDot
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromCurvatureDot() const  = 0;
            /**
             * Get the parameter for the attribute  length
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLength() const  = 0;
            /**
             * Get the parameter for the attribute  startTime
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromStartTime() const  = 0;
            /**
             * Get the parameter for the attribute  stopTime
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromStopTime() const  = 0;

            /**
             * Retrieves whether the attribute curvature is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsCurvatureParameterized()  = 0;
            /**
             * Retrieves whether the attribute curvatureDot is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsCurvatureDotParameterized()  = 0;
            /**
             * Retrieves whether the attribute length is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLengthParameterized()  = 0;
            /**
             * Retrieves whether the attribute startTime is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStartTimeParameterized()  = 0;
            /**
             * Retrieves whether the attribute stopTime is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStopTimeParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Start position of a clothoid.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CollisionCondition'
         * From OpenSCENARIO class model specification:
         * Condition becomes true when the triggering entity/entities collide with another given entity or any entity of a specific
         * type.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICollisionConditionWriter : public IOpenScenarioElementWriter, public ICollisionCondition
        {
        public:
            virtual ~ICollisionConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of a specific entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<IEntityRefWriter> entityRef)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Entities of this type can trigger the condition when collide.
             * 
             * @return value of model property byType
            */
            virtual void SetByType(std::shared_ptr<IByObjectTypeWriter> byType)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Name of a specific entity.
             * 
             * @return a writer for model property entityRef
            */
            virtual std::shared_ptr<IEntityRefWriter> GetWriterEntityRef() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Entities of this type can trigger the condition when collide.
             * 
             * @return a writer for model property byType
            */
            virtual std::shared_ptr<IByObjectTypeWriter> GetWriterByType() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Condition'
         * From OpenSCENARIO class model specification:
         * A condition represents a set of logical expressions that evaluate the relationship of values provided by the user. These
         * values may be entity states, scenario properties, scenario states or external signals. Conditions are the main
         * components in triggers.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IConditionWriter : public IOpenScenarioElementWriter, public ICondition
        {
        public:
            virtual ~IConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Specifies the edge when the condition is evaluated to true (rising, falling, any).
             * 
             * @return value of model property conditionEdge
            */
            virtual void SetConditionEdge(const ConditionEdge conditionEdge)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Time elapsed after the edge condition is verified, until the condition returns true to the scenario. Unit: s; Range:
             * [0..inf[.
             * 
             * @return value of model property delay
            */
            virtual void SetDelay(const double delay)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the condition.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A condition that refers to an entity.
             * 
             * @return value of model property byEntityCondition
            */
            virtual void SetByEntityCondition(std::shared_ptr<IByEntityConditionWriter> byEntityCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A condition that refers to a runtime value.
             * 
             * @return value of model property byValueCondition
            */
            virtual void SetByValueCondition(std::shared_ptr<IByValueConditionWriter> byValueCondition)  = 0;

            /**
             * Set a parameter for the attribute  conditionEdge
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToConditionEdge(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  delay
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDelay(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  conditionEdge
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromConditionEdge() const  = 0;
            /**
             * Get the parameter for the attribute  delay
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDelay() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute conditionEdge is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsConditionEdgeParameterized()  = 0;
            /**
             * Retrieves whether the attribute delay is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDelayParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * A condition that refers to an entity.
             * 
             * @return a writer for model property byEntityCondition
            */
            virtual std::shared_ptr<IByEntityConditionWriter> GetWriterByEntityCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A condition that refers to a runtime value.
             * 
             * @return a writer for model property byValueCondition
            */
            virtual std::shared_ptr<IByValueConditionWriter> GetWriterByValueCondition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ConditionGroup'
         * From OpenSCENARIO class model specification:
         * A condition group is an association of conditions that is assessed during simulation time and signals true when all
         * associated conditions are evaluated to true.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IConditionGroupWriter : public IOpenScenarioElementWriter, public IConditionGroup
        {
        public:
            virtual ~IConditionGroupWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A associated list of conditions.
             * 
             * @return value of model property conditions
            */
            virtual void SetConditions(std::vector<std::shared_ptr<IConditionWriter>>& conditions)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * A associated list of conditions.
             * 
             * @return a list of writers for model property conditions
            */
            virtual std::vector<std::shared_ptr<IConditionWriter>> GetWriterConditions() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ControlPoint'
         * From OpenSCENARIO class model specification:
         * Specification of one control point of a NURBS trajectory.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IControlPointWriter : public IOpenScenarioElementWriter, public IControlPoint
        {
        public:
            virtual ~IControlPointWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Optional specification of the time dimension of the control point. Unit: s;Range [0..inf[.
             * 
             * @return value of model property time
            */
            virtual void SetTime(const double time)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Optional weight specification of the control point. If unspecified, all control points will be equal weighted. Range
             * ]-inf..inf[.
             * 
             * @return value of model property weight
            */
            virtual void SetWeight(const double weight)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position of the control point.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * Set a parameter for the attribute  time
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTime(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  weight
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToWeight(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  time
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTime() const  = 0;
            /**
             * Get the parameter for the attribute  weight
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromWeight() const  = 0;

            /**
             * Retrieves whether the attribute time is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTimeParameterized()  = 0;
            /**
             * Retrieves whether the attribute weight is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsWeightParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Position of the control point.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Controller'
         * From OpenSCENARIO class model specification:
         * Defines a controller type and parameters for the controller.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IControllerWriter : public IOpenScenarioElementWriter, public IController, public ICatalogElementWriter
        {
        public:
            virtual ~IControllerWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the controller type.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Describing properties for the controller.
             * 
             * @return value of model property properties
            */
            virtual void SetProperties(std::shared_ptr<IPropertiesWriter> properties)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Describing properties for the controller.
             * 
             * @return a writer for model property properties
            */
            virtual std::shared_ptr<IPropertiesWriter> GetWriterProperties() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ControllerAction'
         * From OpenSCENARIO class model specification:
         * Action that assigns a new controller or overrides an existing one.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IControllerActionWriter : public IOpenScenarioElementWriter, public IControllerAction
        {
        public:
            virtual ~IControllerActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Assign a controller to an entity.
             * 
             * @return value of model property assignControllerAction
            */
            virtual void SetAssignControllerAction(std::shared_ptr<IAssignControllerActionWriter> assignControllerAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Values for throttle, brake, clutch, parking brake, steering wheel or gear.
             * 
             * @return value of model property overrideControllerValueAction
            */
            virtual void SetOverrideControllerValueAction(std::shared_ptr<IOverrideControllerValueActionWriter> overrideControllerValueAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Assign a controller to an entity.
             * 
             * @return a writer for model property assignControllerAction
            */
            virtual std::shared_ptr<IAssignControllerActionWriter> GetWriterAssignControllerAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Values for throttle, brake, clutch, parking brake, steering wheel or gear.
             * 
             * @return a writer for model property overrideControllerValueAction
            */
            virtual std::shared_ptr<IOverrideControllerValueActionWriter> GetWriterOverrideControllerValueAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ControllerCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up controller catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IControllerCatalogLocationWriter : public IOpenScenarioElementWriter, public IControllerCatalogLocation
        {
        public:
            virtual ~IControllerCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalog files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalog files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ControllerDistribution'
         * From OpenSCENARIO class model specification:
         * Defines a distribution which controller should be used in a traffic.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IControllerDistributionWriter : public IOpenScenarioElementWriter, public IControllerDistribution
        {
        public:
            virtual ~IControllerDistributionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The weights of controllers of a specific type in a traffic.
             * 
             * @return value of model property controllerDistributionEntries
            */
            virtual void SetControllerDistributionEntries(std::vector<std::shared_ptr<IControllerDistributionEntryWriter>>& controllerDistributionEntries)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * The weights of controllers of a specific type in a traffic.
             * 
             * @return a list of writers for model property controllerDistributionEntries
            */
            virtual std::vector<std::shared_ptr<IControllerDistributionEntryWriter>> GetWriterControllerDistributionEntries() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ControllerDistributionEntry'
         * From OpenSCENARIO class model specification:
         * Defines that weight in a controller distribution, for the given controller type.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IControllerDistributionEntryWriter : public IOpenScenarioElementWriter, public IControllerDistributionEntry
        {
        public:
            virtual ~IControllerDistributionEntryWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The weight of the entry. Range: ]0..inf[.
             * 
             * @return value of model property weight
            */
            virtual void SetWeight(const double weight)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The specified controller type.
             * 
             * @return value of model property controller
            */
            virtual void SetController(std::shared_ptr<IControllerWriter> controller)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A controller type import from a catalog.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;

            /**
             * Set a parameter for the attribute  weight
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToWeight(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  weight
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromWeight() const  = 0;

            /**
             * Retrieves whether the attribute weight is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsWeightParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The specified controller type.
             * 
             * @return a writer for model property controller
            */
            virtual std::shared_ptr<IControllerWriter> GetWriterController() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A controller type import from a catalog.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'CustomCommandAction'
         * From OpenSCENARIO class model specification:
         * Used to activate a custom action native to the specific user environment
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ICustomCommandActionWriter : public IOpenScenarioElementWriter, public ICustomCommandAction
        {
        public:
            virtual ~ICustomCommandActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The command that is defined as a contract between the simulation environment provider and the author of a scenario.
             * 
             * @return value of model property content
            */
            virtual void SetContent(const std::string content)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Type that is defined as a contract between the simulation environment provider and the author of a scenario.
             * 
             * @return value of model property type
            */
            virtual void SetType(const std::string type)  = 0;

            /**
             * Set a parameter for the attribute  content
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToContent(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  type
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToType(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  content
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromContent() const  = 0;
            /**
             * Get the parameter for the attribute  type
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromType() const  = 0;

            /**
             * Retrieves whether the attribute content is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsContentParameterized()  = 0;
            /**
             * Retrieves whether the attribute type is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTypeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'DeleteEntityAction'
         * From OpenSCENARIO class model specification:
         * Deletes an entity at runtime from the simulation (The entity reference is defined in the enclosing GlobalAction).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDeleteEntityActionWriter : public IOpenScenarioElementWriter, public IDeleteEntityAction
        {
        public:
            virtual ~IDeleteEntityActionWriter() = default;





            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Dimensions'
         * From OpenSCENARIO class model specification:
         * Dimensions for a three dimensional box. Width, length and height are the absolute extensions in the (y,x,z) coordinate
         * system of the entity's local coordinate system.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDimensionsWriter : public IOpenScenarioElementWriter, public IDimensions
        {
        public:
            virtual ~IDimensionsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Height of the entity's bounding box. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property height
            */
            virtual void SetHeight(const double height)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Length of the entity's bounding box. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property length
            */
            virtual void SetLength(const double length)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Width of the entity's bounding box. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property width
            */
            virtual void SetWidth(const double width)  = 0;

            /**
             * Set a parameter for the attribute  height
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToHeight(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  length
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLength(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  width
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToWidth(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  height
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromHeight() const  = 0;
            /**
             * Get the parameter for the attribute  length
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLength() const  = 0;
            /**
             * Get the parameter for the attribute  width
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromWidth() const  = 0;

            /**
             * Retrieves whether the attribute height is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsHeightParameterized()  = 0;
            /**
             * Retrieves whether the attribute length is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLengthParameterized()  = 0;
            /**
             * Retrieves whether the attribute width is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsWidthParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Directory'
         * From OpenSCENARIO class model specification:
         * Specifies the path to a directory.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDirectoryWriter : public IOpenScenarioElementWriter, public IDirectory
        {
        public:
            virtual ~IDirectoryWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * File system path, e.g. path=/home/simulation/.
             * 
             * @return value of model property path
            */
            virtual void SetPath(const std::string path)  = 0;

            /**
             * Set a parameter for the attribute  path
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPath(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  path
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPath() const  = 0;

            /**
             * Retrieves whether the attribute path is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPathParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'DistanceCondition'
         * From OpenSCENARIO class model specification:
         * The current distance between an entity and a reference entity is compared to a given distance (less, greater, equal).
         * Several additional parameters like free space etc. can be defined.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDistanceConditionWriter : public IOpenScenarioElementWriter, public IDistanceCondition
        {
        public:
            virtual ~IDistanceConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
             * 
             * @return value of model property alongRoute
            */
            virtual void SetAlongRoute(const bool alongRoute)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: distance is measured between closest bounding box points. False: reference point distance is used.
             * 
             * @return value of model property freespace
            */
            virtual void SetFreespace(const bool freespace)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The distance value. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The given position the distance is related to.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * Set a parameter for the attribute  alongRoute
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToAlongRoute(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  freespace
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFreespace(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  alongRoute
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromAlongRoute() const  = 0;
            /**
             * Get the parameter for the attribute  freespace
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFreespace() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute alongRoute is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsAlongRouteParameterized()  = 0;
            /**
             * Retrieves whether the attribute freespace is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFreespaceParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The given position the distance is related to.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'DynamicConstraints'
         * From OpenSCENARIO class model specification:
         * Constraints that are limiting the acceleration, the deceleration and the speed. Used in lateral or longitudinal actions.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IDynamicConstraintsWriter : public IOpenScenarioElementWriter, public IDynamicConstraints
        {
        public:
            virtual ~IDynamicConstraintsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Maximum acceleration the distance controller is allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
             * 
             * @return value of model property maxAcceleration
            */
            virtual void SetMaxAcceleration(const double maxAcceleration)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Maximum deceleration the distance controller is allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
             * 
             * @return value of model property maxDeceleration
            */
            virtual void SetMaxDeceleration(const double maxDeceleration)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Maximum speed the distance controller is allowed to use for keeping the distance. Unit: m/s; Range: [0..inf[.
             * 
             * @return value of model property maxSpeed
            */
            virtual void SetMaxSpeed(const double maxSpeed)  = 0;

            /**
             * Set a parameter for the attribute  maxAcceleration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxAcceleration(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  maxDeceleration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxDeceleration(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  maxSpeed
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxSpeed(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  maxAcceleration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxAcceleration() const  = 0;
            /**
             * Get the parameter for the attribute  maxDeceleration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxDeceleration() const  = 0;
            /**
             * Get the parameter for the attribute  maxSpeed
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxSpeed() const  = 0;

            /**
             * Retrieves whether the attribute maxAcceleration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxAccelerationParameterized()  = 0;
            /**
             * Retrieves whether the attribute maxDeceleration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxDecelerationParameterized()  = 0;
            /**
             * Retrieves whether the attribute maxSpeed is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxSpeedParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EndOfRoadCondition'
         * From OpenSCENARIO class model specification:
         * Condition becomes true after the triggering entity/entities has reached the end of a road for a given amount of time.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEndOfRoadConditionWriter : public IOpenScenarioElementWriter, public IEndOfRoadCondition
        {
        public:
            virtual ~IEndOfRoadConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Amount of time at end of road. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual void SetDuration(const double duration)  = 0;

            /**
             * Set a parameter for the attribute  duration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDuration(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  duration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDuration() const  = 0;

            /**
             * Retrieves whether the attribute duration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDurationParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Entities'
         * From OpenSCENARIO class model specification:
         * Definition of entities (scenario objects or entity selections) in a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntitiesWriter : public IOpenScenarioElementWriter, public IEntities
        {
        public:
            virtual ~IEntitiesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A list of scenario object definitions that pairs an entity object and a controller.
             * 
             * @return value of model property scenarioObjects
            */
            virtual void SetScenarioObjects(std::vector<std::shared_ptr<IScenarioObjectWriter>>& scenarioObjects)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of entity selection definitions.
             * 
             * @return value of model property entitySelections
            */
            virtual void SetEntitySelections(std::vector<std::shared_ptr<IEntitySelectionWriter>>& entitySelections)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * A list of scenario object definitions that pairs an entity object and a controller.
             * 
             * @return a list of writers for model property scenarioObjects
            */
            virtual std::vector<std::shared_ptr<IScenarioObjectWriter>> GetWriterScenarioObjects() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of entity selection definitions.
             * 
             * @return a list of writers for model property entitySelections
            */
            virtual std::vector<std::shared_ptr<IEntitySelectionWriter>> GetWriterEntitySelections() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EntityAction'
         * From OpenSCENARIO class model specification:
         * Defines an action that adds
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntityActionWriter : public IOpenScenarioElementWriter, public IEntityAction
        {
        public:
            virtual ~IEntityActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Action that adds the reference entity to the scenario.
             * 
             * @return value of model property addEntityAction
            */
            virtual void SetAddEntityAction(std::shared_ptr<IAddEntityActionWriter> addEntityAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Action that deletes the reference entity from the scenario.
             * 
             * @return value of model property deleteEntityAction
            */
            virtual void SetDeleteEntityAction(std::shared_ptr<IDeleteEntityActionWriter> deleteEntityAction)  = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Action that adds the reference entity to the scenario.
             * 
             * @return a writer for model property addEntityAction
            */
            virtual std::shared_ptr<IAddEntityActionWriter> GetWriterAddEntityAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Action that deletes the reference entity from the scenario.
             * 
             * @return a writer for model property deleteEntityAction
            */
            virtual std::shared_ptr<IDeleteEntityActionWriter> GetWriterDeleteEntityAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EntityCondition'
         * From OpenSCENARIO class model specification:
         * Defines a specific condition on an entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntityConditionWriter : public IOpenScenarioElementWriter, public IEntityCondition
        {
        public:
            virtual ~IEntityConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has reached the end of the road.
             * 
             * @return value of model property endOfRoadCondition
            */
            virtual void SetEndOfRoadCondition(std::shared_ptr<IEndOfRoadConditionWriter> endOfRoadCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking whether the reference entity was involved in a collision.
             * 
             * @return value of model property collisionCondition
            */
            virtual void SetCollisionCondition(std::shared_ptr<ICollisionConditionWriter> collisionCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has left the road.
             * 
             * @return value of model property offroadCondition
            */
            virtual void SetOffroadCondition(std::shared_ptr<IOffroadConditionWriter> offroadCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the time headway between two entities.
             * 
             * @return value of model property timeHeadwayCondition
            */
            virtual void SetTimeHeadwayCondition(std::shared_ptr<ITimeHeadwayConditionWriter> timeHeadwayCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the time to collision between two entities.
             * 
             * @return value of model property timeToCollisionCondition
            */
            virtual void SetTimeToCollisionCondition(std::shared_ptr<ITimeToCollisionConditionWriter> timeToCollisionCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the current acceleration of an entity.
             * 
             * @return value of model property accelerationCondition
            */
            virtual void SetAccelerationCondition(std::shared_ptr<IAccelerationConditionWriter> accelerationCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has not moved.
             * 
             * @return value of model property standStillCondition
            */
            virtual void SetStandStillCondition(std::shared_ptr<IStandStillConditionWriter> standStillCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the current speed of the referenced entities.
             * 
             * @return value of model property speedCondition
            */
            virtual void SetSpeedCondition(std::shared_ptr<ISpeedConditionWriter> speedCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative speed between two entity.
             * 
             * @return value of model property relativeSpeedCondition
            */
            virtual void SetRelativeSpeedCondition(std::shared_ptr<IRelativeSpeedConditionWriter> relativeSpeedCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the total traveled distance of the reference entity since the start of the scenario.
             * 
             * @return value of model property traveledDistanceCondition
            */
            virtual void SetTraveledDistanceCondition(std::shared_ptr<ITraveledDistanceConditionWriter> traveledDistanceCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking whether the reference entity has reached a given position within a given uncertainty.
             * 
             * @return value of model property reachPositionCondition
            */
            virtual void SetReachPositionCondition(std::shared_ptr<IReachPositionConditionWriter> reachPositionCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the distance between two entities or an entity and a position.
             * 
             * @return value of model property distanceCondition
            */
            virtual void SetDistanceCondition(std::shared_ptr<IDistanceConditionWriter> distanceCondition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative distance between two entities.
             * 
             * @return value of model property relativeDistanceCondition
            */
            virtual void SetRelativeDistanceCondition(std::shared_ptr<IRelativeDistanceConditionWriter> relativeDistanceCondition)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has reached the end of the road.
             * 
             * @return a writer for model property endOfRoadCondition
            */
            virtual std::shared_ptr<IEndOfRoadConditionWriter> GetWriterEndOfRoadCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking whether the reference entity was involved in a collision.
             * 
             * @return a writer for model property collisionCondition
            */
            virtual std::shared_ptr<ICollisionConditionWriter> GetWriterCollisionCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has left the road.
             * 
             * @return a writer for model property offroadCondition
            */
            virtual std::shared_ptr<IOffroadConditionWriter> GetWriterOffroadCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the time headway between two entities.
             * 
             * @return a writer for model property timeHeadwayCondition
            */
            virtual std::shared_ptr<ITimeHeadwayConditionWriter> GetWriterTimeHeadwayCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the time to collision between two entities.
             * 
             * @return a writer for model property timeToCollisionCondition
            */
            virtual std::shared_ptr<ITimeToCollisionConditionWriter> GetWriterTimeToCollisionCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the current acceleration of an entity.
             * 
             * @return a writer for model property accelerationCondition
            */
            virtual std::shared_ptr<IAccelerationConditionWriter> GetWriterAccelerationCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking for how long the reference entity has not moved.
             * 
             * @return a writer for model property standStillCondition
            */
            virtual std::shared_ptr<IStandStillConditionWriter> GetWriterStandStillCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the current speed of the referenced entities.
             * 
             * @return a writer for model property speedCondition
            */
            virtual std::shared_ptr<ISpeedConditionWriter> GetWriterSpeedCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative speed between two entity.
             * 
             * @return a writer for model property relativeSpeedCondition
            */
            virtual std::shared_ptr<IRelativeSpeedConditionWriter> GetWriterRelativeSpeedCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the total traveled distance of the reference entity since the start of the scenario.
             * 
             * @return a writer for model property traveledDistanceCondition
            */
            virtual std::shared_ptr<ITraveledDistanceConditionWriter> GetWriterTraveledDistanceCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking whether the reference entity has reached a given position within a given uncertainty.
             * 
             * @return a writer for model property reachPositionCondition
            */
            virtual std::shared_ptr<IReachPositionConditionWriter> GetWriterReachPositionCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the distance between two entities or an entity and a position.
             * 
             * @return a writer for model property distanceCondition
            */
            virtual std::shared_ptr<IDistanceConditionWriter> GetWriterDistanceCondition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Condition checking the relative distance between two entities.
             * 
             * @return a writer for model property relativeDistanceCondition
            */
            virtual std::shared_ptr<IRelativeDistanceConditionWriter> GetWriterRelativeDistanceCondition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EntityObject'
         * From OpenSCENARIO class model specification:
         * A vehicle type, pedestrian type or miscellaneous object type.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntityObjectWriter : public IOpenScenarioElementWriter, public IEntityObject
        {
        public:
            virtual ~IEntityObjectWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a catalog entry of type MiscObject, Vehicle or Pedestrian.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Vehicle definition.
             * 
             * @return value of model property vehicle
            */
            virtual void SetVehicle(std::shared_ptr<IVehicleWriter> vehicle)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Pedestrian definition.
             * 
             * @return value of model property pedestrian
            */
            virtual void SetPedestrian(std::shared_ptr<IPedestrianWriter> pedestrian)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a MiscObject.
             * 
             * @return value of model property miscObject
            */
            virtual void SetMiscObject(std::shared_ptr<IMiscObjectWriter> miscObject)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Reference to a catalog entry of type MiscObject, Vehicle or Pedestrian.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Vehicle definition.
             * 
             * @return a writer for model property vehicle
            */
            virtual std::shared_ptr<IVehicleWriter> GetWriterVehicle() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Pedestrian definition.
             * 
             * @return a writer for model property pedestrian
            */
            virtual std::shared_ptr<IPedestrianWriter> GetWriterPedestrian() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Definition of a MiscObject.
             * 
             * @return a writer for model property miscObject
            */
            virtual std::shared_ptr<IMiscObjectWriter> GetWriterMiscObject() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EntityRef'
         * From OpenSCENARIO class model specification:
         * Unambiguous reference to an entity represented as its name.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntityRefWriter : public IOpenScenarioElementWriter, public IEntityRef
        {
        public:
            virtual ~IEntityRefWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EntitySelection'
         * From OpenSCENARIO class model specification:
         * Grouping of scenario objects by name and/or type. An instance of EntitySelection is considered also an instance of
         * Entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEntitySelectionWriter : public IOpenScenarioElementWriter, public IEntitySelection, public IEntityWriter
        {
        public:
            virtual ~IEntitySelectionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the entity selection. By this name, a selection can be referenced as an entity.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Selected entities as members of the entity selection.
             * 
             * @return value of model property members
            */
            virtual void SetMembers(std::shared_ptr<ISelectedEntitiesWriter> members)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Selected entities as members of the entity selection.
             * 
             * @return a writer for model property members
            */
            virtual std::shared_ptr<ISelectedEntitiesWriter> GetWriterMembers() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Environment'
         * From OpenSCENARIO class model specification:
         * Defines the environment conditions of a scenario, e.g. time of day, weather and road condition.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEnvironmentWriter : public IOpenScenarioElementWriter, public IEnvironment, public ICatalogElementWriter
        {
        public:
            virtual ~IEnvironmentWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the environment. If used in catalog name is required.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Time of the day during the simulation.
             * 
             * @return value of model property timeOfDay
            */
            virtual void SetTimeOfDay(std::shared_ptr<ITimeOfDayWriter> timeOfDay)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Weather conditions during the simulation.
             * 
             * @return value of model property weather
            */
            virtual void SetWeather(std::shared_ptr<IWeatherWriter> weather)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Road conditions during the simulation.
             * 
             * @return value of model property roadCondition
            */
            virtual void SetRoadCondition(std::shared_ptr<IRoadConditionWriter> roadCondition)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Time of the day during the simulation.
             * 
             * @return a writer for model property timeOfDay
            */
            virtual std::shared_ptr<ITimeOfDayWriter> GetWriterTimeOfDay() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Weather conditions during the simulation.
             * 
             * @return a writer for model property weather
            */
            virtual std::shared_ptr<IWeatherWriter> GetWriterWeather() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Road conditions during the simulation.
             * 
             * @return a writer for model property roadCondition
            */
            virtual std::shared_ptr<IRoadConditionWriter> GetWriterRoadCondition() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EnvironmentAction'
         * From OpenSCENARIO class model specification:
         * Setting weather state, road conditions, and time of the day. An environment can be defined or an environment type from a
         * catalog can be used to instantiate an environment.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEnvironmentActionWriter : public IOpenScenarioElementWriter, public IEnvironmentAction
        {
        public:
            virtual ~IEnvironmentActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * New environment definition.
             * 
             * @return value of model property environment
            */
            virtual void SetEnvironment(std::shared_ptr<IEnvironmentWriter> environment)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference to a catalog entry of type Environment.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * New environment definition.
             * 
             * @return a writer for model property environment
            */
            virtual std::shared_ptr<IEnvironmentWriter> GetWriterEnvironment() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Reference to a catalog entry of type Environment.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'EnvironmentCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up environment catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEnvironmentCatalogLocationWriter : public IOpenScenarioElementWriter, public IEnvironmentCatalogLocation
        {
        public:
            virtual ~IEnvironmentCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Event'
         * From OpenSCENARIO class model specification:
         * Container for Actions. Its priority settings determine how to interact with other events within the same scope
         * (maneuver).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IEventWriter : public IOpenScenarioElementWriter, public IEvent, public IStoryboardElementWriter
        {
        public:
            virtual ~IEventWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Maximum number of executions. Default value is 1. Range: [1..inf[.
             * 
             * @return value of model property maximumExecutionCount
            */
            virtual void SetMaximumExecutionCount(const uint32_t maximumExecutionCount)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the event.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Priority of each event.
             * 
             * @return value of model property priority
            */
            virtual void SetPriority(const Priority priority)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of actions in an event.
             * 
             * @return value of model property actions
            */
            virtual void SetActions(std::vector<std::shared_ptr<IActionWriter>>& actions)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Actions are executed as soon as the start trigger fires. This point in time represents the start of the event.
             * 
             * @return value of model property startTrigger
            */
            virtual void SetStartTrigger(std::shared_ptr<ITriggerWriter> startTrigger)  = 0;

            /**
             * Set a parameter for the attribute  maximumExecutionCount
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaximumExecutionCount(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  priority
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPriority(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  maximumExecutionCount
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaximumExecutionCount() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  priority
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPriority() const  = 0;

            /**
             * Retrieves whether the attribute maximumExecutionCount is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaximumExecutionCountParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute priority is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPriorityParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Actions are executed as soon as the start trigger fires. This point in time represents the start of the event.
             * 
             * @return a writer for model property startTrigger
            */
            virtual std::shared_ptr<ITriggerWriter> GetWriterStartTrigger() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of actions in an event.
             * 
             * @return a list of writers for model property actions
            */
            virtual std::vector<std::shared_ptr<IActionWriter>> GetWriterActions() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'File'
         * From OpenSCENARIO class model specification:
         * File on the file system, including its file path.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IFileWriter : public IOpenScenarioElementWriter, public IFile
        {
        public:
            virtual ~IFileWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Filepath e.g. filepath=/home/simulator/customDriverSpecification.xml.
             * 
             * @return value of model property filepath
            */
            virtual void SetFilepath(const std::string filepath)  = 0;

            /**
             * Set a parameter for the attribute  filepath
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFilepath(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  filepath
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFilepath() const  = 0;

            /**
             * Retrieves whether the attribute filepath is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFilepathParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'FileHeader'
         * From OpenSCENARIO class model specification:
         * File header used in OpenSCENARIO files, e.g. scenario file or catalog files.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IFileHeaderWriter : public IOpenScenarioElementWriter, public IFileHeader
        {
        public:
            virtual ~IFileHeaderWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Author of the scenario or the catalog.
             * 
             * @return value of model property author
            */
            virtual void SetAuthor(const std::string author)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * User specific date and time recommended: YYYY-MM-DDThh:mm:ss.
             * 
             * @return value of model property date
            */
            virtual void SetDate(const DateTime date)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * User specific description.
             * 
             * @return value of model property description
            */
            virtual void SetDescription(const std::string description)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Major OpenSCENARIO revision, this file conforms to Range: [0..inf[.
             * 
             * @return value of model property revMajor
            */
            virtual void SetRevMajor(const uint16_t revMajor)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Minor OpenSCENARIO revision, this file conforms to Range: [0..inf[.
             * 
             * @return value of model property revMinor
            */
            virtual void SetRevMinor(const uint16_t revMinor)  = 0;

            /**
             * Set a parameter for the attribute  author
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToAuthor(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  date
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDate(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  description
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDescription(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  revMajor
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRevMajor(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  revMinor
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRevMinor(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  author
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromAuthor() const  = 0;
            /**
             * Get the parameter for the attribute  date
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDate() const  = 0;
            /**
             * Get the parameter for the attribute  description
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDescription() const  = 0;
            /**
             * Get the parameter for the attribute  revMajor
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRevMajor() const  = 0;
            /**
             * Get the parameter for the attribute  revMinor
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRevMinor() const  = 0;

            /**
             * Retrieves whether the attribute author is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsAuthorParameterized()  = 0;
            /**
             * Retrieves whether the attribute date is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDateParameterized()  = 0;
            /**
             * Retrieves whether the attribute description is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDescriptionParameterized()  = 0;
            /**
             * Retrieves whether the attribute revMajor is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRevMajorParameterized()  = 0;
            /**
             * Retrieves whether the attribute revMinor is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRevMinorParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'FinalSpeed'
         * From OpenSCENARIO class model specification:
         * Final speed definition for a SynchronizeAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IFinalSpeedWriter : public IOpenScenarioElementWriter, public IFinalSpeed
        {
        public:
            virtual ~IFinalSpeedWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The absolute speed a synchronized entity should have at its target position.
             * 
             * @return value of model property absoluteSpeed
            */
            virtual void SetAbsoluteSpeed(std::shared_ptr<IAbsoluteSpeedWriter> absoluteSpeed)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The speed a synchronized entity should have relative to its master entity at its target position.
             * 
             * @return value of model property relativeSpeedToMaster
            */
            virtual void SetRelativeSpeedToMaster(std::shared_ptr<IRelativeSpeedToMasterWriter> relativeSpeedToMaster)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * The absolute speed a synchronized entity should have at its target position.
             * 
             * @return a writer for model property absoluteSpeed
            */
            virtual std::shared_ptr<IAbsoluteSpeedWriter> GetWriterAbsoluteSpeed() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The speed a synchronized entity should have relative to its master entity at its target position.
             * 
             * @return a writer for model property relativeSpeedToMaster
            */
            virtual std::shared_ptr<IRelativeSpeedToMasterWriter> GetWriterRelativeSpeedToMaster() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Fog'
         * From OpenSCENARIO class model specification:
         * Defines fog at simulation runtime.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IFogWriter : public IOpenScenarioElementWriter, public IFog
        {
        public:
            virtual ~IFogWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Unit: m; Range: [0..inf[.
             * 
             * @return value of model property visualRange
            */
            virtual void SetVisualRange(const double visualRange)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Dimensions and center of fog in fixed coordinates.
             * 
             * @return value of model property boundingBox
            */
            virtual void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox)  = 0;

            /**
             * Set a parameter for the attribute  visualRange
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToVisualRange(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  visualRange
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromVisualRange() const  = 0;

            /**
             * Retrieves whether the attribute visualRange is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsVisualRangeParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Dimensions and center of fog in fixed coordinates.
             * 
             * @return a writer for model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'FollowTrajectoryAction'
         * From OpenSCENARIO class model specification:
         * Controls an entity to follow a trajectory using vertices, timings (optionally) and a corresponding interpolation
         * strategy. The trajectory can be instantiated from a catalog type, or defined within this declaration.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IFollowTrajectoryActionWriter : public IOpenScenarioElementWriter, public IFollowTrajectoryAction
        {
        public:
            virtual ~IFollowTrajectoryActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Trajectory definition.
             * 
             * @return value of model property trajectory
            */
            virtual void SetTrajectory(std::shared_ptr<ITrajectoryWriter> trajectory)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A reference to the trajectory type in a catalog.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines if time information provided within the trajectory should be considered. If so, it may be used as either
             * absolute or relative time along the trajectory in order to define longitudinal velocity of the actor. Moreover, a time
             * offset or time scaling may be applied.
             * 
             * @return value of model property timeReference
            */
            virtual void SetTimeReference(std::shared_ptr<ITimeReferenceWriter> timeReference)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The mode how to follow the given trajectory.
             * 
             * @return value of model property trajectoryFollowingMode
            */
            virtual void SetTrajectoryFollowingMode(std::shared_ptr<ITrajectoryFollowingModeWriter> trajectoryFollowingMode)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Trajectory definition.
             * 
             * @return a writer for model property trajectory
            */
            virtual std::shared_ptr<ITrajectoryWriter> GetWriterTrajectory() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A reference to the trajectory type in a catalog.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines if time information provided within the trajectory should be considered. If so, it may be used as either
             * absolute or relative time along the trajectory in order to define longitudinal velocity of the actor. Moreover, a time
             * offset or time scaling may be applied.
             * 
             * @return a writer for model property timeReference
            */
            virtual std::shared_ptr<ITimeReferenceWriter> GetWriterTimeReference() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The mode how to follow the given trajectory.
             * 
             * @return a writer for model property trajectoryFollowingMode
            */
            virtual std::shared_ptr<ITrajectoryFollowingModeWriter> GetWriterTrajectoryFollowingMode() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'GlobalAction'
         * From OpenSCENARIO class model specification:
         * Actions that does not explicitly target an entity’s state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IGlobalActionWriter : public IOpenScenarioElementWriter, public IGlobalAction
        {
        public:
            virtual ~IGlobalActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Sets the weather state, road conditions, and time of the day.
             * 
             * @return value of model property environmentAction
            */
            virtual void SetEnvironmentAction(std::shared_ptr<IEnvironmentActionWriter> environmentAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Removing or adding entities.
             * 
             * @return value of model property entityAction
            */
            virtual void SetEntityAction(std::shared_ptr<IEntityActionWriter> entityAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying values of parameters.
             * 
             * @return value of model property parameterAction
            */
            virtual void SetParameterAction(std::shared_ptr<IParameterActionWriter> parameterAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying traffic signals.
             * 
             * @return value of model property infrastructureAction
            */
            virtual void SetInfrastructureAction(std::shared_ptr<IInfrastructureActionWriter> infrastructureAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Populating ambient traffic.
             * 
             * @return value of model property trafficAction
            */
            virtual void SetTrafficAction(std::shared_ptr<ITrafficActionWriter> trafficAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Sets the weather state, road conditions, and time of the day.
             * 
             * @return a writer for model property environmentAction
            */
            virtual std::shared_ptr<IEnvironmentActionWriter> GetWriterEnvironmentAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Removing or adding entities.
             * 
             * @return a writer for model property entityAction
            */
            virtual std::shared_ptr<IEntityActionWriter> GetWriterEntityAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying values of parameters.
             * 
             * @return a writer for model property parameterAction
            */
            virtual std::shared_ptr<IParameterActionWriter> GetWriterParameterAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Setting/modifying traffic signals.
             * 
             * @return a writer for model property infrastructureAction
            */
            virtual std::shared_ptr<IInfrastructureActionWriter> GetWriterInfrastructureAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Populating ambient traffic.
             * 
             * @return a writer for model property trafficAction
            */
            virtual std::shared_ptr<ITrafficActionWriter> GetWriterTrafficAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'InRoutePosition'
         * From OpenSCENARIO class model specification:
         * Defines the current position in a given route, either through a position in the lane coordinate system, a position in a
         * road coordinate system or through the current position of an entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IInRoutePositionWriter : public IOpenScenarioElementWriter, public IInRoutePosition
        {
        public:
            virtual ~IInRoutePositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The position is defined through the current position of a given entity.
             * 
             * @return value of model property fromCurrentEntity
            */
            virtual void SetFromCurrentEntity(std::shared_ptr<IPositionOfCurrentEntityWriter> fromCurrentEntity)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Route position in road coordinate system.
             * 
             * @return value of model property fromRoadCoordinates
            */
            virtual void SetFromRoadCoordinates(std::shared_ptr<IPositionInRoadCoordinatesWriter> fromRoadCoordinates)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Route position in lane coordinate system.
             * 
             * @return value of model property fromLaneCoordinates
            */
            virtual void SetFromLaneCoordinates(std::shared_ptr<IPositionInLaneCoordinatesWriter> fromLaneCoordinates)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * The position is defined through the current position of a given entity.
             * 
             * @return a writer for model property fromCurrentEntity
            */
            virtual std::shared_ptr<IPositionOfCurrentEntityWriter> GetWriterFromCurrentEntity() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Route position in road coordinate system.
             * 
             * @return a writer for model property fromRoadCoordinates
            */
            virtual std::shared_ptr<IPositionInRoadCoordinatesWriter> GetWriterFromRoadCoordinates() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Route position in lane coordinate system.
             * 
             * @return a writer for model property fromLaneCoordinates
            */
            virtual std::shared_ptr<IPositionInLaneCoordinatesWriter> GetWriterFromLaneCoordinates() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'InfrastructureAction'
         * From OpenSCENARIO class model specification:
         * Defines an action which changes a state of a traffic signal or a traffic signal controller.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IInfrastructureActionWriter : public IOpenScenarioElementWriter, public IInfrastructureAction
        {
        public:
            virtual ~IInfrastructureActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Set or overwrite a signals state or a signal controllers state from a road network.
             * 
             * @return value of model property trafficSignalAction
            */
            virtual void SetTrafficSignalAction(std::shared_ptr<ITrafficSignalActionWriter> trafficSignalAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Set or overwrite a signals state or a signal controllers state from a road network.
             * 
             * @return a writer for model property trafficSignalAction
            */
            virtual std::shared_ptr<ITrafficSignalActionWriter> GetWriterTrafficSignalAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Init'
         * From OpenSCENARIO class model specification:
         * Defines the actions which are executed during the initialization phase of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IInitWriter : public IOpenScenarioElementWriter, public IInit
        {
        public:
            virtual ~IInitWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A list of actions initially executed when the enclosing storyboard starts.
             * 
             * @return value of model property actions
            */
            virtual void SetActions(std::shared_ptr<IInitActionsWriter> actions)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * A list of actions initially executed when the enclosing storyboard starts.
             * 
             * @return a writer for model property actions
            */
            virtual std::shared_ptr<IInitActionsWriter> GetWriterActions() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'InitActions'
         * From OpenSCENARIO class model specification:
         * A list of action instances (GlobalAction, UserDefinedAction, PrivateAction instances) which are executed during the
         * initialization phase of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IInitActionsWriter : public IOpenScenarioElementWriter, public IInitActions
        {
        public:
            virtual ~IInitActionsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * An optional list of global actions.
             * 
             * @return value of model property globalActions
            */
            virtual void SetGlobalActions(std::vector<std::shared_ptr<IGlobalActionWriter>>& globalActions)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * An optional list of user defined actions.
             * 
             * @return value of model property userDefinedActions
            */
            virtual void SetUserDefinedActions(std::vector<std::shared_ptr<IUserDefinedActionWriter>>& userDefinedActions)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * An optional list of private actions.
             * 
             * @return value of model property privates
            */
            virtual void SetPrivates(std::vector<std::shared_ptr<IPrivateWriter>>& privates)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * An optional list of global actions.
             * 
             * @return a list of writers for model property globalActions
            */
            virtual std::vector<std::shared_ptr<IGlobalActionWriter>> GetWriterGlobalActions() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * An optional list of user defined actions.
             * 
             * @return a list of writers for model property userDefinedActions
            */
            virtual std::vector<std::shared_ptr<IUserDefinedActionWriter>> GetWriterUserDefinedActions() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * An optional list of private actions.
             * 
             * @return a list of writers for model property privates
            */
            virtual std::vector<std::shared_ptr<IPrivateWriter>> GetWriterPrivates() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Knot'
         * From OpenSCENARIO class model specification:
         * Specification of one value of the knot vector of a NURBS trajectory.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IKnotWriter : public IOpenScenarioElementWriter, public IKnot
        {
        public:
            virtual ~IKnotWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Knot vector value. Range ]-inf..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LaneChangeAction'
         * From OpenSCENARIO class model specification:
         * This action describes the transition between an entity's current lane and its target lane. The target lane may be given
         * in absolute or relative terms. The dynamics of the transition may be given either by providing the time or the distance
         * required for performing the transition. Time and distance are measured between the start position and the end position
         * of the action.. The transition starts at the current lane position, including the current lane offset and ends at the
         * target lane position, optionally including a targetLaneOffset.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneChangeActionWriter : public IOpenScenarioElementWriter, public ILaneChangeAction
        {
        public:
            virtual ~ILaneChangeActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Lane offset to be reached at the target lane; the action will end there. Unit: m.
             * 
             * @return value of model property targetLaneOffset
            */
            virtual void SetTargetLaneOffset(const double targetLaneOffset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Shape/time of lane change action.
             * 
             * @return value of model property laneChangeActionDynamics
            */
            virtual void SetLaneChangeActionDynamics(std::shared_ptr<ITransitionDynamicsWriter> laneChangeActionDynamics)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Direction of lane change action.
             * 
             * @return value of model property laneChangeTarget
            */
            virtual void SetLaneChangeTarget(std::shared_ptr<ILaneChangeTargetWriter> laneChangeTarget)  = 0;

            /**
             * Set a parameter for the attribute  targetLaneOffset
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTargetLaneOffset(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  targetLaneOffset
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTargetLaneOffset() const  = 0;

            /**
             * Retrieves whether the attribute targetLaneOffset is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTargetLaneOffsetParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Shape/time of lane change action.
             * 
             * @return a writer for model property laneChangeActionDynamics
            */
            virtual std::shared_ptr<ITransitionDynamicsWriter> GetWriterLaneChangeActionDynamics() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Direction of lane change action.
             * 
             * @return a writer for model property laneChangeTarget
            */
            virtual std::shared_ptr<ILaneChangeTargetWriter> GetWriterLaneChangeTarget() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LaneChangeTarget'
         * From OpenSCENARIO class model specification:
         * Defines the target lane of the LaneChangeAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneChangeTargetWriter : public IOpenScenarioElementWriter, public ILaneChangeTarget
        {
        public:
            virtual ~ILaneChangeTargetWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Lane change direction relative to entity's lane.
             * 
             * @return value of model property relativeTargetLane
            */
            virtual void SetRelativeTargetLane(std::shared_ptr<IRelativeTargetLaneWriter> relativeTargetLane)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Lane change target lane number.
             * 
             * @return value of model property absoluteTargetLane
            */
            virtual void SetAbsoluteTargetLane(std::shared_ptr<IAbsoluteTargetLaneWriter> absoluteTargetLane)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Lane change direction relative to entity's lane.
             * 
             * @return a writer for model property relativeTargetLane
            */
            virtual std::shared_ptr<IRelativeTargetLaneWriter> GetWriterRelativeTargetLane() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Lane change target lane number.
             * 
             * @return a writer for model property absoluteTargetLane
            */
            virtual std::shared_ptr<IAbsoluteTargetLaneWriter> GetWriterAbsoluteTargetLane() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LaneOffsetAction'
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
        class ILaneOffsetActionWriter : public IOpenScenarioElementWriter, public ILaneOffsetAction
        {
        public:
            virtual ~ILaneOffsetActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * If false, the action ends when the target lane is reached. If true it does not end but has to be stopped.
             * 
             * @return value of model property continuous
            */
            virtual void SetContinuous(const bool continuous)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Parameters defining the dynamics of the LaneOffsetAction.
             * 
             * @return value of model property laneOffsetActionDynamics
            */
            virtual void SetLaneOffsetActionDynamics(std::shared_ptr<ILaneOffsetActionDynamicsWriter> laneOffsetActionDynamics)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Parameters indicating if the lane offset is defined relative to another entity or absolute to the current lane's center
             * line.
             * 
             * @return value of model property laneOffsetTarget
            */
            virtual void SetLaneOffsetTarget(std::shared_ptr<ILaneOffsetTargetWriter> laneOffsetTarget)  = 0;

            /**
             * Set a parameter for the attribute  continuous
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToContinuous(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  continuous
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromContinuous() const  = 0;

            /**
             * Retrieves whether the attribute continuous is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsContinuousParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Parameters defining the dynamics of the LaneOffsetAction.
             * 
             * @return a writer for model property laneOffsetActionDynamics
            */
            virtual std::shared_ptr<ILaneOffsetActionDynamicsWriter> GetWriterLaneOffsetActionDynamics() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Parameters indicating if the lane offset is defined relative to another entity or absolute to the current lane's center
             * line.
             * 
             * @return a writer for model property laneOffsetTarget
            */
            virtual std::shared_ptr<ILaneOffsetTargetWriter> GetWriterLaneOffsetTarget() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LaneOffsetActionDynamics'
         * From OpenSCENARIO class model specification:
         * Defines shape, duration and lateral acceleration which are used to do the lane offset action.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneOffsetActionDynamicsWriter : public IOpenScenarioElementWriter, public ILaneOffsetActionDynamics
        {
        public:
            virtual ~ILaneOffsetActionDynamicsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Geometrical shape of the LaneOffsetAction's dynamics.
             * 
             * @return value of model property dynamicsShape
            */
            virtual void SetDynamicsShape(const DynamicsShape dynamicsShape)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Maximum lateral acceleration used to initially reach and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.
             * 
             * @return value of model property maxLateralAcc
            */
            virtual void SetMaxLateralAcc(const double maxLateralAcc)  = 0;

            /**
             * Set a parameter for the attribute  dynamicsShape
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDynamicsShape(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  maxLateralAcc
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxLateralAcc(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  dynamicsShape
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDynamicsShape() const  = 0;
            /**
             * Get the parameter for the attribute  maxLateralAcc
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxLateralAcc() const  = 0;

            /**
             * Retrieves whether the attribute dynamicsShape is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDynamicsShapeParameterized()  = 0;
            /**
             * Retrieves whether the attribute maxLateralAcc is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxLateralAccParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LaneOffsetTarget'
         * From OpenSCENARIO class model specification:
         * Defines the target lane of the LaneOffsetAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILaneOffsetTargetWriter : public IOpenScenarioElementWriter, public ILaneOffsetTarget
        {
        public:
            virtual ~ILaneOffsetTargetWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Relative reference to the lane position of a specific entity.
             * 
             * @return value of model property relativeTargetLaneOffset
            */
            virtual void SetRelativeTargetLaneOffset(std::shared_ptr<IRelativeTargetLaneOffsetWriter> relativeTargetLaneOffset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Absolute reference to the current lane's center line.
             * 
             * @return value of model property absoluteTargetLaneOffset
            */
            virtual void SetAbsoluteTargetLaneOffset(std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> absoluteTargetLaneOffset)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Relative reference to the lane position of a specific entity.
             * 
             * @return a writer for model property relativeTargetLaneOffset
            */
            virtual std::shared_ptr<IRelativeTargetLaneOffsetWriter> GetWriterRelativeTargetLaneOffset() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Absolute reference to the current lane's center line.
             * 
             * @return a writer for model property absoluteTargetLaneOffset
            */
            virtual std::shared_ptr<IAbsoluteTargetLaneOffsetWriter> GetWriterAbsoluteTargetLaneOffset() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LanePosition'
         * From OpenSCENARIO class model specification:
         * Defines a position along a lane with a given s coordinate, lane ID, road ID and orientation.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILanePositionWriter : public IOpenScenarioElementWriter, public ILanePosition
        {
        public:
            virtual ~ILanePositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * ID of the current lane (ID of a lane in road network).
             * 
             * @return value of model property laneId
            */
            virtual void SetLaneId(const std::string laneId)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Lateral offset to the centerline of the current lane. Unit: m.
             * 
             * @return value of model property offset
            */
            virtual void SetOffset(const double offset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * ID of the current road (ID of a road in road network).
             * 
             * @return value of model property roadId
            */
            virtual void SetRoadId(const std::string roadId)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The s coordinate of the current position. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property s
            */
            virtual void SetS(const double s)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * Set a parameter for the attribute  laneId
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLaneId(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  offset
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToOffset(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  roadId
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRoadId(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  s
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToS(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  laneId
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLaneId() const  = 0;
            /**
             * Get the parameter for the attribute  offset
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromOffset() const  = 0;
            /**
             * Get the parameter for the attribute  roadId
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRoadId() const  = 0;
            /**
             * Get the parameter for the attribute  s
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromS() const  = 0;

            /**
             * Retrieves whether the attribute laneId is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLaneIdParameterized()  = 0;
            /**
             * Retrieves whether the attribute offset is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsOffsetParameterized()  = 0;
            /**
             * Retrieves whether the attribute roadId is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRoadIdParameterized()  = 0;
            /**
             * Retrieves whether the attribute s is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LateralAction'
         * From OpenSCENARIO class model specification:
         * Controls the lateral behavior of an entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILateralActionWriter : public IOpenScenarioElementWriter, public ILateralAction
        {
        public:
            virtual ~ILateralActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Action defining a lane change.
             * 
             * @return value of model property laneChangeAction
            */
            virtual void SetLaneChangeAction(std::shared_ptr<ILaneChangeActionWriter> laneChangeAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Action defining a continuously kept lane offset.
             * 
             * @return value of model property laneOffsetAction
            */
            virtual void SetLaneOffsetAction(std::shared_ptr<ILaneOffsetActionWriter> laneOffsetAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Action defining a continuously kept lateral distance to a specific entity.
             * 
             * @return value of model property lateralDistanceAction
            */
            virtual void SetLateralDistanceAction(std::shared_ptr<ILateralDistanceActionWriter> lateralDistanceAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Action defining a lane change.
             * 
             * @return a writer for model property laneChangeAction
            */
            virtual std::shared_ptr<ILaneChangeActionWriter> GetWriterLaneChangeAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Action defining a continuously kept lane offset.
             * 
             * @return a writer for model property laneOffsetAction
            */
            virtual std::shared_ptr<ILaneOffsetActionWriter> GetWriterLaneOffsetAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Action defining a continuously kept lateral distance to a specific entity.
             * 
             * @return a writer for model property lateralDistanceAction
            */
            virtual std::shared_ptr<ILateralDistanceActionWriter> GetWriterLateralDistanceAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LateralDistanceAction'
         * From OpenSCENARIO class model specification:
         * This action describes a continuously kept lateral distance of an entity with respect to a reference entity. The distance
         * can be maintained by using a controller, requiring limiting values for lateral acceleration, lateral deceleration and
         * lateral speed. Without this limiting parameters lateral distance is kept rigid. Distance measurement could either be
         * calculated from the distance between the entities' reference points or from the free space between the entities'
         * bounding boxes.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILateralDistanceActionWriter : public IOpenScenarioElementWriter, public ILateralDistanceAction
        {
        public:
            virtual ~ILateralDistanceActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
             * 
             * @return value of model property continuous
            */
            virtual void SetContinuous(const bool continuous)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Lateral distance value. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property distance
            */
            virtual void SetDistance(const double distance)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the reference entity the lateral distance shall be kept to.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: Lateral distance is measured using the distance between closest bounding box points. False: Reference point
             * distance is used.
             * 
             * @return value of model property freespace
            */
            virtual void SetFreespace(const bool freespace)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Parameter that assigns either unlimited dynamics (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the
             * action.
             * 
             * @return value of model property dynamicConstraints
            */
            virtual void SetDynamicConstraints(std::shared_ptr<IDynamicConstraintsWriter> dynamicConstraints)  = 0;

            /**
             * Set a parameter for the attribute  continuous
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToContinuous(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  distance
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDistance(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  freespace
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFreespace(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  continuous
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromContinuous() const  = 0;
            /**
             * Get the parameter for the attribute  distance
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDistance() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  freespace
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFreespace() const  = 0;

            /**
             * Retrieves whether the attribute continuous is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsContinuousParameterized()  = 0;
            /**
             * Retrieves whether the attribute distance is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDistanceParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute freespace is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFreespaceParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Parameter that assigns either unlimited dynamics (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the
             * action.
             * 
             * @return a writer for model property dynamicConstraints
            */
            virtual std::shared_ptr<IDynamicConstraintsWriter> GetWriterDynamicConstraints() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LongitudinalAction'
         * From OpenSCENARIO class model specification:
         * Controls the longitudinal behavior of an entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILongitudinalActionWriter : public IOpenScenarioElementWriter, public ILongitudinalAction
        {
        public:
            virtual ~ILongitudinalActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * This action describes the transition between the current longitudinal speed of an entity and its target speed.
             * 
             * @return value of model property speedAction
            */
            virtual void SetSpeedAction(std::shared_ptr<ISpeedActionWriter> speedAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This Action defines a continuously kept longitudinal distance to a specific entity.
             * 
             * @return value of model property longitudinalDistanceAction
            */
            virtual void SetLongitudinalDistanceAction(std::shared_ptr<ILongitudinalDistanceActionWriter> longitudinalDistanceAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * This action describes the transition between the current longitudinal speed of an entity and its target speed.
             * 
             * @return a writer for model property speedAction
            */
            virtual std::shared_ptr<ISpeedActionWriter> GetWriterSpeedAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This Action defines a continuously kept longitudinal distance to a specific entity.
             * 
             * @return a writer for model property longitudinalDistanceAction
            */
            virtual std::shared_ptr<ILongitudinalDistanceActionWriter> GetWriterLongitudinalDistanceAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'LongitudinalDistanceAction'
         * From OpenSCENARIO class model specification:
         * This action activates a controller for the longitudinal behavior of an entity in a way that a given distance or time gap
         * to the reference entity is maintained. The dynamic behavior of the controller may be limited by parameters. Choosing a
         * non-limited dynamic behavior represents a rigid time or distance connection between actor and object.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ILongitudinalDistanceActionWriter : public IOpenScenarioElementWriter, public ILongitudinalDistanceAction
        {
        public:
            virtual ~ILongitudinalDistanceActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
             * 
             * @return value of model property continuous
            */
            virtual void SetContinuous(const bool continuous)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Distance value, not to be used together with timeGap attribute. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property distance
            */
            virtual void SetDistance(const double distance)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity the distance shall be kept to.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: Distance is measured using the distance between closest bounding box points False: Reference point distance is
             * used.
             * 
             * @return value of model property freespace
            */
            virtual void SetFreespace(const bool freespace)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Time gap value, not to be used together with distance attribute. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property timeGap
            */
            virtual void SetTimeGap(const double timeGap)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Parameter that assigns either unlimited dynamics (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to
             * the action.
             * 
             * @return value of model property dynamicConstraints
            */
            virtual void SetDynamicConstraints(std::shared_ptr<IDynamicConstraintsWriter> dynamicConstraints)  = 0;

            /**
             * Set a parameter for the attribute  continuous
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToContinuous(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  distance
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDistance(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  freespace
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFreespace(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  timeGap
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTimeGap(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  continuous
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromContinuous() const  = 0;
            /**
             * Get the parameter for the attribute  distance
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDistance() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  freespace
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFreespace() const  = 0;
            /**
             * Get the parameter for the attribute  timeGap
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTimeGap() const  = 0;

            /**
             * Retrieves whether the attribute continuous is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsContinuousParameterized()  = 0;
            /**
             * Retrieves whether the attribute distance is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDistanceParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute freespace is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFreespaceParameterized()  = 0;
            /**
             * Retrieves whether the attribute timeGap is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTimeGapParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Parameter that assigns either unlimited dynamics (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to
             * the action.
             * 
             * @return a writer for model property dynamicConstraints
            */
            virtual std::shared_ptr<IDynamicConstraintsWriter> GetWriterDynamicConstraints() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Maneuver'
         * From OpenSCENARIO class model specification:
         * A container for Events. Can be stored in a maneuver catalog. Allows declaration of parameters within its scope.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IManeuverWriter : public IOpenScenarioElementWriter, public IManeuver, public IStoryboardElementWriter, public ICatalogElementWriter
        {
        public:
            virtual ~IManeuverWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the maneuver.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of events that are comprised by the maneuver.
             * 
             * @return value of model property events
            */
            virtual void SetEvents(std::vector<std::shared_ptr<IEventWriter>>& events)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * List of events that are comprised by the maneuver.
             * 
             * @return a list of writers for model property events
            */
            virtual std::vector<std::shared_ptr<IEventWriter>> GetWriterEvents() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ManeuverCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up maneuver catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IManeuverCatalogLocationWriter : public IOpenScenarioElementWriter, public IManeuverCatalogLocation
        {
        public:
            virtual ~IManeuverCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ManeuverGroup'
         * From OpenSCENARIO class model specification:
         * Grouping element connecting a set of actors to a set maneuvers. Multiple maneuver groups can run independently in
         * parallel. Maneuvers can be defined or instantiated from a maneuver type in a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IManeuverGroupWriter : public IOpenScenarioElementWriter, public IManeuverGroup, public IStoryboardElementWriter
        {
        public:
            virtual ~IManeuverGroupWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Number of allowed executions of the maneuver group. Default value is 1. Range: [1..inf[.
             * 
             * @return value of model property maximumExecutionCount
            */
            virtual void SetMaximumExecutionCount(const uint32_t maximumExecutionCount)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the maneuver group.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Actors of the maneuver group.
             * 
             * @return value of model property actors
            */
            virtual void SetActors(std::shared_ptr<IActorsWriter> actors)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Each element of this list of must reference a maneuver type in a catalog.
             * 
             * @return value of model property catalogReferences
            */
            virtual void SetCatalogReferences(std::vector<std::shared_ptr<ICatalogReferenceWriter>>& catalogReferences)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Maneuver type definitions.
             * 
             * @return value of model property maneuvers
            */
            virtual void SetManeuvers(std::vector<std::shared_ptr<IManeuverWriter>>& maneuvers)  = 0;

            /**
             * Set a parameter for the attribute  maximumExecutionCount
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaximumExecutionCount(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  maximumExecutionCount
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaximumExecutionCount() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute maximumExecutionCount is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaximumExecutionCountParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Actors of the maneuver group.
             * 
             * @return a writer for model property actors
            */
            virtual std::shared_ptr<IActorsWriter> GetWriterActors() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Each element of this list of must reference a maneuver type in a catalog.
             * 
             * @return a list of writers for model property catalogReferences
            */
            virtual std::vector<std::shared_ptr<ICatalogReferenceWriter>> GetWriterCatalogReferences() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Maneuver type definitions.
             * 
             * @return a list of writers for model property maneuvers
            */
            virtual std::vector<std::shared_ptr<IManeuverWriter>> GetWriterManeuvers() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'MiscObject'
         * From OpenSCENARIO class model specification:
         * Definition of a miscellaneous object type. A miscellaneous object has no controller.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IMiscObjectWriter : public IOpenScenarioElementWriter, public IMiscObject, public ICatalogElementWriter
        {
        public:
            virtual ~IMiscObjectWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Mass of the miscellaneous object. Unit: kg; Range: [0..inf[.
             * 
             * @return value of model property mass
            */
            virtual void SetMass(const double mass)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Categorization of the miscellaneous object.
             * 
             * @return value of model property miscObjectCategory
            */
            virtual void SetMiscObjectCategory(const MiscObjectCategory miscObjectCategory)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the miscellaneous object type.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Bounding box definition for the miscellaneous object.
             * 
             * @return value of model property boundingBox
            */
            virtual void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Property definitions for the miscellaneous object.
             * 
             * @return value of model property properties
            */
            virtual void SetProperties(std::shared_ptr<IPropertiesWriter> properties)  = 0;

            /**
             * Set a parameter for the attribute  mass
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMass(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  miscObjectCategory
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMiscObjectCategory(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  mass
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMass() const  = 0;
            /**
             * Get the parameter for the attribute  miscObjectCategory
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMiscObjectCategory() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute mass is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMassParameterized()  = 0;
            /**
             * Retrieves whether the attribute miscObjectCategory is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMiscObjectCategoryParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Bounding box definition for the miscellaneous object.
             * 
             * @return a writer for model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Property definitions for the miscellaneous object.
             * 
             * @return a writer for model property properties
            */
            virtual std::shared_ptr<IPropertiesWriter> GetWriterProperties() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'MiscObjectCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up miscellaneous object catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IMiscObjectCatalogLocationWriter : public IOpenScenarioElementWriter, public IMiscObjectCatalogLocation
        {
        public:
            virtual ~IMiscObjectCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ModifyRule'
         * From OpenSCENARIO class model specification:
         * Enclosing type for either adding a value to a parameter or multiply the parameter by a value. Has to be match the
         * parameter type.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IModifyRuleWriter : public IOpenScenarioElementWriter, public IModifyRule
        {
        public:
            virtual ~IModifyRuleWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Adding a value to a parameter.
             * 
             * @return value of model property addValue
            */
            virtual void SetAddValue(std::shared_ptr<IParameterAddValueRuleWriter> addValue)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Multiply a parameter by a value.
             * 
             * @return value of model property multiplyByValue
            */
            virtual void SetMultiplyByValue(std::shared_ptr<IParameterMultiplyByValueRuleWriter> multiplyByValue)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Adding a value to a parameter.
             * 
             * @return a writer for model property addValue
            */
            virtual std::shared_ptr<IParameterAddValueRuleWriter> GetWriterAddValue() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Multiply a parameter by a value.
             * 
             * @return a writer for model property multiplyByValue
            */
            virtual std::shared_ptr<IParameterMultiplyByValueRuleWriter> GetWriterMultiplyByValue() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'None'
         * From OpenSCENARIO class model specification:
         * Empty container, indicating unused controlling behavior or dynamics limitations for specific axis.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class INoneWriter : public IOpenScenarioElementWriter, public INone
        {
        public:
            virtual ~INoneWriter() = default;





            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Nurbs'
         * From OpenSCENARIO class model specification:
         * Non-uniform rational b-spline (NURBS) trajectory specification.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class INurbsWriter : public IOpenScenarioElementWriter, public INurbs
        {
        public:
            virtual ~INurbsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Order of the NURBS trajectory. This is the order of the curve, not the degree of the polynomials, which will be one less
             * than the order of the curve. Range [2..inf[.
             * 
             * @return value of model property order
            */
            virtual void SetOrder(const uint32_t order)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Control point vector of the NURBS trajectory. The number of control points must be greater or equal to the order of the
             * curve.
             * 
             * @return value of model property controlPoints
            */
            virtual void SetControlPoints(std::vector<std::shared_ptr<IControlPointWriter>>& controlPoints)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Knot vector of the NURBS trajectory. Knot values must be given in ascending order. The number of knot vector values must
             * be equal to the number of control points plus the order of the curve.
             * 
             * @return value of model property knots
            */
            virtual void SetKnots(std::vector<std::shared_ptr<IKnotWriter>>& knots)  = 0;

            /**
             * Set a parameter for the attribute  order
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToOrder(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  order
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromOrder() const  = 0;

            /**
             * Retrieves whether the attribute order is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsOrderParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * Control point vector of the NURBS trajectory. The number of control points must be greater or equal to the order of the
             * curve.
             * 
             * @return a list of writers for model property controlPoints
            */
            virtual std::vector<std::shared_ptr<IControlPointWriter>> GetWriterControlPoints() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Knot vector of the NURBS trajectory. Knot values must be given in ascending order. The number of knot vector values must
             * be equal to the number of control points plus the order of the curve.
             * 
             * @return a list of writers for model property knots
            */
            virtual std::vector<std::shared_ptr<IKnotWriter>> GetWriterKnots() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ObjectController'
         * From OpenSCENARIO class model specification:
         * Definition of a controller for a scenario object. Either an inline definition or a catalog reference to a controller.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IObjectControllerWriter : public IOpenScenarioElementWriter, public IObjectController
        {
        public:
            virtual ~IObjectControllerWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Catalog reference to a controller.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Controller type definition.
             * 
             * @return value of model property controller
            */
            virtual void SetController(std::shared_ptr<IControllerWriter> controller)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Catalog reference to a controller.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Controller type definition.
             * 
             * @return a writer for model property controller
            */
            virtual std::shared_ptr<IControllerWriter> GetWriterController() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OffroadCondition'
         * From OpenSCENARIO class model specification:
         * Checks if an entity is of the road. The logical expression returns true after the entity has been offroad for a specific
         * duration.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOffroadConditionWriter : public IOpenScenarioElementWriter, public IOffroadCondition
        {
        public:
            virtual ~IOffroadConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Amount of time of driving offroad. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual void SetDuration(const double duration)  = 0;

            /**
             * Set a parameter for the attribute  duration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDuration(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  duration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDuration() const  = 0;

            /**
             * Retrieves whether the attribute duration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDurationParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OpenScenario'
         * From OpenSCENARIO class model specification:
         * Top level container for scenarios or catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOpenScenarioWriter : public IOpenScenarioElementWriter, public IOpenScenario
        {
        public:
            virtual ~IOpenScenarioWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Header information for the scenario or the catalog.
             * 
             * @return value of model property fileHeader
            */
            virtual void SetFileHeader(std::shared_ptr<IFileHeaderWriter> fileHeader)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Category (catalog or scenario) of the OpenSCENARIO description.
             * 
             * @return value of model property openScenarioCategory
            */
            virtual void SetOpenScenarioCategory(std::shared_ptr<IOpenScenarioCategoryWriter> openScenarioCategory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Header information for the scenario or the catalog.
             * 
             * @return a writer for model property fileHeader
            */
            virtual std::shared_ptr<IFileHeaderWriter> GetWriterFileHeader() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Category (catalog or scenario) of the OpenSCENARIO description.
             * 
             * @return a writer for model property openScenarioCategory
            */
            virtual std::shared_ptr<IOpenScenarioCategoryWriter> GetWriterOpenScenarioCategory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OpenScenarioCategory'
         * From OpenSCENARIO class model specification:
         * Indicates if the following content defines a scenario or a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOpenScenarioCategoryWriter : public IOpenScenarioElementWriter, public IOpenScenarioCategory
        {
        public:
            virtual ~IOpenScenarioCategoryWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a scenario.
             * 
             * @return value of model property scenarioDefinition
            */
            virtual void SetScenarioDefinition(std::shared_ptr<IScenarioDefinitionWriter> scenarioDefinition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of a catalog.
             * 
             * @return value of model property catalogDefinition
            */
            virtual void SetCatalogDefinition(std::shared_ptr<ICatalogDefinitionWriter> catalogDefinition)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Definition of a scenario.
             * 
             * @return a writer for model property scenarioDefinition
            */
            virtual std::shared_ptr<IScenarioDefinitionWriter> GetWriterScenarioDefinition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Definition of a catalog.
             * 
             * @return a writer for model property catalogDefinition
            */
            virtual std::shared_ptr<ICatalogDefinitionWriter> GetWriterCatalogDefinition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Orientation'
         * From OpenSCENARIO class model specification:
         * Defines an absolute or relative orientation (heading, pitch and roll).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOrientationWriter : public IOpenScenarioElementWriter, public IOrientation
        {
        public:
            virtual ~IOrientationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Heading angle. Unit: rad;.
             * 
             * @return value of model property h
            */
            virtual void SetH(const double h)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Pitch angle. Unit: rad;.
             * 
             * @return value of model property p
            */
            virtual void SetP(const double p)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Roll angle. Unit: rad;.
             * 
             * @return value of model property r
            */
            virtual void SetR(const double r)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative or absolute definition.
             * 
             * @return value of model property type
            */
            virtual void SetType(const ReferenceContext type)  = 0;

            /**
             * Set a parameter for the attribute  h
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToH(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  p
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToP(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  r
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToR(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  type
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToType(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  h
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromH() const  = 0;
            /**
             * Get the parameter for the attribute  p
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromP() const  = 0;
            /**
             * Get the parameter for the attribute  r
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromR() const  = 0;
            /**
             * Get the parameter for the attribute  type
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromType() const  = 0;

            /**
             * Retrieves whether the attribute h is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsHParameterized()  = 0;
            /**
             * Retrieves whether the attribute p is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPParameterized()  = 0;
            /**
             * Retrieves whether the attribute r is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRParameterized()  = 0;
            /**
             * Retrieves whether the attribute type is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTypeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideBrakeAction'
         * From OpenSCENARIO class model specification:
         * Defines the state of the brake of a vehicle, when overriding a brake value in a ControllerAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideBrakeActionWriter : public IOpenScenarioElementWriter, public IOverrideBrakeAction
        {
        public:
            virtual ~IOverrideBrakeActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual void SetActive(const bool active)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Brake pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the brake pedal.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  active
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToActive(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  active
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromActive() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute active is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsActiveParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideClutchAction'
         * From OpenSCENARIO class model specification:
         * Defines the state of the clutch of a vehicle, when overriding a clutch value in a ControllerAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideClutchActionWriter : public IOpenScenarioElementWriter, public IOverrideClutchAction
        {
        public:
            virtual ~IOverrideClutchActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual void SetActive(const bool active)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the clutch pedal.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  active
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToActive(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  active
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromActive() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute active is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsActiveParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideControllerValueAction'
         * From OpenSCENARIO class model specification:
         * Overrides entity controller values. Mostly suited for motor vehicles.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideControllerValueActionWriter : public IOpenScenarioElementWriter, public IOverrideControllerValueAction
        {
        public:
            virtual ~IOverrideControllerValueActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * New value for throttle pedal position or unset value.
             * 
             * @return value of model property throttle
            */
            virtual void SetThrottle(std::shared_ptr<IOverrideThrottleActionWriter> throttle)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * New value for brake position or unset value.
             * 
             * @return value of model property brake
            */
            virtual void SetBrake(std::shared_ptr<IOverrideBrakeActionWriter> brake)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * New value for clutch position or unset value.
             * 
             * @return value of model property clutch
            */
            virtual void SetClutch(std::shared_ptr<IOverrideClutchActionWriter> clutch)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * New value for parking brake position or unset value.
             * 
             * @return value of model property parkingBrake
            */
            virtual void SetParkingBrake(std::shared_ptr<IOverrideParkingBrakeActionWriter> parkingBrake)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * New value for steering wheel position or unset value.
             * 
             * @return value of model property steeringWheel
            */
            virtual void SetSteeringWheel(std::shared_ptr<IOverrideSteeringWheelActionWriter> steeringWheel)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * New value for gear position or unset value.
             * 
             * @return value of model property gear
            */
            virtual void SetGear(std::shared_ptr<IOverrideGearActionWriter> gear)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * New value for throttle pedal position or unset value.
             * 
             * @return a writer for model property throttle
            */
            virtual std::shared_ptr<IOverrideThrottleActionWriter> GetWriterThrottle() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * New value for brake position or unset value.
             * 
             * @return a writer for model property brake
            */
            virtual std::shared_ptr<IOverrideBrakeActionWriter> GetWriterBrake() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * New value for clutch position or unset value.
             * 
             * @return a writer for model property clutch
            */
            virtual std::shared_ptr<IOverrideClutchActionWriter> GetWriterClutch() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * New value for parking brake position or unset value.
             * 
             * @return a writer for model property parkingBrake
            */
            virtual std::shared_ptr<IOverrideParkingBrakeActionWriter> GetWriterParkingBrake() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * New value for steering wheel position or unset value.
             * 
             * @return a writer for model property steeringWheel
            */
            virtual std::shared_ptr<IOverrideSteeringWheelActionWriter> GetWriterSteeringWheel() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * New value for gear position or unset value.
             * 
             * @return a writer for model property gear
            */
            virtual std::shared_ptr<IOverrideGearActionWriter> GetWriterGear() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideGearAction'
         * From OpenSCENARIO class model specification:
         * Defines the state of the gear of a vehicle, when overriding a gear value in a ControllerAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideGearActionWriter : public IOpenScenarioElementWriter, public IOverrideGearAction
        {
        public:
            virtual ~IOverrideGearActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual void SetActive(const bool active)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Gear number.
             * 
             * @return value of model property number
            */
            virtual void SetNumber(const double number)  = 0;

            /**
             * Set a parameter for the attribute  active
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToActive(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  number
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToNumber(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  active
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromActive() const  = 0;
            /**
             * Get the parameter for the attribute  number
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromNumber() const  = 0;

            /**
             * Retrieves whether the attribute active is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsActiveParameterized()  = 0;
            /**
             * Retrieves whether the attribute number is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNumberParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideParkingBrakeAction'
         * From OpenSCENARIO class model specification:
         * Defines the state of the parking brake of a vehicle, when overriding a parking brake value in a ControllerAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideParkingBrakeActionWriter : public IOpenScenarioElementWriter, public IOverrideParkingBrakeAction
        {
        public:
            virtual ~IOverrideParkingBrakeActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual void SetActive(const bool active)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Parking brake value. Unit: %; Range: [0..1]. The value 1 represent the maximum parking brake state.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  active
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToActive(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  active
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromActive() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute active is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsActiveParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideSteeringWheelAction'
         * From OpenSCENARIO class model specification:
         * Defines the state of the steering wheel of a vehicle, when overriding a steering wheel angle in a ControllerAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideSteeringWheelActionWriter : public IOpenScenarioElementWriter, public IOverrideSteeringWheelAction
        {
        public:
            virtual ~IOverrideSteeringWheelActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual void SetActive(const bool active)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Steering wheel angle. Unit: rad.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  active
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToActive(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  active
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromActive() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute active is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsActiveParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'OverrideThrottleAction'
         * From OpenSCENARIO class model specification:
         * Defines the state of the throttle of a vehicle, when overriding a throttle value in a ControllerAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IOverrideThrottleActionWriter : public IOpenScenarioElementWriter, public IOverrideThrottleAction
        {
        public:
            virtual ~IOverrideThrottleActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: override; false: stop overriding.
             * 
             * @return value of model property active
            */
            virtual void SetActive(const bool active)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Throttle pedal value. Range: [0..1].0 represents 0%, 1 represents 100% of pressing the throttle pedal.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  active
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToActive(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  active
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromActive() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute active is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsActiveParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterAction'
         * From OpenSCENARIO class model specification:
         * Set or modify a named parameter. (Be aware of the data type).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterActionWriter : public IOpenScenarioElementWriter, public IParameterAction
        {
        public:
            virtual ~IParameterActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the parameter.
             * 
             * @return value of model property parameterRef
            */
            virtual void SetParameterRef(std::shared_ptr<INamedReference<IParameterDeclaration>> parameterRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * New value for the parameter.
             * 
             * @return value of model property setAction
            */
            virtual void SetSetAction(std::shared_ptr<IParameterSetActionWriter> setAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Modifying rule for the parameter (Add value or multiply by value).
             * 
             * @return value of model property modifyAction
            */
            virtual void SetModifyAction(std::shared_ptr<IParameterModifyActionWriter> modifyAction)  = 0;

            /**
             * Set a parameter for the attribute  parameterRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToParameterRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  parameterRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromParameterRef() const  = 0;

            /**
             * Retrieves whether the attribute parameterRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsParameterRefParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * New value for the parameter.
             * 
             * @return a writer for model property setAction
            */
            virtual std::shared_ptr<IParameterSetActionWriter> GetWriterSetAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Modifying rule for the parameter (Add value or multiply by value).
             * 
             * @return a writer for model property modifyAction
            */
            virtual std::shared_ptr<IParameterModifyActionWriter> GetWriterModifyAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterAddValueRule'
         * From OpenSCENARIO class model specification:
         * Defines an addition of a value to a parameter as part of a ModifyRule.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterAddValueRuleWriter : public IOpenScenarioElementWriter, public IParameterAddValueRule
        {
        public:
            virtual ~IParameterAddValueRuleWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Add value to existing parameter.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterAssignment'
         * From OpenSCENARIO class model specification:
         * Assignment of a value to a named parameter during runtime. This assignment is used when importing types of vehicles,
         * controllers etc. from a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterAssignmentWriter : public IOpenScenarioElementWriter, public IParameterAssignment
        {
        public:
            virtual ~IParameterAssignmentWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the parameter that must be declared in the catalog.
             * 
             * @return value of model property parameterRef
            */
            virtual void SetParameterRef(std::shared_ptr<INamedReference<IParameterDeclaration>> parameterRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Value of the parameter that is handed over to the parametrizable type.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterCondition'
         * From OpenSCENARIO class model specification:
         * Compares a named parameter's value to a reference value. The logical operator used for comparison is defined by the rule
         * attribute Less and greater operator will only be supported if the value given as string can unambiguously be converted
         * into a scalar value (e.g. value=5, value=16.667).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterConditionWriter : public IOpenScenarioElementWriter, public IParameterCondition
        {
        public:
            virtual ~IParameterConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the parameter that must be defined.
             * 
             * @return value of model property parameterRef
            */
            virtual void SetParameterRef(std::shared_ptr<INamedReference<IParameterDeclaration>> parameterRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Value of the parameter.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  parameterRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToParameterRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  parameterRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromParameterRef() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute parameterRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsParameterRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterDeclaration'
         * From OpenSCENARIO class model specification:
         * Declaration of a parameter.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterDeclarationWriter : public IOpenScenarioElementWriter, public IParameterDeclaration
        {
        public:
            virtual ~IParameterDeclarationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the parameter.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Type of the parameter.
             * 
             * @return value of model property parameterType
            */
            virtual void SetParameterType(const ParameterType parameterType)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Value of the parameter as its default value.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  parameterType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToParameterType(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  parameterType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromParameterType() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute parameterType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsParameterTypeParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterModifyAction'
         * From OpenSCENARIO class model specification:
         * Modify a global parameter according to given rules.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterModifyActionWriter : public IOpenScenarioElementWriter, public IParameterModifyAction
        {
        public:
            virtual ~IParameterModifyActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Either adding a value to a parameter or multiply a parameter by a value. Has to match the parameter type.
             * 
             * @return value of model property rule
            */
            virtual void SetRule(std::shared_ptr<IModifyRuleWriter> rule)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Either adding a value to a parameter or multiply a parameter by a value. Has to match the parameter type.
             * 
             * @return a writer for model property rule
            */
            virtual std::shared_ptr<IModifyRuleWriter> GetWriterRule() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterMultiplyByValueRule'
         * From OpenSCENARIO class model specification:
         * Multiply a parameter by a value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterMultiplyByValueRuleWriter : public IOpenScenarioElementWriter, public IParameterMultiplyByValueRule
        {
        public:
            virtual ~IParameterMultiplyByValueRuleWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Multiply existing parameter by the value (be aware of the parameter data type).
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ParameterSetAction'
         * From OpenSCENARIO class model specification:
         * Setting a parameter to a given value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IParameterSetActionWriter : public IOpenScenarioElementWriter, public IParameterSetAction
        {
        public:
            virtual ~IParameterSetActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The new value for the parameter.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Pedestrian'
         * From OpenSCENARIO class model specification:
         * Definition of a pedestrian type in a scenario or in a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPedestrianWriter : public IOpenScenarioElementWriter, public IPedestrian, public ICatalogElementWriter
        {
        public:
            virtual ~IPedestrianWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The mass of a pedestrian in kg.
             * 
             * @return value of model property mass
            */
            virtual void SetMass(const double mass)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the model of the pedestrian.
             * 
             * @return value of model property model
            */
            virtual void SetModel(const std::string model)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the pedestrian type. Required when used in catalog.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Category type of pedestrian.
             * 
             * @return value of model property pedestrianCategory
            */
            virtual void SetPedestrianCategory(const PedestrianCategory pedestrianCategory)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Bounding box of the pedestrian.
             * 
             * @return value of model property boundingBox
            */
            virtual void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Properties (values/files) of the pedestrian.
             * 
             * @return value of model property properties
            */
            virtual void SetProperties(std::shared_ptr<IPropertiesWriter> properties)  = 0;

            /**
             * Set a parameter for the attribute  mass
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMass(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  model
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToModel(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  pedestrianCategory
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPedestrianCategory(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  mass
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMass() const  = 0;
            /**
             * Get the parameter for the attribute  model
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromModel() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  pedestrianCategory
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPedestrianCategory() const  = 0;

            /**
             * Retrieves whether the attribute mass is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMassParameterized()  = 0;
            /**
             * Retrieves whether the attribute model is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsModelParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute pedestrianCategory is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPedestrianCategoryParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Bounding box of the pedestrian.
             * 
             * @return a writer for model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Properties (values/files) of the pedestrian.
             * 
             * @return a writer for model property properties
            */
            virtual std::shared_ptr<IPropertiesWriter> GetWriterProperties() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'PedestrianCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up pedestrian catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPedestrianCatalogLocationWriter : public IOpenScenarioElementWriter, public IPedestrianCatalogLocation
        {
        public:
            virtual ~IPedestrianCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * File path for the pedestrian catalog files.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * File path for the pedestrian catalog files.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Performance'
         * From OpenSCENARIO class model specification:
         * Container for Performance values of a vehicle.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPerformanceWriter : public IOpenScenarioElementWriter, public IPerformance
        {
        public:
            virtual ~IPerformanceWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Maximum acceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
             * 
             * @return value of model property maxAcceleration
            */
            virtual void SetMaxAcceleration(const double maxAcceleration)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Maximum deceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
             * 
             * @return value of model property maxDeceleration
            */
            virtual void SetMaxDeceleration(const double maxDeceleration)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Maximum speed of the vehicle. Unit: m/s.
             * 
             * @return value of model property maxSpeed
            */
            virtual void SetMaxSpeed(const double maxSpeed)  = 0;

            /**
             * Set a parameter for the attribute  maxAcceleration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxAcceleration(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  maxDeceleration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxDeceleration(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  maxSpeed
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMaxSpeed(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  maxAcceleration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxAcceleration() const  = 0;
            /**
             * Get the parameter for the attribute  maxDeceleration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxDeceleration() const  = 0;
            /**
             * Get the parameter for the attribute  maxSpeed
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMaxSpeed() const  = 0;

            /**
             * Retrieves whether the attribute maxAcceleration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxAccelerationParameterized()  = 0;
            /**
             * Retrieves whether the attribute maxDeceleration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxDecelerationParameterized()  = 0;
            /**
             * Retrieves whether the attribute maxSpeed is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMaxSpeedParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Phase'
         * From OpenSCENARIO class model specification:
         * Phase of a TrafficSignalController. A TrafficSignalController has sequential phases. Each phase has multiple
         * TrafficSignalStates.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPhaseWriter : public IOpenScenarioElementWriter, public IPhase
        {
        public:
            virtual ~IPhaseWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Duration of the phase. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual void SetDuration(const double duration)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the phase.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Each phase has multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1
             * (trafficSignal1:true;false;false, trafficSignal2:false;false;true).
             * 
             * @return value of model property trafficSignalStates
            */
            virtual void SetTrafficSignalStates(std::vector<std::shared_ptr<ITrafficSignalStateWriter>>& trafficSignalStates)  = 0;

            /**
             * Set a parameter for the attribute  duration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDuration(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  duration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDuration() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute duration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDurationParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * Each phase has multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1
             * (trafficSignal1:true;false;false, trafficSignal2:false;false;true).
             * 
             * @return a list of writers for model property trafficSignalStates
            */
            virtual std::vector<std::shared_ptr<ITrafficSignalStateWriter>> GetWriterTrafficSignalStates() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Polyline'
         * From OpenSCENARIO class model specification:
         * Polygonal chain (polyline) trajectory specification.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPolylineWriter : public IOpenScenarioElementWriter, public IPolyline
        {
        public:
            virtual ~IPolylineWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Ordered chain of vertices of the polygonal chain.
             * 
             * @return value of model property vertices
            */
            virtual void SetVertices(std::vector<std::shared_ptr<IVertexWriter>>& vertices)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * Ordered chain of vertices of the polygonal chain.
             * 
             * @return a list of writers for model property vertices
            */
            virtual std::vector<std::shared_ptr<IVertexWriter>> GetWriterVertices() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Position'
         * From OpenSCENARIO class model specification:
         * Container for position types.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPositionWriter : public IOpenScenarioElementWriter, public IPosition
        {
        public:
            virtual ~IPositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Position that uses global coordinates.
             * 
             * @return value of model property worldPosition
            */
            virtual void SetWorldPosition(std::shared_ptr<IWorldPositionWriter> worldPosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position is given relative to a world position.
             * 
             * @return value of model property relativeWorldPosition
            */
            virtual void SetRelativeWorldPosition(std::shared_ptr<IRelativeWorldPositionWriter> relativeWorldPosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position is given relative to an entity.
             * 
             * @return value of model property relativeObjectPosition
            */
            virtual void SetRelativeObjectPosition(std::shared_ptr<IRelativeObjectPositionWriter> relativeObjectPosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position in road coordinates (t,s) applied to a given road.
             * 
             * @return value of model property roadPosition
            */
            virtual void SetRoadPosition(std::shared_ptr<IRoadPositionWriter> roadPosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position relative to an entity's road position (ds, dt).
             * 
             * @return value of model property relativeRoadPosition
            */
            virtual void SetRelativeRoadPosition(std::shared_ptr<IRelativeRoadPositionWriter> relativeRoadPosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
             * 
             * @return value of model property lanePosition
            */
            virtual void SetLanePosition(std::shared_ptr<ILanePositionWriter> lanePosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined relative to the lane coordinates of a given entity. (Relative lane and relative s to this
             * entity).
             * 
             * @return value of model property relativeLanePosition
            */
            virtual void SetRelativeLanePosition(std::shared_ptr<IRelativeLanePositionWriter> relativeLanePosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a given route.
             * 
             * @return value of model property routePosition
            */
            virtual void SetRoutePosition(std::shared_ptr<IRoutePositionWriter> routePosition)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Position that uses global coordinates.
             * 
             * @return a writer for model property worldPosition
            */
            virtual std::shared_ptr<IWorldPositionWriter> GetWriterWorldPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position is given relative to a world position.
             * 
             * @return a writer for model property relativeWorldPosition
            */
            virtual std::shared_ptr<IRelativeWorldPositionWriter> GetWriterRelativeWorldPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position is given relative to an entity.
             * 
             * @return a writer for model property relativeObjectPosition
            */
            virtual std::shared_ptr<IRelativeObjectPositionWriter> GetWriterRelativeObjectPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position in road coordinates (t,s) applied to a given road.
             * 
             * @return a writer for model property roadPosition
            */
            virtual std::shared_ptr<IRoadPositionWriter> GetWriterRoadPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position relative to an entity's road position (ds, dt).
             * 
             * @return a writer for model property relativeRoadPosition
            */
            virtual std::shared_ptr<IRelativeRoadPositionWriter> GetWriterRelativeRoadPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
             * 
             * @return a writer for model property lanePosition
            */
            virtual std::shared_ptr<ILanePositionWriter> GetWriterLanePosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined relative to the lane coordinates of a given entity. (Relative lane and relative s to this
             * entity).
             * 
             * @return a writer for model property relativeLanePosition
            */
            virtual std::shared_ptr<IRelativeLanePositionWriter> GetWriterRelativeLanePosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position that is determined by a given route.
             * 
             * @return a writer for model property routePosition
            */
            virtual std::shared_ptr<IRoutePositionWriter> GetWriterRoutePosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'PositionInLaneCoordinates'
         * From OpenSCENARIO class model specification:
         * Defines a coordinate along a lane with a given s coordinate and lane ID.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPositionInLaneCoordinatesWriter : public IOpenScenarioElementWriter, public IPositionInLaneCoordinates
        {
        public:
            virtual ~IPositionInLaneCoordinatesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Lane ID of the actual position.
             * 
             * @return value of model property laneId
            */
            virtual void SetLaneId(const std::string laneId)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Lateral offset (relative to the lane centerline) of the actual position. Unit: m.
             * 
             * @return value of model property laneOffset
            */
            virtual void SetLaneOffset(const double laneOffset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * s-coordinate of the actual position. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property pathS
            */
            virtual void SetPathS(const double pathS)  = 0;

            /**
             * Set a parameter for the attribute  laneId
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLaneId(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  laneOffset
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToLaneOffset(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  pathS
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPathS(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  laneId
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLaneId() const  = 0;
            /**
             * Get the parameter for the attribute  laneOffset
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromLaneOffset() const  = 0;
            /**
             * Get the parameter for the attribute  pathS
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPathS() const  = 0;

            /**
             * Retrieves whether the attribute laneId is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLaneIdParameterized()  = 0;
            /**
             * Retrieves whether the attribute laneOffset is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsLaneOffsetParameterized()  = 0;
            /**
             * Retrieves whether the attribute pathS is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPathSParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'PositionInRoadCoordinates'
         * From OpenSCENARIO class model specification:
         * Position defined in terms of distance along  a route (pathS) and lateral offset from the route's reference line (t) at
         * that point.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPositionInRoadCoordinatesWriter : public IOpenScenarioElementWriter, public IPositionInRoadCoordinates
        {
        public:
            virtual ~IPositionInRoadCoordinatesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Position in s coordinates along the reference line of the road.
             * 
             * @return value of model property pathS
            */
            virtual void SetPathS(const double pathS)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position in t coordinates orthogonal to the reference line of the road.
             * 
             * @return value of model property t
            */
            virtual void SetT(const double t)  = 0;

            /**
             * Set a parameter for the attribute  pathS
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPathS(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  t
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToT(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  pathS
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPathS() const  = 0;
            /**
             * Get the parameter for the attribute  t
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromT() const  = 0;

            /**
             * Retrieves whether the attribute pathS is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPathSParameterized()  = 0;
            /**
             * Retrieves whether the attribute t is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'PositionOfCurrentEntity'
         * From OpenSCENARIO class model specification:
         * Reference to the current Entity. The position in a route is defined through the position of this entity (used in
         * RoutePosition).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPositionOfCurrentEntityWriter : public IOpenScenarioElementWriter, public IPositionOfCurrentEntity
        {
        public:
            virtual ~IPositionOfCurrentEntityWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference to an entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Precipitation'
         * From OpenSCENARIO class model specification:
         * Defines a precipitation by type and value of a weather.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPrecipitationWriter : public IOpenScenarioElementWriter, public IPrecipitation
        {
        public:
            virtual ~IPrecipitationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The intensity of the precipitation. Range: [0..1].
             * 
             * @return value of model property intensity
            */
            virtual void SetIntensity(const double intensity)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Type of the precipitation.
             * 
             * @return value of model property precipitationType
            */
            virtual void SetPrecipitationType(const PrecipitationType precipitationType)  = 0;

            /**
             * Set a parameter for the attribute  intensity
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToIntensity(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  precipitationType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPrecipitationType(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  intensity
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromIntensity() const  = 0;
            /**
             * Get the parameter for the attribute  precipitationType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPrecipitationType() const  = 0;

            /**
             * Retrieves whether the attribute intensity is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsIntensityParameterized()  = 0;
            /**
             * Retrieves whether the attribute precipitationType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPrecipitationTypeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Private'
         * From OpenSCENARIO class model specification:
         * Container for private actions assigned to one specific entity and used in the initialization phase of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPrivateWriter : public IOpenScenarioElementWriter, public IPrivate
        {
        public:
            virtual ~IPrivateWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of private actions to be executed when the enclosing container gets triggered.
             * 
             * @return value of model property privateActions
            */
            virtual void SetPrivateActions(std::vector<std::shared_ptr<IPrivateActionWriter>>& privateActions)  = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * List of private actions to be executed when the enclosing container gets triggered.
             * 
             * @return a list of writers for model property privateActions
            */
            virtual std::vector<std::shared_ptr<IPrivateActionWriter>> GetWriterPrivateActions() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'PrivateAction'
         * From OpenSCENARIO class model specification:
         * Actions applied to one or multiple entities. Either the entities are referenced in the actors of the enclosing maneuver
         * group or the single entity is referenced in the enclosing Private instance.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPrivateActionWriter : public IOpenScenarioElementWriter, public IPrivateAction
        {
        public:
            virtual ~IPrivateActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Applies longitudinal control behavior on the reference entity/entities. Either a SpeedAction or a
             * LongitudinalDistanceAction.
             * 
             * @return value of model property longitudinalAction
            */
            virtual void SetLongitudinalAction(std::shared_ptr<ILongitudinalActionWriter> longitudinalAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Applies lateral control behavior on the reference entity/entities. Either a LaneChangeAction, LaneOffsetAction or a
             * LateralDistanceAction.
             * 
             * @return value of model property lateralAction
            */
            virtual void SetLateralAction(std::shared_ptr<ILateralActionWriter> lateralAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Sets visibility attributes on the reference entity/entities.
             * 
             * @return value of model property visibilityAction
            */
            virtual void SetVisibilityAction(std::shared_ptr<IVisibilityActionWriter> visibilityAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Synchronizes the reference entity/entities with a master entity. A target position is provided for the entity and for
             * the master entity to be reached at the same time.
             * 
             * @return value of model property synchronizeAction
            */
            virtual void SetSynchronizeAction(std::shared_ptr<ISynchronizeActionWriter> synchronizeAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Activates/ deactivates a controller on the reference entity/entities.
             * 
             * @return value of model property activateControllerAction
            */
            virtual void SetActivateControllerAction(std::shared_ptr<IActivateControllerActionWriter> activateControllerAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a controller to the reference entity/entities.
             * 
             * @return value of model property controllerAction
            */
            virtual void SetControllerAction(std::shared_ptr<IControllerActionWriter> controllerAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a position to the reference entity/entities.
             * 
             * @return value of model property teleportAction
            */
            virtual void SetTeleportAction(std::shared_ptr<ITeleportActionWriter> teleportAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Applies an AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
             * 
             * @return value of model property routingAction
            */
            virtual void SetRoutingAction(std::shared_ptr<IRoutingActionWriter> routingAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Applies longitudinal control behavior on the reference entity/entities. Either a SpeedAction or a
             * LongitudinalDistanceAction.
             * 
             * @return a writer for model property longitudinalAction
            */
            virtual std::shared_ptr<ILongitudinalActionWriter> GetWriterLongitudinalAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Applies lateral control behavior on the reference entity/entities. Either a LaneChangeAction, LaneOffsetAction or a
             * LateralDistanceAction.
             * 
             * @return a writer for model property lateralAction
            */
            virtual std::shared_ptr<ILateralActionWriter> GetWriterLateralAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Sets visibility attributes on the reference entity/entities.
             * 
             * @return a writer for model property visibilityAction
            */
            virtual std::shared_ptr<IVisibilityActionWriter> GetWriterVisibilityAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Synchronizes the reference entity/entities with a master entity. A target position is provided for the entity and for
             * the master entity to be reached at the same time.
             * 
             * @return a writer for model property synchronizeAction
            */
            virtual std::shared_ptr<ISynchronizeActionWriter> GetWriterSynchronizeAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Activates/ deactivates a controller on the reference entity/entities.
             * 
             * @return a writer for model property activateControllerAction
            */
            virtual std::shared_ptr<IActivateControllerActionWriter> GetWriterActivateControllerAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Assigns a controller to the reference entity/entities.
             * 
             * @return a writer for model property controllerAction
            */
            virtual std::shared_ptr<IControllerActionWriter> GetWriterControllerAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Assigns a position to the reference entity/entities.
             * 
             * @return a writer for model property teleportAction
            */
            virtual std::shared_ptr<ITeleportActionWriter> GetWriterTeleportAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Applies an AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
             * 
             * @return a writer for model property routingAction
            */
            virtual std::shared_ptr<IRoutingActionWriter> GetWriterRoutingAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Properties'
         * From OpenSCENARIO class model specification:
         * Container for one or more properties. Properties encloses multiple property instances and/or multiple file references.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPropertiesWriter : public IOpenScenarioElementWriter, public IProperties
        {
        public:
            virtual ~IPropertiesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A name/value pair. The semantic of the name/values are subject of a contract between the provider of a simulation
             * environment and the author of a scenario.
             * 
             * @return value of model property properties
            */
            virtual void SetProperties(std::vector<std::shared_ptr<IPropertyWriter>>& properties)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of arbitrary files attached to an object that owns the properties. The semantic and the file formats are subject
             * of a contract between the provider of a simulation environment and the author of a scenario.
             * 
             * @return value of model property files
            */
            virtual void SetFiles(std::vector<std::shared_ptr<IFileWriter>>& files)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * A name/value pair. The semantic of the name/values are subject of a contract between the provider of a simulation
             * environment and the author of a scenario.
             * 
             * @return a list of writers for model property properties
            */
            virtual std::vector<std::shared_ptr<IPropertyWriter>> GetWriterProperties() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A list of arbitrary files attached to an object that owns the properties. The semantic and the file formats are subject
             * of a contract between the provider of a simulation environment and the author of a scenario.
             * 
             * @return a list of writers for model property files
            */
            virtual std::vector<std::shared_ptr<IFileWriter>> GetWriterFiles() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Property'
         * From OpenSCENARIO class model specification:
         * Definition of a property by name and value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IPropertyWriter : public IOpenScenarioElementWriter, public IProperty
        {
        public:
            virtual ~IPropertyWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of a user defined property.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Value of a user defined property.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ReachPositionCondition'
         * From OpenSCENARIO class model specification:
         * Checks if a triggering entity/entities has reached a given position, within some user specified tolerance.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IReachPositionConditionWriter : public IOpenScenarioElementWriter, public IReachPositionCondition
        {
        public:
            virtual ~IReachPositionConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Radius of tolerance circle around given position. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property tolerance
            */
            virtual void SetTolerance(const double tolerance)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The position to be reached with the defined tolerance.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * Set a parameter for the attribute  tolerance
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTolerance(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  tolerance
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTolerance() const  = 0;

            /**
             * Retrieves whether the attribute tolerance is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsToleranceParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The position to be reached with the defined tolerance.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeDistanceCondition'
         * From OpenSCENARIO class model specification:
         * The current relative distance of a triggering entity/entities to a reference entity is compared to a given value. The
         * logical operator used for comparison is defined in the rule attribute.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeDistanceConditionWriter : public IOpenScenarioElementWriter, public IRelativeDistanceCondition
        {
        public:
            virtual ~IRelativeDistanceConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: distance is measured between closest bounding box points. False: reference point distance is used.
             * 
             * @return value of model property freespace
            */
            virtual void SetFreespace(const bool freespace)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The domain the distance is calculated in.
             * 
             * @return value of model property relativeDistanceType
            */
            virtual void SetRelativeDistanceType(const RelativeDistanceType relativeDistanceType)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The distance value. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  freespace
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFreespace(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  relativeDistanceType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRelativeDistanceType(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  freespace
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFreespace() const  = 0;
            /**
             * Get the parameter for the attribute  relativeDistanceType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRelativeDistanceType() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute freespace is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFreespaceParameterized()  = 0;
            /**
             * Retrieves whether the attribute relativeDistanceType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRelativeDistanceTypeParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeLanePosition'
         * From OpenSCENARIO class model specification:
         * Defines a position derived from relative lane coordinates (dLane, ds and offset) to a reference entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeLanePositionWriter : public IOpenScenarioElementWriter, public IRelativeLanePosition
        {
        public:
            virtual ~IRelativeLanePositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Relative dlane to the lane of the reference entity.
             * 
             * @return value of model property dLane
            */
            virtual void SetDLane(const int dLane)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative ds to the s of reference entity.
             * 
             * @return value of model property ds
            */
            virtual void SetDs(const double ds)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Lateral offset to the taqrget lane. Unit: m; Range: ]-inf..inf[
             * 
             * @return value of model property offset
            */
            virtual void SetOffset(const double offset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced lane's s and t coordinates.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * Set a parameter for the attribute  dLane
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDLane(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  ds
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDs(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  offset
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToOffset(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  dLane
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDLane() const  = 0;
            /**
             * Get the parameter for the attribute  ds
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDs() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  offset
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromOffset() const  = 0;

            /**
             * Retrieves whether the attribute dLane is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDLaneParameterized()  = 0;
            /**
             * Retrieves whether the attribute ds is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDsParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute offset is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsOffsetParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced lane's s and t coordinates.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeObjectPosition'
         * From OpenSCENARIO class model specification:
         * Defines a position derived from coordinates (dx, dy and dz) relative to a reference entity. The coordinate system for
         * the relative coordinates is the reference entity's coordinate system (taking the orientation of the entity into
         * account).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeObjectPositionWriter : public IOpenScenarioElementWriter, public IRelativeObjectPosition
        {
        public:
            virtual ~IRelativeObjectPositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Relative position in the x axis, using the coordinate system of the reference entity.
             * 
             * @return value of model property dx
            */
            virtual void SetDx(const double dx)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative position in the y axis, using the coordinate system of the reference entity.
             * 
             * @return value of model property dy
            */
            virtual void SetDy(const double dy)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative position in the z axis, using the coordinate system of the reference entity.
             * 
             * @return value of model property dz
            */
            virtual void SetDz(const double dz)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the orientation of the reference entity.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * Set a parameter for the attribute  dx
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDx(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dy
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDy(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dz
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDz(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  dx
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDx() const  = 0;
            /**
             * Get the parameter for the attribute  dy
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDy() const  = 0;
            /**
             * Get the parameter for the attribute  dz
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDz() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute dx is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDxParameterized()  = 0;
            /**
             * Retrieves whether the attribute dy is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDyParameterized()  = 0;
            /**
             * Retrieves whether the attribute dz is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDzParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the orientation of the reference entity.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeRoadPosition'
         * From OpenSCENARIO class model specification:
         * Defines an absolute position derived from relative road coordinates delta s [ds] and delta t [dt] to a reference entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeRoadPositionWriter : public IOpenScenarioElementWriter, public IRelativeRoadPosition
        {
        public:
            virtual ~IRelativeRoadPositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Relative ds road coordinate to s coordinate of the reference entity.
             * 
             * @return value of model property ds
            */
            virtual void SetDs(const double ds)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative dt road coordinate to t coordinate of the reference entity.
             * 
             * @return value of model property dt
            */
            virtual void SetDt(const double dt)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * Set a parameter for the attribute  ds
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDs(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dt
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDt(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  ds
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDs() const  = 0;
            /**
             * Get the parameter for the attribute  dt
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDt() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute ds is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDsParameterized()  = 0;
            /**
             * Retrieves whether the attribute dt is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDtParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeSpeedCondition'
         * From OpenSCENARIO class model specification:
         * The current relative speed of a triggering entity/entities to a reference entity is compared to a given value. The
         * logical operator used for the evaluation is defined by the rule attribute.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeSpeedConditionWriter : public IOpenScenarioElementWriter, public IRelativeSpeedCondition
        {
        public:
            virtual ~IRelativeSpeedConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative speed value. Unit: m/s.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeSpeedToMaster'
         * From OpenSCENARIO class model specification:
         * Speed definition relative to the master entity's speed within a SynchronizeAction.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeSpeedToMasterWriter : public IOpenScenarioElementWriter, public IRelativeSpeedToMaster
        {
        public:
            virtual ~IRelativeSpeedToMasterWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The semantics of the value (delta, offset, factor).
             * 
             * @return value of model property speedTargetValueType
            */
            virtual void SetSpeedTargetValueType(const SpeedTargetValueType speedTargetValueType)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative speed. Unit: m/s. Range: ]-inf..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  speedTargetValueType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToSpeedTargetValueType(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  speedTargetValueType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromSpeedTargetValueType() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute speedTargetValueType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSpeedTargetValueTypeParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeTargetLane'
         * From OpenSCENARIO class model specification:
         * Defines the relative lane offset to a reference entity as target for a LaneChangeTarget.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeTargetLaneWriter : public IOpenScenarioElementWriter, public IRelativeTargetLane
        {
        public:
            virtual ~IRelativeTargetLaneWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Signed number of lanes that is offset the reference entity's current lane.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const int value)  = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeTargetLaneOffset'
         * From OpenSCENARIO class model specification:
         * Defines the relative lane offset from a triggering entity/entities to a reference entity as a target for a
         * LaneOffsetTarget.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeTargetLaneOffsetWriter : public IOpenScenarioElementWriter, public IRelativeTargetLaneOffset
        {
        public:
            virtual ~IRelativeTargetLaneOffsetWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Lane offset with respect to the reference entity's current lane position. Unit: m.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeTargetSpeed'
         * From OpenSCENARIO class model specification:
         * Defines a target speed relative to a reference entity's speed.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeTargetSpeedWriter : public IOpenScenarioElementWriter, public IRelativeTargetSpeed
        {
        public:
            virtual ~IRelativeTargetSpeedWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * By setting continuous to true a controller comes into place and tries to maintain a continuous relative speed. This may
             * not be used together with Dynamics.time or Dynamics.distance.
             * 
             * @return value of model property continuous
            */
            virtual void SetContinuous(const bool continuous)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The value is either a delta (Unit m/s) or a factor (no Unit).
             * 
             * @return value of model property speedTargetValueType
            */
            virtual void SetSpeedTargetValueType(const SpeedTargetValueType speedTargetValueType)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Value of the relative speed. This value is either given as a delta or as a factor. E.g. value=10 together with
             * valueType=delta means the entity/entities are supposed to drive 10m/s faster than the target reference entity. E.g.
             * value=1.1 together with valueType=factor means that the entity/entities are supposed to drive 10% faster than the target
             * reference entity. Unit: m/s or 1.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  continuous
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToContinuous(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  speedTargetValueType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToSpeedTargetValueType(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  continuous
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromContinuous() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  speedTargetValueType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromSpeedTargetValueType() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute continuous is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsContinuousParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute speedTargetValueType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSpeedTargetValueTypeParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RelativeWorldPosition'
         * From OpenSCENARIO class model specification:
         * Position defined in terms of delta x, y, (z) relative to a reference entity's position. Optionally, an orientation can
         * be defined in either absolute or relative values.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRelativeWorldPositionWriter : public IOpenScenarioElementWriter, public IRelativeWorldPosition
        {
        public:
            virtual ~IRelativeWorldPositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Relative x coordinate in the world coordinate system.
             * 
             * @return value of model property dx
            */
            virtual void SetDx(const double dx)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative y coordinate in the world coordinate system.
             * 
             * @return value of model property dy
            */
            virtual void SetDy(const double dy)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Relative z coordinate in the world coordinate system.
             * 
             * @return value of model property dz
            */
            virtual void SetDz(const double dz)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity from which the relative world position is measured.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the reference entity's orientation.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * Set a parameter for the attribute  dx
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDx(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dy
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDy(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dz
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDz(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  dx
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDx() const  = 0;
            /**
             * Get the parameter for the attribute  dy
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDy() const  = 0;
            /**
             * Get the parameter for the attribute  dz
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDz() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute dx is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDxParameterized()  = 0;
            /**
             * Retrieves whether the attribute dy is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDyParameterized()  = 0;
            /**
             * Retrieves whether the attribute dz is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDzParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the reference entity's orientation.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RoadCondition'
         * From OpenSCENARIO class model specification:
         * Definition of the road friction scale factor. Can be augmented with the addition of optional road properties.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRoadConditionWriter : public IOpenScenarioElementWriter, public IRoadCondition
        {
        public:
            virtual ~IRoadConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Friction scale factor. Range: [0..inf[
             * 
             * @return value of model property frictionScaleFactor
            */
            virtual void SetFrictionScaleFactor(const double frictionScaleFactor)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Additional properties to describe the road condition.
             * 
             * @return value of model property properties
            */
            virtual void SetProperties(std::shared_ptr<IPropertiesWriter> properties)  = 0;

            /**
             * Set a parameter for the attribute  frictionScaleFactor
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFrictionScaleFactor(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  frictionScaleFactor
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFrictionScaleFactor() const  = 0;

            /**
             * Retrieves whether the attribute frictionScaleFactor is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFrictionScaleFactorParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Additional properties to describe the road condition.
             * 
             * @return a writer for model property properties
            */
            virtual std::shared_ptr<IPropertiesWriter> GetWriterProperties() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RoadNetwork'
         * From OpenSCENARIO class model specification:
         * The road network which provides the base layer (and road-relative coordinate systems) for all scenario elements is
         * defined as a reference to a road network file. This reference is optional; in case it is not specified, an infinite
         * non-inclined plane on level z=0 shall be assumed as base layer. Additionally and optionally, a visual 3D model file can
         * be referenced and any number of signals can be specified.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRoadNetworkWriter : public IOpenScenarioElementWriter, public IRoadNetwork
        {
        public:
            virtual ~IRoadNetworkWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * File path of the road network file (e.g. an ASAM OpenDRIVE file).
             * 
             * @return value of model property logicFile
            */
            virtual void SetLogicFile(std::shared_ptr<IFileWriter> logicFile)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * File path of a 3D model representing the virtual environment. This may be used for visual representation (rendering).
             * 
             * @return value of model property sceneGraphFile
            */
            virtual void SetSceneGraphFile(std::shared_ptr<IFileWriter> sceneGraphFile)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name references and description of dynamic behavior for traffic signals defined in the road network file.
             * 
             * @return value of model property trafficSignals
            */
            virtual void SetTrafficSignals(std::vector<std::shared_ptr<ITrafficSignalControllerWriter>>& trafficSignals)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * File path of the road network file (e.g. an ASAM OpenDRIVE file).
             * 
             * @return a writer for model property logicFile
            */
            virtual std::shared_ptr<IFileWriter> GetWriterLogicFile() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * File path of a 3D model representing the virtual environment. This may be used for visual representation (rendering).
             * 
             * @return a writer for model property sceneGraphFile
            */
            virtual std::shared_ptr<IFileWriter> GetWriterSceneGraphFile() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name references and description of dynamic behavior for traffic signals defined in the road network file.
             * 
             * @return a list of writers for model property trafficSignals
            */
            virtual std::vector<std::shared_ptr<ITrafficSignalControllerWriter>> GetWriterTrafficSignals() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RoadPosition'
         * From OpenSCENARIO class model specification:
         * Position defined in terms of road ID, distance (s) along that road segment and offset from reference lane (t) at that
         * point. Orientation is optional.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRoadPositionWriter : public IOpenScenarioElementWriter, public IRoadPosition
        {
        public:
            virtual ~IRoadPositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Identifier of the road, defined in the road network definition file (external to ASAM OpenSCENARIO).
             * 
             * @return value of model property roadId
            */
            virtual void SetRoadId(const std::string roadId)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Represents s coordinate along the reference line of the road.
             * 
             * @return value of model property s
            */
            virtual void SetS(const double s)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Represents t coordinate orthogonal to the reference line of the road.
             * 
             * @return value of model property t
            */
            virtual void SetT(const double t)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * Set a parameter for the attribute  roadId
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRoadId(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  s
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToS(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  t
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToT(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  roadId
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRoadId() const  = 0;
            /**
             * Get the parameter for the attribute  s
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromS() const  = 0;
            /**
             * Get the parameter for the attribute  t
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromT() const  = 0;

            /**
             * Retrieves whether the attribute roadId is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRoadIdParameterized()  = 0;
            /**
             * Retrieves whether the attribute s is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSParameterized()  = 0;
            /**
             * Retrieves whether the attribute t is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Route'
         * From OpenSCENARIO class model specification:
         * A route is defined in a scenario or in a catalog. It represents a continuous path throughout the road network, defined
         * by a series of waypoints.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRouteWriter : public IOpenScenarioElementWriter, public IRoute, public ICatalogElementWriter
        {
        public:
            virtual ~IRouteWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * In a closed route, the last waypoint is followed by the first waypoint to create a closed route.
             * 
             * @return value of model property closed
            */
            virtual void SetClosed(const bool closed)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the route. Required in catalogs.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * At least two waypoints are needed to define a route.
             * 
             * @return value of model property waypoints
            */
            virtual void SetWaypoints(std::vector<std::shared_ptr<IWaypointWriter>>& waypoints)  = 0;

            /**
             * Set a parameter for the attribute  closed
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToClosed(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  closed
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromClosed() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute closed is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsClosedParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * At least two waypoints are needed to define a route.
             * 
             * @return a list of writers for model property waypoints
            */
            virtual std::vector<std::shared_ptr<IWaypointWriter>> GetWriterWaypoints() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RouteCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up route catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRouteCatalogLocationWriter : public IOpenScenarioElementWriter, public IRouteCatalogLocation
        {
        public:
            virtual ~IRouteCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RoutePosition'
         * From OpenSCENARIO class model specification:
         * Position along a route defined in terms of PositionInRoadCoordinates, PositionInLaneCoordinates or current position of a
         * reference object. Orientation definition is optional.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRoutePositionWriter : public IOpenScenarioElementWriter, public IRoutePosition
        {
        public:
            virtual ~IRoutePositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Reference to the route the position is calculated from.
             * 
             * @return value of model property routeRef
            */
            virtual void SetRouteRef(std::shared_ptr<IRouteRefWriter> routeRef)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
             * and t coordinates or to the orientation of the reference entity.
             * 
             * @return value of model property orientation
            */
            virtual void SetOrientation(std::shared_ptr<IOrientationWriter> orientation)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position along the route.
             * 
             * @return value of model property inRoutePosition
            */
            virtual void SetInRoutePosition(std::shared_ptr<IInRoutePositionWriter> inRoutePosition)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Reference to the route the position is calculated from.
             * 
             * @return a writer for model property routeRef
            */
            virtual std::shared_ptr<IRouteRefWriter> GetWriterRouteRef() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
             * and t coordinates or to the orientation of the reference entity.
             * 
             * @return a writer for model property orientation
            */
            virtual std::shared_ptr<IOrientationWriter> GetWriterOrientation() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Position along the route.
             * 
             * @return a writer for model property inRoutePosition
            */
            virtual std::shared_ptr<IInRoutePositionWriter> GetWriterInRoutePosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RouteRef'
         * From OpenSCENARIO class model specification:
         * Defines a reference to a route. Either an inline definition of a route or a route in a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRouteRefWriter : public IOpenScenarioElementWriter, public IRouteRef
        {
        public:
            virtual ~IRouteRefWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Route definition.
             * 
             * @return value of model property route
            */
            virtual void SetRoute(std::shared_ptr<IRouteWriter> route)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference to route in the catalog.
             * 
             * @return value of model property catalogReference
            */
            virtual void SetCatalogReference(std::shared_ptr<ICatalogReferenceWriter> catalogReference)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Route definition.
             * 
             * @return a writer for model property route
            */
            virtual std::shared_ptr<IRouteWriter> GetWriterRoute() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Reference to route in the catalog.
             * 
             * @return a writer for model property catalogReference
            */
            virtual std::shared_ptr<ICatalogReferenceWriter> GetWriterCatalogReference() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'RoutingAction'
         * From OpenSCENARIO class model specification:
         * Controls entity routing, either by following a predefined route or trajectory, alternatively by specifying a destination
         * position which the entity should aim to reach.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IRoutingActionWriter : public IOpenScenarioElementWriter, public IRoutingAction
        {
        public:
            virtual ~IRoutingActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a route to an entity. The route is defined by at least two waypoints.
             * 
             * @return value of model property assignRouteAction
            */
            virtual void SetAssignRouteAction(std::shared_ptr<IAssignRouteActionWriter> assignRouteAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Controls an entity to follow a trajectory.
             * 
             * @return value of model property followTrajectoryAction
            */
            virtual void SetFollowTrajectoryAction(std::shared_ptr<IFollowTrajectoryActionWriter> followTrajectoryAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Assigns a route to an entity. The route assigned will be the shortest route (along roads) between the entity's current
             * position and the position specified.
             * 
             * @return value of model property acquirePositionAction
            */
            virtual void SetAcquirePositionAction(std::shared_ptr<IAcquirePositionActionWriter> acquirePositionAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Assigns a route to an entity. The route is defined by at least two waypoints.
             * 
             * @return a writer for model property assignRouteAction
            */
            virtual std::shared_ptr<IAssignRouteActionWriter> GetWriterAssignRouteAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Controls an entity to follow a trajectory.
             * 
             * @return a writer for model property followTrajectoryAction
            */
            virtual std::shared_ptr<IFollowTrajectoryActionWriter> GetWriterFollowTrajectoryAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Assigns a route to an entity. The route assigned will be the shortest route (along roads) between the entity's current
             * position and the position specified.
             * 
             * @return a writer for model property acquirePositionAction
            */
            virtual std::shared_ptr<IAcquirePositionActionWriter> GetWriterAcquirePositionAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ScenarioDefinition'
         * From OpenSCENARIO class model specification:
         * Top level container containing all scenario elements.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IScenarioDefinitionWriter : public IOpenScenarioElementWriter, public IScenarioDefinition
        {
        public:
            virtual ~IScenarioDefinitionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Global Parameter declaration. Some parameter represent placeholders to be resolved when the scenario file is loaded.
             * Some parameters represent runtime values that can be controlled with ParameterActions and ParameterConditions during
             * simulation time.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A list of locations to look up catalog files. Each catalog element type has its own list.
             * 
             * @return value of model property catalogLocations
            */
            virtual void SetCatalogLocations(std::shared_ptr<ICatalogLocationsWriter> catalogLocations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference to the road network.
             * 
             * @return value of model property roadNetwork
            */
            virtual void SetRoadNetwork(std::shared_ptr<IRoadNetworkWriter> roadNetwork)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Container for entity selections and scenario object definitions. Instances of ScenarioObject, of EntitySelection and of
             * SpawnedObject considered instances of Entity.
             * 
             * @return value of model property entities
            */
            virtual void SetEntities(std::shared_ptr<IEntitiesWriter> entities)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Container for the dynamic content of the scenario.
             * 
             * @return value of model property storyboard
            */
            virtual void SetStoryboard(std::shared_ptr<IStoryboardWriter> storyboard)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * A list of locations to look up catalog files. Each catalog element type has its own list.
             * 
             * @return a writer for model property catalogLocations
            */
            virtual std::shared_ptr<ICatalogLocationsWriter> GetWriterCatalogLocations() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Reference to the road network.
             * 
             * @return a writer for model property roadNetwork
            */
            virtual std::shared_ptr<IRoadNetworkWriter> GetWriterRoadNetwork() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Container for entity selections and scenario object definitions. Instances of ScenarioObject, of EntitySelection and of
             * SpawnedObject considered instances of Entity.
             * 
             * @return a writer for model property entities
            */
            virtual std::shared_ptr<IEntitiesWriter> GetWriterEntities() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Container for the dynamic content of the scenario.
             * 
             * @return a writer for model property storyboard
            */
            virtual std::shared_ptr<IStoryboardWriter> GetWriterStoryboard() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Global Parameter declaration. Some parameter represent placeholders to be resolved when the scenario file is loaded.
             * Some parameters represent runtime values that can be controlled with ParameterActions and ParameterConditions during
             * simulation time.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'ScenarioObject'
         * From OpenSCENARIO class model specification:
         * A scenario object represents a runtime object that is created from an EntityObject (vehicle type, pedestrian type,
         * miscellaneous object type) and a Controller. Miscellaneous objects must not have a controller.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IScenarioObjectWriter : public IOpenScenarioElementWriter, public IScenarioObject, public IEntityWriter
        {
        public:
            virtual ~IScenarioObjectWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Identifier of the scenario object.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The EntityObject (either instance of type Vehicle, Pedestrian or MiscObject).
             * 
             * @return value of model property entityObject
            */
            virtual void SetEntityObject(std::shared_ptr<IEntityObjectWriter> entityObject)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Controller of the EntityObject instance.
             * 
             * @return value of model property objectController
            */
            virtual void SetObjectController(std::shared_ptr<IObjectControllerWriter> objectController)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The EntityObject (either instance of type Vehicle, Pedestrian or MiscObject).
             * 
             * @return a writer for model property entityObject
            */
            virtual std::shared_ptr<IEntityObjectWriter> GetWriterEntityObject() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Controller of the EntityObject instance.
             * 
             * @return a writer for model property objectController
            */
            virtual std::shared_ptr<IObjectControllerWriter> GetWriterObjectController() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SelectedEntities'
         * From OpenSCENARIO class model specification:
         * Collection of entities that includes entities explicitly by their reference or includes the entities by their type.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISelectedEntitiesWriter : public IOpenScenarioElementWriter, public ISelectedEntities
        {
        public:
            virtual ~ISelectedEntitiesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * References to the selected entities.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::vector<std::shared_ptr<IEntityRefWriter>>& entityRef)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the type to determine that all entities of a specific type are members.
             * 
             * @return value of model property byType
            */
            virtual void SetByType(std::vector<std::shared_ptr<IByTypeWriter>>& byType)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * References to the selected entities.
             * 
             * @return a list of writers for model property entityRef
            */
            virtual std::vector<std::shared_ptr<IEntityRefWriter>> GetWriterEntityRef() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines the type to determine that all entities of a specific type are members.
             * 
             * @return a list of writers for model property byType
            */
            virtual std::vector<std::shared_ptr<IByTypeWriter>> GetWriterByType() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Shape'
         * From OpenSCENARIO class model specification:
         * Shape for use in trajectories. Supported types: Polyline (line segments), Clothoid, Nurbs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IShapeWriter : public IOpenScenarioElementWriter, public IShape
        {
        public:
            virtual ~IShapeWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Polyline property of a shape.
             * 
             * @return value of model property polyline
            */
            virtual void SetPolyline(std::shared_ptr<IPolylineWriter> polyline)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Clothoid property of a shape.
             * 
             * @return value of model property clothoid
            */
            virtual void SetClothoid(std::shared_ptr<IClothoidWriter> clothoid)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * NURBS property of a shape.
             * 
             * @return value of model property nurbs
            */
            virtual void SetNurbs(std::shared_ptr<INurbsWriter> nurbs)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Polyline property of a shape.
             * 
             * @return a writer for model property polyline
            */
            virtual std::shared_ptr<IPolylineWriter> GetWriterPolyline() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Clothoid property of a shape.
             * 
             * @return a writer for model property clothoid
            */
            virtual std::shared_ptr<IClothoidWriter> GetWriterClothoid() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * NURBS property of a shape.
             * 
             * @return a writer for model property nurbs
            */
            virtual std::shared_ptr<INurbsWriter> GetWriterNurbs() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SimulationTimeCondition'
         * From OpenSCENARIO class model specification:
         * Compares the simulation time to the specified value. The logical operator is defined by the rule attribute.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISimulationTimeConditionWriter : public IOpenScenarioElementWriter, public ISimulationTimeCondition
        {
        public:
            virtual ~ISimulationTimeConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Time value of the simulation time condition. Unit: s.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SpeedAction'
         * From OpenSCENARIO class model specification:
         * This action describes the transition of an entity's longitudinal speed to a target longitudinal speed.
         * SpeedActionDynamics specifies the transition with respects to time or distance combined with a shape.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedActionWriter : public IOpenScenarioElementWriter, public ISpeedAction
        {
        public:
            virtual ~ISpeedActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines how the target speed is reached.
             * 
             * @return value of model property speedActionDynamics
            */
            virtual void SetSpeedActionDynamics(std::shared_ptr<ITransitionDynamicsWriter> speedActionDynamics)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed which should be reached.
             * 
             * @return value of model property speedActionTarget
            */
            virtual void SetSpeedActionTarget(std::shared_ptr<ISpeedActionTargetWriter> speedActionTarget)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Defines how the target speed is reached.
             * 
             * @return a writer for model property speedActionDynamics
            */
            virtual std::shared_ptr<ITransitionDynamicsWriter> GetWriterSpeedActionDynamics() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed which should be reached.
             * 
             * @return a writer for model property speedActionTarget
            */
            virtual std::shared_ptr<ISpeedActionTargetWriter> GetWriterSpeedActionTarget() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SpeedActionTarget'
         * From OpenSCENARIO class model specification:
         * Specifies the target speed of a SpeedAction. Can be either an absolute speed value or a speed value relative to another
         * entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedActionTargetWriter : public IOpenScenarioElementWriter, public ISpeedActionTarget
        {
        public:
            virtual ~ISpeedActionTargetWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed as relative speed to a reference entity. Unit: m/s.
             * 
             * @return value of model property relativeTargetSpeed
            */
            virtual void SetRelativeTargetSpeed(std::shared_ptr<IRelativeTargetSpeedWriter> relativeTargetSpeed)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed as absolute speed.Unit: m/s.
             * 
             * @return value of model property absoluteTargetSpeed
            */
            virtual void SetAbsoluteTargetSpeed(std::shared_ptr<IAbsoluteTargetSpeedWriter> absoluteTargetSpeed)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed as relative speed to a reference entity. Unit: m/s.
             * 
             * @return a writer for model property relativeTargetSpeed
            */
            virtual std::shared_ptr<IRelativeTargetSpeedWriter> GetWriterRelativeTargetSpeed() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines the target speed as absolute speed.Unit: m/s.
             * 
             * @return a writer for model property absoluteTargetSpeed
            */
            virtual std::shared_ptr<IAbsoluteTargetSpeedWriter> GetWriterAbsoluteTargetSpeed() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SpeedCondition'
         * From OpenSCENARIO class model specification:
         * Compares a triggering entity's/entities' speed to a target speed. The logical operator for the comparison is given by
         * the rule attribute.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISpeedConditionWriter : public IOpenScenarioElementWriter, public ISpeedCondition
        {
        public:
            virtual ~ISpeedConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Speed value of the speed condition. Unit m/s.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'StandStillCondition'
         * From OpenSCENARIO class model specification:
         * Logical expression in condition becomes true if the triggering entity/entities stands still for a given amount of time.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStandStillConditionWriter : public IOpenScenarioElementWriter, public IStandStillCondition
        {
        public:
            virtual ~IStandStillConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Duration time of still standing to let the logical expression become true. Unit: s. Range [0..inf[.
             * 
             * @return value of model property duration
            */
            virtual void SetDuration(const double duration)  = 0;

            /**
             * Set a parameter for the attribute  duration
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDuration(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  duration
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDuration() const  = 0;

            /**
             * Retrieves whether the attribute duration is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDurationParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Story'
         * From OpenSCENARIO class model specification:
         * Grouping of independent executable parts of a scenario. The name of a story must be unique within an OpenSCENARIO file.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStoryWriter : public IOpenScenarioElementWriter, public IStory, public IStoryboardElementWriter
        {
        public:
            virtual ~IStoryWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the story, must be unique within an OpenSCENARIO file.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the acts of the story.
             * 
             * @return value of model property acts
            */
            virtual void SetActs(std::vector<std::shared_ptr<IActWriter>>& acts)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines the acts of the story.
             * 
             * @return a list of writers for model property acts
            */
            virtual std::vector<std::shared_ptr<IActWriter>> GetWriterActs() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Storyboard'
         * From OpenSCENARIO class model specification:
         * Top container for the dynamic content of a scenario.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStoryboardWriter : public IOpenScenarioElementWriter, public IStoryboard
        {
        public:
            virtual ~IStoryboardWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Initialization of the storyboard instance. Initial conditions are set and initial actions are applied to entities.
             * 
             * @return value of model property init
            */
            virtual void SetInit(std::shared_ptr<IInitWriter> init)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of stories defined in a story board.
             * 
             * @return value of model property stories
            */
            virtual void SetStories(std::vector<std::shared_ptr<IStoryWriter>>& stories)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Trigger to stop the Storyboard instance.
             * 
             * @return value of model property stopTrigger
            */
            virtual void SetStopTrigger(std::shared_ptr<ITriggerWriter> stopTrigger)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Initialization of the storyboard instance. Initial conditions are set and initial actions are applied to entities.
             * 
             * @return a writer for model property init
            */
            virtual std::shared_ptr<IInitWriter> GetWriterInit() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Trigger to stop the Storyboard instance.
             * 
             * @return a writer for model property stopTrigger
            */
            virtual std::shared_ptr<ITriggerWriter> GetWriterStopTrigger() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of stories defined in a story board.
             * 
             * @return a list of writers for model property stories
            */
            virtual std::vector<std::shared_ptr<IStoryWriter>> GetWriterStories() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'StoryboardElementStateCondition'
         * From OpenSCENARIO class model specification:
         * Considered true if a referenced storyboard element has reached a given runtime state (standbyState, runningState,
         * completeState) or if the referenced storyboard element undergoes a specific transition (startTransition, stopTransition,
         * endTransition, skipTransition) at a discrete time.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IStoryboardElementStateConditionWriter : public IOpenScenarioElementWriter, public IStoryboardElementStateCondition
        {
        public:
            virtual ~IStoryboardElementStateConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The state or the transition of the storyboard element instance for which the condition becomes true.
             * 
             * @return value of model property state
            */
            virtual void SetState(const StoryboardElementState state)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the referenced Storyboard instance.
             * 
             * @return value of model property storyboardElementRef
            */
            virtual void SetStoryboardElementRef(std::shared_ptr<INamedReference<IStoryboardElement>> storyboardElementRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Type of storyboard element instance.
             * 
             * @return value of model property storyboardElementType
            */
            virtual void SetStoryboardElementType(const StoryboardElementType storyboardElementType)  = 0;

            /**
             * Set a parameter for the attribute  state
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToState(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  storyboardElementRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToStoryboardElementRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  storyboardElementType
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToStoryboardElementType(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  state
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromState() const  = 0;
            /**
             * Get the parameter for the attribute  storyboardElementRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromStoryboardElementRef() const  = 0;
            /**
             * Get the parameter for the attribute  storyboardElementType
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromStoryboardElementType() const  = 0;

            /**
             * Retrieves whether the attribute state is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStateParameterized()  = 0;
            /**
             * Retrieves whether the attribute storyboardElementRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStoryboardElementRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute storyboardElementType is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStoryboardElementTypeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Sun'
         * From OpenSCENARIO class model specification:
         * Specification of sun properties.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISunWriter : public IOpenScenarioElementWriter, public ISun
        {
        public:
            virtual ~ISunWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Azimuth of the sun, counted counterclockwise, 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: radian; Range:
             * [0..2PI].
             * 
             * @return value of model property azimuth
            */
            virtual void SetAzimuth(const double azimuth)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: rad; Range: [-PI..PI].
             * 
             * @return value of model property elevation
            */
            virtual void SetElevation(const double elevation)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Illuminance of the sun, direct sunlight is around 100,00 lx. Unit: lux; Range: [0..inf[.
             * 
             * @return value of model property intensity
            */
            virtual void SetIntensity(const double intensity)  = 0;

            /**
             * Set a parameter for the attribute  azimuth
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToAzimuth(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  elevation
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToElevation(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  intensity
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToIntensity(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  azimuth
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromAzimuth() const  = 0;
            /**
             * Get the parameter for the attribute  elevation
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromElevation() const  = 0;
            /**
             * Get the parameter for the attribute  intensity
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromIntensity() const  = 0;

            /**
             * Retrieves whether the attribute azimuth is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsAzimuthParameterized()  = 0;
            /**
             * Retrieves whether the attribute elevation is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsElevationParameterized()  = 0;
            /**
             * Retrieves whether the attribute intensity is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsIntensityParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'SynchronizeAction'
         * From OpenSCENARIO class model specification:
         * Synchronizes an entity's arrival at a destination with a master entity. Both entities are provided with their own
         * reference position which shall be reached at the same time. Final speed can be specified. Note that the reference
         * positions can be different or identical.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ISynchronizeActionWriter : public IOpenScenarioElementWriter, public ISynchronizeAction
        {
        public:
            virtual ~ISynchronizeActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * A reference to the master entity.
             * 
             * @return value of model property masterEntityRef
            */
            virtual void SetMasterEntityRef(std::shared_ptr<INamedReference<IEntity>> masterEntityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The target position for the master entity.
             * 
             * @return value of model property targetPositionMaster
            */
            virtual void SetTargetPositionMaster(std::shared_ptr<IPositionWriter> targetPositionMaster)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The target position for the entity that should be synchronized.
             * 
             * @return value of model property targetPosition
            */
            virtual void SetTargetPosition(std::shared_ptr<IPositionWriter> targetPosition)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The speed that the synchronized entity should have at its target position.
             * 
             * @return value of model property finalSpeed
            */
            virtual void SetFinalSpeed(std::shared_ptr<IFinalSpeedWriter> finalSpeed)  = 0;

            /**
             * Set a parameter for the attribute  masterEntityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToMasterEntityRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  masterEntityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromMasterEntityRef() const  = 0;

            /**
             * Retrieves whether the attribute masterEntityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsMasterEntityRefParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The target position for the master entity.
             * 
             * @return a writer for model property targetPositionMaster
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterTargetPositionMaster() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The target position for the entity that should be synchronized.
             * 
             * @return a writer for model property targetPosition
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterTargetPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * The speed that the synchronized entity should have at its target position.
             * 
             * @return a writer for model property finalSpeed
            */
            virtual std::shared_ptr<IFinalSpeedWriter> GetWriterFinalSpeed() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TeleportAction'
         * From OpenSCENARIO class model specification:
         * Specifying a target position an entity is teleported to.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITeleportActionWriter : public IOpenScenarioElementWriter, public ITeleportAction
        {
        public:
            virtual ~ITeleportActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The position the entity/entities are teleported to.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * The position the entity/entities are teleported to.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TimeHeadwayCondition'
         * From OpenSCENARIO class model specification:
         * Condition based on the headway time between a triggering entity/entities and a reference entity. The logical operator
         * used for comparison is defined by the rule attribute.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeHeadwayConditionWriter : public IOpenScenarioElementWriter, public ITimeHeadwayCondition
        {
        public:
            virtual ~ITimeHeadwayConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
             * 
             * @return value of model property alongRoute
            */
            virtual void SetAlongRoute(const bool alongRoute)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity to which the time headway is computed.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<INamedReference<IEntity>> entityRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: time headway is measured using the distance between closest bounding box points. False: reference point distance
             * is used.
             * 
             * @return value of model property freespace
            */
            virtual void SetFreespace(const bool freespace)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The time headway value. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  alongRoute
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToAlongRoute(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  entityRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToEntityRef(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  freespace
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFreespace(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  alongRoute
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromAlongRoute() const  = 0;
            /**
             * Get the parameter for the attribute  entityRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromEntityRef() const  = 0;
            /**
             * Get the parameter for the attribute  freespace
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFreespace() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute alongRoute is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsAlongRouteParameterized()  = 0;
            /**
             * Retrieves whether the attribute entityRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsEntityRefParameterized()  = 0;
            /**
             * Retrieves whether the attribute freespace is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFreespaceParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TimeOfDay'
         * From OpenSCENARIO class model specification:
         * Defines the day and time.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeOfDayWriter : public IOpenScenarioElementWriter, public ITimeOfDay
        {
        public:
            virtual ~ITimeOfDayWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * If true, the timeofday is animated with progressing simulation time, e.g. in order to animate the position of the sun.
             * 
             * @return value of model property animation
            */
            virtual void SetAnimation(const bool animation)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Datetime value.
             * 
             * @return value of model property dateTime
            */
            virtual void SetDateTime(const DateTime dateTime)  = 0;

            /**
             * Set a parameter for the attribute  animation
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToAnimation(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dateTime
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDateTime(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  animation
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromAnimation() const  = 0;
            /**
             * Get the parameter for the attribute  dateTime
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDateTime() const  = 0;

            /**
             * Retrieves whether the attribute animation is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsAnimationParameterized()  = 0;
            /**
             * Retrieves whether the attribute dateTime is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDateTimeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TimeOfDayCondition'
         * From OpenSCENARIO class model specification:
         * The logical expression is considered true if the simulated time and date verifies the specified relation rule (bigger
         * than, smaller than, or equal to) relatively to a given time and date value.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeOfDayConditionWriter : public IOpenScenarioElementWriter, public ITimeOfDayCondition
        {
        public:
            virtual ~ITimeOfDayConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Datetime value for comparison.
             * 
             * @return value of model property dateTime
            */
            virtual void SetDateTime(const DateTime dateTime)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * Set a parameter for the attribute  dateTime
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDateTime(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  dateTime
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDateTime() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;

            /**
             * Retrieves whether the attribute dateTime is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDateTimeParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TimeReference'
         * From OpenSCENARIO class model specification:
         * Defines whether time information present in trajectories should be considered. If considered, it may be used as either
         * absolute or relative time values. Moreover, a time offset or time scaling may be applied.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeReferenceWriter : public IOpenScenarioElementWriter, public ITimeReference
        {
        public:
            virtual ~ITimeReferenceWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * This property indicates Timing information is neglected.
             * 
             * @return value of model property none
            */
            virtual void SetNone(std::shared_ptr<INoneWriter> none)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * This property indicates timing information is taken into account. Its underlying properties allow specification of the
             * time domain (absolute or relative), time scaling and a global time offset.
             * 
             * @return value of model property timing
            */
            virtual void SetTiming(std::shared_ptr<ITimingWriter> timing)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * This property indicates Timing information is neglected.
             * 
             * @return a writer for model property none
            */
            virtual std::shared_ptr<INoneWriter> GetWriterNone() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * This property indicates timing information is taken into account. Its underlying properties allow specification of the
             * time domain (absolute or relative), time scaling and a global time offset.
             * 
             * @return a writer for model property timing
            */
            virtual std::shared_ptr<ITimingWriter> GetWriterTiming() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TimeToCollisionCondition'
         * From OpenSCENARIO class model specification:
         * The currently predicted time to collision of a triggering entity/entities and either a reference entity’s position or an
         * explicit position is compared to a given time value. The logical operator for comparison is defined by the rule
         * attribute.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeToCollisionConditionWriter : public IOpenScenarioElementWriter, public ITimeToCollisionCondition
        {
        public:
            virtual ~ITimeToCollisionConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
             * 
             * @return value of model property alongRoute
            */
            virtual void SetAlongRoute(const bool alongRoute)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: time to collision is measured using the distance between closest bounding box points.False: reference point
             * distance is used.
             * 
             * @return value of model property freespace
            */
            virtual void SetFreespace(const bool freespace)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The time to collision value. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The explicit position or a position defined through the current position of a reference entity.
             * 
             * @return value of model property timeToCollisionConditionTarget
            */
            virtual void SetTimeToCollisionConditionTarget(std::shared_ptr<ITimeToCollisionConditionTargetWriter> timeToCollisionConditionTarget)  = 0;

            /**
             * Set a parameter for the attribute  alongRoute
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToAlongRoute(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  freespace
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFreespace(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  alongRoute
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromAlongRoute() const  = 0;
            /**
             * Get the parameter for the attribute  freespace
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFreespace() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute alongRoute is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsAlongRouteParameterized()  = 0;
            /**
             * Retrieves whether the attribute freespace is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFreespaceParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The explicit position or a position defined through the current position of a reference entity.
             * 
             * @return a writer for model property timeToCollisionConditionTarget
            */
            virtual std::shared_ptr<ITimeToCollisionConditionTargetWriter> GetWriterTimeToCollisionConditionTarget() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TimeToCollisionConditionTarget'
         * From OpenSCENARIO class model specification:
         * Target position used in the TimeToCollisionCondition. Can be defined as either an explicit position, or the position of
         * a reference entity.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimeToCollisionConditionTargetWriter : public IOpenScenarioElementWriter, public ITimeToCollisionConditionTarget
        {
        public:
            virtual ~ITimeToCollisionConditionTargetWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Position.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return value of model property entityRef
            */
            virtual void SetEntityRef(std::shared_ptr<IEntityRefWriter> entityRef)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Position.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Reference entity.
             * 
             * @return a writer for model property entityRef
            */
            virtual std::shared_ptr<IEntityRefWriter> GetWriterEntityRef() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Timing'
         * From OpenSCENARIO class model specification:
         * Adjust the timing within time references by scale and offset.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITimingWriter : public IOpenScenarioElementWriter, public ITiming
        {
        public:
            virtual ~ITimingWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Definition of time value context as either absolute or relative.
             * 
             * @return value of model property domainAbsoluteRelative
            */
            virtual void SetDomainAbsoluteRelative(const ReferenceContext domainAbsoluteRelative)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Introduction of a global offset for all time values. Unit: s; Range: ]-inf..inf[.
             * 
             * @return value of model property offset
            */
            virtual void SetOffset(const double offset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Scaling factor for time values. While values smaller than 1.0 represent negative scaling, values larger than 1.0 will
             * result in positive scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
             * 
             * @return value of model property scale
            */
            virtual void SetScale(const double scale)  = 0;

            /**
             * Set a parameter for the attribute  domainAbsoluteRelative
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDomainAbsoluteRelative(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  offset
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToOffset(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  scale
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToScale(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  domainAbsoluteRelative
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDomainAbsoluteRelative() const  = 0;
            /**
             * Get the parameter for the attribute  offset
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromOffset() const  = 0;
            /**
             * Get the parameter for the attribute  scale
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromScale() const  = 0;

            /**
             * Retrieves whether the attribute domainAbsoluteRelative is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDomainAbsoluteRelativeParameterized()  = 0;
            /**
             * Retrieves whether the attribute offset is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsOffsetParameterized()  = 0;
            /**
             * Retrieves whether the attribute scale is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsScaleParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficAction'
         * From OpenSCENARIO class model specification:
         * Actions defining macroscopic traffic flow and behavior.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficActionWriter : public IOpenScenarioElementWriter, public ITrafficAction
        {
        public:
            virtual ~ITrafficActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines a source of traffic at a specific position.
             * 
             * @return value of model property trafficSourceAction
            */
            virtual void SetTrafficSourceAction(std::shared_ptr<ITrafficSourceActionWriter> trafficSourceAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines a sink of traffic at a specific position.
             * 
             * @return value of model property trafficSinkAction
            */
            virtual void SetTrafficSinkAction(std::shared_ptr<ITrafficSinkActionWriter> trafficSinkAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines swarm traffic around a given central entity.
             * 
             * @return value of model property trafficSwarmAction
            */
            virtual void SetTrafficSwarmAction(std::shared_ptr<ITrafficSwarmActionWriter> trafficSwarmAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Defines a source of traffic at a specific position.
             * 
             * @return a writer for model property trafficSourceAction
            */
            virtual std::shared_ptr<ITrafficSourceActionWriter> GetWriterTrafficSourceAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines a sink of traffic at a specific position.
             * 
             * @return a writer for model property trafficSinkAction
            */
            virtual std::shared_ptr<ITrafficSinkActionWriter> GetWriterTrafficSinkAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines swarm traffic around a given central entity.
             * 
             * @return a writer for model property trafficSwarmAction
            */
            virtual std::shared_ptr<ITrafficSwarmActionWriter> GetWriterTrafficSwarmAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficDefinition'
         * From OpenSCENARIO class model specification:
         * Definition of macroscopic traffic based on vehicle and controller definitions.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficDefinitionWriter : public IOpenScenarioElementWriter, public ITrafficDefinition
        {
        public:
            virtual ~ITrafficDefinitionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the traffic definition.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Distribution of vehicle categories within the traffic.
             * 
             * @return value of model property vehicleCategoryDistribution
            */
            virtual void SetVehicleCategoryDistribution(std::shared_ptr<IVehicleCategoryDistributionWriter> vehicleCategoryDistribution)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Distribution of controllers within this traffic.
             * 
             * @return value of model property controllerDistribution
            */
            virtual void SetControllerDistribution(std::shared_ptr<IControllerDistributionWriter> controllerDistribution)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Distribution of vehicle categories within the traffic.
             * 
             * @return a writer for model property vehicleCategoryDistribution
            */
            virtual std::shared_ptr<IVehicleCategoryDistributionWriter> GetWriterVehicleCategoryDistribution() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Distribution of controllers within this traffic.
             * 
             * @return a writer for model property controllerDistribution
            */
            virtual std::shared_ptr<IControllerDistributionWriter> GetWriterControllerDistribution() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalAction'
         * From OpenSCENARIO class model specification:
         * Action used to set or overwrite a signals state or a signal controllers state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalActionWriter : public IOpenScenarioElementWriter, public ITrafficSignalAction
        {
        public:
            virtual ~ITrafficSignalActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Action used to control the state of a signal.
             * 
             * @return value of model property trafficSignalControllerAction
            */
            virtual void SetTrafficSignalControllerAction(std::shared_ptr<ITrafficSignalControllerActionWriter> trafficSignalControllerAction)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Action used to set a specific phase of a signal controller.
             * 
             * @return value of model property trafficSignalStateAction
            */
            virtual void SetTrafficSignalStateAction(std::shared_ptr<ITrafficSignalStateActionWriter> trafficSignalStateAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * Action used to control the state of a signal.
             * 
             * @return a writer for model property trafficSignalControllerAction
            */
            virtual std::shared_ptr<ITrafficSignalControllerActionWriter> GetWriterTrafficSignalControllerAction() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Action used to set a specific phase of a signal controller.
             * 
             * @return a writer for model property trafficSignalStateAction
            */
            virtual std::shared_ptr<ITrafficSignalStateActionWriter> GetWriterTrafficSignalStateAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalCondition'
         * From OpenSCENARIO class model specification:
         * Considered true if a referenced traffic signal (e.g. from an OpenDRIVE file) reaches a specific states. Signal IDs are
         * listed in the TrafficSignal list of the RoadNetwork together with their states and their controllers to enable dynamic
         * signal modelling.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalConditionWriter : public IOpenScenarioElementWriter, public ITrafficSignalCondition
        {
        public:
            virtual ~ITrafficSignalConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * ID of the referenced signal defined in a road network. The signal ID must be listed in the TrafficSignal list of the
             * RoadNetwork section.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * State of the signal to be reached for the condition to become true.
             * 
             * @return value of model property state
            */
            virtual void SetState(const std::string state)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  state
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToState(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  state
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromState() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute state is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStateParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalController'
         * From OpenSCENARIO class model specification:
         * Controls the state of a collection of traffic signals.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalControllerWriter : public IOpenScenarioElementWriter, public ITrafficSignalController
        {
        public:
            virtual ~ITrafficSignalControllerWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The delay to the controller in the reference property. A controller having a delay to another one means that its first
             * phase virtually starts delaytime seconds after the start of the reference's first phase. This can be used to define a
             * progressive signal system, but only makes sense, if the total times of all connected controllers are the same. If delay
             * is set, reference is required. Unit: s; Range: [0..inf[.
             * 
             * @return value of model property delay
            */
            virtual void SetDelay(const double delay)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * ID of the traffic signal controller in the road network.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A reference (ID) to the connected controller in the road network. If reference is set, a delay is required.
             * 
             * @return value of model property reference
            */
            virtual void SetReference(const std::string reference)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Phases of a TrafficSignalController.
             * 
             * @return value of model property phases
            */
            virtual void SetPhases(std::vector<std::shared_ptr<IPhaseWriter>>& phases)  = 0;

            /**
             * Set a parameter for the attribute  delay
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDelay(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  reference
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToReference(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  delay
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDelay() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  reference
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromReference() const  = 0;

            /**
             * Retrieves whether the attribute delay is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDelayParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute reference is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsReferenceParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * Phases of a TrafficSignalController.
             * 
             * @return a list of writers for model property phases
            */
            virtual std::vector<std::shared_ptr<IPhaseWriter>> GetWriterPhases() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalControllerAction'
         * From OpenSCENARIO class model specification:
         * Sets a specific phase of a traffic signal controller, typically affecting a collection of signals.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalControllerActionWriter : public IOpenScenarioElementWriter, public ITrafficSignalControllerAction
        {
        public:
            virtual ~ITrafficSignalControllerActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Targeted phase of the signal controller. The available phases are defined in type RoadNetwork under the property
             * trafficSignalControllers.
             * 
             * @return value of model property phase
            */
            virtual void SetPhase(const std::string phase)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * ID of the signal controller in a road network.
             * 
             * @return value of model property trafficSignalControllerRef
            */
            virtual void SetTrafficSignalControllerRef(std::shared_ptr<INamedReference<ITrafficSignalController>> trafficSignalControllerRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
             * 
             * @return value of model property phaseRef
            */
            virtual void SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef) = 0;

            /**
             * Set a parameter for the attribute  phase
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPhase(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  trafficSignalControllerRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTrafficSignalControllerRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  phase
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPhase() const  = 0;
            /**
             * Get the parameter for the attribute  trafficSignalControllerRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTrafficSignalControllerRef() const  = 0;

            /**
             * Retrieves whether the attribute phase is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPhaseParameterized()  = 0;
            /**
             * Retrieves whether the attribute trafficSignalControllerRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTrafficSignalControllerRefParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalControllerCondition'
         * From OpenSCENARIO class model specification:
         * Considered true if a given traffic signal controller (which may be defined within OpenSCENARIO or externally) reaches a
         * specific state.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalControllerConditionWriter : public IOpenScenarioElementWriter, public ITrafficSignalControllerCondition
        {
        public:
            virtual ~ITrafficSignalControllerConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the phase of the signal controller to be reached for the condition to become true. The available phases are
             * defined in type RoadNetwork under the property trafficSignalControllers.
             * 
             * @return value of model property phase
            */
            virtual void SetPhase(const std::string phase)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * ID of the referenced signal controller in a road network.
             * 
             * @return value of model property trafficSignalControllerRef
            */
            virtual void SetTrafficSignalControllerRef(std::shared_ptr<INamedReference<ITrafficSignalController>> trafficSignalControllerRef) = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
             * 
             * @return value of model property phaseRef
            */
            virtual void SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef) = 0;

            /**
             * Set a parameter for the attribute  phase
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToPhase(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  trafficSignalControllerRef
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTrafficSignalControllerRef(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  phase
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromPhase() const  = 0;
            /**
             * Get the parameter for the attribute  trafficSignalControllerRef
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTrafficSignalControllerRef() const  = 0;

            /**
             * Retrieves whether the attribute phase is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPhaseParameterized()  = 0;
            /**
             * Retrieves whether the attribute trafficSignalControllerRef is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTrafficSignalControllerRefParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalState'
         * From OpenSCENARIO class model specification:
         * Possible state of traffic signal within a phase. One state per phase.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalStateWriter : public IOpenScenarioElementWriter, public ITrafficSignalState
        {
        public:
            virtual ~ITrafficSignalStateWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * State of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
             * 
             * @return value of model property state
            */
            virtual void SetState(const std::string state)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * ID of the referenced signal in a road network. The signal ID must be listed in TrafficSignal list of the RoadNetwork.
             * 
             * @return value of model property trafficSignalId
            */
            virtual void SetTrafficSignalId(const std::string trafficSignalId)  = 0;

            /**
             * Set a parameter for the attribute  state
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToState(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  trafficSignalId
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTrafficSignalId(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  state
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromState() const  = 0;
            /**
             * Get the parameter for the attribute  trafficSignalId
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTrafficSignalId() const  = 0;

            /**
             * Retrieves whether the attribute state is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStateParameterized()  = 0;
            /**
             * Retrieves whether the attribute trafficSignalId is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTrafficSignalIdParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSignalStateAction'
         * From OpenSCENARIO class model specification:
         * Controls the state of a traffic signal.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSignalStateActionWriter : public IOpenScenarioElementWriter, public ITrafficSignalStateAction
        {
        public:
            virtual ~ITrafficSignalStateActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * ID of a signal in a road network. The signal ID must be listed in the TrafficSignal list of the RoadNetwork.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Targeted state of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
             * 
             * @return value of model property state
            */
            virtual void SetState(const std::string state)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  state
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToState(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  state
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromState() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute state is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsStateParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSinkAction'
         * From OpenSCENARIO class model specification:
         * Defines a sink of traffic at a specific position.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSinkActionWriter : public IOpenScenarioElementWriter, public ITrafficSinkAction
        {
        public:
            virtual ~ITrafficSinkActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines the radius of the traffic sink where vehicles disappear around the specified position. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property radius
            */
            virtual void SetRadius(const double radius)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the rate on which vehicles disappear at the sinks location. Unit: vehicles/s Range: [0..inf[.
             * 
             * @return value of model property rate
            */
            virtual void SetRate(const double rate)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the position of the traffic sink.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the vehicle and controller distribution for the sink.
             * 
             * @return value of model property trafficDefinition
            */
            virtual void SetTrafficDefinition(std::shared_ptr<ITrafficDefinitionWriter> trafficDefinition)  = 0;

            /**
             * Set a parameter for the attribute  radius
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRadius(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rate
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRate(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  radius
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRadius() const  = 0;
            /**
             * Get the parameter for the attribute  rate
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRate() const  = 0;

            /**
             * Retrieves whether the attribute radius is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRadiusParameterized()  = 0;
            /**
             * Retrieves whether the attribute rate is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRateParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Defines the position of the traffic sink.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines the vehicle and controller distribution for the sink.
             * 
             * @return a writer for model property trafficDefinition
            */
            virtual std::shared_ptr<ITrafficDefinitionWriter> GetWriterTrafficDefinition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSourceAction'
         * From OpenSCENARIO class model specification:
         * Defines a source of traffic at a specific position.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrafficSourceActionWriter : public IOpenScenarioElementWriter, public ITrafficSourceAction
        {
        public:
            virtual ~ITrafficSourceActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines the radius of the traffic source where vehicles appear around the specific position. Unit: m. Range: [0..inf[.
             * 
             * @return value of model property radius
            */
            virtual void SetRadius(const double radius)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the rate on which vehicles appear at the source location. Unit: vehicles/s. Range: [0..inf[.
             * 
             * @return value of model property rate
            */
            virtual void SetRate(const double rate)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The optional starting velocity of a scenario object. Unit: m/s; Range: [0..inf[.
             * 
             * @return value of model property velocity
            */
            virtual void SetVelocity(const double velocity)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the position of the traffic source.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Defines the vehicle and controller distribution for the source.
             * 
             * @return value of model property trafficDefinition
            */
            virtual void SetTrafficDefinition(std::shared_ptr<ITrafficDefinitionWriter> trafficDefinition)  = 0;

            /**
             * Set a parameter for the attribute  radius
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRadius(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rate
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRate(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  velocity
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToVelocity(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  radius
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRadius() const  = 0;
            /**
             * Get the parameter for the attribute  rate
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRate() const  = 0;
            /**
             * Get the parameter for the attribute  velocity
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromVelocity() const  = 0;

            /**
             * Retrieves whether the attribute radius is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRadiusParameterized()  = 0;
            /**
             * Retrieves whether the attribute rate is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRateParameterized()  = 0;
            /**
             * Retrieves whether the attribute velocity is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsVelocityParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Defines the position of the traffic source.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Defines the vehicle and controller distribution for the source.
             * 
             * @return a writer for model property trafficDefinition
            */
            virtual std::shared_ptr<ITrafficDefinitionWriter> GetWriterTrafficDefinition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrafficSwarmAction'
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
        class ITrafficSwarmActionWriter : public IOpenScenarioElementWriter, public ITrafficSwarmAction
        {
        public:
            virtual ~ITrafficSwarmActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Radius of the inner circular area around the central entity. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property innerRadius
            */
            virtual void SetInnerRadius(const double innerRadius)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The maximum number of vehicles surrounding the central entity. Depending on the current road situation less than
             * numberOfVehicles might be set up. Range: [0..inf[.
             * 
             * @return value of model property numberOfVehicles
            */
            virtual void SetNumberOfVehicles(const uint32_t numberOfVehicles)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Offset in longitudinal direction related to the x-axis of the central entity. Unit: m;.
             * 
             * @return value of model property offset
            */
            virtual void SetOffset(const double offset)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMajorAxis defines the
             * half length of the major axis of this ellipsis. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property semiMajorAxis
            */
            virtual void SetSemiMajorAxis(const double semiMajorAxis)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMinorAxis defines the
             * half length of the minor axis of this ellipsis. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property semiMinorAxis
            */
            virtual void SetSemiMinorAxis(const double semiMinorAxis)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The optional starting velocity of a created entity. Unit: m/s; Range: [0..inf[.
             * 
             * @return value of model property velocity
            */
            virtual void SetVelocity(const double velocity)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The entity that represents the center of a swarm.
             * 
             * @return value of model property centralObject
            */
            virtual void SetCentralObject(std::shared_ptr<ICentralSwarmObjectWriter> centralObject)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Specifies properties of autonomous traffic with respect to vehicle and driver distributions.
             * 
             * @return value of model property trafficDefinition
            */
            virtual void SetTrafficDefinition(std::shared_ptr<ITrafficDefinitionWriter> trafficDefinition)  = 0;

            /**
             * Set a parameter for the attribute  innerRadius
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToInnerRadius(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  numberOfVehicles
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToNumberOfVehicles(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  offset
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToOffset(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  semiMajorAxis
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToSemiMajorAxis(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  semiMinorAxis
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToSemiMinorAxis(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  velocity
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToVelocity(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  innerRadius
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromInnerRadius() const  = 0;
            /**
             * Get the parameter for the attribute  numberOfVehicles
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromNumberOfVehicles() const  = 0;
            /**
             * Get the parameter for the attribute  offset
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromOffset() const  = 0;
            /**
             * Get the parameter for the attribute  semiMajorAxis
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromSemiMajorAxis() const  = 0;
            /**
             * Get the parameter for the attribute  semiMinorAxis
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromSemiMinorAxis() const  = 0;
            /**
             * Get the parameter for the attribute  velocity
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromVelocity() const  = 0;

            /**
             * Retrieves whether the attribute innerRadius is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsInnerRadiusParameterized()  = 0;
            /**
             * Retrieves whether the attribute numberOfVehicles is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNumberOfVehiclesParameterized()  = 0;
            /**
             * Retrieves whether the attribute offset is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsOffsetParameterized()  = 0;
            /**
             * Retrieves whether the attribute semiMajorAxis is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSemiMajorAxisParameterized()  = 0;
            /**
             * Retrieves whether the attribute semiMinorAxis is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSemiMinorAxisParameterized()  = 0;
            /**
             * Retrieves whether the attribute velocity is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsVelocityParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The entity that represents the center of a swarm.
             * 
             * @return a writer for model property centralObject
            */
            virtual std::shared_ptr<ICentralSwarmObjectWriter> GetWriterCentralObject() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Specifies properties of autonomous traffic with respect to vehicle and driver distributions.
             * 
             * @return a writer for model property trafficDefinition
            */
            virtual std::shared_ptr<ITrafficDefinitionWriter> GetWriterTrafficDefinition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Trajectory'
         * From OpenSCENARIO class model specification:
         * Definition of a trajectory type in terms of shape and optional time domain.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrajectoryWriter : public IOpenScenarioElementWriter, public ITrajectory, public ICatalogElementWriter
        {
        public:
            virtual ~ITrajectoryWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True if trajectory is closed.
             * 
             * @return value of model property closed
            */
            virtual void SetClosed(const bool closed)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Name of the trajectory type. Required if used in catalog.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The shape of a trajectory (Polyline, Clothoid or Nurbs)
             * 
             * @return value of model property shape
            */
            virtual void SetShape(std::shared_ptr<IShapeWriter> shape)  = 0;

            /**
             * Set a parameter for the attribute  closed
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToClosed(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  closed
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromClosed() const  = 0;
            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;

            /**
             * Retrieves whether the attribute closed is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsClosedParameterized()  = 0;
            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The shape of a trajectory (Polyline, Clothoid or Nurbs)
             * 
             * @return a writer for model property shape
            */
            virtual std::shared_ptr<IShapeWriter> GetWriterShape() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrajectoryCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up trajectory catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrajectoryCatalogLocationWriter : public IOpenScenarioElementWriter, public ITrajectoryCatalogLocation
        {
        public:
            virtual ~ITrajectoryCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TrajectoryFollowingMode'
         * From OpenSCENARIO class model specification:
         * Used to define a steering trajectory.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITrajectoryFollowingModeWriter : public IOpenScenarioElementWriter, public ITrajectoryFollowingMode
        {
        public:
            virtual ~ITrajectoryFollowingModeWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Defines (lateral) trajectory following behavior of the actor: Mode 'position' forces the actor to strictly adhere to the
             * trajectory. In contrast, mode 'follow' hands over control to the actor. In this mode, the actor tries to follow the
             * trajectory as best as he can. This may be restricted by dynamics constraints and/or control loop implementation.
             * 
             * @return value of model property followingMode
            */
            virtual void SetFollowingMode(const FollowingMode followingMode)  = 0;

            /**
             * Set a parameter for the attribute  followingMode
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToFollowingMode(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  followingMode
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromFollowingMode() const  = 0;

            /**
             * Retrieves whether the attribute followingMode is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsFollowingModeParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TransitionDynamics'
         * From OpenSCENARIO class model specification:
         * Specifies the dynamics of a value transition and defines how the value changes over time or distance. Different shapes
         * can be used for the transition. Step is an immediate transition, i.e. a jump from the current current value to the
         * target value. In this case value for time or distance must be 0. Linear will result in a linear transition between the
         * start and end value. A smooth transition is only given with cubic and sinusoidal shape.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITransitionDynamicsWriter : public IOpenScenarioElementWriter, public ITransitionDynamics
        {
        public:
            virtual ~ITransitionDynamicsWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The semantics of the value: 'rate', 'time' or 'distance'.
             * 
             * @return value of model property dynamicsDimension
            */
            virtual void SetDynamicsDimension(const DynamicsDimension dynamicsDimension)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The shape of the transition function f(x) between current and target value.
             * 
             * @return value of model property dynamicsShape
            */
            virtual void SetDynamicsShape(const DynamicsShape dynamicsShape)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The value for a predefined rate (Unit: delta/s), time (Unit: s) or distance (Unit: m) to acquire the target value.
             * Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  dynamicsDimension
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDynamicsDimension(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  dynamicsShape
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToDynamicsShape(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  dynamicsDimension
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDynamicsDimension() const  = 0;
            /**
             * Get the parameter for the attribute  dynamicsShape
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromDynamicsShape() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute dynamicsDimension is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDynamicsDimensionParameterized()  = 0;
            /**
             * Retrieves whether the attribute dynamicsShape is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsDynamicsShapeParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TraveledDistanceCondition'
         * From OpenSCENARIO class model specification:
         * Logical expression in condition becomes true after the triggering entity/entities have traveled the given distance.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITraveledDistanceConditionWriter : public IOpenScenarioElementWriter, public ITraveledDistanceCondition
        {
        public:
            virtual ~ITraveledDistanceConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Amount of traveled distance. Unit: m; Range: [0..inf[.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const double value)  = 0;

            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Trigger'
         * From OpenSCENARIO class model specification:
         * A trigger is then defined as an association of condition groups. A trigger evaluates to true if at least one of the
         * associated condition groups evaluates to true, otherwise it evaluates to false (OR operation).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITriggerWriter : public IOpenScenarioElementWriter, public ITrigger
        {
        public:
            virtual ~ITriggerWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * List of condition groups as a container of conditions.
             * 
             * @return value of model property conditionGroups
            */
            virtual void SetConditionGroups(std::vector<std::shared_ptr<IConditionGroupWriter>>& conditionGroups)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * List of condition groups as a container of conditions.
             * 
             * @return a list of writers for model property conditionGroups
            */
            virtual std::vector<std::shared_ptr<IConditionGroupWriter>> GetWriterConditionGroups() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'TriggeringEntities'
         * From OpenSCENARIO class model specification:
         * A collection of entities evaluated for an EntityCondition to be triggered. It is optional whether the condition must be
         * fulfilled any or all of the objects.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ITriggeringEntitiesWriter : public IOpenScenarioElementWriter, public ITriggeringEntities
        {
        public:
            virtual ~ITriggeringEntitiesWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All or any.
             * 
             * @return value of model property triggeringEntitiesRule
            */
            virtual void SetTriggeringEntitiesRule(const TriggeringEntitiesRule triggeringEntitiesRule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * List of referenced entities that trigger the condition.
             * 
             * @return value of model property entityRefs
            */
            virtual void SetEntityRefs(std::vector<std::shared_ptr<IEntityRefWriter>>& entityRefs)  = 0;

            /**
             * Set a parameter for the attribute  triggeringEntitiesRule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTriggeringEntitiesRule(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  triggeringEntitiesRule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTriggeringEntitiesRule() const  = 0;

            /**
             * Retrieves whether the attribute triggeringEntitiesRule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTriggeringEntitiesRuleParameterized()  = 0;

            // children

            /**
             * From OpenSCENARIO class model specification:
             * List of referenced entities that trigger the condition.
             * 
             * @return a list of writers for model property entityRefs
            */
            virtual std::vector<std::shared_ptr<IEntityRefWriter>> GetWriterEntityRefs() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'UserDefinedAction'
         * From OpenSCENARIO class model specification:
         * Used to either issue a command to the simulation environment or start an external script. Allows the user to activate
         * custom actions in their simulation tool.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUserDefinedActionWriter : public IOpenScenarioElementWriter, public IUserDefinedAction
        {
        public:
            virtual ~IUserDefinedActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The available commands are subject of a contract between simulation environment provider and scenario author.
             * 
             * @return value of model property customCommandAction
            */
            virtual void SetCustomCommandAction(std::shared_ptr<ICustomCommandActionWriter> customCommandAction)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * The available commands are subject of a contract between simulation environment provider and scenario author.
             * 
             * @return a writer for model property customCommandAction
            */
            virtual std::shared_ptr<ICustomCommandActionWriter> GetWriterCustomCommandAction() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'UserDefinedValueCondition'
         * From OpenSCENARIO class model specification:
         * This condition acts as a wrapper for external custom conditions which are implemented in the user software. This
         * condition is considered true if the given value verifies the specified relation rule (bigger than, smaller than, or
         * equal to) relatively to the provided reference.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IUserDefinedValueConditionWriter : public IOpenScenarioElementWriter, public IUserDefinedValueCondition
        {
        public:
            virtual ~IUserDefinedValueConditionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the external value.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The operator (less, greater, equal).
             * 
             * @return value of model property rule
            */
            virtual void SetRule(const Rule rule)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Reference value the external value is compared to.
             * 
             * @return value of model property value
            */
            virtual void SetValue(const std::string value)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  rule
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRule(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  value
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToValue(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  rule
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRule() const  = 0;
            /**
             * Get the parameter for the attribute  value
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromValue() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute rule is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRuleParameterized()  = 0;
            /**
             * Retrieves whether the attribute value is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsValueParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Vehicle'
         * From OpenSCENARIO class model specification:
         * Definition of a vehicle type in a scenario or in a catalog.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleWriter : public IOpenScenarioElementWriter, public IVehicle, public ICatalogElementWriter
        {
        public:
            virtual ~IVehicleWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Name of the vehicle type.
             * 
             * @return value of model property name
            */
            virtual void SetName(const std::string name)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Category of the vehicle (bicycle, train,...).
             * 
             * @return value of model property vehicleCategory
            */
            virtual void SetVehicleCategory(const VehicleCategory vehicleCategory)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return value of model property parameterDeclarations
            */
            virtual void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclarationWriter>>& parameterDeclarations)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The three dimensional bounding box that encloses the vehicle.
             * 
             * @return value of model property boundingBox
            */
            virtual void SetBoundingBox(std::shared_ptr<IBoundingBoxWriter> boundingBox)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Performance properties of the vehicle.
             * 
             * @return value of model property performance
            */
            virtual void SetPerformance(std::shared_ptr<IPerformanceWriter> performance)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * A set of axles (front, rear, additional) and their geometric locations.
             * 
             * @return value of model property axles
            */
            virtual void SetAxles(std::shared_ptr<IAxlesWriter> axles)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Additional properties as name value pairs.
             * 
             * @return value of model property properties
            */
            virtual void SetProperties(std::shared_ptr<IPropertiesWriter> properties)  = 0;

            /**
             * Set a parameter for the attribute  name
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToName(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  vehicleCategory
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToVehicleCategory(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  name
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromName() const  = 0;
            /**
             * Get the parameter for the attribute  vehicleCategory
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromVehicleCategory() const  = 0;

            /**
             * Retrieves whether the attribute name is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsNameParameterized()  = 0;
            /**
             * Retrieves whether the attribute vehicleCategory is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsVehicleCategoryParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The three dimensional bounding box that encloses the vehicle.
             * 
             * @return a writer for model property boundingBox
            */
            virtual std::shared_ptr<IBoundingBoxWriter> GetWriterBoundingBox() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Performance properties of the vehicle.
             * 
             * @return a writer for model property performance
            */
            virtual std::shared_ptr<IPerformanceWriter> GetWriterPerformance() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * A set of axles (front, rear, additional) and their geometric locations.
             * 
             * @return a writer for model property axles
            */
            virtual std::shared_ptr<IAxlesWriter> GetWriterAxles() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Additional properties as name value pairs.
             * 
             * @return a writer for model property properties
            */
            virtual std::shared_ptr<IPropertiesWriter> GetWriterProperties() const  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of additional parameters.
             * 
             * @return a list of writers for model property parameterDeclarations
            */
            virtual std::vector<std::shared_ptr<IParameterDeclarationWriter>> GetWriterParameterDeclarations() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'VehicleCatalogLocation'
         * From OpenSCENARIO class model specification:
         * The directory where to look up vehicle catalogs.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleCatalogLocationWriter : public IOpenScenarioElementWriter, public IVehicleCatalogLocation
        {
        public:
            virtual ~IVehicleCatalogLocationWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return value of model property directory
            */
            virtual void SetDirectory(std::shared_ptr<IDirectoryWriter> directory)  = 0;




            // children
            /**
             * From OpenSCENARIO class model specification:
             * All catalogs files in this directory must be evaluated.
             * 
             * @return a writer for model property directory
            */
            virtual std::shared_ptr<IDirectoryWriter> GetWriterDirectory() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'VehicleCategoryDistribution'
         * From OpenSCENARIO class model specification:
         * A distribution for vehicle in traffic. Category of vehicles and their weight (measure of relative likelihood, check
         * VehicleCategoryDistributionEntry).
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleCategoryDistributionWriter : public IOpenScenarioElementWriter, public IVehicleCategoryDistribution
        {
        public:
            virtual ~IVehicleCategoryDistributionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * List of elements that pair vehicle categories and their weight within the distribution.
             * 
             * @return value of model property vehicleCategoryDistributionEntries
            */
            virtual void SetVehicleCategoryDistributionEntries(std::vector<std::shared_ptr<IVehicleCategoryDistributionEntryWriter>>& vehicleCategoryDistributionEntries)  = 0;




            // children

            /**
             * From OpenSCENARIO class model specification:
             * List of elements that pair vehicle categories and their weight within the distribution.
             * 
             * @return a list of writers for model property vehicleCategoryDistributionEntries
            */
            virtual std::vector<std::shared_ptr<IVehicleCategoryDistributionEntryWriter>> GetWriterVehicleCategoryDistributionEntries() const = 0;
        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'VehicleCategoryDistributionEntry'
         * From OpenSCENARIO class model specification:
         * Represents the weight of a given vehicle category within a traffic definition. The relative probability for the
         * occurence of this category is defined by the weight devided by the sum of all weights of this distribution.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVehicleCategoryDistributionEntryWriter : public IOpenScenarioElementWriter, public IVehicleCategoryDistributionEntry
        {
        public:
            virtual ~IVehicleCategoryDistributionEntryWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The category of the vehicles that appear in traffic.
             * 
             * @return value of model property category
            */
            virtual void SetCategory(const VehicleCategory category)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The weight of a vehicle category within a traffic distribution. Range: [0..inf[.
             * 
             * @return value of model property weight
            */
            virtual void SetWeight(const double weight)  = 0;

            /**
             * Set a parameter for the attribute  category
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToCategory(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  weight
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToWeight(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  category
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromCategory() const  = 0;
            /**
             * Get the parameter for the attribute  weight
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromWeight() const  = 0;

            /**
             * Retrieves whether the attribute category is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsCategoryParameterized()  = 0;
            /**
             * Retrieves whether the attribute weight is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsWeightParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Vertex'
         * From OpenSCENARIO class model specification:
         * Vertex of a polygonal chain (polyline) trajectory specification.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVertexWriter : public IOpenScenarioElementWriter, public IVertex
        {
        public:
            virtual ~IVertexWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Optional time specification of the vertex.
             * 
             * @return value of model property time
            */
            virtual void SetTime(const double time)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Position of the vertex.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * Set a parameter for the attribute  time
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTime(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  time
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTime() const  = 0;

            /**
             * Retrieves whether the attribute time is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTimeParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Position of the vertex.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'VisibilityAction'
         * From OpenSCENARIO class model specification:
         * Action that toggles (on or off) an entity's visibility attributes, with respect to sensors, other traffic or the
         * graphics engine.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IVisibilityActionWriter : public IOpenScenarioElementWriter, public IVisibilityAction
        {
        public:
            virtual ~IVisibilityActionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * True: actor is visible in image generator(s). False: actor is not visible in image generator(s).
             * 
             * @return value of model property graphics
            */
            virtual void SetGraphics(const bool graphics)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: actor is visible in sensor(s). False: actor is not visible in sensor(s).
             * 
             * @return value of model property sensors
            */
            virtual void SetSensors(const bool sensors)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * True: actor is visible for other traffic participants, particularly for autonomous driver models. False: actor is not
             * visible for other traffic participants.
             * 
             * @return value of model property traffic
            */
            virtual void SetTraffic(const bool traffic)  = 0;

            /**
             * Set a parameter for the attribute  graphics
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToGraphics(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  sensors
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToSensors(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  traffic
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToTraffic(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  graphics
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromGraphics() const  = 0;
            /**
             * Get the parameter for the attribute  sensors
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromSensors() const  = 0;
            /**
             * Get the parameter for the attribute  traffic
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromTraffic() const  = 0;

            /**
             * Retrieves whether the attribute graphics is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsGraphicsParameterized()  = 0;
            /**
             * Retrieves whether the attribute sensors is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsSensorsParameterized()  = 0;
            /**
             * Retrieves whether the attribute traffic is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsTrafficParameterized()  = 0;

            // children

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Waypoint'
         * From OpenSCENARIO class model specification:
         * Reference position used to form a route.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IWaypointWriter : public IOpenScenarioElementWriter, public IWaypoint
        {
        public:
            virtual ~IWaypointWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The corresponding routing strategy (fastest, shortest, random, leastIntersections).
             * 
             * @return value of model property routeStrategy
            */
            virtual void SetRouteStrategy(const RouteStrategy routeStrategy)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The reference position to form the route.
             * 
             * @return value of model property position
            */
            virtual void SetPosition(std::shared_ptr<IPositionWriter> position)  = 0;

            /**
             * Set a parameter for the attribute  routeStrategy
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToRouteStrategy(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  routeStrategy
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromRouteStrategy() const  = 0;

            /**
             * Retrieves whether the attribute routeStrategy is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRouteStrategyParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * The reference position to form the route.
             * 
             * @return a writer for model property position
            */
            virtual std::shared_ptr<IPositionWriter> GetWriterPosition() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'Weather'
         * From OpenSCENARIO class model specification:
         * Defines the weather conditions in terms of light, fog, precipitation and cloud states.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IWeatherWriter : public IOpenScenarioElementWriter, public IWeather
        {
        public:
            virtual ~IWeatherWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the cloud state, i.e. cloud state and sky visualization settings.
             * 
             * @return value of model property cloudState
            */
            virtual void SetCloudState(const CloudState cloudState)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of the sun, i.e. position and intensity.
             * 
             * @return value of model property sun
            */
            virtual void SetSun(std::shared_ptr<ISunWriter> sun)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of fog, i.e. visual range and bounding box.
             * 
             * @return value of model property fog
            */
            virtual void SetFog(std::shared_ptr<IFogWriter> fog)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * Definition of precipitation, i.e. type and intensity.
             * 
             * @return value of model property precipitation
            */
            virtual void SetPrecipitation(std::shared_ptr<IPrecipitationWriter> precipitation)  = 0;

            /**
             * Set a parameter for the attribute  cloudState
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToCloudState(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  cloudState
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromCloudState() const  = 0;

            /**
             * Retrieves whether the attribute cloudState is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsCloudStateParameterized()  = 0;

            // children
            /**
             * From OpenSCENARIO class model specification:
             * Definition of the sun, i.e. position and intensity.
             * 
             * @return a writer for model property sun
            */
            virtual std::shared_ptr<ISunWriter> GetWriterSun() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Definition of fog, i.e. visual range and bounding box.
             * 
             * @return a writer for model property fog
            */
            virtual std::shared_ptr<IFogWriter> GetWriterFog() const  = 0;
            /**
             * From OpenSCENARIO class model specification:
             * Definition of precipitation, i.e. type and intensity.
             * 
             * @return a writer for model property precipitation
            */
            virtual std::shared_ptr<IPrecipitationWriter> GetWriterPrecipitation() const  = 0;

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * A Writer for the type 'WorldPosition'
         * From OpenSCENARIO class model specification:
         * A position which is fixed in the inertial reference frame of the simulation environment, the so-called world coordinate
         * system.
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class IWorldPositionWriter : public IOpenScenarioElementWriter, public IWorldPosition
        {
        public:
            virtual ~IWorldPositionWriter() = default;

        // Setters for all attributes

            /**
             * From OpenSCENARIO class model specification:
             * The heading angle of the object, defining a mathematically positive rotation about the z-axis (see ISO 8855:2011).
             * 
             * @return value of model property h
            */
            virtual void SetH(const double h)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The pitch angle of the object, defining a mathematically positive rotation about the y-axis (see ISO 8855:2011).
             * 
             * @return value of model property p
            */
            virtual void SetP(const double p)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The roll angle of the object, defining a mathematically positive rotation about the x-axis (see ISO 8855:2011).
             * 
             * @return value of model property r
            */
            virtual void SetR(const double r)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The x coordinate value.
             * 
             * @return value of model property x
            */
            virtual void SetX(const double x)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The y coordinate value.
             * 
             * @return value of model property y
            */
            virtual void SetY(const double y)  = 0;

            /**
             * From OpenSCENARIO class model specification:
             * The z coordinate value.
             * 
             * @return value of model property z
            */
            virtual void SetZ(const double z)  = 0;

            /**
             * Set a parameter for the attribute  h
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToH(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  p
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToP(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  r
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToR(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  x
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToX(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  y
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToY(std::string& parameterName)  = 0;
            /**
             * Set a parameter for the attribute  z
             * 
             * @param parameterName the name of the parameter (without $)
            */
            virtual void WriteParameterToZ(std::string& parameterName)  = 0;

            /**
             * Get the parameter for the attribute  h
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromH() const  = 0;
            /**
             * Get the parameter for the attribute  p
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromP() const  = 0;
            /**
             * Get the parameter for the attribute  r
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromR() const  = 0;
            /**
             * Get the parameter for the attribute  x
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromX() const  = 0;
            /**
             * Get the parameter for the attribute  y
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromY() const  = 0;
            /**
             * Get the parameter for the attribute  z
             * 
             * @return the name of the parameter (without $). Null if not parameter set or if attribute is empty.
            */
            virtual std::string GetParameterFromZ() const  = 0;

            /**
             * Retrieves whether the attribute h is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsHParameterized()  = 0;
            /**
             * Retrieves whether the attribute p is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsPParameterized()  = 0;
            /**
             * Retrieves whether the attribute r is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsRParameterized()  = 0;
            /**
             * Retrieves whether the attribute x is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsXParameterized()  = 0;
            /**
             * Retrieves whether the attribute y is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsYParameterized()  = 0;
            /**
             * Retrieves whether the attribute z is parametrized.
             * 
             * @return true if ${property.name.toMemberName()} is paramterized.
            */
            virtual bool IsZParameterized()  = 0;

            // children

        };

    }
}
