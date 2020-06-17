#pragma once

#include "ApiClassInterfaces.h"
#include "BaseImpl.h"
#include "IParserMessageLogger.h"
#include "ParserHelper.h"
#include "ParameterValue.h"
#include "NamedReferenceProxy.h"
#include "INamedReference.h"
// helper.getTypeImportCpp(element,packageName).each{importedType->%>import =importedType%>


namespace RAC_OPENSCENARIO
{
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAbsoluteSpeed. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAbsoluteSpeed)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteSpeedImpl: public BaseImpl, public IAbsoluteSpeed
    {
    private:
        double _value {};

    public:
        AbsoluteSpeedImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Absolute speed. Unit: m/s. Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AbsoluteSpeedImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAbsoluteTargetLane. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAbsoluteTargetLane)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteTargetLaneImpl: public BaseImpl, public IAbsoluteTargetLane
    {
    private:
        std::string _value {};

    public:
        AbsoluteTargetLaneImpl();

        std::string GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Number (ID) of the target lane the entity will change to.]
	 * 
	*/
        void SetValue (std::string& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AbsoluteTargetLaneImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAbsoluteTargetLaneOffset. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAbsoluteTargetLaneOffset)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteTargetLaneOffsetImpl: public BaseImpl, public IAbsoluteTargetLaneOffset
    {
    private:
        double _value {};

    public:
        AbsoluteTargetLaneOffsetImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Signed number in meters the vehicle should respect as an 
	 * offset from the center of the current lane.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AbsoluteTargetLaneOffsetImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAbsoluteTargetSpeed. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAbsoluteTargetSpeed)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AbsoluteTargetSpeedImpl: public BaseImpl, public IAbsoluteTargetSpeed
    {
    private:
        double _value {};

    public:
        AbsoluteTargetSpeedImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Target speed in m/s the vehicle should change to.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AbsoluteTargetSpeedImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAccelerationCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAccelerationCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AccelerationConditionImpl: public BaseImpl, public IAccelerationCondition
    {
    private:
        double _value {};
        Rule _rule {};

    public:
        AccelerationConditionImpl();

        double GetValue() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Acceleration value. Unit: m/s^2.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AccelerationConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAcquirePositionAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAcquirePositionAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AcquirePositionActionImpl: public BaseImpl, public IAcquirePositionAction
    {
    private:
        std::shared_ptr<IPosition> _position {};

    public:
        AcquirePositionActionImpl();

        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [A position to acquire.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AcquirePositionActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAct. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAct)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActImpl: public BaseImpl, public IAct
    {
    private:
        std::string _name {};
        std::vector<std::shared_ptr<IManeuverGroup>> _maneuverGroups {};
        std::shared_ptr<ITrigger> _startTrigger {};
        std::shared_ptr<ITrigger> _stopTrigger {};

    public:
        ActImpl();

        std::string GetName() override;
        std::vector<std::shared_ptr<IManeuverGroup>> GetManeuverGroups() override;
        std::shared_ptr<ITrigger> GetStartTrigger() override;
        std::shared_ptr<ITrigger> GetStopTrigger() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of this act.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property maneuverGroups
	 * @param maneuverGroups from OpenSCENARIO class model specification: [A list of maneuver groups representing the act.]
	 * 
	*/
        void SetManeuverGroups(std::vector<std::shared_ptr<IManeuverGroup>>& maneuverGroups);
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Defines a trigger to that starts the act.]
	 * 
	*/
        void SetStartTrigger (std::shared_ptr<ITrigger>& startTrigger );
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Defines a trigger that stops the act.]
	 * 
	*/
        void SetStopTrigger (std::shared_ptr<ITrigger>& stopTrigger );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ActImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActionImpl: public BaseImpl, public IAction
    {
    private:
        std::string _name {};
        std::shared_ptr<IGlobalAction> _globalAction {};
        std::shared_ptr<IUserDefinedAction> _userDefinedAction {};
        std::shared_ptr<IPrivateAction> _privateAction {};

    public:
        ActionImpl();

        std::string GetName() override;
        std::shared_ptr<IGlobalAction> GetGlobalAction() override;
        std::shared_ptr<IUserDefinedAction> GetUserDefinedAction() override;
        std::shared_ptr<IPrivateAction> GetPrivateAction() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of this action.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property globalAction
	 * @param globalAction from OpenSCENARIO class model specification: [The GlobalAction to be executed when the enclosing 
	 * Action is startedis started.]
	 * 
	*/
        void SetGlobalAction (std::shared_ptr<IGlobalAction>& globalAction );
	/**
	 * Sets the value of model property userDefinedAction
	 * @param userDefinedAction from OpenSCENARIO class model specification: [The UserDefinedAction to be executed when the 
	 * enclosing Action is started.]
	 * 
	*/
        void SetUserDefinedAction (std::shared_ptr<IUserDefinedAction>& userDefinedAction );
	/**
	 * Sets the value of model property privateAction
	 * @param privateAction from OpenSCENARIO class model specification: [The PrivateAction to be executed when the enclosing 
	 * Action is started.]
	 * 
	*/
        void SetPrivateAction (std::shared_ptr<IPrivateAction>& privateAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IActivateControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IActivateControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActivateControllerActionImpl: public BaseImpl, public IActivateControllerAction
    {
    private:
        bool _lateral {};
        bool _longitudinal {};

    public:
        ActivateControllerActionImpl();

        bool GetLateral() override;
        bool GetLongitudinal() override;

	/**
	 * Sets the value of model property lateral
	 * @param lateral from OpenSCENARIO class model specification: [In lateral domain: Activate or deactivate controller 
	 * defined (e.g. automated, autonomous) behavior.]
	 * 
	*/
        void SetLateral (bool& lateral );
	/**
	 * Sets the value of model property longitudinal
	 * @param longitudinal from OpenSCENARIO class model specification: [In longitudinal domain: Activate or deactivate 
	 * autonomous behavior.]
	 * 
	*/
        void SetLongitudinal (bool& longitudinal );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ActivateControllerActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IActors. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IActors)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ActorsImpl: public BaseImpl, public IActors
    {
    private:
        bool _selectTriggeringEntities {};
        std::vector<std::shared_ptr<IEntityRef>> _entityRefs {};

    public:
        ActorsImpl();

        bool GetSelectTriggeringEntities() override;
        std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() override;

	/**
	 * Sets the value of model property selectTriggeringEntities
	 * @param selectTriggeringEntities from OpenSCENARIO class model specification: [Indicates whether the triggering entities 
	 * are considered actors.]
	 * 
	*/
        void SetSelectTriggeringEntities (bool& selectTriggeringEntities );
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [A list of entities this actor is referencing.]
	 * 
	*/
        void SetEntityRefs(std::vector<std::shared_ptr<IEntityRef>>& entityRefs);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ActorsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAddEntityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAddEntityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AddEntityActionImpl: public BaseImpl, public IAddEntityAction
    {
    private:
        std::shared_ptr<IPosition> _position {};

    public:
        AddEntityActionImpl();

        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Adds an entity at the specified position.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AddEntityActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAssignControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAssignControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AssignControllerActionImpl: public BaseImpl, public IAssignControllerAction
    {
    private:
        std::shared_ptr<IController> _controller {};
        std::shared_ptr<ICatalogReference> _catalogReference {};

    public:
        AssignControllerActionImpl();

        std::shared_ptr<IController> GetController() override;
        std::shared_ptr<ICatalogReference> GetCatalogReference() override;

	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [Assigns a controller to a given entity.]
	 * 
	*/
        void SetController (std::shared_ptr<IController>& controller );
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Uses a CatalogReference to assign a controller to 
	 * a given entity. CatalogReference must point to a Controller type.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AssignControllerActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAssignRouteAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAssignRouteAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AssignRouteActionImpl: public BaseImpl, public IAssignRouteAction
    {
    private:
        std::shared_ptr<IRoute> _route {};
        std::shared_ptr<ICatalogReference> _catalogReference {};

    public:
        AssignRouteActionImpl();

        std::shared_ptr<IRoute> GetRoute() override;
        std::shared_ptr<ICatalogReference> GetCatalogReference() override;

	/**
	 * Sets the value of model property route
	 * @param route from OpenSCENARIO class model specification: [The route definition.]
	 * 
	*/
        void SetRoute (std::shared_ptr<IRoute>& route );
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A reference to the route definition in a catalog. 
	 * The reference must point to a route.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AssignRouteActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAxle. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAxle)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AxleImpl: public BaseImpl, public IAxle
    {
    private:
        double _maxSteering {};
        double _wheelDiameter {};
        double _trackWidth {};
        double _positionX {};
        double _positionZ {};

    public:
        AxleImpl();

        double GetMaxSteering() override;
        double GetWheelDiameter() override;
        double GetTrackWidth() override;
        double GetPositionX() override;
        double GetPositionZ() override;

	/**
	 * Sets the value of model property maxSteering
	 * @param maxSteering from OpenSCENARIO class model specification: [Maximum steering angle which can be performed by the 
	 * wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.]
	 * 
	*/
        void SetMaxSteering (double& maxSteering );
	/**
	 * Sets the value of model property wheelDiameter
	 * @param wheelDiameter from OpenSCENARIO class model specification: [Diameter of the wheels on this axle. Unit: m; Range: 
	 * ]0..inf[.]
	 * 
	*/
        void SetWheelDiameter (double& wheelDiameter );
	/**
	 * Sets the value of model property trackWidth
	 * @param trackWidth from OpenSCENARIO class model specification: [Distance of the wheels center lines at zero steering. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetTrackWidth (double& trackWidth );
	/**
	 * Sets the value of model property positionX
	 * @param positionX from OpenSCENARIO class model specification: [Longitudinal position of the axle with respect to the 
	 * vehicles reference point. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetPositionX (double& positionX );
	/**
	 * Sets the value of model property positionZ
	 * @param positionZ from OpenSCENARIO class model specification: [Z-position of the axle with respect to the vehicles 
	 * reference point. Usually this is half of wheel diameter. Unit:m; , Range:[0..inf[.]
	 * 
	*/
        void SetPositionZ (double& positionZ );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AxleImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAxles. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAxles)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class AxlesImpl: public BaseImpl, public IAxles
    {
    private:
        std::shared_ptr<IAxle> _frontAxle {};
        std::shared_ptr<IAxle> _rearAxle {};
        std::vector<std::shared_ptr<IAxle>> _additionalAxles {};

    public:
        AxlesImpl();

        std::shared_ptr<IAxle> GetFrontAxle() override;
        std::shared_ptr<IAxle> GetRearAxle() override;
        std::vector<std::shared_ptr<IAxle>> GetAdditionalAxles() override;

	/**
	 * Sets the value of model property frontAxle
	 * @param frontAxle from OpenSCENARIO class model specification: [Front axle.]
	 * 
	*/
        void SetFrontAxle (std::shared_ptr<IAxle>& frontAxle );
	/**
	 * Sets the value of model property rearAxle
	 * @param rearAxle from OpenSCENARIO class model specification: [Rear axle.]
	 * 
	*/
        void SetRearAxle (std::shared_ptr<IAxle>& rearAxle );
	/**
	 * Sets the value of model property additionalAxles
	 * @param additionalAxles from OpenSCENARIO class model specification: [A list of optional additional axles.]
	 * 
	*/
        void SetAdditionalAxles(std::vector<std::shared_ptr<IAxle>>& additionalAxles);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        AxlesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IBoundingBox. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IBoundingBox)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class BoundingBoxImpl: public BaseImpl, public IBoundingBox
    {
    private:
        std::shared_ptr<ICenter> _center {};
        std::shared_ptr<IDimensions> _dimensions {};

    public:
        BoundingBoxImpl();

        std::shared_ptr<ICenter> GetCenter() override;
        std::shared_ptr<IDimensions> GetDimensions() override;

	/**
	 * Sets the value of model property center
	 * @param center from OpenSCENARIO class model specification: [Represents the geometrical center of the bounding box 
	 * expressed in coordinates that refer to the coordinate system of , the entity (e.g. the vehicle coordinate system).]
	 * 
	*/
        void SetCenter (std::shared_ptr<ICenter>& center );
	/**
	 * Sets the value of model property dimensions
	 * @param dimensions from OpenSCENARIO class model specification: [Width, length and height of the bounding box.]
	 * 
	*/
        void SetDimensions (std::shared_ptr<IDimensions>& dimensions );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        BoundingBoxImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IByEntityCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IByEntityCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByEntityConditionImpl: public BaseImpl, public IByEntityCondition
    {
    private:
        std::shared_ptr<ITriggeringEntities> _triggeringEntities {};
        std::shared_ptr<IEntityCondition> _entityCondition {};

    public:
        ByEntityConditionImpl();

        std::shared_ptr<ITriggeringEntities> GetTriggeringEntities() override;
        std::shared_ptr<IEntityCondition> GetEntityCondition() override;

	/**
	 * Sets the value of model property triggeringEntities
	 * @param triggeringEntities from OpenSCENARIO class model specification: [A list of entities triggering this condition.]
	 * 
	*/
        void SetTriggeringEntities (std::shared_ptr<ITriggeringEntities>& triggeringEntities );
	/**
	 * Sets the value of model property entityCondition
	 * @param entityCondition from OpenSCENARIO class model specification: [The condition which is related to the triggering 
	 * entities.]
	 * 
	*/
        void SetEntityCondition (std::shared_ptr<IEntityCondition>& entityCondition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ByEntityConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IByObjectType. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IByObjectType)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByObjectTypeImpl: public BaseImpl, public IByObjectType
    {
    private:
        ObjectType _type {};

    public:
        ByObjectTypeImpl();

        ObjectType GetType() override;

	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Defines the type.]
	 * 
	*/
        void SetType (ObjectType& type );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ByObjectTypeImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IByType. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IByType)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByTypeImpl: public BaseImpl, public IByType
    {
    private:
        ObjectType _objectType {};

    public:
        ByTypeImpl();

        ObjectType GetObjectType() override;

	/**
	 * Sets the value of model property objectType
	 * @param objectType from OpenSCENARIO class model specification: [If a scenario object's entity object is of this type, it
	 * is part of the entity selection.]
	 * 
	*/
        void SetObjectType (ObjectType& objectType );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ByTypeImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IByValueCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IByValueCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ByValueConditionImpl: public BaseImpl, public IByValueCondition
    {
    private:
        std::shared_ptr<IParameterCondition> _parameterCondition {};
        std::shared_ptr<ITimeOfDayCondition> _timeOfDayCondition {};
        std::shared_ptr<ISimulationTimeCondition> _simulationTimeCondition {};
        std::shared_ptr<IStoryboardElementStateCondition> _storyboardElementStateCondition {};
        std::shared_ptr<IUserDefinedValueCondition> _userDefinedValueCondition {};
        std::shared_ptr<ITrafficSignalCondition> _trafficSignalCondition {};
        std::shared_ptr<ITrafficSignalControllerCondition> _trafficSignalControllerCondition {};

    public:
        ByValueConditionImpl();

        std::shared_ptr<IParameterCondition> GetParameterCondition() override;
        std::shared_ptr<ITimeOfDayCondition> GetTimeOfDayCondition() override;
        std::shared_ptr<ISimulationTimeCondition> GetSimulationTimeCondition() override;
        std::shared_ptr<IStoryboardElementStateCondition> GetStoryboardElementStateCondition() override;
        std::shared_ptr<IUserDefinedValueCondition> GetUserDefinedValueCondition() override;
        std::shared_ptr<ITrafficSignalCondition> GetTrafficSignalCondition() override;
        std::shared_ptr<ITrafficSignalControllerCondition> GetTrafficSignalControllerCondition() override;

	/**
	 * Sets the value of model property parameterCondition
	 * @param parameterCondition from OpenSCENARIO class model specification: [A current parameter value is compared to a 
	 * reference value.]
	 * 
	*/
        void SetParameterCondition (std::shared_ptr<IParameterCondition>& parameterCondition );
	/**
	 * Sets the value of model property timeOfDayCondition
	 * @param timeOfDayCondition from OpenSCENARIO class model specification: [The current time of day is compared to a 
	 * reference value.]
	 * 
	*/
        void SetTimeOfDayCondition (std::shared_ptr<ITimeOfDayCondition>& timeOfDayCondition );
	/**
	 * Sets the value of model property simulationTimeCondition
	 * @param simulationTimeCondition from OpenSCENARIO class model specification: [The current simulation time is compared to 
	 * a reference value.]
	 * 
	*/
        void SetSimulationTimeCondition (std::shared_ptr<ISimulationTimeCondition>& simulationTimeCondition );
	/**
	 * Sets the value of model property storyboardElementStateCondition
	 * @param storyboardElementStateCondition from OpenSCENARIO class model specification: [Condition becomes true if the 
	 * referenced StoryboardElement terminates according to the given rule.]
	 * 
	*/
        void SetStoryboardElementStateCondition (std::shared_ptr<IStoryboardElementStateCondition>& storyboardElementStateCondition );
	/**
	 * Sets the value of model property userDefinedValueCondition
	 * @param userDefinedValueCondition from OpenSCENARIO class model specification: [The current value of an externally 
	 * defined named value is compared to a reference value (less, greater, equal).]
	 * 
	*/
        void SetUserDefinedValueCondition (std::shared_ptr<IUserDefinedValueCondition>& userDefinedValueCondition );
	/**
	 * Sets the value of model property trafficSignalCondition
	 * @param trafficSignalCondition from OpenSCENARIO class model specification: [Condition becomes true if the referenced 
	 * signal reaches the indicated state.]
	 * 
	*/
        void SetTrafficSignalCondition (std::shared_ptr<ITrafficSignalCondition>& trafficSignalCondition );
	/**
	 * Sets the value of model property trafficSignalControllerCondition
	 * @param trafficSignalControllerCondition from OpenSCENARIO class model specification: [Condition becomes true if the 
	 * referenced signal controller reaches the indicated state.]
	 * 
	*/
        void SetTrafficSignalControllerCondition (std::shared_ptr<ITrafficSignalControllerCondition>& trafficSignalControllerCondition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ByValueConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICatalog. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICatalog)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogImpl: public BaseImpl, public ICatalog
    {
    private:
        std::string _name {};
        std::vector<std::shared_ptr<IVehicle>> _vehicles {};
        std::vector<std::shared_ptr<IController>> _controllers {};
        std::vector<std::shared_ptr<IPedestrian>> _pedestrians {};
        std::vector<std::shared_ptr<IMiscObject>> _miscObjects {};
        std::vector<std::shared_ptr<IEnvironment>> _environments {};
        std::vector<std::shared_ptr<IManeuver>> _maneuvers {};
        std::vector<std::shared_ptr<ITrajectory>> _trajectories {};
        std::vector<std::shared_ptr<IRoute>> _routes {};

    public:
        CatalogImpl();

        std::string GetName() override;
        std::vector<std::shared_ptr<IVehicle>> GetVehicles() override;
        std::vector<std::shared_ptr<IController>> GetControllers() override;
        std::vector<std::shared_ptr<IPedestrian>> GetPedestrians() override;
        std::vector<std::shared_ptr<IMiscObject>> GetMiscObjects() override;
        std::vector<std::shared_ptr<IEnvironment>> GetEnvironments() override;
        std::vector<std::shared_ptr<IManeuver>> GetManeuvers() override;
        std::vector<std::shared_ptr<ITrajectory>> GetTrajectories() override;
        std::vector<std::shared_ptr<IRoute>> GetRoutes() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the catalog.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property vehicles
	 * @param vehicles from OpenSCENARIO class model specification: [A list of vehicle types that can be reused in a scenario.]
	 * 
	*/
        void SetVehicles(std::vector<std::shared_ptr<IVehicle>>& vehicles);
	/**
	 * Sets the value of model property controllers
	 * @param controllers from OpenSCENARIO class model specification: [A list of controller types that can be reused in a 
	 * scenario.]
	 * 
	*/
        void SetControllers(std::vector<std::shared_ptr<IController>>& controllers);
	/**
	 * Sets the value of model property pedestrians
	 * @param pedestrians from OpenSCENARIO class model specification: [A list of pedestrian types that can be reused in a 
	 * scenario.]
	 * 
	*/
        void SetPedestrians(std::vector<std::shared_ptr<IPedestrian>>& pedestrians);
	/**
	 * Sets the value of model property miscObjects
	 * @param miscObjects from OpenSCENARIO class model specification: [A list of miscellaneous object type that that can be 
	 * reused in a scenario.]
	 * 
	*/
        void SetMiscObjects(std::vector<std::shared_ptr<IMiscObject>>& miscObjects);
	/**
	 * Sets the value of model property environments
	 * @param environments from OpenSCENARIO class model specification: [A list of environment types that can be reused in a 
	 * scenario.]
	 * 
	*/
        void SetEnvironments(std::vector<std::shared_ptr<IEnvironment>>& environments);
	/**
	 * Sets the value of model property maneuvers
	 * @param maneuvers from OpenSCENARIO class model specification: [A list of maneuver types that can be reused in a 
	 * scenario.]
	 * 
	*/
        void SetManeuvers(std::vector<std::shared_ptr<IManeuver>>& maneuvers);
	/**
	 * Sets the value of model property trajectories
	 * @param trajectories from OpenSCENARIO class model specification: [A list of trajectory types that can be reused in a 
	 * scenario.]
	 * 
	*/
        void SetTrajectories(std::vector<std::shared_ptr<ITrajectory>>& trajectories);
	/**
	 * Sets the value of model property routes
	 * @param routes from OpenSCENARIO class model specification: [A list of route types that can be reused in a scenario.]
	 * 
	*/
        void SetRoutes(std::vector<std::shared_ptr<IRoute>>& routes);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CatalogImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICatalogDefinition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICatalogDefinition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogDefinitionImpl: public BaseImpl, public ICatalogDefinition
    {
    private:
        std::shared_ptr<ICatalog> _catalog {};

    public:
        CatalogDefinitionImpl();

        std::shared_ptr<ICatalog> GetCatalog() override;

	/**
	 * Sets the value of model property catalog
	 * @param catalog from OpenSCENARIO class model specification: [Definition of a catalog.]
	 * 
	*/
        void SetCatalog (std::shared_ptr<ICatalog>& catalog );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CatalogDefinitionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICatalogLocations. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICatalogLocations)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogLocationsImpl: public BaseImpl, public ICatalogLocations
    {
    private:
        std::shared_ptr<IVehicleCatalogLocation> _vehicleCatalog {};
        std::shared_ptr<IControllerCatalogLocation> _controllerCatalog {};
        std::shared_ptr<IPedestrianCatalogLocation> _pedestrianCatalog {};
        std::shared_ptr<IMiscObjectCatalogLocation> _miscObjectCatalog {};
        std::shared_ptr<IEnvironmentCatalogLocation> _environmentCatalog {};
        std::shared_ptr<IManeuverCatalogLocation> _maneuverCatalog {};
        std::shared_ptr<ITrajectoryCatalogLocation> _trajectoryCatalog {};
        std::shared_ptr<IRouteCatalogLocation> _routeCatalog {};

    public:
        CatalogLocationsImpl();

        std::shared_ptr<IVehicleCatalogLocation> GetVehicleCatalog() override;
        std::shared_ptr<IControllerCatalogLocation> GetControllerCatalog() override;
        std::shared_ptr<IPedestrianCatalogLocation> GetPedestrianCatalog() override;
        std::shared_ptr<IMiscObjectCatalogLocation> GetMiscObjectCatalog() override;
        std::shared_ptr<IEnvironmentCatalogLocation> GetEnvironmentCatalog() override;
        std::shared_ptr<IManeuverCatalogLocation> GetManeuverCatalog() override;
        std::shared_ptr<ITrajectoryCatalogLocation> GetTrajectoryCatalog() override;
        std::shared_ptr<IRouteCatalogLocation> GetRouteCatalog() override;

	/**
	 * Sets the value of model property vehicleCatalog
	 * @param vehicleCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to resolve
	 * CatalogReferences on vehicle types.]
	 * 
	*/
        void SetVehicleCatalog (std::shared_ptr<IVehicleCatalogLocation>& vehicleCatalog );
	/**
	 * Sets the value of model property controllerCatalog
	 * @param controllerCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on controller types.]
	 * 
	*/
        void SetControllerCatalog (std::shared_ptr<IControllerCatalogLocation>& controllerCatalog );
	/**
	 * Sets the value of model property pedestrianCatalog
	 * @param pedestrianCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on pedestrian types.]
	 * 
	*/
        void SetPedestrianCatalog (std::shared_ptr<IPedestrianCatalogLocation>& pedestrianCatalog );
	/**
	 * Sets the value of model property miscObjectCatalog
	 * @param miscObjectCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on miscellaneous object types.]
	 * 
	*/
        void SetMiscObjectCatalog (std::shared_ptr<IMiscObjectCatalogLocation>& miscObjectCatalog );
	/**
	 * Sets the value of model property environmentCatalog
	 * @param environmentCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on environment types.]
	 * 
	*/
        void SetEnvironmentCatalog (std::shared_ptr<IEnvironmentCatalogLocation>& environmentCatalog );
	/**
	 * Sets the value of model property maneuverCatalog
	 * @param maneuverCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on maneuver types.]
	 * 
	*/
        void SetManeuverCatalog (std::shared_ptr<IManeuverCatalogLocation>& maneuverCatalog );
	/**
	 * Sets the value of model property trajectoryCatalog
	 * @param trajectoryCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on trajectory types.]
	 * 
	*/
        void SetTrajectoryCatalog (std::shared_ptr<ITrajectoryCatalogLocation>& trajectoryCatalog );
	/**
	 * Sets the value of model property routeCatalog
	 * @param routeCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to resolve 
	 * CatalogReferences on route types.]
	 * 
	*/
        void SetRouteCatalog (std::shared_ptr<IRouteCatalogLocation>& routeCatalog );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CatalogLocationsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICatalogReference. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICatalogReference)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CatalogReferenceImpl: public BaseImpl, public ICatalogReference
    {
    private:
        std::string _catalogName {};
        std::string _entryName {};
        std::vector<std::shared_ptr<IParameterAssignment>> _parameterAssignments {};
        std::shared_ptr<ICatalogElement> _ref {};

    public:
        CatalogReferenceImpl();

        std::string GetCatalogName() override;
        std::string GetEntryName() override;
        std::vector<std::shared_ptr<IParameterAssignment>> GetParameterAssignments() override;
        std::shared_ptr<ICatalogElement> GetRef() override;

	/**
	 * Sets the value of model property catalogName
	 * @param catalogName from OpenSCENARIO class model specification: [Name of the catalog.]
	 * 
	*/
        void SetCatalogName (std::string& catalogName );
	/**
	 * Sets the value of model property entryName
	 * @param entryName from OpenSCENARIO class model specification: [Name of catalog entry.]
	 * 
	*/
        void SetEntryName (std::string& entryName );
	/**
	 * Sets the value of model property parameterAssignments
	 * @param parameterAssignments from OpenSCENARIO class model specification: [List of parameter assignments for 
	 * instantiation.]
	 * 
	*/
        void SetParameterAssignments(std::vector<std::shared_ptr<IParameterAssignment>>& parameterAssignments);
	/**
	 * Sets the value of model property ref
	 * @param ref from OpenSCENARIO class model specification: [The resolved reference to a catalog element (out of the 
	 * catalogName and entryName). Transient means, that it is not , mapped to the schema.]
	 * 
	*/
        void SetRef (std::shared_ptr<ICatalogElement>& ref );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CatalogReferenceImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICenter. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICenter)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CenterImpl: public BaseImpl, public ICenter
    {
    private:
        double _x {};
        double _y {};
        double _z {};

    public:
        CenterImpl();

        double GetX() override;
        double GetY() override;
        double GetZ() override;

	/**
	 * Sets the value of model property x
	 * @param x from OpenSCENARIO class model specification: [Center offset in x direction.]
	 * 
	*/
        void SetX (double& x );
	/**
	 * Sets the value of model property y
	 * @param y from OpenSCENARIO class model specification: [Center offset in y direction.]
	 * 
	*/
        void SetY (double& y );
	/**
	 * Sets the value of model property z
	 * @param z from OpenSCENARIO class model specification: [Center offset in z direction.]
	 * 
	*/
        void SetZ (double& z );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CenterImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICentralSwarmObject. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICentralSwarmObject)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CentralSwarmObjectImpl: public BaseImpl, public ICentralSwarmObject
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};

    public:
        CentralSwarmObjectImpl();

        INamedReference<IEntity>* GetEntityRef() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the central entity the swarm traffic is created 
	 * around.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CentralSwarmObjectImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IClothoid. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IClothoid)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ClothoidImpl: public BaseImpl, public IClothoid
    {
    private:
        double _curvature {};
        double _curvatureDot {};
        double _length {};
        double _startTime {};
        double _stopTime {};
        std::shared_ptr<IPosition> _position {};

    public:
        ClothoidImpl();

        double GetCurvature() override;
        double GetCurvatureDot() override;
        double GetLength() override;
        double GetStartTime() override;
        double GetStopTime() override;
        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property curvature
	 * @param curvature from OpenSCENARIO class model specification: [Start curvature of clothoid.]
	 * 
	*/
        void SetCurvature (double& curvature );
	/**
	 * Sets the value of model property curvatureDot
	 * @param curvatureDot from OpenSCENARIO class model specification: [Rate of change of the curvature of the clothoid.Unit: 
	 * 1/s;Range [0..inf[.]
	 * 
	*/
        void SetCurvatureDot (double& curvatureDot );
	/**
	 * Sets the value of model property length
	 * @param length from OpenSCENARIO class model specification: [Length of clothoid.]
	 * 
	*/
        void SetLength (double& length );
	/**
	 * Sets the value of model property startTime
	 * @param startTime from OpenSCENARIO class model specification: [Optional time specification at the start of the clothoid.
	 * Unit: s;Range [0..inf[.]
	 * 
	*/
        void SetStartTime (double& startTime );
	/**
	 * Sets the value of model property stopTime
	 * @param stopTime from OpenSCENARIO class model specification: [Optional time specification at the end of the clothoid. 
	 * Unit: s;Range ]0..inf[.]
	 * 
	*/
        void SetStopTime (double& stopTime );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Start position of a clothoid.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ClothoidImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICollisionCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICollisionCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CollisionConditionImpl: public BaseImpl, public ICollisionCondition
    {
    private:
        std::shared_ptr<IEntityRef> _entityRef {};
        std::shared_ptr<IByObjectType> _byType {};

    public:
        CollisionConditionImpl();

        std::shared_ptr<IEntityRef> GetEntityRef() override;
        std::shared_ptr<IByObjectType> GetByType() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of a specific entity.]
	 * 
	*/
        void SetEntityRef (std::shared_ptr<IEntityRef>& entityRef );
	/**
	 * Sets the value of model property byType
	 * @param byType from OpenSCENARIO class model specification: [Entities of this type can trigger the condition when 
	 * collide.]
	 * 
	*/
        void SetByType (std::shared_ptr<IByObjectType>& byType );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CollisionConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ConditionImpl: public BaseImpl, public ICondition
    {
    private:
        std::string _name {};
        double _delay {};
        ConditionEdge _conditionEdge {};
        std::shared_ptr<IByEntityCondition> _byEntityCondition {};
        std::shared_ptr<IByValueCondition> _byValueCondition {};

    public:
        ConditionImpl();

        std::string GetName() override;
        double GetDelay() override;
        ConditionEdge GetConditionEdge() override;
        std::shared_ptr<IByEntityCondition> GetByEntityCondition() override;
        std::shared_ptr<IByValueCondition> GetByValueCondition() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the condition.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property delay
	 * @param delay from OpenSCENARIO class model specification: [Time elapsed after the edge condition is verified, until the 
	 * condition returns true to the scenario. Unit: s; Range: , [0..inf[.]
	 * 
	*/
        void SetDelay (double& delay );
	/**
	 * Sets the value of model property conditionEdge
	 * @param conditionEdge from OpenSCENARIO class model specification: [Specifies the edge when the condition is evaluated to
	 * true (rising, falling, any).]
	 * 
	*/
        void SetConditionEdge (ConditionEdge& conditionEdge );
	/**
	 * Sets the value of model property byEntityCondition
	 * @param byEntityCondition from OpenSCENARIO class model specification: [A condition that refers to an entity.]
	 * 
	*/
        void SetByEntityCondition (std::shared_ptr<IByEntityCondition>& byEntityCondition );
	/**
	 * Sets the value of model property byValueCondition
	 * @param byValueCondition from OpenSCENARIO class model specification: [A condition that refers to a runtime value.]
	 * 
	*/
        void SetByValueCondition (std::shared_ptr<IByValueCondition>& byValueCondition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IConditionGroup. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IConditionGroup)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ConditionGroupImpl: public BaseImpl, public IConditionGroup
    {
    private:
        std::vector<std::shared_ptr<ICondition>> _conditions {};

    public:
        ConditionGroupImpl();

        std::vector<std::shared_ptr<ICondition>> GetConditions() override;

	/**
	 * Sets the value of model property conditions
	 * @param conditions from OpenSCENARIO class model specification: [A associated list of conditions.]
	 * 
	*/
        void SetConditions(std::vector<std::shared_ptr<ICondition>>& conditions);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ConditionGroupImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControlPoint. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControlPoint)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControlPointImpl: public BaseImpl, public IControlPoint
    {
    private:
        double _time {};
        double _weight {};
        std::shared_ptr<IPosition> _position {};

    public:
        ControlPointImpl();

        double GetTime() override;
        double GetWeight() override;
        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property time
	 * @param time from OpenSCENARIO class model specification: [Optional specification of the time dimension of the control 
	 * point. Unit: s;Range [0..inf[.]
	 * 
	*/
        void SetTime (double& time );
	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [Optional weight specification of the control point. If 
	 * unspecified, all control points will be equal weighted. Range , ]-inf..inf[.]
	 * 
	*/
        void SetWeight (double& weight );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position of the control point.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ControlPointImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IController. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IController)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerImpl: public BaseImpl, public IController
    {
    private:
        std::string _name {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<IProperties> _properties {};

    public:
        ControllerImpl();

        std::string GetName() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<IProperties> GetProperties() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the controller type.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Describing properties for the controller.]
	 * 
	*/
        void SetProperties (std::shared_ptr<IProperties>& properties );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ControllerImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerActionImpl: public BaseImpl, public IControllerAction
    {
    private:
        std::shared_ptr<IAssignControllerAction> _assignControllerAction {};
        std::shared_ptr<IOverrideControllerValueAction> _overrideControllerValueAction {};

    public:
        ControllerActionImpl();

        std::shared_ptr<IAssignControllerAction> GetAssignControllerAction() override;
        std::shared_ptr<IOverrideControllerValueAction> GetOverrideControllerValueAction() override;

	/**
	 * Sets the value of model property assignControllerAction
	 * @param assignControllerAction from OpenSCENARIO class model specification: [Assign a controller to an entity.]
	 * 
	*/
        void SetAssignControllerAction (std::shared_ptr<IAssignControllerAction>& assignControllerAction );
	/**
	 * Sets the value of model property overrideControllerValueAction
	 * @param overrideControllerValueAction from OpenSCENARIO class model specification: [Values for throttle, brake, clutch, 
	 * parking brake, steering wheel or gear.]
	 * 
	*/
        void SetOverrideControllerValueAction (std::shared_ptr<IOverrideControllerValueAction>& overrideControllerValueAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ControllerActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerCatalogLocationImpl: public BaseImpl, public IControllerCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        ControllerCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalog files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ControllerCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerDistribution. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerDistribution)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerDistributionImpl: public BaseImpl, public IControllerDistribution
    {
    private:
        std::vector<std::shared_ptr<IControllerDistributionEntry>> _controllerDistributionEntries {};

    public:
        ControllerDistributionImpl();

        std::vector<std::shared_ptr<IControllerDistributionEntry>> GetControllerDistributionEntries() override;

	/**
	 * Sets the value of model property controllerDistributionEntries
	 * @param controllerDistributionEntries from OpenSCENARIO class model specification: [The weights of controllers of a 
	 * specific type in a traffic.]
	 * 
	*/
        void SetControllerDistributionEntries(std::vector<std::shared_ptr<IControllerDistributionEntry>>& controllerDistributionEntries);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ControllerDistributionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerDistributionEntry. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerDistributionEntry)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ControllerDistributionEntryImpl: public BaseImpl, public IControllerDistributionEntry
    {
    private:
        double _weight {};
        std::shared_ptr<IController> _controller {};
        std::shared_ptr<ICatalogReference> _catalogReference {};

    public:
        ControllerDistributionEntryImpl();

        double GetWeight() override;
        std::shared_ptr<IController> GetController() override;
        std::shared_ptr<ICatalogReference> GetCatalogReference() override;

	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [The weight of the entry. Range: ]0..inf[.]
	 * 
	*/
        void SetWeight (double& weight );
	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [The specified controller type.]
	 * 
	*/
        void SetController (std::shared_ptr<IController>& controller );
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A controller type import from a catalog.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ControllerDistributionEntryImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICustomCommandAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICustomCommandAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class CustomCommandActionImpl: public BaseImpl, public ICustomCommandAction
    {
    private:
        std::string _type {};
        std::string _content {};

    public:
        CustomCommandActionImpl();

        std::string GetType() override;
        std::string GetContent() override;

	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Type that is defined as a contract between the simulation 
	 * environment provider and the author of a scenario.]
	 * 
	*/
        void SetType (std::string& type );
	/**
	 * Sets the value of model property content
	 * @param content from OpenSCENARIO class model specification: [The command that is defined as a contract between the 
	 * simulation environment provider and the author of a scenario.]
	 * 
	*/
        void SetContent (std::string& content );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        CustomCommandActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IDeleteEntityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IDeleteEntityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DeleteEntityActionImpl: public BaseImpl, public IDeleteEntityAction
    {
    private:

    public:
        DeleteEntityActionImpl();



        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        DeleteEntityActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IDimensions. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IDimensions)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DimensionsImpl: public BaseImpl, public IDimensions
    {
    private:
        double _width {};
        double _length {};
        double _height {};

    public:
        DimensionsImpl();

        double GetWidth() override;
        double GetLength() override;
        double GetHeight() override;

	/**
	 * Sets the value of model property width
	 * @param width from OpenSCENARIO class model specification: [Width of the entity's bounding box. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetWidth (double& width );
	/**
	 * Sets the value of model property length
	 * @param length from OpenSCENARIO class model specification: [Length of the entity's bounding box. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetLength (double& length );
	/**
	 * Sets the value of model property height
	 * @param height from OpenSCENARIO class model specification: [Height of the entity's bounding box. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetHeight (double& height );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        DimensionsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IDirectory. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IDirectory)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DirectoryImpl: public BaseImpl, public IDirectory
    {
    private:
        std::string _path {};

    public:
        DirectoryImpl();

        std::string GetPath() override;

	/**
	 * Sets the value of model property path
	 * @param path from OpenSCENARIO class model specification: [File system path, e.g. path=/home/simulation/.]
	 * 
	*/
        void SetPath (std::string& path );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        DirectoryImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IDistanceCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IDistanceCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DistanceConditionImpl: public BaseImpl, public IDistanceCondition
    {
    private:
        double _value {};
        bool _freespace {};
        bool _alongRoute {};
        Rule _rule {};
        std::shared_ptr<IPosition> _position {};

    public:
        DistanceConditionImpl();

        double GetValue() override;
        bool GetFreespace() override;
        bool GetAlongRoute() override;
        Rule GetRule() override;
        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The distance value. Unit: s; Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: distance is measured between closest bounding box 
	 * points. False: reference point distance is used.]
	 * 
	*/
        void SetFreespace (bool& freespace );
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
        void SetAlongRoute (bool& alongRoute );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The given position the distance is related to.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        DistanceConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IDynamicConstraints. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IDynamicConstraints)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class DynamicConstraintsImpl: public BaseImpl, public IDynamicConstraints
    {
    private:
        double _maxAcceleration {};
        double _maxDeceleration {};
        double _maxSpeed {};

    public:
        DynamicConstraintsImpl();

        double GetMaxAcceleration() override;
        double GetMaxDeceleration() override;
        double GetMaxSpeed() override;

	/**
	 * Sets the value of model property maxAcceleration
	 * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration the distance controller is 
	 * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
        void SetMaxAcceleration (double& maxAcceleration );
	/**
	 * Sets the value of model property maxDeceleration
	 * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration the distance controller is 
	 * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
        void SetMaxDeceleration (double& maxDeceleration );
	/**
	 * Sets the value of model property maxSpeed
	 * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed the distance controller is allowed to use 
	 * for keeping the distance. Unit: m/s; Range: [0..inf[.]
	 * 
	*/
        void SetMaxSpeed (double& maxSpeed );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        DynamicConstraintsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEndOfRoadCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEndOfRoadCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EndOfRoadConditionImpl: public BaseImpl, public IEndOfRoadCondition
    {
    private:
        double _duration {};

    public:
        EndOfRoadConditionImpl();

        double GetDuration() override;

	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Amount of time at end of road. Unit: s; Range: [0..inf[.]
	 * 
	*/
        void SetDuration (double& duration );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EndOfRoadConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntities. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntities)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntitiesImpl: public BaseImpl, public IEntities
    {
    private:
        std::vector<std::shared_ptr<IScenarioObject>> _scenarioObjects {};
        std::vector<std::shared_ptr<IEntitySelection>> _entitySelections {};

    public:
        EntitiesImpl();

        std::vector<std::shared_ptr<IScenarioObject>> GetScenarioObjects() override;
        std::vector<std::shared_ptr<IEntitySelection>> GetEntitySelections() override;

	/**
	 * Sets the value of model property scenarioObjects
	 * @param scenarioObjects from OpenSCENARIO class model specification: [A list of scenario object definitions that pairs an
	 * entity object and a controller.]
	 * 
	*/
        void SetScenarioObjects(std::vector<std::shared_ptr<IScenarioObject>>& scenarioObjects);
	/**
	 * Sets the value of model property entitySelections
	 * @param entitySelections from OpenSCENARIO class model specification: [A list of entity selection definitions.]
	 * 
	*/
        void SetEntitySelections(std::vector<std::shared_ptr<IEntitySelection>>& entitySelections);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EntitiesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityActionImpl: public BaseImpl, public IEntityAction
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        std::shared_ptr<IAddEntityAction> _addEntityAction {};
        std::shared_ptr<IDeleteEntityAction> _deleteEntityAction {};

    public:
        EntityActionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        std::shared_ptr<IAddEntityAction> GetAddEntityAction() override;
        std::shared_ptr<IDeleteEntityAction> GetDeleteEntityAction() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property addEntityAction
	 * @param addEntityAction from OpenSCENARIO class model specification: [Action that adds the reference entity to the 
	 * scenario.]
	 * 
	*/
        void SetAddEntityAction (std::shared_ptr<IAddEntityAction>& addEntityAction );
	/**
	 * Sets the value of model property deleteEntityAction
	 * @param deleteEntityAction from OpenSCENARIO class model specification: [Action that deletes the reference entity from 
	 * the scenario.]
	 * 
	*/
        void SetDeleteEntityAction (std::shared_ptr<IDeleteEntityAction>& deleteEntityAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EntityActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityConditionImpl: public BaseImpl, public IEntityCondition
    {
    private:
        std::shared_ptr<IEndOfRoadCondition> _endOfRoadCondition {};
        std::shared_ptr<ICollisionCondition> _collisionCondition {};
        std::shared_ptr<IOffroadCondition> _offroadCondition {};
        std::shared_ptr<ITimeHeadwayCondition> _timeHeadwayCondition {};
        std::shared_ptr<ITimeToCollisionCondition> _timeToCollisionCondition {};
        std::shared_ptr<IAccelerationCondition> _accelerationCondition {};
        std::shared_ptr<IStandStillCondition> _standStillCondition {};
        std::shared_ptr<ISpeedCondition> _speedCondition {};
        std::shared_ptr<IRelativeSpeedCondition> _relativeSpeedCondition {};
        std::shared_ptr<ITraveledDistanceCondition> _traveledDistanceCondition {};
        std::shared_ptr<IReachPositionCondition> _reachPositionCondition {};
        std::shared_ptr<IDistanceCondition> _distanceCondition {};
        std::shared_ptr<IRelativeDistanceCondition> _relativeDistanceCondition {};

    public:
        EntityConditionImpl();

        std::shared_ptr<IEndOfRoadCondition> GetEndOfRoadCondition() override;
        std::shared_ptr<ICollisionCondition> GetCollisionCondition() override;
        std::shared_ptr<IOffroadCondition> GetOffroadCondition() override;
        std::shared_ptr<ITimeHeadwayCondition> GetTimeHeadwayCondition() override;
        std::shared_ptr<ITimeToCollisionCondition> GetTimeToCollisionCondition() override;
        std::shared_ptr<IAccelerationCondition> GetAccelerationCondition() override;
        std::shared_ptr<IStandStillCondition> GetStandStillCondition() override;
        std::shared_ptr<ISpeedCondition> GetSpeedCondition() override;
        std::shared_ptr<IRelativeSpeedCondition> GetRelativeSpeedCondition() override;
        std::shared_ptr<ITraveledDistanceCondition> GetTraveledDistanceCondition() override;
        std::shared_ptr<IReachPositionCondition> GetReachPositionCondition() override;
        std::shared_ptr<IDistanceCondition> GetDistanceCondition() override;
        std::shared_ptr<IRelativeDistanceCondition> GetRelativeDistanceCondition() override;

	/**
	 * Sets the value of model property endOfRoadCondition
	 * @param endOfRoadCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has reached the end of the road.]
	 * 
	*/
        void SetEndOfRoadCondition (std::shared_ptr<IEndOfRoadCondition>& endOfRoadCondition );
	/**
	 * Sets the value of model property collisionCondition
	 * @param collisionCondition from OpenSCENARIO class model specification: [Condition checking whether the reference entity 
	 * was involved in a collision.]
	 * 
	*/
        void SetCollisionCondition (std::shared_ptr<ICollisionCondition>& collisionCondition );
	/**
	 * Sets the value of model property offroadCondition
	 * @param offroadCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has left the road.]
	 * 
	*/
        void SetOffroadCondition (std::shared_ptr<IOffroadCondition>& offroadCondition );
	/**
	 * Sets the value of model property timeHeadwayCondition
	 * @param timeHeadwayCondition from OpenSCENARIO class model specification: [Condition checking the time headway between 
	 * two entities.]
	 * 
	*/
        void SetTimeHeadwayCondition (std::shared_ptr<ITimeHeadwayCondition>& timeHeadwayCondition );
	/**
	 * Sets the value of model property timeToCollisionCondition
	 * @param timeToCollisionCondition from OpenSCENARIO class model specification: [Condition checking the time to collision 
	 * between two entities.]
	 * 
	*/
        void SetTimeToCollisionCondition (std::shared_ptr<ITimeToCollisionCondition>& timeToCollisionCondition );
	/**
	 * Sets the value of model property accelerationCondition
	 * @param accelerationCondition from OpenSCENARIO class model specification: [Condition checking the current acceleration 
	 * of an entity.]
	 * 
	*/
        void SetAccelerationCondition (std::shared_ptr<IAccelerationCondition>& accelerationCondition );
	/**
	 * Sets the value of model property standStillCondition
	 * @param standStillCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has not moved.]
	 * 
	*/
        void SetStandStillCondition (std::shared_ptr<IStandStillCondition>& standStillCondition );
	/**
	 * Sets the value of model property speedCondition
	 * @param speedCondition from OpenSCENARIO class model specification: [Condition checking the current speed of the 
	 * referenced entities.]
	 * 
	*/
        void SetSpeedCondition (std::shared_ptr<ISpeedCondition>& speedCondition );
	/**
	 * Sets the value of model property relativeSpeedCondition
	 * @param relativeSpeedCondition from OpenSCENARIO class model specification: [Condition checking the relative speed 
	 * between two entity.]
	 * 
	*/
        void SetRelativeSpeedCondition (std::shared_ptr<IRelativeSpeedCondition>& relativeSpeedCondition );
	/**
	 * Sets the value of model property traveledDistanceCondition
	 * @param traveledDistanceCondition from OpenSCENARIO class model specification: [Condition checking the total traveled 
	 * distance of the reference entity since the start of the scenario.]
	 * 
	*/
        void SetTraveledDistanceCondition (std::shared_ptr<ITraveledDistanceCondition>& traveledDistanceCondition );
	/**
	 * Sets the value of model property reachPositionCondition
	 * @param reachPositionCondition from OpenSCENARIO class model specification: [Condition checking whether the reference 
	 * entity has reached a given position within a given uncertainty.]
	 * 
	*/
        void SetReachPositionCondition (std::shared_ptr<IReachPositionCondition>& reachPositionCondition );
	/**
	 * Sets the value of model property distanceCondition
	 * @param distanceCondition from OpenSCENARIO class model specification: [Condition checking the distance between two 
	 * entities or an entity and a position.]
	 * 
	*/
        void SetDistanceCondition (std::shared_ptr<IDistanceCondition>& distanceCondition );
	/**
	 * Sets the value of model property relativeDistanceCondition
	 * @param relativeDistanceCondition from OpenSCENARIO class model specification: [Condition checking the relative distance 
	 * between two entities.]
	 * 
	*/
        void SetRelativeDistanceCondition (std::shared_ptr<IRelativeDistanceCondition>& relativeDistanceCondition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EntityConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityObject. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityObject)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityObjectImpl: public BaseImpl, public IEntityObject
    {
    private:
        std::shared_ptr<ICatalogReference> _catalogReference {};
        std::shared_ptr<IVehicle> _vehicle {};
        std::shared_ptr<IPedestrian> _pedestrian {};
        std::shared_ptr<IMiscObject> _miscObject {};

    public:
        EntityObjectImpl();

        std::shared_ptr<ICatalogReference> GetCatalogReference() override;
        std::shared_ptr<IVehicle> GetVehicle() override;
        std::shared_ptr<IPedestrian> GetPedestrian() override;
        std::shared_ptr<IMiscObject> GetMiscObject() override;

	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to a catalog entry of type MiscObject, 
	 * Vehicle or Pedestrian.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );
	/**
	 * Sets the value of model property vehicle
	 * @param vehicle from OpenSCENARIO class model specification: [Vehicle definition.]
	 * 
	*/
        void SetVehicle (std::shared_ptr<IVehicle>& vehicle );
	/**
	 * Sets the value of model property pedestrian
	 * @param pedestrian from OpenSCENARIO class model specification: [Pedestrian definition.]
	 * 
	*/
        void SetPedestrian (std::shared_ptr<IPedestrian>& pedestrian );
	/**
	 * Sets the value of model property miscObject
	 * @param miscObject from OpenSCENARIO class model specification: [Definition of a MiscObject.]
	 * 
	*/
        void SetMiscObject (std::shared_ptr<IMiscObject>& miscObject );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EntityObjectImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityRef. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityRef)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntityRefImpl: public BaseImpl, public IEntityRef
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};

    public:
        EntityRefImpl();

        INamedReference<IEntity>* GetEntityRef() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EntityRefImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntitySelection. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntitySelection)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EntitySelectionImpl: public BaseImpl, public IEntitySelection
    {
    private:
        std::string _name {};
        std::shared_ptr<ISelectedEntities> _members {};

    public:
        EntitySelectionImpl();

        std::string GetName() override;
        std::shared_ptr<ISelectedEntities> GetMembers() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the entity selection. By this name, a selection can be
	 * referenced as an entity.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property members
	 * @param members from OpenSCENARIO class model specification: [Selected entities as members of the entity selection.]
	 * 
	*/
        void SetMembers (std::shared_ptr<ISelectedEntities>& members );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EntitySelectionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEnvironment. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEnvironment)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EnvironmentImpl: public BaseImpl, public IEnvironment
    {
    private:
        std::string _name {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<ITimeOfDay> _timeOfDay {};
        std::shared_ptr<IWeather> _weather {};
        std::shared_ptr<IRoadCondition> _roadCondition {};

    public:
        EnvironmentImpl();

        std::string GetName() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<ITimeOfDay> GetTimeOfDay() override;
        std::shared_ptr<IWeather> GetWeather() override;
        std::shared_ptr<IRoadCondition> GetRoadCondition() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the environment. If used in catalog name is required.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property timeOfDay
	 * @param timeOfDay from OpenSCENARIO class model specification: [Time of the day during the simulation.]
	 * 
	*/
        void SetTimeOfDay (std::shared_ptr<ITimeOfDay>& timeOfDay );
	/**
	 * Sets the value of model property weather
	 * @param weather from OpenSCENARIO class model specification: [Weather conditions during the simulation.]
	 * 
	*/
        void SetWeather (std::shared_ptr<IWeather>& weather );
	/**
	 * Sets the value of model property roadCondition
	 * @param roadCondition from OpenSCENARIO class model specification: [Road conditions during the simulation.]
	 * 
	*/
        void SetRoadCondition (std::shared_ptr<IRoadCondition>& roadCondition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EnvironmentImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEnvironmentAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEnvironmentAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EnvironmentActionImpl: public BaseImpl, public IEnvironmentAction
    {
    private:
        std::shared_ptr<IEnvironment> _environment {};
        std::shared_ptr<ICatalogReference> _catalogReference {};

    public:
        EnvironmentActionImpl();

        std::shared_ptr<IEnvironment> GetEnvironment() override;
        std::shared_ptr<ICatalogReference> GetCatalogReference() override;

	/**
	 * Sets the value of model property environment
	 * @param environment from OpenSCENARIO class model specification: [New environment definition.]
	 * 
	*/
        void SetEnvironment (std::shared_ptr<IEnvironment>& environment );
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to a catalog entry of type Environment.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EnvironmentActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEnvironmentCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEnvironmentCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EnvironmentCatalogLocationImpl: public BaseImpl, public IEnvironmentCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        EnvironmentCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EnvironmentCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEvent. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEvent)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class EventImpl: public BaseImpl, public IEvent
    {
    private:
        Priority _priority {};
        unsigned int _maximumExecutionCount {};
        std::string _name {};
        std::vector<std::shared_ptr<IAction>> _actions {};
        std::shared_ptr<ITrigger> _startTrigger {};

    public:
        EventImpl();

        Priority GetPriority() override;
        unsigned int GetMaximumExecutionCount() override;
        std::string GetName() override;
        std::vector<std::shared_ptr<IAction>> GetActions() override;
        std::shared_ptr<ITrigger> GetStartTrigger() override;

	/**
	 * Sets the value of model property priority
	 * @param priority from OpenSCENARIO class model specification: [Priority of each event.]
	 * 
	*/
        void SetPriority (Priority& priority );
	/**
	 * Sets the value of model property maximumExecutionCount
	 * @param maximumExecutionCount from OpenSCENARIO class model specification: [Maximum number of executions. Default value 
	 * is 1. Range: [1..inf[.]
	 * 
	*/
        void SetMaximumExecutionCount (unsigned int& maximumExecutionCount );
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the event.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property actions
	 * @param actions from OpenSCENARIO class model specification: [List of actions in an event.]
	 * 
	*/
        void SetActions(std::vector<std::shared_ptr<IAction>>& actions);
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Actions are executed as soon as the start trigger 
	 * fires. This point in time represents the start of the event.]
	 * 
	*/
        void SetStartTrigger (std::shared_ptr<ITrigger>& startTrigger );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        EventImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFile. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFile)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FileImpl: public BaseImpl, public IFile
    {
    private:
        std::string _filepath {};

    public:
        FileImpl();

        std::string GetFilepath() override;

	/**
	 * Sets the value of model property filepath
	 * @param filepath from OpenSCENARIO class model specification: [Filepath e.g. 
	 * filepath=/home/simulator/customDriverSpecification.xml.]
	 * 
	*/
        void SetFilepath (std::string& filepath );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        FileImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFileHeader. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFileHeader)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FileHeaderImpl: public BaseImpl, public IFileHeader
    {
    private:
        unsigned short _revMajor {};
        unsigned short _revMinor {};
        DateTime _date {};
        std::string _description {};
        std::string _author {};

    public:
        FileHeaderImpl();

        unsigned short GetRevMajor() override;
        unsigned short GetRevMinor() override;
        DateTime GetDate() override;
        std::string GetDescription() override;
        std::string GetAuthor() override;

	/**
	 * Sets the value of model property revMajor
	 * @param revMajor from OpenSCENARIO class model specification: [Major OpenSCENARIO revision, this file conforms to Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetRevMajor (unsigned short& revMajor );
	/**
	 * Sets the value of model property revMinor
	 * @param revMinor from OpenSCENARIO class model specification: [Minor OpenSCENARIO revision, this file conforms to Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetRevMinor (unsigned short& revMinor );
	/**
	 * Sets the value of model property date
	 * @param date from OpenSCENARIO class model specification: [User specific date and time recommended: YYYY-MM-DDThh:mm:ss.]
	 * 
	*/
        void SetDate (DateTime& date );
	/**
	 * Sets the value of model property description
	 * @param description from OpenSCENARIO class model specification: [User specific description.]
	 * 
	*/
        void SetDescription (std::string& description );
	/**
	 * Sets the value of model property author
	 * @param author from OpenSCENARIO class model specification: [Author of the scenario or the catalog.]
	 * 
	*/
        void SetAuthor (std::string& author );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        FileHeaderImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFinalSpeed. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFinalSpeed)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FinalSpeedImpl: public BaseImpl, public IFinalSpeed
    {
    private:
        std::shared_ptr<IAbsoluteSpeed> _absoluteSpeed {};
        std::shared_ptr<IRelativeSpeedToMaster> _relativeSpeedToMaster {};

    public:
        FinalSpeedImpl();

        std::shared_ptr<IAbsoluteSpeed> GetAbsoluteSpeed() override;
        std::shared_ptr<IRelativeSpeedToMaster> GetRelativeSpeedToMaster() override;

	/**
	 * Sets the value of model property absoluteSpeed
	 * @param absoluteSpeed from OpenSCENARIO class model specification: [The absolute speed a synchronized entity should have 
	 * at its target position.]
	 * 
	*/
        void SetAbsoluteSpeed (std::shared_ptr<IAbsoluteSpeed>& absoluteSpeed );
	/**
	 * Sets the value of model property relativeSpeedToMaster
	 * @param relativeSpeedToMaster from OpenSCENARIO class model specification: [The speed a synchronized entity should have 
	 * relative to its master entity at its target position.]
	 * 
	*/
        void SetRelativeSpeedToMaster (std::shared_ptr<IRelativeSpeedToMaster>& relativeSpeedToMaster );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        FinalSpeedImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFog. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFog)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FogImpl: public BaseImpl, public IFog
    {
    private:
        double _visualRange {};
        std::shared_ptr<IBoundingBox> _boundingBox {};

    public:
        FogImpl();

        double GetVisualRange() override;
        std::shared_ptr<IBoundingBox> GetBoundingBox() override;

	/**
	 * Sets the value of model property visualRange
	 * @param visualRange from OpenSCENARIO class model specification: [Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetVisualRange (double& visualRange );
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Dimensions and center of fog in fixed coordinates.]
	 * 
	*/
        void SetBoundingBox (std::shared_ptr<IBoundingBox>& boundingBox );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        FogImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFollowTrajectoryAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFollowTrajectoryAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class FollowTrajectoryActionImpl: public BaseImpl, public IFollowTrajectoryAction
    {
    private:
        std::shared_ptr<ITrajectory> _trajectory {};
        std::shared_ptr<ICatalogReference> _catalogReference {};
        std::shared_ptr<ITimeReference> _timeReference {};
        std::shared_ptr<ITrajectoryFollowingMode> _trajectoryFollowingMode {};

    public:
        FollowTrajectoryActionImpl();

        std::shared_ptr<ITrajectory> GetTrajectory() override;
        std::shared_ptr<ICatalogReference> GetCatalogReference() override;
        std::shared_ptr<ITimeReference> GetTimeReference() override;
        std::shared_ptr<ITrajectoryFollowingMode> GetTrajectoryFollowingMode() override;

	/**
	 * Sets the value of model property trajectory
	 * @param trajectory from OpenSCENARIO class model specification: [Trajectory definition.]
	 * 
	*/
        void SetTrajectory (std::shared_ptr<ITrajectory>& trajectory );
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A reference to the trajectory type in a catalog.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );
	/**
	 * Sets the value of model property timeReference
	 * @param timeReference from OpenSCENARIO class model specification: [Defines if time information provided within the 
	 * trajectory should be considered. If so, it may be used as either , absolute or relative time along the trajectory in 
	 * order to define longitudinal velocity of the actor. Moreover, a time , offset or time scaling may be applied.]
	 * 
	*/
        void SetTimeReference (std::shared_ptr<ITimeReference>& timeReference );
	/**
	 * Sets the value of model property trajectoryFollowingMode
	 * @param trajectoryFollowingMode from OpenSCENARIO class model specification: [The mode how to follow the given 
	 * trajectory.]
	 * 
	*/
        void SetTrajectoryFollowingMode (std::shared_ptr<ITrajectoryFollowingMode>& trajectoryFollowingMode );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        FollowTrajectoryActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IGlobalAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IGlobalAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class GlobalActionImpl: public BaseImpl, public IGlobalAction
    {
    private:
        std::shared_ptr<IEnvironmentAction> _environmentAction {};
        std::shared_ptr<IEntityAction> _entityAction {};
        std::shared_ptr<IParameterAction> _parameterAction {};
        std::shared_ptr<IInfrastructureAction> _infrastructureAction {};
        std::shared_ptr<ITrafficAction> _trafficAction {};

    public:
        GlobalActionImpl();

        std::shared_ptr<IEnvironmentAction> GetEnvironmentAction() override;
        std::shared_ptr<IEntityAction> GetEntityAction() override;
        std::shared_ptr<IParameterAction> GetParameterAction() override;
        std::shared_ptr<IInfrastructureAction> GetInfrastructureAction() override;
        std::shared_ptr<ITrafficAction> GetTrafficAction() override;

	/**
	 * Sets the value of model property environmentAction
	 * @param environmentAction from OpenSCENARIO class model specification: [Sets the weather state, road conditions, and time
	 * of the day.]
	 * 
	*/
        void SetEnvironmentAction (std::shared_ptr<IEnvironmentAction>& environmentAction );
	/**
	 * Sets the value of model property entityAction
	 * @param entityAction from OpenSCENARIO class model specification: [Removing or adding entities.]
	 * 
	*/
        void SetEntityAction (std::shared_ptr<IEntityAction>& entityAction );
	/**
	 * Sets the value of model property parameterAction
	 * @param parameterAction from OpenSCENARIO class model specification: [Setting/modifying values of parameters.]
	 * 
	*/
        void SetParameterAction (std::shared_ptr<IParameterAction>& parameterAction );
	/**
	 * Sets the value of model property infrastructureAction
	 * @param infrastructureAction from OpenSCENARIO class model specification: [Setting/modifying traffic signals.]
	 * 
	*/
        void SetInfrastructureAction (std::shared_ptr<IInfrastructureAction>& infrastructureAction );
	/**
	 * Sets the value of model property trafficAction
	 * @param trafficAction from OpenSCENARIO class model specification: [Populating ambient traffic.]
	 * 
	*/
        void SetTrafficAction (std::shared_ptr<ITrafficAction>& trafficAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        GlobalActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInRoutePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInRoutePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InRoutePositionImpl: public BaseImpl, public IInRoutePosition
    {
    private:
        std::shared_ptr<IPositionOfCurrentEntity> _fromCurrentEntity {};
        std::shared_ptr<IPositionInRoadCoordinates> _fromRoadCoordinates {};
        std::shared_ptr<IPositionInLaneCoordinates> _fromLaneCoordinates {};

    public:
        InRoutePositionImpl();

        std::shared_ptr<IPositionOfCurrentEntity> GetFromCurrentEntity() override;
        std::shared_ptr<IPositionInRoadCoordinates> GetFromRoadCoordinates() override;
        std::shared_ptr<IPositionInLaneCoordinates> GetFromLaneCoordinates() override;

	/**
	 * Sets the value of model property fromCurrentEntity
	 * @param fromCurrentEntity from OpenSCENARIO class model specification: [The position is defined through the current 
	 * position of a given entity.]
	 * 
	*/
        void SetFromCurrentEntity (std::shared_ptr<IPositionOfCurrentEntity>& fromCurrentEntity );
	/**
	 * Sets the value of model property fromRoadCoordinates
	 * @param fromRoadCoordinates from OpenSCENARIO class model specification: [Route position in road coordinate system.]
	 * 
	*/
        void SetFromRoadCoordinates (std::shared_ptr<IPositionInRoadCoordinates>& fromRoadCoordinates );
	/**
	 * Sets the value of model property fromLaneCoordinates
	 * @param fromLaneCoordinates from OpenSCENARIO class model specification: [Route position in lane coordinate system.]
	 * 
	*/
        void SetFromLaneCoordinates (std::shared_ptr<IPositionInLaneCoordinates>& fromLaneCoordinates );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        InRoutePositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInfrastructureAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInfrastructureAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InfrastructureActionImpl: public BaseImpl, public IInfrastructureAction
    {
    private:
        std::shared_ptr<ITrafficSignalAction> _trafficSignalAction {};

    public:
        InfrastructureActionImpl();

        std::shared_ptr<ITrafficSignalAction> GetTrafficSignalAction() override;

	/**
	 * Sets the value of model property trafficSignalAction
	 * @param trafficSignalAction from OpenSCENARIO class model specification: [Set or overwrite a signals state or a signal 
	 * controllers state from a road network.]
	 * 
	*/
        void SetTrafficSignalAction (std::shared_ptr<ITrafficSignalAction>& trafficSignalAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        InfrastructureActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInit. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInit)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InitImpl: public BaseImpl, public IInit
    {
    private:
        std::shared_ptr<IInitActions> _actions {};

    public:
        InitImpl();

        std::shared_ptr<IInitActions> GetActions() override;

	/**
	 * Sets the value of model property actions
	 * @param actions from OpenSCENARIO class model specification: [A list of actions initially executed when the enclosing 
	 * storyboard starts.]
	 * 
	*/
        void SetActions (std::shared_ptr<IInitActions>& actions );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        InitImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInitActions. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInitActions)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class InitActionsImpl: public BaseImpl, public IInitActions
    {
    private:
        std::vector<std::shared_ptr<IGlobalAction>> _globalActions {};
        std::vector<std::shared_ptr<IUserDefinedAction>> _userDefinedActions {};
        std::vector<std::shared_ptr<IPrivate>> _privates {};

    public:
        InitActionsImpl();

        std::vector<std::shared_ptr<IGlobalAction>> GetGlobalActions() override;
        std::vector<std::shared_ptr<IUserDefinedAction>> GetUserDefinedActions() override;
        std::vector<std::shared_ptr<IPrivate>> GetPrivates() override;

	/**
	 * Sets the value of model property globalActions
	 * @param globalActions from OpenSCENARIO class model specification: [An optional list of global actions.]
	 * 
	*/
        void SetGlobalActions(std::vector<std::shared_ptr<IGlobalAction>>& globalActions);
	/**
	 * Sets the value of model property userDefinedActions
	 * @param userDefinedActions from OpenSCENARIO class model specification: [An optional list of user defined actions.]
	 * 
	*/
        void SetUserDefinedActions(std::vector<std::shared_ptr<IUserDefinedAction>>& userDefinedActions);
	/**
	 * Sets the value of model property privates
	 * @param privates from OpenSCENARIO class model specification: [An optional list of private actions.]
	 * 
	*/
        void SetPrivates(std::vector<std::shared_ptr<IPrivate>>& privates);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        InitActionsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IKnot. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IKnot)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class KnotImpl: public BaseImpl, public IKnot
    {
    private:
        double _value {};

    public:
        KnotImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Knot vector value. Range ]-inf..inf[.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        KnotImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneChangeAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneChangeAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneChangeActionImpl: public BaseImpl, public ILaneChangeAction
    {
    private:
        double _targetLaneOffset {};
        std::shared_ptr<ITransitionDynamics> _laneChangeActionDynamics {};
        std::shared_ptr<ILaneChangeTarget> _laneChangeTarget {};

    public:
        LaneChangeActionImpl();

        double GetTargetLaneOffset() override;
        std::shared_ptr<ITransitionDynamics> GetLaneChangeActionDynamics() override;
        std::shared_ptr<ILaneChangeTarget> GetLaneChangeTarget() override;

	/**
	 * Sets the value of model property targetLaneOffset
	 * @param targetLaneOffset from OpenSCENARIO class model specification: [Lane offset to be reached at the target lane; the 
	 * action will end there. Unit: m.]
	 * 
	*/
        void SetTargetLaneOffset (double& targetLaneOffset );
	/**
	 * Sets the value of model property laneChangeActionDynamics
	 * @param laneChangeActionDynamics from OpenSCENARIO class model specification: [Shape/time of lane change action.]
	 * 
	*/
        void SetLaneChangeActionDynamics (std::shared_ptr<ITransitionDynamics>& laneChangeActionDynamics );
	/**
	 * Sets the value of model property laneChangeTarget
	 * @param laneChangeTarget from OpenSCENARIO class model specification: [Direction of lane change action.]
	 * 
	*/
        void SetLaneChangeTarget (std::shared_ptr<ILaneChangeTarget>& laneChangeTarget );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LaneChangeActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneChangeTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneChangeTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneChangeTargetImpl: public BaseImpl, public ILaneChangeTarget
    {
    private:
        std::shared_ptr<IRelativeTargetLane> _relativeTargetLane {};
        std::shared_ptr<IAbsoluteTargetLane> _absoluteTargetLane {};

    public:
        LaneChangeTargetImpl();

        std::shared_ptr<IRelativeTargetLane> GetRelativeTargetLane() override;
        std::shared_ptr<IAbsoluteTargetLane> GetAbsoluteTargetLane() override;

	/**
	 * Sets the value of model property relativeTargetLane
	 * @param relativeTargetLane from OpenSCENARIO class model specification: [Lane change direction relative to entity's 
	 * lane.]
	 * 
	*/
        void SetRelativeTargetLane (std::shared_ptr<IRelativeTargetLane>& relativeTargetLane );
	/**
	 * Sets the value of model property absoluteTargetLane
	 * @param absoluteTargetLane from OpenSCENARIO class model specification: [Lane change target lane number.]
	 * 
	*/
        void SetAbsoluteTargetLane (std::shared_ptr<IAbsoluteTargetLane>& absoluteTargetLane );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LaneChangeTargetImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneOffsetAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneOffsetAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneOffsetActionImpl: public BaseImpl, public ILaneOffsetAction
    {
    private:
        bool _continuous {};
        std::shared_ptr<ILaneOffsetActionDynamics> _laneOffsetActionDynamics {};
        std::shared_ptr<ILaneOffsetTarget> _laneOffsetTarget {};

    public:
        LaneOffsetActionImpl();

        bool GetContinuous() override;
        std::shared_ptr<ILaneOffsetActionDynamics> GetLaneOffsetActionDynamics() override;
        std::shared_ptr<ILaneOffsetTarget> GetLaneOffsetTarget() override;

	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target lane is 
	 * reached. If true it does not end but has to be stopped.]
	 * 
	*/
        void SetContinuous (bool& continuous );
	/**
	 * Sets the value of model property laneOffsetActionDynamics
	 * @param laneOffsetActionDynamics from OpenSCENARIO class model specification: [Parameters defining the dynamics of the 
	 * LaneOffsetAction.]
	 * 
	*/
        void SetLaneOffsetActionDynamics (std::shared_ptr<ILaneOffsetActionDynamics>& laneOffsetActionDynamics );
	/**
	 * Sets the value of model property laneOffsetTarget
	 * @param laneOffsetTarget from OpenSCENARIO class model specification: [Parameters indicating if the lane offset is 
	 * defined relative to another entity or absolute to the current lane's center , line.]
	 * 
	*/
        void SetLaneOffsetTarget (std::shared_ptr<ILaneOffsetTarget>& laneOffsetTarget );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LaneOffsetActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneOffsetActionDynamics. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneOffsetActionDynamics)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneOffsetActionDynamicsImpl: public BaseImpl, public ILaneOffsetActionDynamics
    {
    private:
        double _maxLateralAcc {};
        DynamicsShape _dynamicsShape {};

    public:
        LaneOffsetActionDynamicsImpl();

        double GetMaxLateralAcc() override;
        DynamicsShape GetDynamicsShape() override;

	/**
	 * Sets the value of model property maxLateralAcc
	 * @param maxLateralAcc from OpenSCENARIO class model specification: [Maximum lateral acceleration used to initially reach 
	 * and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
        void SetMaxLateralAcc (double& maxLateralAcc );
	/**
	 * Sets the value of model property dynamicsShape
	 * @param dynamicsShape from OpenSCENARIO class model specification: [Geometrical shape of the LaneOffsetAction's 
	 * dynamics.]
	 * 
	*/
        void SetDynamicsShape (DynamicsShape& dynamicsShape );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LaneOffsetActionDynamicsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneOffsetTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneOffsetTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LaneOffsetTargetImpl: public BaseImpl, public ILaneOffsetTarget
    {
    private:
        std::shared_ptr<IRelativeTargetLaneOffset> _relativeTargetLaneOffset {};
        std::shared_ptr<IAbsoluteTargetLaneOffset> _absoluteTargetLaneOffset {};

    public:
        LaneOffsetTargetImpl();

        std::shared_ptr<IRelativeTargetLaneOffset> GetRelativeTargetLaneOffset() override;
        std::shared_ptr<IAbsoluteTargetLaneOffset> GetAbsoluteTargetLaneOffset() override;

	/**
	 * Sets the value of model property relativeTargetLaneOffset
	 * @param relativeTargetLaneOffset from OpenSCENARIO class model specification: [Relative reference to the lane position of
	 * a specific entity.]
	 * 
	*/
        void SetRelativeTargetLaneOffset (std::shared_ptr<IRelativeTargetLaneOffset>& relativeTargetLaneOffset );
	/**
	 * Sets the value of model property absoluteTargetLaneOffset
	 * @param absoluteTargetLaneOffset from OpenSCENARIO class model specification: [Absolute reference to the current lane's 
	 * center line.]
	 * 
	*/
        void SetAbsoluteTargetLaneOffset (std::shared_ptr<IAbsoluteTargetLaneOffset>& absoluteTargetLaneOffset );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LaneOffsetTargetImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILanePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILanePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LanePositionImpl: public BaseImpl, public ILanePosition
    {
    private:
        std::string _roadId {};
        std::string _laneId {};
        double _offset {};
        double _s {};
        std::shared_ptr<IOrientation> _orientation {};

    public:
        LanePositionImpl();

        std::string GetRoadId() override;
        std::string GetLaneId() override;
        double GetOffset() override;
        double GetS() override;
        std::shared_ptr<IOrientation> GetOrientation() override;

	/**
	 * Sets the value of model property roadId
	 * @param roadId from OpenSCENARIO class model specification: [ID of the current road (ID of a road in road network).]
	 * 
	*/
        void SetRoadId (std::string& roadId );
	/**
	 * Sets the value of model property laneId
	 * @param laneId from OpenSCENARIO class model specification: [ID of the current lane (ID of a lane in road network).]
	 * 
	*/
        void SetLaneId (std::string& laneId );
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Lateral offset to the centerline of the current lane. Unit: 
	 * m.]
	 * 
	*/
        void SetOffset (double& offset );
	/**
	 * Sets the value of model property s
	 * @param s from OpenSCENARIO class model specification: [The s coordinate of the current position. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetS (double& s );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LanePositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILateralAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILateralAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LateralActionImpl: public BaseImpl, public ILateralAction
    {
    private:
        std::shared_ptr<ILaneChangeAction> _laneChangeAction {};
        std::shared_ptr<ILaneOffsetAction> _laneOffsetAction {};
        std::shared_ptr<ILateralDistanceAction> _lateralDistanceAction {};

    public:
        LateralActionImpl();

        std::shared_ptr<ILaneChangeAction> GetLaneChangeAction() override;
        std::shared_ptr<ILaneOffsetAction> GetLaneOffsetAction() override;
        std::shared_ptr<ILateralDistanceAction> GetLateralDistanceAction() override;

	/**
	 * Sets the value of model property laneChangeAction
	 * @param laneChangeAction from OpenSCENARIO class model specification: [Action defining a lane change.]
	 * 
	*/
        void SetLaneChangeAction (std::shared_ptr<ILaneChangeAction>& laneChangeAction );
	/**
	 * Sets the value of model property laneOffsetAction
	 * @param laneOffsetAction from OpenSCENARIO class model specification: [Action defining a continuously kept lane offset.]
	 * 
	*/
        void SetLaneOffsetAction (std::shared_ptr<ILaneOffsetAction>& laneOffsetAction );
	/**
	 * Sets the value of model property lateralDistanceAction
	 * @param lateralDistanceAction from OpenSCENARIO class model specification: [Action defining a continuously kept lateral 
	 * distance to a specific entity.]
	 * 
	*/
        void SetLateralDistanceAction (std::shared_ptr<ILateralDistanceAction>& lateralDistanceAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LateralActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILateralDistanceAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILateralDistanceAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LateralDistanceActionImpl: public BaseImpl, public ILateralDistanceAction
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _distance {};
        bool _freespace {};
        bool _continuous {};
        std::shared_ptr<IDynamicConstraints> _dynamicConstraints {};

    public:
        LateralDistanceActionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetDistance() override;
        bool GetFreespace() override;
        bool GetContinuous() override;
        std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity the lateral distance shall 
	 * be kept to.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property distance
	 * @param distance from OpenSCENARIO class model specification: [Lateral distance value. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetDistance (double& distance );
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: Lateral distance is measured using the distance 
	 * between closest bounding box points. False: Reference point , distance is used.]
	 * 
	*/
        void SetFreespace (bool& freespace );
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target distance is 
	 * reached. If true it does not end and can only be stopped.]
	 * 
	*/
        void SetContinuous (bool& continuous );
	/**
	 * Sets the value of model property dynamicConstraints
	 * @param dynamicConstraints from OpenSCENARIO class model specification: [Parameter that assigns either unlimited dynamics
	 * (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the, action.]
	 * 
	*/
        void SetDynamicConstraints (std::shared_ptr<IDynamicConstraints>& dynamicConstraints );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LateralDistanceActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILongitudinalAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILongitudinalAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LongitudinalActionImpl: public BaseImpl, public ILongitudinalAction
    {
    private:
        std::shared_ptr<ISpeedAction> _speedAction {};
        std::shared_ptr<ILongitudinalDistanceAction> _longitudinalDistanceAction {};

    public:
        LongitudinalActionImpl();

        std::shared_ptr<ISpeedAction> GetSpeedAction() override;
        std::shared_ptr<ILongitudinalDistanceAction> GetLongitudinalDistanceAction() override;

	/**
	 * Sets the value of model property speedAction
	 * @param speedAction from OpenSCENARIO class model specification: [This action describes the transition between the 
	 * current longitudinal speed of an entity and its target speed.]
	 * 
	*/
        void SetSpeedAction (std::shared_ptr<ISpeedAction>& speedAction );
	/**
	 * Sets the value of model property longitudinalDistanceAction
	 * @param longitudinalDistanceAction from OpenSCENARIO class model specification: [This Action defines a continuously kept 
	 * longitudinal distance to a specific entity.]
	 * 
	*/
        void SetLongitudinalDistanceAction (std::shared_ptr<ILongitudinalDistanceAction>& longitudinalDistanceAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LongitudinalActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILongitudinalDistanceAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILongitudinalDistanceAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class LongitudinalDistanceActionImpl: public BaseImpl, public ILongitudinalDistanceAction
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _distance {};
        double _timeGap {};
        bool _freespace {};
        bool _continuous {};
        std::shared_ptr<IDynamicConstraints> _dynamicConstraints {};

    public:
        LongitudinalDistanceActionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetDistance() override;
        double GetTimeGap() override;
        bool GetFreespace() override;
        bool GetContinuous() override;
        std::shared_ptr<IDynamicConstraints> GetDynamicConstraints() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity the distance shall be kept to.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property distance
	 * @param distance from OpenSCENARIO class model specification: [Distance value, not to be used together with timeGap 
	 * attribute. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetDistance (double& distance );
	/**
	 * Sets the value of model property timeGap
	 * @param timeGap from OpenSCENARIO class model specification: [Time gap value, not to be used together with distance 
	 * attribute. Unit: s; Range: [0..inf[.]
	 * 
	*/
        void SetTimeGap (double& timeGap );
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: Distance is measured using the distance between 
	 * closest bounding box points False: Reference point distance is , used.]
	 * 
	*/
        void SetFreespace (bool& freespace );
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target distance is 
	 * reached. If true it does not end and can only be stopped.]
	 * 
	*/
        void SetContinuous (bool& continuous );
	/**
	 * Sets the value of model property dynamicConstraints
	 * @param dynamicConstraints from OpenSCENARIO class model specification: [Parameter that assigns either unlimited dynamics
	 * (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to , the action.]
	 * 
	*/
        void SetDynamicConstraints (std::shared_ptr<IDynamicConstraints>& dynamicConstraints );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        LongitudinalDistanceActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IManeuver. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IManeuver)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ManeuverImpl: public BaseImpl, public IManeuver
    {
    private:
        std::string _name {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::vector<std::shared_ptr<IEvent>> _events {};

    public:
        ManeuverImpl();

        std::string GetName() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::vector<std::shared_ptr<IEvent>> GetEvents() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the maneuver.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property events
	 * @param events from OpenSCENARIO class model specification: [List of events that are comprised by the maneuver.]
	 * 
	*/
        void SetEvents(std::vector<std::shared_ptr<IEvent>>& events);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ManeuverImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IManeuverCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IManeuverCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ManeuverCatalogLocationImpl: public BaseImpl, public IManeuverCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        ManeuverCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ManeuverCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IManeuverGroup. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IManeuverGroup)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ManeuverGroupImpl: public BaseImpl, public IManeuverGroup
    {
    private:
        unsigned int _maximumExecutionCount {};
        std::string _name {};
        std::shared_ptr<IActors> _actors {};
        std::vector<std::shared_ptr<ICatalogReference>> _catalogReferences {};
        std::vector<std::shared_ptr<IManeuver>> _maneuvers {};

    public:
        ManeuverGroupImpl();

        unsigned int GetMaximumExecutionCount() override;
        std::string GetName() override;
        std::shared_ptr<IActors> GetActors() override;
        std::vector<std::shared_ptr<ICatalogReference>> GetCatalogReferences() override;
        std::vector<std::shared_ptr<IManeuver>> GetManeuvers() override;

	/**
	 * Sets the value of model property maximumExecutionCount
	 * @param maximumExecutionCount from OpenSCENARIO class model specification: [Number of allowed executions of the maneuver 
	 * group. Default value is 1. Range: [1..inf[.]
	 * 
	*/
        void SetMaximumExecutionCount (unsigned int& maximumExecutionCount );
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the maneuver group.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property actors
	 * @param actors from OpenSCENARIO class model specification: [Actors of the maneuver group.]
	 * 
	*/
        void SetActors (std::shared_ptr<IActors>& actors );
	/**
	 * Sets the value of model property catalogReferences
	 * @param catalogReferences from OpenSCENARIO class model specification: [Each element of this list of must reference a 
	 * maneuver type in a catalog.]
	 * 
	*/
        void SetCatalogReferences(std::vector<std::shared_ptr<ICatalogReference>>& catalogReferences);
	/**
	 * Sets the value of model property maneuvers
	 * @param maneuvers from OpenSCENARIO class model specification: [Maneuver type definitions.]
	 * 
	*/
        void SetManeuvers(std::vector<std::shared_ptr<IManeuver>>& maneuvers);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ManeuverGroupImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IMiscObject. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IMiscObject)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class MiscObjectImpl: public BaseImpl, public IMiscObject
    {
    private:
        MiscObjectCategory _miscObjectCategory {};
        double _mass {};
        std::string _name {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<IBoundingBox> _boundingBox {};
        std::shared_ptr<IProperties> _properties {};

    public:
        MiscObjectImpl();

        MiscObjectCategory GetMiscObjectCategory() override;
        double GetMass() override;
        std::string GetName() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<IBoundingBox> GetBoundingBox() override;
        std::shared_ptr<IProperties> GetProperties() override;

	/**
	 * Sets the value of model property miscObjectCategory
	 * @param miscObjectCategory from OpenSCENARIO class model specification: [Categorization of the miscellaneous object.]
	 * 
	*/
        void SetMiscObjectCategory (MiscObjectCategory& miscObjectCategory );
	/**
	 * Sets the value of model property mass
	 * @param mass from OpenSCENARIO class model specification: [Mass of the miscellaneous object. Unit: kg; Range: [0..inf[.]
	 * 
	*/
        void SetMass (double& mass );
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the miscellaneous object type.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Bounding box definition for the miscellaneous object.]
	 * 
	*/
        void SetBoundingBox (std::shared_ptr<IBoundingBox>& boundingBox );
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Property definitions for the miscellaneous object.]
	 * 
	*/
        void SetProperties (std::shared_ptr<IProperties>& properties );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        MiscObjectImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IMiscObjectCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IMiscObjectCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class MiscObjectCatalogLocationImpl: public BaseImpl, public IMiscObjectCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        MiscObjectCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        MiscObjectCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IModifyRule. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IModifyRule)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ModifyRuleImpl: public BaseImpl, public IModifyRule
    {
    private:
        std::shared_ptr<IParameterAddValueRule> _addValue {};
        std::shared_ptr<IParameterMultiplyByValueRule> _multiplyByValue {};

    public:
        ModifyRuleImpl();

        std::shared_ptr<IParameterAddValueRule> GetAddValue() override;
        std::shared_ptr<IParameterMultiplyByValueRule> GetMultiplyByValue() override;

	/**
	 * Sets the value of model property addValue
	 * @param addValue from OpenSCENARIO class model specification: [Adding a value to a parameter.]
	 * 
	*/
        void SetAddValue (std::shared_ptr<IParameterAddValueRule>& addValue );
	/**
	 * Sets the value of model property multiplyByValue
	 * @param multiplyByValue from OpenSCENARIO class model specification: [Multiply a parameter by a value.]
	 * 
	*/
        void SetMultiplyByValue (std::shared_ptr<IParameterMultiplyByValueRule>& multiplyByValue );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ModifyRuleImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements INone. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of INone)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class NoneImpl: public BaseImpl, public INone
    {
    private:

    public:
        NoneImpl();



        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        NoneImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements INurbs. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of INurbs)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class NurbsImpl: public BaseImpl, public INurbs
    {
    private:
        unsigned int _order {};
        std::vector<std::shared_ptr<IControlPoint>> _controlPoints {};
        std::vector<std::shared_ptr<IKnot>> _knots {};

    public:
        NurbsImpl();

        unsigned int GetOrder() override;
        std::vector<std::shared_ptr<IControlPoint>> GetControlPoints() override;
        std::vector<std::shared_ptr<IKnot>> GetKnots() override;

	/**
	 * Sets the value of model property order
	 * @param order from OpenSCENARIO class model specification: [Order of the NURBS trajectory. This is the order of the 
	 * curve, not the degree of the polynomials, which will be one less, than the order of the curve. Range [2..inf[.]
	 * 
	*/
        void SetOrder (unsigned int& order );
	/**
	 * Sets the value of model property controlPoints
	 * @param controlPoints from OpenSCENARIO class model specification: [Control point vector of the NURBS trajectory. The 
	 * number of control points must be greater or equal to the order of the , curve.]
	 * 
	*/
        void SetControlPoints(std::vector<std::shared_ptr<IControlPoint>>& controlPoints);
	/**
	 * Sets the value of model property knots
	 * @param knots from OpenSCENARIO class model specification: [Knot vector of the NURBS trajectory. Knot values must be 
	 * given in ascending order. The number of knot vector values must, be equal to the number of control points plus the order
	 * of the curve.]
	 * 
	*/
        void SetKnots(std::vector<std::shared_ptr<IKnot>>& knots);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        NurbsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IObjectController. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IObjectController)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ObjectControllerImpl: public BaseImpl, public IObjectController
    {
    private:
        std::shared_ptr<ICatalogReference> _catalogReference {};
        std::shared_ptr<IController> _controller {};

    public:
        ObjectControllerImpl();

        std::shared_ptr<ICatalogReference> GetCatalogReference() override;
        std::shared_ptr<IController> GetController() override;

	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Catalog reference to a controller.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );
	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [Controller type definition.]
	 * 
	*/
        void SetController (std::shared_ptr<IController>& controller );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ObjectControllerImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOffroadCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOffroadCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OffroadConditionImpl: public BaseImpl, public IOffroadCondition
    {
    private:
        double _duration {};

    public:
        OffroadConditionImpl();

        double GetDuration() override;

	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Amount of time of driving offroad. Unit: s; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetDuration (double& duration );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OffroadConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOpenScenario. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOpenScenario)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OpenScenarioImpl: public BaseImpl, public IOpenScenario
    {
    private:
        std::shared_ptr<IFileHeader> _fileHeader {};
        std::shared_ptr<IOpenScenarioCategory> _openScenarioCategory {};

    public:
        OpenScenarioImpl();

        std::shared_ptr<IFileHeader> GetFileHeader() override;
        std::shared_ptr<IOpenScenarioCategory> GetOpenScenarioCategory() override;

	/**
	 * Sets the value of model property fileHeader
	 * @param fileHeader from OpenSCENARIO class model specification: [Header information for the scenario or the catalog.]
	 * 
	*/
        void SetFileHeader (std::shared_ptr<IFileHeader>& fileHeader );
	/**
	 * Sets the value of model property openScenarioCategory
	 * @param openScenarioCategory from OpenSCENARIO class model specification: [Category (catalog or scenario) of the 
	 * OpenSCENARIO description.]
	 * 
	*/
        void SetOpenScenarioCategory (std::shared_ptr<IOpenScenarioCategory>& openScenarioCategory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OpenScenarioImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOpenScenarioCategory. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOpenScenarioCategory)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OpenScenarioCategoryImpl: public BaseImpl, public IOpenScenarioCategory
    {
    private:
        std::shared_ptr<IScenarioDefinition> _scenarioDefinition {};
        std::shared_ptr<ICatalogDefinition> _catalogDefinition {};

    public:
        OpenScenarioCategoryImpl();

        std::shared_ptr<IScenarioDefinition> GetScenarioDefinition() override;
        std::shared_ptr<ICatalogDefinition> GetCatalogDefinition() override;

	/**
	 * Sets the value of model property scenarioDefinition
	 * @param scenarioDefinition from OpenSCENARIO class model specification: [Definition of a scenario.]
	 * 
	*/
        void SetScenarioDefinition (std::shared_ptr<IScenarioDefinition>& scenarioDefinition );
	/**
	 * Sets the value of model property catalogDefinition
	 * @param catalogDefinition from OpenSCENARIO class model specification: [Definition of a catalog.]
	 * 
	*/
        void SetCatalogDefinition (std::shared_ptr<ICatalogDefinition>& catalogDefinition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OpenScenarioCategoryImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOrientation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOrientation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OrientationImpl: public BaseImpl, public IOrientation
    {
    private:
        ReferenceContext _type {};
        double _h {};
        double _p {};
        double _r {};

    public:
        OrientationImpl();

        ReferenceContext GetType() override;
        double GetH() override;
        double GetP() override;
        double GetR() override;

	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Relative or absolute definition.]
	 * 
	*/
        void SetType (ReferenceContext& type );
	/**
	 * Sets the value of model property h
	 * @param h from OpenSCENARIO class model specification: [Heading angle. Unit: rad;.]
	 * 
	*/
        void SetH (double& h );
	/**
	 * Sets the value of model property p
	 * @param p from OpenSCENARIO class model specification: [Pitch angle. Unit: rad;.]
	 * 
	*/
        void SetP (double& p );
	/**
	 * Sets the value of model property r
	 * @param r from OpenSCENARIO class model specification: [Roll angle. Unit: rad;.]
	 * 
	*/
        void SetR (double& r );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OrientationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideBrakeAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideBrakeAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideBrakeActionImpl: public BaseImpl, public IOverrideBrakeAction
    {
    private:
        double _value {};
        bool _active {};

    public:
        OverrideBrakeActionImpl();

        double GetValue() override;
        bool GetActive() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Brake pedal value. Range: [0..1]. 0 represents 0%, 1 
	 * represents 100% of pressing the brake pedal.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
        void SetActive (bool& active );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideBrakeActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideClutchAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideClutchAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideClutchActionImpl: public BaseImpl, public IOverrideClutchAction
    {
    private:
        double _value {};
        bool _active {};

    public:
        OverrideClutchActionImpl();

        double GetValue() override;
        bool GetActive() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 
	 * represents 100% of pressing the clutch pedal.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
        void SetActive (bool& active );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideClutchActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideControllerValueAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideControllerValueAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideControllerValueActionImpl: public BaseImpl, public IOverrideControllerValueAction
    {
    private:
        std::shared_ptr<IOverrideThrottleAction> _throttle {};
        std::shared_ptr<IOverrideBrakeAction> _brake {};
        std::shared_ptr<IOverrideClutchAction> _clutch {};
        std::shared_ptr<IOverrideParkingBrakeAction> _parkingBrake {};
        std::shared_ptr<IOverrideSteeringWheelAction> _steeringWheel {};
        std::shared_ptr<IOverrideGearAction> _gear {};

    public:
        OverrideControllerValueActionImpl();

        std::shared_ptr<IOverrideThrottleAction> GetThrottle() override;
        std::shared_ptr<IOverrideBrakeAction> GetBrake() override;
        std::shared_ptr<IOverrideClutchAction> GetClutch() override;
        std::shared_ptr<IOverrideParkingBrakeAction> GetParkingBrake() override;
        std::shared_ptr<IOverrideSteeringWheelAction> GetSteeringWheel() override;
        std::shared_ptr<IOverrideGearAction> GetGear() override;

	/**
	 * Sets the value of model property throttle
	 * @param throttle from OpenSCENARIO class model specification: [New value for throttle pedal position or unset value.]
	 * 
	*/
        void SetThrottle (std::shared_ptr<IOverrideThrottleAction>& throttle );
	/**
	 * Sets the value of model property brake
	 * @param brake from OpenSCENARIO class model specification: [New value for brake position or unset value.]
	 * 
	*/
        void SetBrake (std::shared_ptr<IOverrideBrakeAction>& brake );
	/**
	 * Sets the value of model property clutch
	 * @param clutch from OpenSCENARIO class model specification: [New value for clutch position or unset value.]
	 * 
	*/
        void SetClutch (std::shared_ptr<IOverrideClutchAction>& clutch );
	/**
	 * Sets the value of model property parkingBrake
	 * @param parkingBrake from OpenSCENARIO class model specification: [New value for parking brake position or unset value.]
	 * 
	*/
        void SetParkingBrake (std::shared_ptr<IOverrideParkingBrakeAction>& parkingBrake );
	/**
	 * Sets the value of model property steeringWheel
	 * @param steeringWheel from OpenSCENARIO class model specification: [New value for steering wheel position or unset 
	 * value.]
	 * 
	*/
        void SetSteeringWheel (std::shared_ptr<IOverrideSteeringWheelAction>& steeringWheel );
	/**
	 * Sets the value of model property gear
	 * @param gear from OpenSCENARIO class model specification: [New value for gear position or unset value.]
	 * 
	*/
        void SetGear (std::shared_ptr<IOverrideGearAction>& gear );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideControllerValueActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideGearAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideGearAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideGearActionImpl: public BaseImpl, public IOverrideGearAction
    {
    private:
        double _number {};
        bool _active {};

    public:
        OverrideGearActionImpl();

        double GetNumber() override;
        bool GetActive() override;

	/**
	 * Sets the value of model property number
	 * @param number from OpenSCENARIO class model specification: [Gear number.]
	 * 
	*/
        void SetNumber (double& number );
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
        void SetActive (bool& active );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideGearActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideParkingBrakeAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideParkingBrakeAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideParkingBrakeActionImpl: public BaseImpl, public IOverrideParkingBrakeAction
    {
    private:
        double _value {};
        bool _active {};

    public:
        OverrideParkingBrakeActionImpl();

        double GetValue() override;
        bool GetActive() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Parking brake value. Unit: %; Range: [0..1]. The value 1 
	 * represent the maximum parking brake state.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
        void SetActive (bool& active );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideParkingBrakeActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideSteeringWheelAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideSteeringWheelAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideSteeringWheelActionImpl: public BaseImpl, public IOverrideSteeringWheelAction
    {
    private:
        double _value {};
        bool _active {};

    public:
        OverrideSteeringWheelActionImpl();

        double GetValue() override;
        bool GetActive() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Steering wheel angle. Unit: rad.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
        void SetActive (bool& active );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideSteeringWheelActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideThrottleAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideThrottleAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class OverrideThrottleActionImpl: public BaseImpl, public IOverrideThrottleAction
    {
    private:
        double _value {};
        bool _active {};

    public:
        OverrideThrottleActionImpl();

        double GetValue() override;
        bool GetActive() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Throttle pedal value. Range: [0..1].0 represents 0%, 1 
	 * represents 100% of pressing the throttle pedal.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
        void SetActive (bool& active );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        OverrideThrottleActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterActionImpl: public BaseImpl, public IParameterAction
    {
    private:
        NamedReferenceProxy<IParameterDeclaration> _parameterRef {};
        std::shared_ptr<IParameterSetAction> _setAction {};
        std::shared_ptr<IParameterModifyAction> _modifyAction {};

    public:
        ParameterActionImpl();

        INamedReference<IParameterDeclaration>* GetParameterRef() override;
        std::shared_ptr<IParameterSetAction> GetSetAction() override;
        std::shared_ptr<IParameterModifyAction> GetModifyAction() override;

	/**
	 * Sets the value of model property parameterRef
	 * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter.]
	 * 
	*/
        void SetParameterRef (NamedReferenceProxy<IParameterDeclaration>& parameterRef );
	/**
	 * Sets the value of model property setAction
	 * @param setAction from OpenSCENARIO class model specification: [New value for the parameter.]
	 * 
	*/
        void SetSetAction (std::shared_ptr<IParameterSetAction>& setAction );
	/**
	 * Sets the value of model property modifyAction
	 * @param modifyAction from OpenSCENARIO class model specification: [Modifying rule for the parameter (Add value or 
	 * multiply by value).]
	 * 
	*/
        void SetModifyAction (std::shared_ptr<IParameterModifyAction>& modifyAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterAddValueRule. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterAddValueRule)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterAddValueRuleImpl: public BaseImpl, public IParameterAddValueRule
    {
    private:
        double _value {};

    public:
        ParameterAddValueRuleImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Add value to existing parameter.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterAddValueRuleImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterAssignment. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterAssignment)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterAssignmentImpl: public BaseImpl, public IParameterAssignment
    {
    private:
        NamedReferenceProxy<IParameterDeclaration> _parameterRef {};
        std::string _value {};

    public:
        ParameterAssignmentImpl();

        INamedReference<IParameterDeclaration>* GetParameterRef() override;
        std::string GetValue() override;

	/**
	 * Sets the value of model property parameterRef
	 * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter that must be declared in the 
	 * catalog.]
	 * 
	*/
        void SetParameterRef (NamedReferenceProxy<IParameterDeclaration>& parameterRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the parameter that is handed over to the 
	 * parametrizable type.]
	 * 
	*/
        void SetValue (std::string& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterAssignmentImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterConditionImpl: public BaseImpl, public IParameterCondition
    {
    private:
        NamedReferenceProxy<IParameterDeclaration> _parameterRef {};
        std::string _value {};
        Rule _rule {};

    public:
        ParameterConditionImpl();

        INamedReference<IParameterDeclaration>* GetParameterRef() override;
        std::string GetValue() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property parameterRef
	 * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter that must be defined.]
	 * 
	*/
        void SetParameterRef (NamedReferenceProxy<IParameterDeclaration>& parameterRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the parameter.]
	 * 
	*/
        void SetValue (std::string& value );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterDeclaration. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterDeclaration)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterDeclarationImpl: public BaseImpl, public IParameterDeclaration
    {
    private:
        std::string _name {};
        ParameterType _parameterType {};
        std::string _value {};

    public:
        ParameterDeclarationImpl();

        std::string GetName() override;
        ParameterType GetParameterType() override;
        std::string GetValue() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the parameter.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property parameterType
	 * @param parameterType from OpenSCENARIO class model specification: [Type of the parameter.]
	 * 
	*/
        void SetParameterType (ParameterType& parameterType );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the parameter as its default value.]
	 * 
	*/
        void SetValue (std::string& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterDeclarationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterModifyAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterModifyAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterModifyActionImpl: public BaseImpl, public IParameterModifyAction
    {
    private:
        std::shared_ptr<IModifyRule> _rule {};

    public:
        ParameterModifyActionImpl();

        std::shared_ptr<IModifyRule> GetRule() override;

	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [Either adding a value to a parameter or multiply a parameter 
	 * by a value. Has to match the parameter type.]
	 * 
	*/
        void SetRule (std::shared_ptr<IModifyRule>& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterModifyActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterMultiplyByValueRule. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterMultiplyByValueRule)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterMultiplyByValueRuleImpl: public BaseImpl, public IParameterMultiplyByValueRule
    {
    private:
        double _value {};

    public:
        ParameterMultiplyByValueRuleImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Multiply existing parameter by the value (be aware of the 
	 * parameter data type).]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterMultiplyByValueRuleImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterSetAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterSetAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ParameterSetActionImpl: public BaseImpl, public IParameterSetAction
    {
    private:
        std::string _value {};

    public:
        ParameterSetActionImpl();

        std::string GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The new value for the parameter.]
	 * 
	*/
        void SetValue (std::string& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ParameterSetActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPedestrian. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPedestrian)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PedestrianImpl: public BaseImpl, public IPedestrian
    {
    private:
        std::string _model {};
        double _mass {};
        std::string _name {};
        PedestrianCategory _pedestrianCategory {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<IBoundingBox> _boundingBox {};
        std::shared_ptr<IProperties> _properties {};

    public:
        PedestrianImpl();

        std::string GetModel() override;
        double GetMass() override;
        std::string GetName() override;
        PedestrianCategory GetPedestrianCategory() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<IBoundingBox> GetBoundingBox() override;
        std::shared_ptr<IProperties> GetProperties() override;

	/**
	 * Sets the value of model property model
	 * @param model from OpenSCENARIO class model specification: [Definition of the model of the pedestrian.]
	 * 
	*/
        void SetModel (std::string& model );
	/**
	 * Sets the value of model property mass
	 * @param mass from OpenSCENARIO class model specification: [The mass of a pedestrian in kg.]
	 * 
	*/
        void SetMass (double& mass );
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the pedestrian type. Required when used in catalog.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property pedestrianCategory
	 * @param pedestrianCategory from OpenSCENARIO class model specification: [Category type of pedestrian.]
	 * 
	*/
        void SetPedestrianCategory (PedestrianCategory& pedestrianCategory );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Bounding box of the pedestrian.]
	 * 
	*/
        void SetBoundingBox (std::shared_ptr<IBoundingBox>& boundingBox );
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Properties (values/files) of the pedestrian.]
	 * 
	*/
        void SetProperties (std::shared_ptr<IProperties>& properties );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PedestrianImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPedestrianCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPedestrianCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PedestrianCatalogLocationImpl: public BaseImpl, public IPedestrianCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        PedestrianCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [File path for the pedestrian catalog files.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PedestrianCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPerformance. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPerformance)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PerformanceImpl: public BaseImpl, public IPerformance
    {
    private:
        double _maxSpeed {};
        double _maxAcceleration {};
        double _maxDeceleration {};

    public:
        PerformanceImpl();

        double GetMaxSpeed() override;
        double GetMaxAcceleration() override;
        double GetMaxDeceleration() override;

	/**
	 * Sets the value of model property maxSpeed
	 * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed of the vehicle. Unit: m/s.]
	 * 
	*/
        void SetMaxSpeed (double& maxSpeed );
	/**
	 * Sets the value of model property maxAcceleration
	 * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration of the vehicle. Unit: m/s^2. 
	 * Range: [0..inf[.]
	 * 
	*/
        void SetMaxAcceleration (double& maxAcceleration );
	/**
	 * Sets the value of model property maxDeceleration
	 * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration of the vehicle. Unit: m/s^2. 
	 * Range: [0..inf[.]
	 * 
	*/
        void SetMaxDeceleration (double& maxDeceleration );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PerformanceImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPhase. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPhase)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PhaseImpl: public BaseImpl, public IPhase
    {
    private:
        std::string _name {};
        double _duration {};
        std::vector<std::shared_ptr<ITrafficSignalState>> _trafficSignalStates {};

    public:
        PhaseImpl();

        std::string GetName() override;
        double GetDuration() override;
        std::vector<std::shared_ptr<ITrafficSignalState>> GetTrafficSignalStates() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the phase.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Duration of the phase. Unit: s; Range: [0..inf[.]
	 * 
	*/
        void SetDuration (double& duration );
	/**
	 * Sets the value of model property trafficSignalStates
	 * @param trafficSignalStates from OpenSCENARIO class model specification: [Each phase has multiple TrafficSignalStates. 
	 * One for each TrafficSignal that is controlled. E.g. phase1 , (trafficSignal1:true;false;false, 
	 * trafficSignal2:false;false;true).]
	 * 
	*/
        void SetTrafficSignalStates(std::vector<std::shared_ptr<ITrafficSignalState>>& trafficSignalStates);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PhaseImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPolyline. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPolyline)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PolylineImpl: public BaseImpl, public IPolyline
    {
    private:
        std::vector<std::shared_ptr<IVertex>> _vertices {};

    public:
        PolylineImpl();

        std::vector<std::shared_ptr<IVertex>> GetVertices() override;

	/**
	 * Sets the value of model property vertices
	 * @param vertices from OpenSCENARIO class model specification: [Ordered chain of vertices of the polygonal chain.]
	 * 
	*/
        void SetVertices(std::vector<std::shared_ptr<IVertex>>& vertices);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PolylineImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionImpl: public BaseImpl, public IPosition
    {
    private:
        std::shared_ptr<IWorldPosition> _worldPosition {};
        std::shared_ptr<IRelativeWorldPosition> _relativeWorldPosition {};
        std::shared_ptr<IRelativeObjectPosition> _relativeObjectPosition {};
        std::shared_ptr<IRoadPosition> _roadPosition {};
        std::shared_ptr<IRelativeRoadPosition> _relativeRoadPosition {};
        std::shared_ptr<ILanePosition> _lanePosition {};
        std::shared_ptr<IRelativeLanePosition> _relativeLanePosition {};
        std::shared_ptr<IRoutePosition> _routePosition {};

    public:
        PositionImpl();

        std::shared_ptr<IWorldPosition> GetWorldPosition() override;
        std::shared_ptr<IRelativeWorldPosition> GetRelativeWorldPosition() override;
        std::shared_ptr<IRelativeObjectPosition> GetRelativeObjectPosition() override;
        std::shared_ptr<IRoadPosition> GetRoadPosition() override;
        std::shared_ptr<IRelativeRoadPosition> GetRelativeRoadPosition() override;
        std::shared_ptr<ILanePosition> GetLanePosition() override;
        std::shared_ptr<IRelativeLanePosition> GetRelativeLanePosition() override;
        std::shared_ptr<IRoutePosition> GetRoutePosition() override;

	/**
	 * Sets the value of model property worldPosition
	 * @param worldPosition from OpenSCENARIO class model specification: [Position that uses global coordinates.]
	 * 
	*/
        void SetWorldPosition (std::shared_ptr<IWorldPosition>& worldPosition );
	/**
	 * Sets the value of model property relativeWorldPosition
	 * @param relativeWorldPosition from OpenSCENARIO class model specification: [Position is given relative to a world 
	 * position.]
	 * 
	*/
        void SetRelativeWorldPosition (std::shared_ptr<IRelativeWorldPosition>& relativeWorldPosition );
	/**
	 * Sets the value of model property relativeObjectPosition
	 * @param relativeObjectPosition from OpenSCENARIO class model specification: [Position is given relative to an entity.]
	 * 
	*/
        void SetRelativeObjectPosition (std::shared_ptr<IRelativeObjectPosition>& relativeObjectPosition );
	/**
	 * Sets the value of model property roadPosition
	 * @param roadPosition from OpenSCENARIO class model specification: [Position in road coordinates (t,s) applied to a given 
	 * road.]
	 * 
	*/
        void SetRoadPosition (std::shared_ptr<IRoadPosition>& roadPosition );
	/**
	 * Sets the value of model property relativeRoadPosition
	 * @param relativeRoadPosition from OpenSCENARIO class model specification: [Position relative to an entity's road position
	 * (ds, dt).]
	 * 
	*/
        void SetRelativeRoadPosition (std::shared_ptr<IRelativeRoadPosition>& relativeRoadPosition );
	/**
	 * Sets the value of model property lanePosition
	 * @param lanePosition from OpenSCENARIO class model specification: [Position that is determined by a lane (lane ID) and 
	 * the s coordinate of a given road.]
	 * 
	*/
        void SetLanePosition (std::shared_ptr<ILanePosition>& lanePosition );
	/**
	 * Sets the value of model property relativeLanePosition
	 * @param relativeLanePosition from OpenSCENARIO class model specification: [Position that is determined relative to the 
	 * lane coordinates of a given entity. (Relative lane and relative s to this , entity).]
	 * 
	*/
        void SetRelativeLanePosition (std::shared_ptr<IRelativeLanePosition>& relativeLanePosition );
	/**
	 * Sets the value of model property routePosition
	 * @param routePosition from OpenSCENARIO class model specification: [Position that is determined by a given route.]
	 * 
	*/
        void SetRoutePosition (std::shared_ptr<IRoutePosition>& routePosition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPositionInLaneCoordinates. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPositionInLaneCoordinates)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionInLaneCoordinatesImpl: public BaseImpl, public IPositionInLaneCoordinates
    {
    private:
        double _pathS {};
        std::string _laneId {};
        double _laneOffset {};

    public:
        PositionInLaneCoordinatesImpl();

        double GetPathS() override;
        std::string GetLaneId() override;
        double GetLaneOffset() override;

	/**
	 * Sets the value of model property pathS
	 * @param pathS from OpenSCENARIO class model specification: [s-coordinate of the actual position. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetPathS (double& pathS );
	/**
	 * Sets the value of model property laneId
	 * @param laneId from OpenSCENARIO class model specification: [Lane ID of the actual position.]
	 * 
	*/
        void SetLaneId (std::string& laneId );
	/**
	 * Sets the value of model property laneOffset
	 * @param laneOffset from OpenSCENARIO class model specification: [Lateral offset (relative to the lane centerline) of the 
	 * actual position. Unit: m.]
	 * 
	*/
        void SetLaneOffset (double& laneOffset );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PositionInLaneCoordinatesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPositionInRoadCoordinates. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPositionInRoadCoordinates)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionInRoadCoordinatesImpl: public BaseImpl, public IPositionInRoadCoordinates
    {
    private:
        double _pathS {};
        double _t {};

    public:
        PositionInRoadCoordinatesImpl();

        double GetPathS() override;
        double GetT() override;

	/**
	 * Sets the value of model property pathS
	 * @param pathS from OpenSCENARIO class model specification: [Position in s coordinates along the reference line of the 
	 * road.]
	 * 
	*/
        void SetPathS (double& pathS );
	/**
	 * Sets the value of model property t
	 * @param t from OpenSCENARIO class model specification: [Position in t coordinates orthogonal to the reference line of the
	 * road.]
	 * 
	*/
        void SetT (double& t );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PositionInRoadCoordinatesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPositionOfCurrentEntity. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPositionOfCurrentEntity)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PositionOfCurrentEntityImpl: public BaseImpl, public IPositionOfCurrentEntity
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};

    public:
        PositionOfCurrentEntityImpl();

        INamedReference<IEntity>* GetEntityRef() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference to an entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PositionOfCurrentEntityImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPrecipitation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPrecipitation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PrecipitationImpl: public BaseImpl, public IPrecipitation
    {
    private:
        PrecipitationType _precipitationType {};
        double _intensity {};

    public:
        PrecipitationImpl();

        PrecipitationType GetPrecipitationType() override;
        double GetIntensity() override;

	/**
	 * Sets the value of model property precipitationType
	 * @param precipitationType from OpenSCENARIO class model specification: [Type of the precipitation.]
	 * 
	*/
        void SetPrecipitationType (PrecipitationType& precipitationType );
	/**
	 * Sets the value of model property intensity
	 * @param intensity from OpenSCENARIO class model specification: [The intensity of the precipitation. Range: [0..1].]
	 * 
	*/
        void SetIntensity (double& intensity );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PrecipitationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPrivate. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPrivate)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PrivateImpl: public BaseImpl, public IPrivate
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        std::vector<std::shared_ptr<IPrivateAction>> _privateActions {};

    public:
        PrivateImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        std::vector<std::shared_ptr<IPrivateAction>> GetPrivateActions() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: []
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property privateActions
	 * @param privateActions from OpenSCENARIO class model specification: [List of private actions to be executed when the 
	 * enclosing container gets triggered.]
	 * 
	*/
        void SetPrivateActions(std::vector<std::shared_ptr<IPrivateAction>>& privateActions);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PrivateImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPrivateAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPrivateAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PrivateActionImpl: public BaseImpl, public IPrivateAction
    {
    private:
        std::shared_ptr<ILongitudinalAction> _longitudinalAction {};
        std::shared_ptr<ILateralAction> _lateralAction {};
        std::shared_ptr<IVisibilityAction> _visibilityAction {};
        std::shared_ptr<ISynchronizeAction> _synchronizeAction {};
        std::shared_ptr<IActivateControllerAction> _activateControllerAction {};
        std::shared_ptr<IControllerAction> _controllerAction {};
        std::shared_ptr<ITeleportAction> _teleportAction {};
        std::shared_ptr<IRoutingAction> _routingAction {};

    public:
        PrivateActionImpl();

        std::shared_ptr<ILongitudinalAction> GetLongitudinalAction() override;
        std::shared_ptr<ILateralAction> GetLateralAction() override;
        std::shared_ptr<IVisibilityAction> GetVisibilityAction() override;
        std::shared_ptr<ISynchronizeAction> GetSynchronizeAction() override;
        std::shared_ptr<IActivateControllerAction> GetActivateControllerAction() override;
        std::shared_ptr<IControllerAction> GetControllerAction() override;
        std::shared_ptr<ITeleportAction> GetTeleportAction() override;
        std::shared_ptr<IRoutingAction> GetRoutingAction() override;

	/**
	 * Sets the value of model property longitudinalAction
	 * @param longitudinalAction from OpenSCENARIO class model specification: [Applies longitudinal control behavior on the 
	 * reference entity/entities. Either a SpeedAction or a , LongitudinalDistanceAction.]
	 * 
	*/
        void SetLongitudinalAction (std::shared_ptr<ILongitudinalAction>& longitudinalAction );
	/**
	 * Sets the value of model property lateralAction
	 * @param lateralAction from OpenSCENARIO class model specification: [Applies lateral control behavior on the reference 
	 * entity/entities. Either a LaneChangeAction, LaneOffsetAction or a , LateralDistanceAction.]
	 * 
	*/
        void SetLateralAction (std::shared_ptr<ILateralAction>& lateralAction );
	/**
	 * Sets the value of model property visibilityAction
	 * @param visibilityAction from OpenSCENARIO class model specification: [Sets visibility attributes on the reference 
	 * entity/entities.]
	 * 
	*/
        void SetVisibilityAction (std::shared_ptr<IVisibilityAction>& visibilityAction );
	/**
	 * Sets the value of model property synchronizeAction
	 * @param synchronizeAction from OpenSCENARIO class model specification: [Synchronizes the reference entity/entities with a
	 * master entity. A target position is provided for the entity and for , the master entity to be reached at the same time.]
	 * 
	*/
        void SetSynchronizeAction (std::shared_ptr<ISynchronizeAction>& synchronizeAction );
	/**
	 * Sets the value of model property activateControllerAction
	 * @param activateControllerAction from OpenSCENARIO class model specification: [Activates/ deactivates a controller on the
	 * reference entity/entities.]
	 * 
	*/
        void SetActivateControllerAction (std::shared_ptr<IActivateControllerAction>& activateControllerAction );
	/**
	 * Sets the value of model property controllerAction
	 * @param controllerAction from OpenSCENARIO class model specification: [Assigns a controller to the reference 
	 * entity/entities.]
	 * 
	*/
        void SetControllerAction (std::shared_ptr<IControllerAction>& controllerAction );
	/**
	 * Sets the value of model property teleportAction
	 * @param teleportAction from OpenSCENARIO class model specification: [Assigns a position to the reference 
	 * entity/entities.]
	 * 
	*/
        void SetTeleportAction (std::shared_ptr<ITeleportAction>& teleportAction );
	/**
	 * Sets the value of model property routingAction
	 * @param routingAction from OpenSCENARIO class model specification: [Applies an AssignRouteAction, a 
	 * FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.]
	 * 
	*/
        void SetRoutingAction (std::shared_ptr<IRoutingAction>& routingAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PrivateActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IProperties. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IProperties)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PropertiesImpl: public BaseImpl, public IProperties
    {
    private:
        std::vector<std::shared_ptr<IProperty>> _properties {};
        std::vector<std::shared_ptr<IFile>> _files {};

    public:
        PropertiesImpl();

        std::vector<std::shared_ptr<IProperty>> GetProperties() override;
        std::vector<std::shared_ptr<IFile>> GetFiles() override;

	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [A name/value pair. The semantic of the name/values are 
	 * subject of a contract between the provider of a simulation , environment and the author of a scenario.]
	 * 
	*/
        void SetProperties(std::vector<std::shared_ptr<IProperty>>& properties);
	/**
	 * Sets the value of model property files
	 * @param files from OpenSCENARIO class model specification: [A list of arbitrary files attached to an object that owns the
	 * properties. The semantic and the file formats are subject , of a contract between the provider of a simulation 
	 * environment and the author of a scenario.]
	 * 
	*/
        void SetFiles(std::vector<std::shared_ptr<IFile>>& files);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PropertiesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IProperty. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IProperty)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class PropertyImpl: public BaseImpl, public IProperty
    {
    private:
        std::string _name {};
        std::string _value {};

    public:
        PropertyImpl();

        std::string GetName() override;
        std::string GetValue() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of a user defined property.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of a user defined property.]
	 * 
	*/
        void SetValue (std::string& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        PropertyImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IReachPositionCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IReachPositionCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ReachPositionConditionImpl: public BaseImpl, public IReachPositionCondition
    {
    private:
        double _tolerance {};
        std::shared_ptr<IPosition> _position {};

    public:
        ReachPositionConditionImpl();

        double GetTolerance() override;
        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property tolerance
	 * @param tolerance from OpenSCENARIO class model specification: [Radius of tolerance circle around given position. Unit: 
	 * m; Range: [0..inf[.]
	 * 
	*/
        void SetTolerance (double& tolerance );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The position to be reached with the defined tolerance.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ReachPositionConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeDistanceCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeDistanceCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeDistanceConditionImpl: public BaseImpl, public IRelativeDistanceCondition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        RelativeDistanceType _relativeDistanceType {};
        double _value {};
        bool _freespace {};
        Rule _rule {};

    public:
        RelativeDistanceConditionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        RelativeDistanceType GetRelativeDistanceType() override;
        double GetValue() override;
        bool GetFreespace() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property relativeDistanceType
	 * @param relativeDistanceType from OpenSCENARIO class model specification: [The domain the distance is calculated in.]
	 * 
	*/
        void SetRelativeDistanceType (RelativeDistanceType& relativeDistanceType );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The distance value. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: distance is measured between closest bounding box 
	 * points. False: reference point distance is used.]
	 * 
	*/
        void SetFreespace (bool& freespace );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeDistanceConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeLanePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeLanePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeLanePositionImpl: public BaseImpl, public IRelativeLanePosition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        int _dLane {};
        double _ds {};
        double _offset {};
        std::shared_ptr<IOrientation> _orientation {};

    public:
        RelativeLanePositionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        int GetDLane() override;
        double GetDs() override;
        double GetOffset() override;
        std::shared_ptr<IOrientation> GetOrientation() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property dLane
	 * @param dLane from OpenSCENARIO class model specification: [Relative dlane to the lane of the reference entity.]
	 * 
	*/
        void SetDLane (int& dLane );
	/**
	 * Sets the value of model property ds
	 * @param ds from OpenSCENARIO class model specification: [Relative ds to the s of reference entity.]
	 * 
	*/
        void SetDs (double& ds );
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Lateral offset to the taqrget lane. Unit: m; Range: 
	 * ]-inf..inf[]
	 * 
	*/
        void SetOffset (double& offset );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced lane's s and t coordinates.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeLanePositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeObjectPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeObjectPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeObjectPositionImpl: public BaseImpl, public IRelativeObjectPosition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _dx {};
        double _dy {};
        double _dz {};
        std::shared_ptr<IOrientation> _orientation {};

    public:
        RelativeObjectPositionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetDx() override;
        double GetDy() override;
        double GetDz() override;
        std::shared_ptr<IOrientation> GetOrientation() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property dx
	 * @param dx from OpenSCENARIO class model specification: [Relative position in the x axis, using the coordinate system of 
	 * the reference entity.]
	 * 
	*/
        void SetDx (double& dx );
	/**
	 * Sets the value of model property dy
	 * @param dy from OpenSCENARIO class model specification: [Relative position in the y axis, using the coordinate system of 
	 * the reference entity.]
	 * 
	*/
        void SetDy (double& dy );
	/**
	 * Sets the value of model property dz
	 * @param dz from OpenSCENARIO class model specification: [Relative position in the z axis, using the coordinate system of 
	 * the reference entity.]
	 * 
	*/
        void SetDz (double& dz );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the orientation of the reference entity.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeObjectPositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeRoadPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeRoadPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeRoadPositionImpl: public BaseImpl, public IRelativeRoadPosition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _ds {};
        double _dt {};
        std::shared_ptr<IOrientation> _orientation {};

    public:
        RelativeRoadPositionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetDs() override;
        double GetDt() override;
        std::shared_ptr<IOrientation> GetOrientation() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property ds
	 * @param ds from OpenSCENARIO class model specification: [Relative ds road coordinate to s coordinate of the reference 
	 * entity.]
	 * 
	*/
        void SetDs (double& ds );
	/**
	 * Sets the value of model property dt
	 * @param dt from OpenSCENARIO class model specification: [Relative dt road coordinate to t coordinate of the reference 
	 * entity.]
	 * 
	*/
        void SetDt (double& dt );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeRoadPositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeSpeedCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeSpeedCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeSpeedConditionImpl: public BaseImpl, public IRelativeSpeedCondition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _value {};
        Rule _rule {};

    public:
        RelativeSpeedConditionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetValue() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Relative speed value. Unit: m/s.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeSpeedConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeSpeedToMaster. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeSpeedToMaster)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeSpeedToMasterImpl: public BaseImpl, public IRelativeSpeedToMaster
    {
    private:
        double _value {};
        SpeedTargetValueType _speedTargetValueType {};

    public:
        RelativeSpeedToMasterImpl();

        double GetValue() override;
        SpeedTargetValueType GetSpeedTargetValueType() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Relative speed. Unit: m/s. Range: ]-inf..inf[.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property speedTargetValueType
	 * @param speedTargetValueType from OpenSCENARIO class model specification: [The semantics of the value (delta, offset, 
	 * factor).]
	 * 
	*/
        void SetSpeedTargetValueType (SpeedTargetValueType& speedTargetValueType );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeSpeedToMasterImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeTargetLane. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeTargetLane)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeTargetLaneImpl: public BaseImpl, public IRelativeTargetLane
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        int _value {};

    public:
        RelativeTargetLaneImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        int GetValue() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Signed number of lanes that is offset the reference entity's 
	 * current lane.]
	 * 
	*/
        void SetValue (int& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeTargetLaneImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeTargetLaneOffset. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeTargetLaneOffset)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeTargetLaneOffsetImpl: public BaseImpl, public IRelativeTargetLaneOffset
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _value {};

    public:
        RelativeTargetLaneOffsetImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetValue() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Lane offset with respect to the reference entity's current 
	 * lane position. Unit: m.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeTargetLaneOffsetImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeTargetSpeed. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeTargetSpeed)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeTargetSpeedImpl: public BaseImpl, public IRelativeTargetSpeed
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _value {};
        SpeedTargetValueType _speedTargetValueType {};
        bool _continuous {};

    public:
        RelativeTargetSpeedImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetValue() override;
        SpeedTargetValueType GetSpeedTargetValueType() override;
        bool GetContinuous() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the relative speed. This value is either given as a 
	 * delta or as a factor. E.g. value=10 together with , valueType=delta means the entity/entities are supposed to drive 
	 * 10m/s faster than the target reference entity. E.g. , value=1.1 together with valueType=factor means that the 
	 * entity/entities are supposed to drive 10% faster than the target, reference entity. Unit: m/s or 1.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property speedTargetValueType
	 * @param speedTargetValueType from OpenSCENARIO class model specification: [The value is either a delta (Unit m/s) or a 
	 * factor (no Unit).]
	 * 
	*/
        void SetSpeedTargetValueType (SpeedTargetValueType& speedTargetValueType );
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [By setting continuous to true a controller comes into 
	 * place and tries to maintain a continuous relative speed. This may , not be used together with Dynamics.time or 
	 * Dynamics.distance.]
	 * 
	*/
        void SetContinuous (bool& continuous );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeTargetSpeedImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeWorldPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeWorldPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RelativeWorldPositionImpl: public BaseImpl, public IRelativeWorldPosition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _dx {};
        double _dy {};
        double _dz {};
        std::shared_ptr<IOrientation> _orientation {};

    public:
        RelativeWorldPositionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetDx() override;
        double GetDy() override;
        double GetDz() override;
        std::shared_ptr<IOrientation> GetOrientation() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity from which the relative world position 
	 * is measured.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property dx
	 * @param dx from OpenSCENARIO class model specification: [Relative x coordinate in the world coordinate system.]
	 * 
	*/
        void SetDx (double& dx );
	/**
	 * Sets the value of model property dy
	 * @param dy from OpenSCENARIO class model specification: [Relative y coordinate in the world coordinate system.]
	 * 
	*/
        void SetDy (double& dy );
	/**
	 * Sets the value of model property dz
	 * @param dz from OpenSCENARIO class model specification: [Relative z coordinate in the world coordinate system.]
	 * 
	*/
        void SetDz (double& dz );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the reference entity's orientation.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RelativeWorldPositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoadCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoadCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoadConditionImpl: public BaseImpl, public IRoadCondition
    {
    private:
        double _frictionScaleFactor {};
        std::shared_ptr<IProperties> _properties {};

    public:
        RoadConditionImpl();

        double GetFrictionScaleFactor() override;
        std::shared_ptr<IProperties> GetProperties() override;

	/**
	 * Sets the value of model property frictionScaleFactor
	 * @param frictionScaleFactor from OpenSCENARIO class model specification: [Friction scale factor. Range: [0..inf[]
	 * 
	*/
        void SetFrictionScaleFactor (double& frictionScaleFactor );
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Additional properties to describe the road condition.]
	 * 
	*/
        void SetProperties (std::shared_ptr<IProperties>& properties );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RoadConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoadNetwork. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoadNetwork)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoadNetworkImpl: public BaseImpl, public IRoadNetwork
    {
    private:
        std::shared_ptr<IFile> _logicFile {};
        std::shared_ptr<IFile> _sceneGraphFile {};
        std::vector<std::shared_ptr<ITrafficSignalController>> _trafficSignals {};

    public:
        RoadNetworkImpl();

        std::shared_ptr<IFile> GetLogicFile() override;
        std::shared_ptr<IFile> GetSceneGraphFile() override;
        std::vector<std::shared_ptr<ITrafficSignalController>> GetTrafficSignals() override;

	/**
	 * Sets the value of model property logicFile
	 * @param logicFile from OpenSCENARIO class model specification: [File path of the road network file (e.g. an ASAM 
	 * OpenDRIVE file).]
	 * 
	*/
        void SetLogicFile (std::shared_ptr<IFile>& logicFile );
	/**
	 * Sets the value of model property sceneGraphFile
	 * @param sceneGraphFile from OpenSCENARIO class model specification: [File path of a 3D model representing the virtual 
	 * environment. This may be used for visual representation (rendering).]
	 * 
	*/
        void SetSceneGraphFile (std::shared_ptr<IFile>& sceneGraphFile );
	/**
	 * Sets the value of model property trafficSignals
	 * @param trafficSignals from OpenSCENARIO class model specification: [Name references and description of dynamic behavior 
	 * for traffic signals defined in the road network file.]
	 * 
	*/
        void SetTrafficSignals(std::vector<std::shared_ptr<ITrafficSignalController>>& trafficSignals);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RoadNetworkImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoadPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoadPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoadPositionImpl: public BaseImpl, public IRoadPosition
    {
    private:
        std::string _roadId {};
        double _s {};
        double _t {};
        std::shared_ptr<IOrientation> _orientation {};

    public:
        RoadPositionImpl();

        std::string GetRoadId() override;
        double GetS() override;
        double GetT() override;
        std::shared_ptr<IOrientation> GetOrientation() override;

	/**
	 * Sets the value of model property roadId
	 * @param roadId from OpenSCENARIO class model specification: [Identifier of the road, defined in the road network 
	 * definition file (external to ASAM OpenSCENARIO).]
	 * 
	*/
        void SetRoadId (std::string& roadId );
	/**
	 * Sets the value of model property s
	 * @param s from OpenSCENARIO class model specification: [Represents s coordinate along the reference line of the road.]
	 * 
	*/
        void SetS (double& s );
	/**
	 * Sets the value of model property t
	 * @param t from OpenSCENARIO class model specification: [Represents t coordinate orthogonal to the reference line of the 
	 * road.]
	 * 
	*/
        void SetT (double& t );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RoadPositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoute. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoute)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RouteImpl: public BaseImpl, public IRoute
    {
    private:
        std::string _name {};
        bool _closed {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::vector<std::shared_ptr<IWaypoint>> _waypoints {};

    public:
        RouteImpl();

        std::string GetName() override;
        bool GetClosed() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::vector<std::shared_ptr<IWaypoint>> GetWaypoints() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the route. Required in catalogs.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property closed
	 * @param closed from OpenSCENARIO class model specification: [In a closed route, the last waypoint is followed by the 
	 * first waypoint to create a closed route.]
	 * 
	*/
        void SetClosed (bool& closed );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property waypoints
	 * @param waypoints from OpenSCENARIO class model specification: [At least two waypoints are needed to define a route.]
	 * 
	*/
        void SetWaypoints(std::vector<std::shared_ptr<IWaypoint>>& waypoints);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RouteImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRouteCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRouteCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RouteCatalogLocationImpl: public BaseImpl, public IRouteCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        RouteCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RouteCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoutePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoutePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoutePositionImpl: public BaseImpl, public IRoutePosition
    {
    private:
        std::shared_ptr<IRouteRef> _routeRef {};
        std::shared_ptr<IOrientation> _orientation {};
        std::shared_ptr<IInRoutePosition> _inRoutePosition {};

    public:
        RoutePositionImpl();

        std::shared_ptr<IRouteRef> GetRouteRef() override;
        std::shared_ptr<IOrientation> GetOrientation() override;
        std::shared_ptr<IInRoutePosition> GetInRoutePosition() override;

	/**
	 * Sets the value of model property routeRef
	 * @param routeRef from OpenSCENARIO class model specification: [Reference to the route the position is calculated from.]
	 * 
	*/
        void SetRouteRef (std::shared_ptr<IRouteRef>& routeRef );
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates, to the current lane's s, and t coordinates or to the orientation of the 
	 * reference entity.]
	 * 
	*/
        void SetOrientation (std::shared_ptr<IOrientation>& orientation );
	/**
	 * Sets the value of model property inRoutePosition
	 * @param inRoutePosition from OpenSCENARIO class model specification: [Position along the route.]
	 * 
	*/
        void SetInRoutePosition (std::shared_ptr<IInRoutePosition>& inRoutePosition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RoutePositionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRouteRef. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRouteRef)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RouteRefImpl: public BaseImpl, public IRouteRef
    {
    private:
        std::shared_ptr<IRoute> _route {};
        std::shared_ptr<ICatalogReference> _catalogReference {};

    public:
        RouteRefImpl();

        std::shared_ptr<IRoute> GetRoute() override;
        std::shared_ptr<ICatalogReference> GetCatalogReference() override;

	/**
	 * Sets the value of model property route
	 * @param route from OpenSCENARIO class model specification: [Route definition.]
	 * 
	*/
        void SetRoute (std::shared_ptr<IRoute>& route );
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to route in the catalog.]
	 * 
	*/
        void SetCatalogReference (std::shared_ptr<ICatalogReference>& catalogReference );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RouteRefImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoutingAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoutingAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class RoutingActionImpl: public BaseImpl, public IRoutingAction
    {
    private:
        std::shared_ptr<IAssignRouteAction> _assignRouteAction {};
        std::shared_ptr<IFollowTrajectoryAction> _followTrajectoryAction {};
        std::shared_ptr<IAcquirePositionAction> _acquirePositionAction {};

    public:
        RoutingActionImpl();

        std::shared_ptr<IAssignRouteAction> GetAssignRouteAction() override;
        std::shared_ptr<IFollowTrajectoryAction> GetFollowTrajectoryAction() override;
        std::shared_ptr<IAcquirePositionAction> GetAcquirePositionAction() override;

	/**
	 * Sets the value of model property assignRouteAction
	 * @param assignRouteAction from OpenSCENARIO class model specification: [Assigns a route to an entity. The route is 
	 * defined by at least two waypoints.]
	 * 
	*/
        void SetAssignRouteAction (std::shared_ptr<IAssignRouteAction>& assignRouteAction );
	/**
	 * Sets the value of model property followTrajectoryAction
	 * @param followTrajectoryAction from OpenSCENARIO class model specification: [Controls an entity to follow a trajectory.]
	 * 
	*/
        void SetFollowTrajectoryAction (std::shared_ptr<IFollowTrajectoryAction>& followTrajectoryAction );
	/**
	 * Sets the value of model property acquirePositionAction
	 * @param acquirePositionAction from OpenSCENARIO class model specification: [Assigns a route to an entity. The route 
	 * assigned will be the shortest route (along roads) between the entity's current , position and the position specified.]
	 * 
	*/
        void SetAcquirePositionAction (std::shared_ptr<IAcquirePositionAction>& acquirePositionAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        RoutingActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IScenarioDefinition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IScenarioDefinition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ScenarioDefinitionImpl: public BaseImpl, public IScenarioDefinition
    {
    private:
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<ICatalogLocations> _catalogLocations {};
        std::shared_ptr<IRoadNetwork> _roadNetwork {};
        std::shared_ptr<IEntities> _entities {};
        std::shared_ptr<IStoryboard> _storyboard {};

    public:
        ScenarioDefinitionImpl();

        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<ICatalogLocations> GetCatalogLocations() override;
        std::shared_ptr<IRoadNetwork> GetRoadNetwork() override;
        std::shared_ptr<IEntities> GetEntities() override;
        std::shared_ptr<IStoryboard> GetStoryboard() override;

	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Global Parameter declaration. Some parameter 
	 * represent placeholders to be resolved when the scenario file is loaded. , Some parameters represent runtime values that 
	 * can be controlled with ParameterActions and ParameterConditions during , simulation time.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property catalogLocations
	 * @param catalogLocations from OpenSCENARIO class model specification: [A list of locations to look up catalog files. Each
	 * catalog element type has its own list.]
	 * 
	*/
        void SetCatalogLocations (std::shared_ptr<ICatalogLocations>& catalogLocations );
	/**
	 * Sets the value of model property roadNetwork
	 * @param roadNetwork from OpenSCENARIO class model specification: [Reference to the road network.]
	 * 
	*/
        void SetRoadNetwork (std::shared_ptr<IRoadNetwork>& roadNetwork );
	/**
	 * Sets the value of model property entities
	 * @param entities from OpenSCENARIO class model specification: [Container for entity selections and scenario object 
	 * definitions. Instances of ScenarioObject, of EntitySelection and of , SpawnedObject considered instances of Entity.]
	 * 
	*/
        void SetEntities (std::shared_ptr<IEntities>& entities );
	/**
	 * Sets the value of model property storyboard
	 * @param storyboard from OpenSCENARIO class model specification: [Container for the dynamic content of the scenario.]
	 * 
	*/
        void SetStoryboard (std::shared_ptr<IStoryboard>& storyboard );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ScenarioDefinitionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IScenarioObject. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IScenarioObject)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ScenarioObjectImpl: public BaseImpl, public IScenarioObject
    {
    private:
        std::string _name {};
        std::shared_ptr<IEntityObject> _entityObject {};
        std::shared_ptr<IObjectController> _objectController {};

    public:
        ScenarioObjectImpl();

        std::string GetName() override;
        std::shared_ptr<IEntityObject> GetEntityObject() override;
        std::shared_ptr<IObjectController> GetObjectController() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Identifier of the scenario object.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property entityObject
	 * @param entityObject from OpenSCENARIO class model specification: [The EntityObject (either instance of type Vehicle, 
	 * Pedestrian or MiscObject).]
	 * 
	*/
        void SetEntityObject (std::shared_ptr<IEntityObject>& entityObject );
	/**
	 * Sets the value of model property objectController
	 * @param objectController from OpenSCENARIO class model specification: [Controller of the EntityObject instance.]
	 * 
	*/
        void SetObjectController (std::shared_ptr<IObjectController>& objectController );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ScenarioObjectImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISelectedEntities. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISelectedEntities)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SelectedEntitiesImpl: public BaseImpl, public ISelectedEntities
    {
    private:
        std::vector<std::shared_ptr<IEntityRef>> _entityRef {};
        std::vector<std::shared_ptr<IByType>> _byType {};

    public:
        SelectedEntitiesImpl();

        std::vector<std::shared_ptr<IEntityRef>> GetEntityRef() override;
        std::vector<std::shared_ptr<IByType>> GetByType() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [References to the selected entities.]
	 * 
	*/
        void SetEntityRef(std::vector<std::shared_ptr<IEntityRef>>& entityRef);
	/**
	 * Sets the value of model property byType
	 * @param byType from OpenSCENARIO class model specification: [Defines the type to determine that all entities of a 
	 * specific type are members.]
	 * 
	*/
        void SetByType(std::vector<std::shared_ptr<IByType>>& byType);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SelectedEntitiesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IShape. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IShape)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class ShapeImpl: public BaseImpl, public IShape
    {
    private:
        std::shared_ptr<IPolyline> _polyline {};
        std::shared_ptr<IClothoid> _clothoid {};
        std::shared_ptr<INurbs> _nurbs {};

    public:
        ShapeImpl();

        std::shared_ptr<IPolyline> GetPolyline() override;
        std::shared_ptr<IClothoid> GetClothoid() override;
        std::shared_ptr<INurbs> GetNurbs() override;

	/**
	 * Sets the value of model property polyline
	 * @param polyline from OpenSCENARIO class model specification: [Polyline property of a shape.]
	 * 
	*/
        void SetPolyline (std::shared_ptr<IPolyline>& polyline );
	/**
	 * Sets the value of model property clothoid
	 * @param clothoid from OpenSCENARIO class model specification: [Clothoid property of a shape.]
	 * 
	*/
        void SetClothoid (std::shared_ptr<IClothoid>& clothoid );
	/**
	 * Sets the value of model property nurbs
	 * @param nurbs from OpenSCENARIO class model specification: [NURBS property of a shape.]
	 * 
	*/
        void SetNurbs (std::shared_ptr<INurbs>& nurbs );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        ShapeImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISimulationTimeCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISimulationTimeCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SimulationTimeConditionImpl: public BaseImpl, public ISimulationTimeCondition
    {
    private:
        double _value {};
        Rule _rule {};

    public:
        SimulationTimeConditionImpl();

        double GetValue() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Time value of the simulation time condition. Unit: s.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SimulationTimeConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISpeedAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISpeedAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SpeedActionImpl: public BaseImpl, public ISpeedAction
    {
    private:
        std::shared_ptr<ITransitionDynamics> _speedActionDynamics {};
        std::shared_ptr<ISpeedActionTarget> _speedActionTarget {};

    public:
        SpeedActionImpl();

        std::shared_ptr<ITransitionDynamics> GetSpeedActionDynamics() override;
        std::shared_ptr<ISpeedActionTarget> GetSpeedActionTarget() override;

	/**
	 * Sets the value of model property speedActionDynamics
	 * @param speedActionDynamics from OpenSCENARIO class model specification: [Defines how the target speed is reached.]
	 * 
	*/
        void SetSpeedActionDynamics (std::shared_ptr<ITransitionDynamics>& speedActionDynamics );
	/**
	 * Sets the value of model property speedActionTarget
	 * @param speedActionTarget from OpenSCENARIO class model specification: [Defines the target speed which should be 
	 * reached.]
	 * 
	*/
        void SetSpeedActionTarget (std::shared_ptr<ISpeedActionTarget>& speedActionTarget );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SpeedActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISpeedActionTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISpeedActionTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SpeedActionTargetImpl: public BaseImpl, public ISpeedActionTarget
    {
    private:
        std::shared_ptr<IRelativeTargetSpeed> _relativeTargetSpeed {};
        std::shared_ptr<IAbsoluteTargetSpeed> _absoluteTargetSpeed {};

    public:
        SpeedActionTargetImpl();

        std::shared_ptr<IRelativeTargetSpeed> GetRelativeTargetSpeed() override;
        std::shared_ptr<IAbsoluteTargetSpeed> GetAbsoluteTargetSpeed() override;

	/**
	 * Sets the value of model property relativeTargetSpeed
	 * @param relativeTargetSpeed from OpenSCENARIO class model specification: [Defines the target speed as relative speed to a
	 * reference entity. Unit: m/s.]
	 * 
	*/
        void SetRelativeTargetSpeed (std::shared_ptr<IRelativeTargetSpeed>& relativeTargetSpeed );
	/**
	 * Sets the value of model property absoluteTargetSpeed
	 * @param absoluteTargetSpeed from OpenSCENARIO class model specification: [Defines the target speed as absolute 
	 * speed.Unit: m/s.]
	 * 
	*/
        void SetAbsoluteTargetSpeed (std::shared_ptr<IAbsoluteTargetSpeed>& absoluteTargetSpeed );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SpeedActionTargetImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISpeedCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISpeedCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SpeedConditionImpl: public BaseImpl, public ISpeedCondition
    {
    private:
        double _value {};
        Rule _rule {};

    public:
        SpeedConditionImpl();

        double GetValue() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Speed value of the speed condition. Unit m/s.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SpeedConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStandStillCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStandStillCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StandStillConditionImpl: public BaseImpl, public IStandStillCondition
    {
    private:
        double _duration {};

    public:
        StandStillConditionImpl();

        double GetDuration() override;

	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Duration time of still standing to let the logical 
	 * expression become true. Unit: s. Range [0..inf[.]
	 * 
	*/
        void SetDuration (double& duration );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        StandStillConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStory. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStory)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StoryImpl: public BaseImpl, public IStory
    {
    private:
        std::string _name {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::vector<std::shared_ptr<IAct>> _acts {};

    public:
        StoryImpl();

        std::string GetName() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::vector<std::shared_ptr<IAct>> GetActs() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the story, must be unique within an OpenSCENARIO 
	 * file.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property acts
	 * @param acts from OpenSCENARIO class model specification: [Defines the acts of the story.]
	 * 
	*/
        void SetActs(std::vector<std::shared_ptr<IAct>>& acts);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        StoryImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStoryboard. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStoryboard)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StoryboardImpl: public BaseImpl, public IStoryboard
    {
    private:
        std::shared_ptr<IInit> _init {};
        std::vector<std::shared_ptr<IStory>> _stories {};
        std::shared_ptr<ITrigger> _stopTrigger {};

    public:
        StoryboardImpl();

        std::shared_ptr<IInit> GetInit() override;
        std::vector<std::shared_ptr<IStory>> GetStories() override;
        std::shared_ptr<ITrigger> GetStopTrigger() override;

	/**
	 * Sets the value of model property init
	 * @param init from OpenSCENARIO class model specification: [Initialization of the storyboard instance. Initial conditions 
	 * are set and initial actions are applied to entities.]
	 * 
	*/
        void SetInit (std::shared_ptr<IInit>& init );
	/**
	 * Sets the value of model property stories
	 * @param stories from OpenSCENARIO class model specification: [List of stories defined in a story board.]
	 * 
	*/
        void SetStories(std::vector<std::shared_ptr<IStory>>& stories);
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Trigger to stop the Storyboard instance.]
	 * 
	*/
        void SetStopTrigger (std::shared_ptr<ITrigger>& stopTrigger );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        StoryboardImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStoryboardElementStateCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStoryboardElementStateCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class StoryboardElementStateConditionImpl: public BaseImpl, public IStoryboardElementStateCondition
    {
    private:
        StoryboardElementType _storyboardElementType {};
        NamedReferenceProxy<IStoryboardElement> _storyboardElementRef {};
        StoryboardElementState _state {};

    public:
        StoryboardElementStateConditionImpl();

        StoryboardElementType GetStoryboardElementType() override;
        INamedReference<IStoryboardElement>* GetStoryboardElementRef() override;
        StoryboardElementState GetState() override;

	/**
	 * Sets the value of model property storyboardElementType
	 * @param storyboardElementType from OpenSCENARIO class model specification: [Type of storyboard element instance.]
	 * 
	*/
        void SetStoryboardElementType (StoryboardElementType& storyboardElementType );
	/**
	 * Sets the value of model property storyboardElementRef
	 * @param storyboardElementRef from OpenSCENARIO class model specification: [Name of the referenced Storyboard instance.]
	 * 
	*/
        void SetStoryboardElementRef (NamedReferenceProxy<IStoryboardElement>& storyboardElementRef );
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [The state or the transition of the storyboard element 
	 * instance for which the condition becomes true.]
	 * 
	*/
        void SetState (StoryboardElementState& state );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        StoryboardElementStateConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISun. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISun)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SunImpl: public BaseImpl, public ISun
    {
    private:
        double _intensity {};
        double _azimuth {};
        double _elevation {};

    public:
        SunImpl();

        double GetIntensity() override;
        double GetAzimuth() override;
        double GetElevation() override;

	/**
	 * Sets the value of model property intensity
	 * @param intensity from OpenSCENARIO class model specification: [Illuminance of the sun, direct sunlight is around 100,00 
	 * lx. Unit: lux; Range: [0..inf[.]
	 * 
	*/
        void SetIntensity (double& intensity );
	/**
	 * Sets the value of model property azimuth
	 * @param azimuth from OpenSCENARIO class model specification: [Azimuth of the sun, counted counterclockwise, 0=north, PI/2
	 * = east, PI=south, 3/2 PI=west. Unit: radian; Range: , [0..2PI].]
	 * 
	*/
        void SetAzimuth (double& azimuth );
	/**
	 * Sets the value of model property elevation
	 * @param elevation from OpenSCENARIO class model specification: [Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: 
	 * rad; Range: [-PI..PI].]
	 * 
	*/
        void SetElevation (double& elevation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SunImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISynchronizeAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISynchronizeAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class SynchronizeActionImpl: public BaseImpl, public ISynchronizeAction
    {
    private:
        NamedReferenceProxy<IEntity> _masterEntityRef {};
        std::shared_ptr<IPosition> _targetPositionMaster {};
        std::shared_ptr<IPosition> _targetPosition {};
        std::shared_ptr<IFinalSpeed> _finalSpeed {};

    public:
        SynchronizeActionImpl();

        INamedReference<IEntity>* GetMasterEntityRef() override;
        std::shared_ptr<IPosition> GetTargetPositionMaster() override;
        std::shared_ptr<IPosition> GetTargetPosition() override;
        std::shared_ptr<IFinalSpeed> GetFinalSpeed() override;

	/**
	 * Sets the value of model property masterEntityRef
	 * @param masterEntityRef from OpenSCENARIO class model specification: [A reference to the master entity.]
	 * 
	*/
        void SetMasterEntityRef (NamedReferenceProxy<IEntity>& masterEntityRef );
	/**
	 * Sets the value of model property targetPositionMaster
	 * @param targetPositionMaster from OpenSCENARIO class model specification: [The target position for the master entity.]
	 * 
	*/
        void SetTargetPositionMaster (std::shared_ptr<IPosition>& targetPositionMaster );
	/**
	 * Sets the value of model property targetPosition
	 * @param targetPosition from OpenSCENARIO class model specification: [The target position for the entity that should be 
	 * synchronized.]
	 * 
	*/
        void SetTargetPosition (std::shared_ptr<IPosition>& targetPosition );
	/**
	 * Sets the value of model property finalSpeed
	 * @param finalSpeed from OpenSCENARIO class model specification: [The speed that the synchronized entity should have at 
	 * its target position.]
	 * 
	*/
        void SetFinalSpeed (std::shared_ptr<IFinalSpeed>& finalSpeed );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        SynchronizeActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITeleportAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITeleportAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TeleportActionImpl: public BaseImpl, public ITeleportAction
    {
    private:
        std::shared_ptr<IPosition> _position {};

    public:
        TeleportActionImpl();

        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The position the entity/entities are teleported to.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TeleportActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeHeadwayCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeHeadwayCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeHeadwayConditionImpl: public BaseImpl, public ITimeHeadwayCondition
    {
    private:
        NamedReferenceProxy<IEntity> _entityRef {};
        double _value {};
        bool _freespace {};
        bool _alongRoute {};
        Rule _rule {};

    public:
        TimeHeadwayConditionImpl();

        INamedReference<IEntity>* GetEntityRef() override;
        double GetValue() override;
        bool GetFreespace() override;
        bool GetAlongRoute() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity to which the time headway is computed.]
	 * 
	*/
        void SetEntityRef (NamedReferenceProxy<IEntity>& entityRef );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The time headway value. Unit: s; Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: time headway is measured using the distance between
	 * closest bounding box points. False: reference point distance , is used.]
	 * 
	*/
        void SetFreespace (bool& freespace );
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
        void SetAlongRoute (bool& alongRoute );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimeHeadwayConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeOfDay. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeOfDay)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeOfDayImpl: public BaseImpl, public ITimeOfDay
    {
    private:
        bool _animation {};
        DateTime _dateTime {};

    public:
        TimeOfDayImpl();

        bool GetAnimation() override;
        DateTime GetDateTime() override;

	/**
	 * Sets the value of model property animation
	 * @param animation from OpenSCENARIO class model specification: [If true, the timeofday is animated with progressing 
	 * simulation time, e.g. in order to animate the position of the sun.]
	 * 
	*/
        void SetAnimation (bool& animation );
	/**
	 * Sets the value of model property dateTime
	 * @param dateTime from OpenSCENARIO class model specification: [Datetime value.]
	 * 
	*/
        void SetDateTime (DateTime& dateTime );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimeOfDayImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeOfDayCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeOfDayCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeOfDayConditionImpl: public BaseImpl, public ITimeOfDayCondition
    {
    private:
        Rule _rule {};
        DateTime _dateTime {};

    public:
        TimeOfDayConditionImpl();

        Rule GetRule() override;
        DateTime GetDateTime() override;

	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );
	/**
	 * Sets the value of model property dateTime
	 * @param dateTime from OpenSCENARIO class model specification: [Datetime value for comparison.]
	 * 
	*/
        void SetDateTime (DateTime& dateTime );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimeOfDayConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeReference. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeReference)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeReferenceImpl: public BaseImpl, public ITimeReference
    {
    private:
        std::shared_ptr<INone> _none {};
        std::shared_ptr<ITiming> _timing {};

    public:
        TimeReferenceImpl();

        std::shared_ptr<INone> GetNone() override;
        std::shared_ptr<ITiming> GetTiming() override;

	/**
	 * Sets the value of model property none
	 * @param none from OpenSCENARIO class model specification: [This property indicates Timing information is neglected.]
	 * 
	*/
        void SetNone (std::shared_ptr<INone>& none );
	/**
	 * Sets the value of model property timing
	 * @param timing from OpenSCENARIO class model specification: [This property indicates timing information is taken into 
	 * account. Its underlying properties allow specification of the , time domain (absolute or relative), time scaling and a 
	 * global time offset.]
	 * 
	*/
        void SetTiming (std::shared_ptr<ITiming>& timing );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimeReferenceImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeToCollisionCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeToCollisionCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeToCollisionConditionImpl: public BaseImpl, public ITimeToCollisionCondition
    {
    private:
        double _value {};
        bool _freespace {};
        bool _alongRoute {};
        Rule _rule {};
        std::shared_ptr<ITimeToCollisionConditionTarget> _timeToCollisionConditionTarget {};

    public:
        TimeToCollisionConditionImpl();

        double GetValue() override;
        bool GetFreespace() override;
        bool GetAlongRoute() override;
        Rule GetRule() override;
        std::shared_ptr<ITimeToCollisionConditionTarget> GetTimeToCollisionConditionTarget() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The time to collision value. Unit: s; Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: time to collision is measured using the distance 
	 * between closest bounding box points.False: reference point , distance is used.]
	 * 
	*/
        void SetFreespace (bool& freespace );
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
        void SetAlongRoute (bool& alongRoute );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );
	/**
	 * Sets the value of model property timeToCollisionConditionTarget
	 * @param timeToCollisionConditionTarget from OpenSCENARIO class model specification: [The explicit position or a position 
	 * defined through the current position of a reference entity.]
	 * 
	*/
        void SetTimeToCollisionConditionTarget (std::shared_ptr<ITimeToCollisionConditionTarget>& timeToCollisionConditionTarget );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimeToCollisionConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeToCollisionConditionTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeToCollisionConditionTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimeToCollisionConditionTargetImpl: public BaseImpl, public ITimeToCollisionConditionTarget
    {
    private:
        std::shared_ptr<IPosition> _position {};
        std::shared_ptr<IEntityRef> _entityRef {};

    public:
        TimeToCollisionConditionTargetImpl();

        std::shared_ptr<IPosition> GetPosition() override;
        std::shared_ptr<IEntityRef> GetEntityRef() override;

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
        void SetEntityRef (std::shared_ptr<IEntityRef>& entityRef );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimeToCollisionConditionTargetImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITiming. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITiming)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TimingImpl: public BaseImpl, public ITiming
    {
    private:
        ReferenceContext _domainAbsoluteRelative {};
        double _scale {};
        double _offset {};

    public:
        TimingImpl();

        ReferenceContext GetDomainAbsoluteRelative() override;
        double GetScale() override;
        double GetOffset() override;

	/**
	 * Sets the value of model property domainAbsoluteRelative
	 * @param domainAbsoluteRelative from OpenSCENARIO class model specification: [Definition of time value context as either 
	 * absolute or relative.]
	 * 
	*/
        void SetDomainAbsoluteRelative (ReferenceContext& domainAbsoluteRelative );
	/**
	 * Sets the value of model property scale
	 * @param scale from OpenSCENARIO class model specification: [Scaling factor for time values. While values smaller than 1.0
	 * represent negative scaling, values larger than 1.0 will , result in positive scaling. A value of 1.0 means no scaling. 
	 * Range: ]0..inf[.]
	 * 
	*/
        void SetScale (double& scale );
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Introduction of a global offset for all time values. Unit: 
	 * s; Range: ]-inf..inf[.]
	 * 
	*/
        void SetOffset (double& offset );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TimingImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficActionImpl: public BaseImpl, public ITrafficAction
    {
    private:
        std::shared_ptr<ITrafficSourceAction> _trafficSourceAction {};
        std::shared_ptr<ITrafficSinkAction> _trafficSinkAction {};
        std::shared_ptr<ITrafficSwarmAction> _trafficSwarmAction {};

    public:
        TrafficActionImpl();

        std::shared_ptr<ITrafficSourceAction> GetTrafficSourceAction() override;
        std::shared_ptr<ITrafficSinkAction> GetTrafficSinkAction() override;
        std::shared_ptr<ITrafficSwarmAction> GetTrafficSwarmAction() override;

	/**
	 * Sets the value of model property trafficSourceAction
	 * @param trafficSourceAction from OpenSCENARIO class model specification: [Defines a source of traffic at a specific 
	 * position.]
	 * 
	*/
        void SetTrafficSourceAction (std::shared_ptr<ITrafficSourceAction>& trafficSourceAction );
	/**
	 * Sets the value of model property trafficSinkAction
	 * @param trafficSinkAction from OpenSCENARIO class model specification: [Defines a sink of traffic at a specific 
	 * position.]
	 * 
	*/
        void SetTrafficSinkAction (std::shared_ptr<ITrafficSinkAction>& trafficSinkAction );
	/**
	 * Sets the value of model property trafficSwarmAction
	 * @param trafficSwarmAction from OpenSCENARIO class model specification: [Defines swarm traffic around a given central 
	 * entity.]
	 * 
	*/
        void SetTrafficSwarmAction (std::shared_ptr<ITrafficSwarmAction>& trafficSwarmAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficDefinition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficDefinition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficDefinitionImpl: public BaseImpl, public ITrafficDefinition
    {
    private:
        std::string _name {};
        std::shared_ptr<IVehicleCategoryDistribution> _vehicleCategoryDistribution {};
        std::shared_ptr<IControllerDistribution> _controllerDistribution {};

    public:
        TrafficDefinitionImpl();

        std::string GetName() override;
        std::shared_ptr<IVehicleCategoryDistribution> GetVehicleCategoryDistribution() override;
        std::shared_ptr<IControllerDistribution> GetControllerDistribution() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the traffic definition.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property vehicleCategoryDistribution
	 * @param vehicleCategoryDistribution from OpenSCENARIO class model specification: [Distribution of vehicle categories 
	 * within the traffic.]
	 * 
	*/
        void SetVehicleCategoryDistribution (std::shared_ptr<IVehicleCategoryDistribution>& vehicleCategoryDistribution );
	/**
	 * Sets the value of model property controllerDistribution
	 * @param controllerDistribution from OpenSCENARIO class model specification: [Distribution of controllers within this 
	 * traffic.]
	 * 
	*/
        void SetControllerDistribution (std::shared_ptr<IControllerDistribution>& controllerDistribution );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficDefinitionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalActionImpl: public BaseImpl, public ITrafficSignalAction
    {
    private:
        std::shared_ptr<ITrafficSignalControllerAction> _trafficSignalControllerAction {};
        std::shared_ptr<ITrafficSignalStateAction> _trafficSignalStateAction {};

    public:
        TrafficSignalActionImpl();

        std::shared_ptr<ITrafficSignalControllerAction> GetTrafficSignalControllerAction() override;
        std::shared_ptr<ITrafficSignalStateAction> GetTrafficSignalStateAction() override;

	/**
	 * Sets the value of model property trafficSignalControllerAction
	 * @param trafficSignalControllerAction from OpenSCENARIO class model specification: [Action used to control the state of a
	 * signal.]
	 * 
	*/
        void SetTrafficSignalControllerAction (std::shared_ptr<ITrafficSignalControllerAction>& trafficSignalControllerAction );
	/**
	 * Sets the value of model property trafficSignalStateAction
	 * @param trafficSignalStateAction from OpenSCENARIO class model specification: [Action used to set a specific phase of a 
	 * signal controller.]
	 * 
	*/
        void SetTrafficSignalStateAction (std::shared_ptr<ITrafficSignalStateAction>& trafficSignalStateAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalConditionImpl: public BaseImpl, public ITrafficSignalCondition
    {
    private:
        std::string _name {};
        std::string _state {};

    public:
        TrafficSignalConditionImpl();

        std::string GetName() override;
        std::string GetState() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of the referenced signal defined in a road network. The 
	 * signal ID must be listed in the TrafficSignal list of the , RoadNetwork section.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [State of the signal to be reached for the condition to become
	 * true.]
	 * 
	*/
        void SetState (std::string& state );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalController. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalController)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalControllerImpl: public BaseImpl, public ITrafficSignalController
    {
    private:
        std::string _name {};
        double _delay {};
        std::string _reference {};
        std::vector<std::shared_ptr<IPhase>> _phases {};

    public:
        TrafficSignalControllerImpl();

        std::string GetName() override;
        double GetDelay() override;
        std::string GetReference() override;
        std::vector<std::shared_ptr<IPhase>> GetPhases() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of the traffic signal controller in the road network.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property delay
	 * @param delay from OpenSCENARIO class model specification: [The delay to the controller in the reference property. A 
	 * controller having a delay to another one means that its first , phase virtually starts delaytime seconds after the start
	 * of the reference's first phase. This can be used to define a , progressive signal system, but only makes sense, if the 
	 * total times of all connected controllers are the same. If delay , is set, reference is required. Unit: s; Range: 
	 * [0..inf[.]
	 * 
	*/
        void SetDelay (double& delay );
	/**
	 * Sets the value of model property reference
	 * @param reference from OpenSCENARIO class model specification: [A reference (ID) to the connected controller in the road 
	 * network. If reference is set, a delay is required.]
	 * 
	*/
        void SetReference (std::string& reference );
	/**
	 * Sets the value of model property phases
	 * @param phases from OpenSCENARIO class model specification: [Phases of a TrafficSignalController.]
	 * 
	*/
        void SetPhases(std::vector<std::shared_ptr<IPhase>>& phases);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalControllerImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalControllerActionImpl: public BaseImpl, public ITrafficSignalControllerAction
    {
    private:
        NamedReferenceProxy<ITrafficSignalController> _trafficSignalControllerRef {};
        std::string _phase {};
        std::vector<std::shared_ptr<IPhase>> _phaseRef {};

    public:
        TrafficSignalControllerActionImpl();

        INamedReference<ITrafficSignalController>* GetTrafficSignalControllerRef() override;
        std::string GetPhase() override;
        std::vector<std::shared_ptr<IPhase>> GetPhaseRef() override;

	/**
	 * Sets the value of model property trafficSignalControllerRef
	 * @param trafficSignalControllerRef from OpenSCENARIO class model specification: [ID of the signal controller in a road 
	 * network.]
	 * 
	*/
        void SetTrafficSignalControllerRef (NamedReferenceProxy<ITrafficSignalController>& trafficSignalControllerRef );
	/**
	 * Sets the value of model property phase
	 * @param phase from OpenSCENARIO class model specification: [Targeted phase of the signal controller. The available phases
	 * are defined in type RoadNetwork under the property , trafficSignalControllers.]
	 * 
	*/
        void SetPhase (std::string& phase );
	/**
	 * Sets the value of model property phaseRef
	 * @param phaseRef from OpenSCENARIO class model specification: [The reference to the phase (phase is the referential key 
	 * in the referenced TrafficSignalController).]
	 * 
	*/
        void SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalControllerActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalControllerCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalControllerCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalControllerConditionImpl: public BaseImpl, public ITrafficSignalControllerCondition
    {
    private:
        NamedReferenceProxy<ITrafficSignalController> _trafficSignalControllerRef {};
        std::string _phase {};
        std::vector<std::shared_ptr<IPhase>> _phaseRef {};

    public:
        TrafficSignalControllerConditionImpl();

        INamedReference<ITrafficSignalController>* GetTrafficSignalControllerRef() override;
        std::string GetPhase() override;
        std::vector<std::shared_ptr<IPhase>> GetPhaseRef() override;

	/**
	 * Sets the value of model property trafficSignalControllerRef
	 * @param trafficSignalControllerRef from OpenSCENARIO class model specification: [ID of the referenced signal controller 
	 * in a road network.]
	 * 
	*/
        void SetTrafficSignalControllerRef (NamedReferenceProxy<ITrafficSignalController>& trafficSignalControllerRef );
	/**
	 * Sets the value of model property phase
	 * @param phase from OpenSCENARIO class model specification: [Name of the phase of the signal controller to be reached for 
	 * the condition to become true. The available phases are , defined in type RoadNetwork under the property 
	 * trafficSignalControllers.]
	 * 
	*/
        void SetPhase (std::string& phase );
	/**
	 * Sets the value of model property phaseRef
	 * @param phaseRef from OpenSCENARIO class model specification: [The reference to the phase (phase is the referential key 
	 * in the referenced TrafficSignalController).]
	 * 
	*/
        void SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalControllerConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalState. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalState)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalStateImpl: public BaseImpl, public ITrafficSignalState
    {
    private:
        std::string _trafficSignalId {};
        std::string _state {};

    public:
        TrafficSignalStateImpl();

        std::string GetTrafficSignalId() override;
        std::string GetState() override;

	/**
	 * Sets the value of model property trafficSignalId
	 * @param trafficSignalId from OpenSCENARIO class model specification: [ID of the referenced signal in a road network. The 
	 * signal ID must be listed in TrafficSignal list of the RoadNetwork.]
	 * 
	*/
        void SetTrafficSignalId (std::string& trafficSignalId );
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [State of the signal. The available states are listed in the 
	 * TrafficSignal list of the RoadNetwork.]
	 * 
	*/
        void SetState (std::string& state );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalStateImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalStateAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalStateAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSignalStateActionImpl: public BaseImpl, public ITrafficSignalStateAction
    {
    private:
        std::string _name {};
        std::string _state {};

    public:
        TrafficSignalStateActionImpl();

        std::string GetName() override;
        std::string GetState() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of a signal in a road network. The signal ID must be listed
	 * in the TrafficSignal list of the RoadNetwork.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [Targeted state of the signal. The available states are listed
	 * in the TrafficSignal list of the RoadNetwork.]
	 * 
	*/
        void SetState (std::string& state );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSignalStateActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSinkAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSinkAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSinkActionImpl: public BaseImpl, public ITrafficSinkAction
    {
    private:
        double _rate {};
        double _radius {};
        std::shared_ptr<IPosition> _position {};
        std::shared_ptr<ITrafficDefinition> _trafficDefinition {};

    public:
        TrafficSinkActionImpl();

        double GetRate() override;
        double GetRadius() override;
        std::shared_ptr<IPosition> GetPosition() override;
        std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() override;

	/**
	 * Sets the value of model property rate
	 * @param rate from OpenSCENARIO class model specification: [Defines the rate on which vehicles disappear at the sinks 
	 * location. Unit: vehicles/s Range: [0..inf[.]
	 * 
	*/
        void SetRate (double& rate );
	/**
	 * Sets the value of model property radius
	 * @param radius from OpenSCENARIO class model specification: [Defines the radius of the traffic sink where vehicles 
	 * disappear around the specified position. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetRadius (double& radius );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Defines the position of the traffic sink.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Defines the vehicle and controller distribution 
	 * for the sink.]
	 * 
	*/
        void SetTrafficDefinition (std::shared_ptr<ITrafficDefinition>& trafficDefinition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSinkActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSourceAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSourceAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSourceActionImpl: public BaseImpl, public ITrafficSourceAction
    {
    private:
        double _rate {};
        double _radius {};
        double _velocity {};
        std::shared_ptr<IPosition> _position {};
        std::shared_ptr<ITrafficDefinition> _trafficDefinition {};

    public:
        TrafficSourceActionImpl();

        double GetRate() override;
        double GetRadius() override;
        double GetVelocity() override;
        std::shared_ptr<IPosition> GetPosition() override;
        std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() override;

	/**
	 * Sets the value of model property rate
	 * @param rate from OpenSCENARIO class model specification: [Defines the rate on which vehicles appear at the source 
	 * location. Unit: vehicles/s. Range: [0..inf[.]
	 * 
	*/
        void SetRate (double& rate );
	/**
	 * Sets the value of model property radius
	 * @param radius from OpenSCENARIO class model specification: [Defines the radius of the traffic source where vehicles 
	 * appear around the specific position. Unit: m. Range: [0..inf[.]
	 * 
	*/
        void SetRadius (double& radius );
	/**
	 * Sets the value of model property velocity
	 * @param velocity from OpenSCENARIO class model specification: [The optional starting velocity of a scenario object. Unit:
	 * m/s; Range: [0..inf[.]
	 * 
	*/
        void SetVelocity (double& velocity );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Defines the position of the traffic source.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Defines the vehicle and controller distribution 
	 * for the source.]
	 * 
	*/
        void SetTrafficDefinition (std::shared_ptr<ITrafficDefinition>& trafficDefinition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSourceActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSwarmAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSwarmAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrafficSwarmActionImpl: public BaseImpl, public ITrafficSwarmAction
    {
    private:
        double _semiMajorAxis {};
        double _semiMinorAxis {};
        double _innerRadius {};
        double _offset {};
        unsigned int _numberOfVehicles {};
        double _velocity {};
        std::shared_ptr<ICentralSwarmObject> _centralObject {};
        std::shared_ptr<ITrafficDefinition> _trafficDefinition {};

    public:
        TrafficSwarmActionImpl();

        double GetSemiMajorAxis() override;
        double GetSemiMinorAxis() override;
        double GetInnerRadius() override;
        double GetOffset() override;
        unsigned int GetNumberOfVehicles() override;
        double GetVelocity() override;
        std::shared_ptr<ICentralSwarmObject> GetCentralObject() override;
        std::shared_ptr<ITrafficDefinition> GetTrafficDefinition() override;

	/**
	 * Sets the value of model property semiMajorAxis
	 * @param semiMajorAxis from OpenSCENARIO class model specification: [Shape of the swarm traffic distribution area is given
	 * as an ellipsis around a central entity. SemiMajorAxis defines the , half length of the major axis of this ellipsis. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetSemiMajorAxis (double& semiMajorAxis );
	/**
	 * Sets the value of model property semiMinorAxis
	 * @param semiMinorAxis from OpenSCENARIO class model specification: [Shape of the swarm traffic distribution area is given
	 * as an ellipsis around a central entity. SemiMinorAxis defines the , half length of the minor axis of this ellipsis. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetSemiMinorAxis (double& semiMinorAxis );
	/**
	 * Sets the value of model property innerRadius
	 * @param innerRadius from OpenSCENARIO class model specification: [Radius of the inner circular area around the central 
	 * entity. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetInnerRadius (double& innerRadius );
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Offset in longitudinal direction related to the x-axis of 
	 * the central entity. Unit: m;.]
	 * 
	*/
        void SetOffset (double& offset );
	/**
	 * Sets the value of model property numberOfVehicles
	 * @param numberOfVehicles from OpenSCENARIO class model specification: [The maximum number of vehicles surrounding the 
	 * central entity. Depending on the current road situation less than , numberOfVehicles might be set up. Range: [0..inf[.]
	 * 
	*/
        void SetNumberOfVehicles (unsigned int& numberOfVehicles );
	/**
	 * Sets the value of model property velocity
	 * @param velocity from OpenSCENARIO class model specification: [The optional starting velocity of a created entity. Unit: 
	 * m/s; Range: [0..inf[.]
	 * 
	*/
        void SetVelocity (double& velocity );
	/**
	 * Sets the value of model property centralObject
	 * @param centralObject from OpenSCENARIO class model specification: [The entity that represents the center of a swarm.]
	 * 
	*/
        void SetCentralObject (std::shared_ptr<ICentralSwarmObject>& centralObject );
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Specifies properties of autonomous traffic with 
	 * respect to vehicle and driver distributions.]
	 * 
	*/
        void SetTrafficDefinition (std::shared_ptr<ITrafficDefinition>& trafficDefinition );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrafficSwarmActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrajectory. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrajectory)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrajectoryImpl: public BaseImpl, public ITrajectory
    {
    private:
        std::string _name {};
        bool _closed {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<IShape> _shape {};

    public:
        TrajectoryImpl();

        std::string GetName() override;
        bool GetClosed() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<IShape> GetShape() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the trajectory type. Required if used in catalog.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property closed
	 * @param closed from OpenSCENARIO class model specification: [True if trajectory is closed.]
	 * 
	*/
        void SetClosed (bool& closed );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property shape
	 * @param shape from OpenSCENARIO class model specification: [The shape of a trajectory (Polyline, Clothoid or Nurbs)]
	 * 
	*/
        void SetShape (std::shared_ptr<IShape>& shape );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrajectoryImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrajectoryCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrajectoryCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrajectoryCatalogLocationImpl: public BaseImpl, public ITrajectoryCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        TrajectoryCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrajectoryCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrajectoryFollowingMode. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrajectoryFollowingMode)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TrajectoryFollowingModeImpl: public BaseImpl, public ITrajectoryFollowingMode
    {
    private:
        FollowingMode _followingMode {};

    public:
        TrajectoryFollowingModeImpl();

        FollowingMode GetFollowingMode() override;

	/**
	 * Sets the value of model property followingMode
	 * @param followingMode from OpenSCENARIO class model specification: [Defines (lateral) trajectory following behavior of 
	 * the actor: Mode 'position' forces the actor to strictly adhere to the, trajectory. In contrast, mode 'follow' hands over
	 * control to the actor. In this mode, the actor tries to follow the , trajectory as best as he can. This may be restricted
	 * by dynamics constraints and/or control loop implementation.]
	 * 
	*/
        void SetFollowingMode (FollowingMode& followingMode );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TrajectoryFollowingModeImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITransitionDynamics. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITransitionDynamics)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TransitionDynamicsImpl: public BaseImpl, public ITransitionDynamics
    {
    private:
        DynamicsShape _dynamicsShape {};
        double _value {};
        DynamicsDimension _dynamicsDimension {};

    public:
        TransitionDynamicsImpl();

        DynamicsShape GetDynamicsShape() override;
        double GetValue() override;
        DynamicsDimension GetDynamicsDimension() override;

	/**
	 * Sets the value of model property dynamicsShape
	 * @param dynamicsShape from OpenSCENARIO class model specification: [The shape of the transition function f(x) between 
	 * current and target value.]
	 * 
	*/
        void SetDynamicsShape (DynamicsShape& dynamicsShape );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The value for a predefined rate (Unit: delta/s), time (Unit: 
	 * s) or distance (Unit: m) to acquire the target value. , Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );
	/**
	 * Sets the value of model property dynamicsDimension
	 * @param dynamicsDimension from OpenSCENARIO class model specification: [The semantics of the value: 'rate', 'time' or 
	 * 'distance'.]
	 * 
	*/
        void SetDynamicsDimension (DynamicsDimension& dynamicsDimension );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TransitionDynamicsImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITraveledDistanceCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITraveledDistanceCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TraveledDistanceConditionImpl: public BaseImpl, public ITraveledDistanceCondition
    {
    private:
        double _value {};

    public:
        TraveledDistanceConditionImpl();

        double GetValue() override;

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Amount of traveled distance. Unit: m; Range: [0..inf[.]
	 * 
	*/
        void SetValue (double& value );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TraveledDistanceConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrigger. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrigger)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TriggerImpl: public BaseImpl, public ITrigger
    {
    private:
        std::vector<std::shared_ptr<IConditionGroup>> _conditionGroups {};

    public:
        TriggerImpl();

        std::vector<std::shared_ptr<IConditionGroup>> GetConditionGroups() override;

	/**
	 * Sets the value of model property conditionGroups
	 * @param conditionGroups from OpenSCENARIO class model specification: [List of condition groups as a container of 
	 * conditions.]
	 * 
	*/
        void SetConditionGroups(std::vector<std::shared_ptr<IConditionGroup>>& conditionGroups);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TriggerImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITriggeringEntities. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITriggeringEntities)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class TriggeringEntitiesImpl: public BaseImpl, public ITriggeringEntities
    {
    private:
        TriggeringEntitiesRule _triggeringEntitiesRule {};
        std::vector<std::shared_ptr<IEntityRef>> _entityRefs {};

    public:
        TriggeringEntitiesImpl();

        TriggeringEntitiesRule GetTriggeringEntitiesRule() override;
        std::vector<std::shared_ptr<IEntityRef>> GetEntityRefs() override;

	/**
	 * Sets the value of model property triggeringEntitiesRule
	 * @param triggeringEntitiesRule from OpenSCENARIO class model specification: [All or any.]
	 * 
	*/
        void SetTriggeringEntitiesRule (TriggeringEntitiesRule& triggeringEntitiesRule );
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [List of referenced entities that trigger the condition.]
	 * 
	*/
        void SetEntityRefs(std::vector<std::shared_ptr<IEntityRef>>& entityRefs);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        TriggeringEntitiesImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IUserDefinedAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IUserDefinedAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class UserDefinedActionImpl: public BaseImpl, public IUserDefinedAction
    {
    private:
        std::shared_ptr<ICustomCommandAction> _customCommandAction {};

    public:
        UserDefinedActionImpl();

        std::shared_ptr<ICustomCommandAction> GetCustomCommandAction() override;

	/**
	 * Sets the value of model property customCommandAction
	 * @param customCommandAction from OpenSCENARIO class model specification: [The available commands are subject of a 
	 * contract between simulation environment provider and scenario author.]
	 * 
	*/
        void SetCustomCommandAction (std::shared_ptr<ICustomCommandAction>& customCommandAction );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        UserDefinedActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IUserDefinedValueCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IUserDefinedValueCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class UserDefinedValueConditionImpl: public BaseImpl, public IUserDefinedValueCondition
    {
    private:
        std::string _name {};
        std::string _value {};
        Rule _rule {};

    public:
        UserDefinedValueConditionImpl();

        std::string GetName() override;
        std::string GetValue() override;
        Rule GetRule() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the external value.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Reference value the external value is compared to.]
	 * 
	*/
        void SetValue (std::string& value );
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
        void SetRule (Rule& rule );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        UserDefinedValueConditionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVehicle. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVehicle)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleImpl: public BaseImpl, public IVehicle
    {
    private:
        std::string _name {};
        VehicleCategory _vehicleCategory {};
        std::vector<std::shared_ptr<IParameterDeclaration>> _parameterDeclarations {};
        std::shared_ptr<IBoundingBox> _boundingBox {};
        std::shared_ptr<IPerformance> _performance {};
        std::shared_ptr<IAxles> _axles {};
        std::shared_ptr<IProperties> _properties {};

    public:
        VehicleImpl();

        std::string GetName() override;
        VehicleCategory GetVehicleCategory() override;
        std::vector<std::shared_ptr<IParameterDeclaration>> GetParameterDeclarations() override;
        std::shared_ptr<IBoundingBox> GetBoundingBox() override;
        std::shared_ptr<IPerformance> GetPerformance() override;
        std::shared_ptr<IAxles> GetAxles() override;
        std::shared_ptr<IProperties> GetProperties() override;

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the vehicle type.]
	 * 
	*/
        void SetName (std::string& name );
	/**
	 * Sets the value of model property vehicleCategory
	 * @param vehicleCategory from OpenSCENARIO class model specification: [Category of the vehicle (bicycle, train,...).]
	 * 
	*/
        void SetVehicleCategory (VehicleCategory& vehicleCategory );
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
        void SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations);
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [The three dimensional bounding box that encloses the 
	 * vehicle.]
	 * 
	*/
        void SetBoundingBox (std::shared_ptr<IBoundingBox>& boundingBox );
	/**
	 * Sets the value of model property performance
	 * @param performance from OpenSCENARIO class model specification: [Performance properties of the vehicle.]
	 * 
	*/
        void SetPerformance (std::shared_ptr<IPerformance>& performance );
	/**
	 * Sets the value of model property axles
	 * @param axles from OpenSCENARIO class model specification: [A set of axles (front, rear, additional) and their geometric 
	 * locations.]
	 * 
	*/
        void SetAxles (std::shared_ptr<IAxles>& axles );
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Additional properties as name value pairs.]
	 * 
	*/
        void SetProperties (std::shared_ptr<IProperties>& properties );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;

        bool HasParameterDefinitions() override;
        std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 

        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        VehicleImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVehicleCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVehicleCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleCatalogLocationImpl: public BaseImpl, public IVehicleCatalogLocation
    {
    private:
        std::shared_ptr<IDirectory> _directory {};

    public:
        VehicleCatalogLocationImpl();

        std::shared_ptr<IDirectory> GetDirectory() override;

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
        void SetDirectory (std::shared_ptr<IDirectory>& directory );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        VehicleCatalogLocationImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVehicleCategoryDistribution. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVehicleCategoryDistribution)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleCategoryDistributionImpl: public BaseImpl, public IVehicleCategoryDistribution
    {
    private:
        std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> _vehicleCategoryDistributionEntries {};

    public:
        VehicleCategoryDistributionImpl();

        std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> GetVehicleCategoryDistributionEntries() override;

	/**
	 * Sets the value of model property vehicleCategoryDistributionEntries
	 * @param vehicleCategoryDistributionEntries from OpenSCENARIO class model specification: [List of elements that pair 
	 * vehicle categories and their weight within the distribution.]
	 * 
	*/
        void SetVehicleCategoryDistributionEntries(std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>>& vehicleCategoryDistributionEntries);

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        VehicleCategoryDistributionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVehicleCategoryDistributionEntry. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVehicleCategoryDistributionEntry)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VehicleCategoryDistributionEntryImpl: public BaseImpl, public IVehicleCategoryDistributionEntry
    {
    private:
        VehicleCategory _category {};
        double _weight {};

    public:
        VehicleCategoryDistributionEntryImpl();

        VehicleCategory GetCategory() override;
        double GetWeight() override;

	/**
	 * Sets the value of model property category
	 * @param category from OpenSCENARIO class model specification: [The category of the vehicles that appear in traffic.]
	 * 
	*/
        void SetCategory (VehicleCategory& category );
	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [The weight of a vehicle category within a traffic 
	 * distribution. Range: [0..inf[.]
	 * 
	*/
        void SetWeight (double& weight );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        VehicleCategoryDistributionEntryImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVertex. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVertex)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VertexImpl: public BaseImpl, public IVertex
    {
    private:
        double _time {};
        std::shared_ptr<IPosition> _position {};

    public:
        VertexImpl();

        double GetTime() override;
        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property time
	 * @param time from OpenSCENARIO class model specification: [Optional time specification of the vertex.]
	 * 
	*/
        void SetTime (double& time );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position of the vertex.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        VertexImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVisibilityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVisibilityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class VisibilityActionImpl: public BaseImpl, public IVisibilityAction
    {
    private:
        bool _graphics {};
        bool _traffic {};
        bool _sensors {};

    public:
        VisibilityActionImpl();

        bool GetGraphics() override;
        bool GetTraffic() override;
        bool GetSensors() override;

	/**
	 * Sets the value of model property graphics
	 * @param graphics from OpenSCENARIO class model specification: [True: actor is visible in image generator(s). False: actor
	 * is not visible in image generator(s).]
	 * 
	*/
        void SetGraphics (bool& graphics );
	/**
	 * Sets the value of model property traffic
	 * @param traffic from OpenSCENARIO class model specification: [True: actor is visible for other traffic participants, 
	 * particularly for autonomous driver models. False: actor is not , visible for other traffic participants.]
	 * 
	*/
        void SetTraffic (bool& traffic );
	/**
	 * Sets the value of model property sensors
	 * @param sensors from OpenSCENARIO class model specification: [True: actor is visible in sensor(s). False: actor is not 
	 * visible in sensor(s).]
	 * 
	*/
        void SetSensors (bool& sensors );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        VisibilityActionImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IWaypoint. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IWaypoint)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class WaypointImpl: public BaseImpl, public IWaypoint
    {
    private:
        RouteStrategy _routeStrategy {};
        std::shared_ptr<IPosition> _position {};

    public:
        WaypointImpl();

        RouteStrategy GetRouteStrategy() override;
        std::shared_ptr<IPosition> GetPosition() override;

	/**
	 * Sets the value of model property routeStrategy
	 * @param routeStrategy from OpenSCENARIO class model specification: [The corresponding routing strategy (fastest, 
	 * shortest, random, leastIntersections).]
	 * 
	*/
        void SetRouteStrategy (RouteStrategy& routeStrategy );
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The reference position to form the route.]
	 * 
	*/
        void SetPosition (std::shared_ptr<IPosition>& position );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        WaypointImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IWeather. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IWeather)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class WeatherImpl: public BaseImpl, public IWeather
    {
    private:
        CloudState _cloudState {};
        std::shared_ptr<ISun> _sun {};
        std::shared_ptr<IFog> _fog {};
        std::shared_ptr<IPrecipitation> _precipitation {};

    public:
        WeatherImpl();

        CloudState GetCloudState() override;
        std::shared_ptr<ISun> GetSun() override;
        std::shared_ptr<IFog> GetFog() override;
        std::shared_ptr<IPrecipitation> GetPrecipitation() override;

	/**
	 * Sets the value of model property cloudState
	 * @param cloudState from OpenSCENARIO class model specification: [Definition of the cloud state, i.e. cloud state and sky 
	 * visualization settings.]
	 * 
	*/
        void SetCloudState (CloudState& cloudState );
	/**
	 * Sets the value of model property sun
	 * @param sun from OpenSCENARIO class model specification: [Definition of the sun, i.e. position and intensity.]
	 * 
	*/
        void SetSun (std::shared_ptr<ISun>& sun );
	/**
	 * Sets the value of model property fog
	 * @param fog from OpenSCENARIO class model specification: [Definition of fog, i.e. visual range and bounding box.]
	 * 
	*/
        void SetFog (std::shared_ptr<IFog>& fog );
	/**
	 * Sets the value of model property precipitation
	 * @param precipitation from OpenSCENARIO class model specification: [Definition of precipitation, i.e. type and 
	 * intensity.]
	 * 
	*/
        void SetPrecipitation (std::shared_ptr<IPrecipitation>& precipitation );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        WeatherImpl Clone();
    };

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IWorldPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IWorldPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
    class WorldPositionImpl: public BaseImpl, public IWorldPosition
    {
    private:
        double _x {};
        double _y {};
        double _z {};
        double _h {};
        double _p {};
        double _r {};

    public:
        WorldPositionImpl();

        double GetX() override;
        double GetY() override;
        double GetZ() override;
        double GetH() override;
        double GetP() override;
        double GetR() override;

	/**
	 * Sets the value of model property x
	 * @param x from OpenSCENARIO class model specification: [The x coordinate value.]
	 * 
	*/
        void SetX (double& x );
	/**
	 * Sets the value of model property y
	 * @param y from OpenSCENARIO class model specification: [The y coordinate value.]
	 * 
	*/
        void SetY (double& y );
	/**
	 * Sets the value of model property z
	 * @param z from OpenSCENARIO class model specification: [The z coordinate value.]
	 * 
	*/
        void SetZ (double& z );
	/**
	 * Sets the value of model property h
	 * @param h from OpenSCENARIO class model specification: [The heading angle of the object, defining a mathematically 
	 * positive rotation about the z-axis (see ISO 8855:2011).]
	 * 
	*/
        void SetH (double& h );
	/**
	 * Sets the value of model property p
	 * @param p from OpenSCENARIO class model specification: [The pitch angle of the object, defining a mathematically positive
	 * rotation about the y-axis (see ISO 8855:2011).]
	 * 
	*/
        void SetP (double& p );
	/**
	 * Sets the value of model property r
	 * @param r from OpenSCENARIO class model specification: [The roll angle of the object, defining a mathematically positive 
	 * rotation about the x-axis (see ISO 8855:2011).]
	 * 
	*/
        void SetR (double& r );

        void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

        std::string GetTypeFromAttributeName(std::string& attributeKey) override;


        /**
        * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
        * method for any child.
        * @return a list with all children (as BaseImpl)
        */
        std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

        /**
        * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
        * @return a deep copy of the object.
        */
        WorldPositionImpl Clone();
    };


}
