#include "ApiClassImpl.h"
#include "OscConstants.h"
#include "FileContentMessage.h"
#include "IOpenScenarioModelElement.h"
#include "ErrorLevel.h"

namespace RAC_OPENSCENARIO
{

    AbsoluteSpeedImpl::AbsoluteSpeedImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double AbsoluteSpeedImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Absolute speed. Unit: m/s. Range: [0..inf[.]
	 * 
	*/
    void AbsoluteSpeedImpl::SetValue(double& value )
    {
        _value = value;
    }

    void AbsoluteSpeedImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string AbsoluteSpeedImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AbsoluteSpeedImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AbsoluteSpeedImpl AbsoluteSpeedImpl::Clone()
    {
        AbsoluteSpeedImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    AbsoluteTargetLaneImpl::AbsoluteTargetLaneImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
    }

    std::string AbsoluteTargetLaneImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Number (ID) of the target lane the entity will change to.]
	 * 
	*/
    void AbsoluteTargetLaneImpl::SetValue(std::string& value )
    {
        _value = value;
    }

    void AbsoluteTargetLaneImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string AbsoluteTargetLaneImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AbsoluteTargetLaneImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AbsoluteTargetLaneImpl AbsoluteTargetLaneImpl::Clone()
    {
        AbsoluteTargetLaneImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    AbsoluteTargetLaneOffsetImpl::AbsoluteTargetLaneOffsetImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double AbsoluteTargetLaneOffsetImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Signed number in meters the vehicle should respect as an 
	 * offset from the center of the current lane.]
	 * 
	*/
    void AbsoluteTargetLaneOffsetImpl::SetValue(double& value )
    {
        _value = value;
    }

    void AbsoluteTargetLaneOffsetImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string AbsoluteTargetLaneOffsetImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AbsoluteTargetLaneOffsetImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AbsoluteTargetLaneOffsetImpl AbsoluteTargetLaneOffsetImpl::Clone()
    {
        AbsoluteTargetLaneOffsetImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    AbsoluteTargetSpeedImpl::AbsoluteTargetSpeedImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double AbsoluteTargetSpeedImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Target speed in m/s the vehicle should change to.]
	 * 
	*/
    void AbsoluteTargetSpeedImpl::SetValue(double& value )
    {
        _value = value;
    }

    void AbsoluteTargetSpeedImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string AbsoluteTargetSpeedImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AbsoluteTargetSpeedImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AbsoluteTargetSpeedImpl AbsoluteTargetSpeedImpl::Clone()
    {
        AbsoluteTargetSpeedImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    AccelerationConditionImpl::AccelerationConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    double AccelerationConditionImpl::GetValue()
    {
        return _value;
    }
    Rule AccelerationConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Acceleration value. Unit: m/s^2.]
	 * 
	*/
    void AccelerationConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void AccelerationConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void AccelerationConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string AccelerationConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AccelerationConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AccelerationConditionImpl AccelerationConditionImpl::Clone()
    {
        AccelerationConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    AcquirePositionActionImpl::AcquirePositionActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IPosition> AcquirePositionActionImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [A position to acquire.]
	 * 
	*/
    void AcquirePositionActionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void AcquirePositionActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string AcquirePositionActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AcquirePositionActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AcquirePositionActionImpl AcquirePositionActionImpl::Clone()
    {
        AcquirePositionActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    ActImpl::ActImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string ActImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IManeuverGroup>> ActImpl::GetManeuverGroups()
    {
        return _maneuverGroups;
    }
    std::shared_ptr<ITrigger> ActImpl::GetStartTrigger()
    {
        return _startTrigger;
    }
    std::shared_ptr<ITrigger> ActImpl::GetStopTrigger()
    {
        return _stopTrigger;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of this act.]
	 * 
	*/
    void ActImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property maneuverGroups
	 * @param maneuverGroups from OpenSCENARIO class model specification: [A list of maneuver groups representing the act.]
	 * 
	*/
    void ActImpl::SetManeuverGroups(std::vector<std::shared_ptr<IManeuverGroup>>& maneuverGroups)
    {
        _maneuverGroups = maneuverGroups;
    }
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Defines a trigger to that starts the act.]
	 * 
	*/
    void ActImpl::SetStartTrigger(std::shared_ptr<ITrigger>& startTrigger )
    {
        _startTrigger = startTrigger;
    }
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Defines a trigger that stops the act.]
	 * 
	*/
    void ActImpl::SetStopTrigger(std::shared_ptr<ITrigger>& stopTrigger )
    {
        _stopTrigger = stopTrigger;
    }

    void ActImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ActImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ActImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto maneuverGroups =  GetManeuverGroups();
            if (!maneuverGroups.empty())
            {
                for(auto&& item : maneuverGroups)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kStartTrigger =  GetStartTrigger();
            if (kStartTrigger)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStartTrigger));
            }
            const auto kStopTrigger =  GetStopTrigger();
            if (kStopTrigger)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStopTrigger));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ActImpl ActImpl::Clone()
    {
        ActImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kManeuverGroups =  GetManeuverGroups();
        if (!kManeuverGroups.empty())
        {
            std::vector<std::shared_ptr<IManeuverGroup>> clonedList;
            for(auto&& kItem : kManeuverGroups)
            {
                auto clonedChild = std::make_shared <ManeuverGroupImpl>(std::dynamic_pointer_cast<ManeuverGroupImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetManeuverGroups(clonedList);
        }
        const auto kStartTrigger =  GetStartTrigger();
        if (kStartTrigger)
        {
            auto clonedChild = std::make_shared<TriggerImpl>(std::dynamic_pointer_cast<TriggerImpl>(kStartTrigger)->Clone());
            auto clonedChildITrigger = std::dynamic_pointer_cast<ITrigger>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStartTrigger(clonedChildITrigger);
        }
        const auto kStopTrigger =  GetStopTrigger();
        if (kStopTrigger)
        {
            auto clonedChild = std::make_shared<TriggerImpl>(std::dynamic_pointer_cast<TriggerImpl>(kStopTrigger)->Clone());
            auto clonedChildITrigger = std::dynamic_pointer_cast<ITrigger>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStopTrigger(clonedChildITrigger);
        }
        return clonedObject;
    }




    ActionImpl::ActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string ActionImpl::GetName()
    {
        return _name;
    }
    std::shared_ptr<IGlobalAction> ActionImpl::GetGlobalAction()
    {
        return _globalAction;
    }
    std::shared_ptr<IUserDefinedAction> ActionImpl::GetUserDefinedAction()
    {
        return _userDefinedAction;
    }
    std::shared_ptr<IPrivateAction> ActionImpl::GetPrivateAction()
    {
        return _privateAction;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of this action.]
	 * 
	*/
    void ActionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property globalAction
	 * @param globalAction from OpenSCENARIO class model specification: [The GlobalAction to be executed when the enclosing 
	 * Action is startedis started.]
	 * 
	*/
    void ActionImpl::SetGlobalAction(std::shared_ptr<IGlobalAction>& globalAction )
    {
        _globalAction = globalAction;
    }
	/**
	 * Sets the value of model property userDefinedAction
	 * @param userDefinedAction from OpenSCENARIO class model specification: [The UserDefinedAction to be executed when the 
	 * enclosing Action is started.]
	 * 
	*/
    void ActionImpl::SetUserDefinedAction(std::shared_ptr<IUserDefinedAction>& userDefinedAction )
    {
        _userDefinedAction = userDefinedAction;
    }
	/**
	 * Sets the value of model property privateAction
	 * @param privateAction from OpenSCENARIO class model specification: [The PrivateAction to be executed when the enclosing 
	 * Action is started.]
	 * 
	*/
    void ActionImpl::SetPrivateAction(std::shared_ptr<IPrivateAction>& privateAction )
    {
        _privateAction = privateAction;
    }

    void ActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kGlobalAction =  GetGlobalAction();
            if (kGlobalAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kGlobalAction));
            }
            const auto kUserDefinedAction =  GetUserDefinedAction();
            if (kUserDefinedAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kUserDefinedAction));
            }
            const auto kPrivateAction =  GetPrivateAction();
            if (kPrivateAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPrivateAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ActionImpl ActionImpl::Clone()
    {
        ActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kGlobalAction =  GetGlobalAction();
        if (kGlobalAction)
        {
            auto clonedChild = std::make_shared<GlobalActionImpl>(std::dynamic_pointer_cast<GlobalActionImpl>(kGlobalAction)->Clone());
            auto clonedChildIGlobalAction = std::dynamic_pointer_cast<IGlobalAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetGlobalAction(clonedChildIGlobalAction);
        }
        const auto kUserDefinedAction =  GetUserDefinedAction();
        if (kUserDefinedAction)
        {
            auto clonedChild = std::make_shared<UserDefinedActionImpl>(std::dynamic_pointer_cast<UserDefinedActionImpl>(kUserDefinedAction)->Clone());
            auto clonedChildIUserDefinedAction = std::dynamic_pointer_cast<IUserDefinedAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetUserDefinedAction(clonedChildIUserDefinedAction);
        }
        const auto kPrivateAction =  GetPrivateAction();
        if (kPrivateAction)
        {
            auto clonedChild = std::make_shared<PrivateActionImpl>(std::dynamic_pointer_cast<PrivateActionImpl>(kPrivateAction)->Clone());
            auto clonedChildIPrivateAction = std::dynamic_pointer_cast<IPrivateAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPrivateAction(clonedChildIPrivateAction);
        }
        return clonedObject;
    }




    ActivateControllerActionImpl::ActivateControllerActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LATERAL, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL, typeid(bool).name());
    }

    bool ActivateControllerActionImpl::GetLateral()
    {
        return _lateral;
    }
    bool ActivateControllerActionImpl::GetLongitudinal()
    {
        return _longitudinal;
    }

	/**
	 * Sets the value of model property lateral
	 * @param lateral from OpenSCENARIO class model specification: [In lateral domain: Activate or deactivate controller 
	 * defined (e.g. automated, autonomous) behavior.]
	 * 
	*/
    void ActivateControllerActionImpl::SetLateral(bool& lateral )
    {
        _lateral = lateral;
    }
	/**
	 * Sets the value of model property longitudinal
	 * @param longitudinal from OpenSCENARIO class model specification: [In longitudinal domain: Activate or deactivate 
	 * autonomous behavior.]
	 * 
	*/
    void ActivateControllerActionImpl::SetLongitudinal(bool& longitudinal )
    {
        _longitudinal = longitudinal;
    }

    void ActivateControllerActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LATERAL)
        {
            // Simple type
            _lateral = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LONGITUDINAL)
        {
            // Simple type
            _longitudinal = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ActivateControllerActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ActivateControllerActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ActivateControllerActionImpl ActivateControllerActionImpl::Clone()
    {
        ActivateControllerActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetLateral(_lateral);
        // Simple type
        clonedObject.SetLongitudinal(_longitudinal);
        // clone children
        return clonedObject;
    }




    ActorsImpl::ActorsImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, typeid(bool).name());
    }

    bool ActorsImpl::GetSelectTriggeringEntities()
    {
        return _selectTriggeringEntities;
    }
    std::vector<std::shared_ptr<IEntityRef>> ActorsImpl::GetEntityRefs()
    {
        return _entityRefs;
    }

	/**
	 * Sets the value of model property selectTriggeringEntities
	 * @param selectTriggeringEntities from OpenSCENARIO class model specification: [Indicates whether the triggering entities 
	 * are considered actors.]
	 * 
	*/
    void ActorsImpl::SetSelectTriggeringEntities(bool& selectTriggeringEntities )
    {
        _selectTriggeringEntities = selectTriggeringEntities;
    }
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [A list of entities this actor is referencing.]
	 * 
	*/
    void ActorsImpl::SetEntityRefs(std::vector<std::shared_ptr<IEntityRef>>& entityRefs)
    {
        _entityRefs = entityRefs;
    }

    void ActorsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES)
        {
            // Simple type
            _selectTriggeringEntities = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ActorsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ActorsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto entityRefs =  GetEntityRefs();
            if (!entityRefs.empty())
            {
                for(auto&& item : entityRefs)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ActorsImpl ActorsImpl::Clone()
    {
        ActorsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetSelectTriggeringEntities(_selectTriggeringEntities);
        // clone children
        const auto kEntityRefs =  GetEntityRefs();
        if (!kEntityRefs.empty())
        {
            std::vector<std::shared_ptr<IEntityRef>> clonedList;
            for(auto&& kItem : kEntityRefs)
            {
                auto clonedChild = std::make_shared <EntityRefImpl>(std::dynamic_pointer_cast<EntityRefImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetEntityRefs(clonedList);
        }
        return clonedObject;
    }




    AddEntityActionImpl::AddEntityActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IPosition> AddEntityActionImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Adds an entity at the specified position.]
	 * 
	*/
    void AddEntityActionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void AddEntityActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string AddEntityActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AddEntityActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AddEntityActionImpl AddEntityActionImpl::Clone()
    {
        AddEntityActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    AssignControllerActionImpl::AssignControllerActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IController> AssignControllerActionImpl::GetController()
    {
        return _controller;
    }
    std::shared_ptr<ICatalogReference> AssignControllerActionImpl::GetCatalogReference()
    {
        return _catalogReference;
    }

	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [Assigns a controller to a given entity.]
	 * 
	*/
    void AssignControllerActionImpl::SetController(std::shared_ptr<IController>& controller )
    {
        _controller = controller;
    }
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Uses a CatalogReference to assign a controller to 
	 * a given entity. CatalogReference must point to a Controller type.]
	 * 
	*/
    void AssignControllerActionImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }

    void AssignControllerActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string AssignControllerActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AssignControllerActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kController =  GetController();
            if (kController)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kController));
            }
            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AssignControllerActionImpl AssignControllerActionImpl::Clone()
    {
        AssignControllerActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kController =  GetController();
        if (kController)
        {
            auto clonedChild = std::make_shared<ControllerImpl>(std::dynamic_pointer_cast<ControllerImpl>(kController)->Clone());
            auto clonedChildIController = std::dynamic_pointer_cast<IController>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetController(clonedChildIController);
        }
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        return clonedObject;
    }




    AssignRouteActionImpl::AssignRouteActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IRoute> AssignRouteActionImpl::GetRoute()
    {
        return _route;
    }
    std::shared_ptr<ICatalogReference> AssignRouteActionImpl::GetCatalogReference()
    {
        return _catalogReference;
    }

	/**
	 * Sets the value of model property route
	 * @param route from OpenSCENARIO class model specification: [The route definition.]
	 * 
	*/
    void AssignRouteActionImpl::SetRoute(std::shared_ptr<IRoute>& route )
    {
        _route = route;
    }
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A reference to the route definition in a catalog. 
	 * The reference must point to a route.]
	 * 
	*/
    void AssignRouteActionImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }

    void AssignRouteActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string AssignRouteActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AssignRouteActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRoute =  GetRoute();
            if (kRoute)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoute));
            }
            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AssignRouteActionImpl AssignRouteActionImpl::Clone()
    {
        AssignRouteActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRoute =  GetRoute();
        if (kRoute)
        {
            auto clonedChild = std::make_shared<RouteImpl>(std::dynamic_pointer_cast<RouteImpl>(kRoute)->Clone());
            auto clonedChildIRoute = std::dynamic_pointer_cast<IRoute>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoute(clonedChildIRoute);
        }
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        return clonedObject;
    }




    AxleImpl::AxleImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, typeid(double).name());
    }

    double AxleImpl::GetMaxSteering()
    {
        return _maxSteering;
    }
    double AxleImpl::GetWheelDiameter()
    {
        return _wheelDiameter;
    }
    double AxleImpl::GetTrackWidth()
    {
        return _trackWidth;
    }
    double AxleImpl::GetPositionX()
    {
        return _positionX;
    }
    double AxleImpl::GetPositionZ()
    {
        return _positionZ;
    }

	/**
	 * Sets the value of model property maxSteering
	 * @param maxSteering from OpenSCENARIO class model specification: [Maximum steering angle which can be performed by the 
	 * wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.]
	 * 
	*/
    void AxleImpl::SetMaxSteering(double& maxSteering )
    {
        _maxSteering = maxSteering;
    }
	/**
	 * Sets the value of model property wheelDiameter
	 * @param wheelDiameter from OpenSCENARIO class model specification: [Diameter of the wheels on this axle. Unit: m; Range: 
	 * ]0..inf[.]
	 * 
	*/
    void AxleImpl::SetWheelDiameter(double& wheelDiameter )
    {
        _wheelDiameter = wheelDiameter;
    }
	/**
	 * Sets the value of model property trackWidth
	 * @param trackWidth from OpenSCENARIO class model specification: [Distance of the wheels center lines at zero steering. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
    void AxleImpl::SetTrackWidth(double& trackWidth )
    {
        _trackWidth = trackWidth;
    }
	/**
	 * Sets the value of model property positionX
	 * @param positionX from OpenSCENARIO class model specification: [Longitudinal position of the axle with respect to the 
	 * vehicles reference point. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void AxleImpl::SetPositionX(double& positionX )
    {
        _positionX = positionX;
    }
	/**
	 * Sets the value of model property positionZ
	 * @param positionZ from OpenSCENARIO class model specification: [Z-position of the axle with respect to the vehicles 
	 * reference point. Usually this is half of wheel diameter. Unit:m; , Range:[0..inf[.]
	 * 
	*/
    void AxleImpl::SetPositionZ(double& positionZ )
    {
        _positionZ = positionZ;
    }

    void AxleImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING)
        {
            // Simple type
            _maxSteering = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER)
        {
            // Simple type
            _wheelDiameter = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH)
        {
            // Simple type
            _trackWidth = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__POSITION_X)
        {
            // Simple type
            _positionX = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__POSITION_Z)
        {
            // Simple type
            _positionZ = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string AxleImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AxleImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AxleImpl AxleImpl::Clone()
    {
        AxleImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetMaxSteering(_maxSteering);
        // Simple type
        clonedObject.SetWheelDiameter(_wheelDiameter);
        // Simple type
        clonedObject.SetTrackWidth(_trackWidth);
        // Simple type
        clonedObject.SetPositionX(_positionX);
        // Simple type
        clonedObject.SetPositionZ(_positionZ);
        // clone children
        return clonedObject;
    }




    AxlesImpl::AxlesImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IAxle> AxlesImpl::GetFrontAxle()
    {
        return _frontAxle;
    }
    std::shared_ptr<IAxle> AxlesImpl::GetRearAxle()
    {
        return _rearAxle;
    }
    std::vector<std::shared_ptr<IAxle>> AxlesImpl::GetAdditionalAxles()
    {
        return _additionalAxles;
    }

	/**
	 * Sets the value of model property frontAxle
	 * @param frontAxle from OpenSCENARIO class model specification: [Front axle.]
	 * 
	*/
    void AxlesImpl::SetFrontAxle(std::shared_ptr<IAxle>& frontAxle )
    {
        _frontAxle = frontAxle;
    }
	/**
	 * Sets the value of model property rearAxle
	 * @param rearAxle from OpenSCENARIO class model specification: [Rear axle.]
	 * 
	*/
    void AxlesImpl::SetRearAxle(std::shared_ptr<IAxle>& rearAxle )
    {
        _rearAxle = rearAxle;
    }
	/**
	 * Sets the value of model property additionalAxles
	 * @param additionalAxles from OpenSCENARIO class model specification: [A list of optional additional axles.]
	 * 
	*/
    void AxlesImpl::SetAdditionalAxles(std::vector<std::shared_ptr<IAxle>>& additionalAxles)
    {
        _additionalAxles = additionalAxles;
    }

    void AxlesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string AxlesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> AxlesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kFrontAxle =  GetFrontAxle();
            if (kFrontAxle)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFrontAxle));
            }
            const auto kRearAxle =  GetRearAxle();
            if (kRearAxle)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRearAxle));
            }
            auto additionalAxles =  GetAdditionalAxles();
            if (!additionalAxles.empty())
            {
                for(auto&& item : additionalAxles)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    AxlesImpl AxlesImpl::Clone()
    {
        AxlesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kFrontAxle =  GetFrontAxle();
        if (kFrontAxle)
        {
            auto clonedChild = std::make_shared<AxleImpl>(std::dynamic_pointer_cast<AxleImpl>(kFrontAxle)->Clone());
            auto clonedChildIAxle = std::dynamic_pointer_cast<IAxle>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFrontAxle(clonedChildIAxle);
        }
        const auto kRearAxle =  GetRearAxle();
        if (kRearAxle)
        {
            auto clonedChild = std::make_shared<AxleImpl>(std::dynamic_pointer_cast<AxleImpl>(kRearAxle)->Clone());
            auto clonedChildIAxle = std::dynamic_pointer_cast<IAxle>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRearAxle(clonedChildIAxle);
        }
        const auto kAdditionalAxles =  GetAdditionalAxles();
        if (!kAdditionalAxles.empty())
        {
            std::vector<std::shared_ptr<IAxle>> clonedList;
            for(auto&& kItem : kAdditionalAxles)
            {
                auto clonedChild = std::make_shared <AxleImpl>(std::dynamic_pointer_cast<AxleImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetAdditionalAxles(clonedList);
        }
        return clonedObject;
    }




    BoundingBoxImpl::BoundingBoxImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ICenter> BoundingBoxImpl::GetCenter()
    {
        return _center;
    }
    std::shared_ptr<IDimensions> BoundingBoxImpl::GetDimensions()
    {
        return _dimensions;
    }

	/**
	 * Sets the value of model property center
	 * @param center from OpenSCENARIO class model specification: [Represents the geometrical center of the bounding box 
	 * expressed in coordinates that refer to the coordinate system of , the entity (e.g. the vehicle coordinate system).]
	 * 
	*/
    void BoundingBoxImpl::SetCenter(std::shared_ptr<ICenter>& center )
    {
        _center = center;
    }
	/**
	 * Sets the value of model property dimensions
	 * @param dimensions from OpenSCENARIO class model specification: [Width, length and height of the bounding box.]
	 * 
	*/
    void BoundingBoxImpl::SetDimensions(std::shared_ptr<IDimensions>& dimensions )
    {
        _dimensions = dimensions;
    }

    void BoundingBoxImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string BoundingBoxImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> BoundingBoxImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kCenter =  GetCenter();
            if (kCenter)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCenter));
            }
            const auto kDimensions =  GetDimensions();
            if (kDimensions)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDimensions));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    BoundingBoxImpl BoundingBoxImpl::Clone()
    {
        BoundingBoxImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kCenter =  GetCenter();
        if (kCenter)
        {
            auto clonedChild = std::make_shared<CenterImpl>(std::dynamic_pointer_cast<CenterImpl>(kCenter)->Clone());
            auto clonedChildICenter = std::dynamic_pointer_cast<ICenter>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCenter(clonedChildICenter);
        }
        const auto kDimensions =  GetDimensions();
        if (kDimensions)
        {
            auto clonedChild = std::make_shared<DimensionsImpl>(std::dynamic_pointer_cast<DimensionsImpl>(kDimensions)->Clone());
            auto clonedChildIDimensions = std::dynamic_pointer_cast<IDimensions>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDimensions(clonedChildIDimensions);
        }
        return clonedObject;
    }




    ByEntityConditionImpl::ByEntityConditionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ITriggeringEntities> ByEntityConditionImpl::GetTriggeringEntities()
    {
        return _triggeringEntities;
    }
    std::shared_ptr<IEntityCondition> ByEntityConditionImpl::GetEntityCondition()
    {
        return _entityCondition;
    }

	/**
	 * Sets the value of model property triggeringEntities
	 * @param triggeringEntities from OpenSCENARIO class model specification: [A list of entities triggering this condition.]
	 * 
	*/
    void ByEntityConditionImpl::SetTriggeringEntities(std::shared_ptr<ITriggeringEntities>& triggeringEntities )
    {
        _triggeringEntities = triggeringEntities;
    }
	/**
	 * Sets the value of model property entityCondition
	 * @param entityCondition from OpenSCENARIO class model specification: [The condition which is related to the triggering 
	 * entities.]
	 * 
	*/
    void ByEntityConditionImpl::SetEntityCondition(std::shared_ptr<IEntityCondition>& entityCondition )
    {
        _entityCondition = entityCondition;
    }

    void ByEntityConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ByEntityConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ByEntityConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTriggeringEntities =  GetTriggeringEntities();
            if (kTriggeringEntities)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTriggeringEntities));
            }
            const auto kEntityCondition =  GetEntityCondition();
            if (kEntityCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEntityCondition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ByEntityConditionImpl ByEntityConditionImpl::Clone()
    {
        ByEntityConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kTriggeringEntities =  GetTriggeringEntities();
        if (kTriggeringEntities)
        {
            auto clonedChild = std::make_shared<TriggeringEntitiesImpl>(std::dynamic_pointer_cast<TriggeringEntitiesImpl>(kTriggeringEntities)->Clone());
            auto clonedChildITriggeringEntities = std::dynamic_pointer_cast<ITriggeringEntities>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTriggeringEntities(clonedChildITriggeringEntities);
        }
        const auto kEntityCondition =  GetEntityCondition();
        if (kEntityCondition)
        {
            auto clonedChild = std::make_shared<EntityConditionImpl>(std::dynamic_pointer_cast<EntityConditionImpl>(kEntityCondition)->Clone());
            auto clonedChildIEntityCondition = std::dynamic_pointer_cast<IEntityCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEntityCondition(clonedChildIEntityCondition);
        }
        return clonedObject;
    }




    ByObjectTypeImpl::ByObjectTypeImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TYPE, typeid(std::string).name());
    }

    ObjectType ByObjectTypeImpl::GetType()
    {
        return _type;
    }

	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Defines the type.]
	 * 
	*/
    void ByObjectTypeImpl::SetType(ObjectType& type )
    {
        _type = type;
    }

    void ByObjectTypeImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TYPE)
        {
            // Enumeration Type
            const auto kResult = ObjectType::GetFromLiteral(parameterLiteralValue);
            if (kResult != ObjectType::UNKNOWN)
            {
                _type = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string ByObjectTypeImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ByObjectTypeImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ByObjectTypeImpl ByObjectTypeImpl::Clone()
    {
        ByObjectTypeImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetType(_type);
        // clone children
        return clonedObject;
    }




    ByTypeImpl::ByTypeImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, typeid(std::string).name());
    }

    ObjectType ByTypeImpl::GetObjectType()
    {
        return _objectType;
    }

	/**
	 * Sets the value of model property objectType
	 * @param objectType from OpenSCENARIO class model specification: [If a scenario object's entity object is of this type, it
	 * is part of the entity selection.]
	 * 
	*/
    void ByTypeImpl::SetObjectType(ObjectType& objectType )
    {
        _objectType = objectType;
    }

    void ByTypeImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE)
        {
            // Enumeration Type
            const auto kResult = ObjectType::GetFromLiteral(parameterLiteralValue);
            if (kResult != ObjectType::UNKNOWN)
            {
                _objectType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string ByTypeImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ByTypeImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ByTypeImpl ByTypeImpl::Clone()
    {
        ByTypeImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetObjectType(_objectType);
        // clone children
        return clonedObject;
    }




    ByValueConditionImpl::ByValueConditionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IParameterCondition> ByValueConditionImpl::GetParameterCondition()
    {
        return _parameterCondition;
    }
    std::shared_ptr<ITimeOfDayCondition> ByValueConditionImpl::GetTimeOfDayCondition()
    {
        return _timeOfDayCondition;
    }
    std::shared_ptr<ISimulationTimeCondition> ByValueConditionImpl::GetSimulationTimeCondition()
    {
        return _simulationTimeCondition;
    }
    std::shared_ptr<IStoryboardElementStateCondition> ByValueConditionImpl::GetStoryboardElementStateCondition()
    {
        return _storyboardElementStateCondition;
    }
    std::shared_ptr<IUserDefinedValueCondition> ByValueConditionImpl::GetUserDefinedValueCondition()
    {
        return _userDefinedValueCondition;
    }
    std::shared_ptr<ITrafficSignalCondition> ByValueConditionImpl::GetTrafficSignalCondition()
    {
        return _trafficSignalCondition;
    }
    std::shared_ptr<ITrafficSignalControllerCondition> ByValueConditionImpl::GetTrafficSignalControllerCondition()
    {
        return _trafficSignalControllerCondition;
    }

	/**
	 * Sets the value of model property parameterCondition
	 * @param parameterCondition from OpenSCENARIO class model specification: [A current parameter value is compared to a 
	 * reference value.]
	 * 
	*/
    void ByValueConditionImpl::SetParameterCondition(std::shared_ptr<IParameterCondition>& parameterCondition )
    {
        _parameterCondition = parameterCondition;
    }
	/**
	 * Sets the value of model property timeOfDayCondition
	 * @param timeOfDayCondition from OpenSCENARIO class model specification: [The current time of day is compared to a 
	 * reference value.]
	 * 
	*/
    void ByValueConditionImpl::SetTimeOfDayCondition(std::shared_ptr<ITimeOfDayCondition>& timeOfDayCondition )
    {
        _timeOfDayCondition = timeOfDayCondition;
    }
	/**
	 * Sets the value of model property simulationTimeCondition
	 * @param simulationTimeCondition from OpenSCENARIO class model specification: [The current simulation time is compared to 
	 * a reference value.]
	 * 
	*/
    void ByValueConditionImpl::SetSimulationTimeCondition(std::shared_ptr<ISimulationTimeCondition>& simulationTimeCondition )
    {
        _simulationTimeCondition = simulationTimeCondition;
    }
	/**
	 * Sets the value of model property storyboardElementStateCondition
	 * @param storyboardElementStateCondition from OpenSCENARIO class model specification: [Condition becomes true if the 
	 * referenced StoryboardElement terminates according to the given rule.]
	 * 
	*/
    void ByValueConditionImpl::SetStoryboardElementStateCondition(std::shared_ptr<IStoryboardElementStateCondition>& storyboardElementStateCondition )
    {
        _storyboardElementStateCondition = storyboardElementStateCondition;
    }
	/**
	 * Sets the value of model property userDefinedValueCondition
	 * @param userDefinedValueCondition from OpenSCENARIO class model specification: [The current value of an externally 
	 * defined named value is compared to a reference value (less, greater, equal).]
	 * 
	*/
    void ByValueConditionImpl::SetUserDefinedValueCondition(std::shared_ptr<IUserDefinedValueCondition>& userDefinedValueCondition )
    {
        _userDefinedValueCondition = userDefinedValueCondition;
    }
	/**
	 * Sets the value of model property trafficSignalCondition
	 * @param trafficSignalCondition from OpenSCENARIO class model specification: [Condition becomes true if the referenced 
	 * signal reaches the indicated state.]
	 * 
	*/
    void ByValueConditionImpl::SetTrafficSignalCondition(std::shared_ptr<ITrafficSignalCondition>& trafficSignalCondition )
    {
        _trafficSignalCondition = trafficSignalCondition;
    }
	/**
	 * Sets the value of model property trafficSignalControllerCondition
	 * @param trafficSignalControllerCondition from OpenSCENARIO class model specification: [Condition becomes true if the 
	 * referenced signal controller reaches the indicated state.]
	 * 
	*/
    void ByValueConditionImpl::SetTrafficSignalControllerCondition(std::shared_ptr<ITrafficSignalControllerCondition>& trafficSignalControllerCondition )
    {
        _trafficSignalControllerCondition = trafficSignalControllerCondition;
    }

    void ByValueConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ByValueConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ByValueConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kParameterCondition =  GetParameterCondition();
            if (kParameterCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kParameterCondition));
            }
            const auto kTimeOfDayCondition =  GetTimeOfDayCondition();
            if (kTimeOfDayCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTimeOfDayCondition));
            }
            const auto kSimulationTimeCondition =  GetSimulationTimeCondition();
            if (kSimulationTimeCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSimulationTimeCondition));
            }
            const auto kStoryboardElementStateCondition =  GetStoryboardElementStateCondition();
            if (kStoryboardElementStateCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStoryboardElementStateCondition));
            }
            const auto kUserDefinedValueCondition =  GetUserDefinedValueCondition();
            if (kUserDefinedValueCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kUserDefinedValueCondition));
            }
            const auto kTrafficSignalCondition =  GetTrafficSignalCondition();
            if (kTrafficSignalCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSignalCondition));
            }
            const auto kTrafficSignalControllerCondition =  GetTrafficSignalControllerCondition();
            if (kTrafficSignalControllerCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSignalControllerCondition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ByValueConditionImpl ByValueConditionImpl::Clone()
    {
        ByValueConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kParameterCondition =  GetParameterCondition();
        if (kParameterCondition)
        {
            auto clonedChild = std::make_shared<ParameterConditionImpl>(std::dynamic_pointer_cast<ParameterConditionImpl>(kParameterCondition)->Clone());
            auto clonedChildIParameterCondition = std::dynamic_pointer_cast<IParameterCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetParameterCondition(clonedChildIParameterCondition);
        }
        const auto kTimeOfDayCondition =  GetTimeOfDayCondition();
        if (kTimeOfDayCondition)
        {
            auto clonedChild = std::make_shared<TimeOfDayConditionImpl>(std::dynamic_pointer_cast<TimeOfDayConditionImpl>(kTimeOfDayCondition)->Clone());
            auto clonedChildITimeOfDayCondition = std::dynamic_pointer_cast<ITimeOfDayCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTimeOfDayCondition(clonedChildITimeOfDayCondition);
        }
        const auto kSimulationTimeCondition =  GetSimulationTimeCondition();
        if (kSimulationTimeCondition)
        {
            auto clonedChild = std::make_shared<SimulationTimeConditionImpl>(std::dynamic_pointer_cast<SimulationTimeConditionImpl>(kSimulationTimeCondition)->Clone());
            auto clonedChildISimulationTimeCondition = std::dynamic_pointer_cast<ISimulationTimeCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSimulationTimeCondition(clonedChildISimulationTimeCondition);
        }
        const auto kStoryboardElementStateCondition =  GetStoryboardElementStateCondition();
        if (kStoryboardElementStateCondition)
        {
            auto clonedChild = std::make_shared<StoryboardElementStateConditionImpl>(std::dynamic_pointer_cast<StoryboardElementStateConditionImpl>(kStoryboardElementStateCondition)->Clone());
            auto clonedChildIStoryboardElementStateCondition = std::dynamic_pointer_cast<IStoryboardElementStateCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStoryboardElementStateCondition(clonedChildIStoryboardElementStateCondition);
        }
        const auto kUserDefinedValueCondition =  GetUserDefinedValueCondition();
        if (kUserDefinedValueCondition)
        {
            auto clonedChild = std::make_shared<UserDefinedValueConditionImpl>(std::dynamic_pointer_cast<UserDefinedValueConditionImpl>(kUserDefinedValueCondition)->Clone());
            auto clonedChildIUserDefinedValueCondition = std::dynamic_pointer_cast<IUserDefinedValueCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetUserDefinedValueCondition(clonedChildIUserDefinedValueCondition);
        }
        const auto kTrafficSignalCondition =  GetTrafficSignalCondition();
        if (kTrafficSignalCondition)
        {
            auto clonedChild = std::make_shared<TrafficSignalConditionImpl>(std::dynamic_pointer_cast<TrafficSignalConditionImpl>(kTrafficSignalCondition)->Clone());
            auto clonedChildITrafficSignalCondition = std::dynamic_pointer_cast<ITrafficSignalCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSignalCondition(clonedChildITrafficSignalCondition);
        }
        const auto kTrafficSignalControllerCondition =  GetTrafficSignalControllerCondition();
        if (kTrafficSignalControllerCondition)
        {
            auto clonedChild = std::make_shared<TrafficSignalControllerConditionImpl>(std::dynamic_pointer_cast<TrafficSignalControllerConditionImpl>(kTrafficSignalControllerCondition)->Clone());
            auto clonedChildITrafficSignalControllerCondition = std::dynamic_pointer_cast<ITrafficSignalControllerCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSignalControllerCondition(clonedChildITrafficSignalControllerCondition);
        }
        return clonedObject;
    }




    CatalogImpl::CatalogImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string CatalogImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IVehicle>> CatalogImpl::GetVehicles()
    {
        return _vehicles;
    }
    std::vector<std::shared_ptr<IController>> CatalogImpl::GetControllers()
    {
        return _controllers;
    }
    std::vector<std::shared_ptr<IPedestrian>> CatalogImpl::GetPedestrians()
    {
        return _pedestrians;
    }
    std::vector<std::shared_ptr<IMiscObject>> CatalogImpl::GetMiscObjects()
    {
        return _miscObjects;
    }
    std::vector<std::shared_ptr<IEnvironment>> CatalogImpl::GetEnvironments()
    {
        return _environments;
    }
    std::vector<std::shared_ptr<IManeuver>> CatalogImpl::GetManeuvers()
    {
        return _maneuvers;
    }
    std::vector<std::shared_ptr<ITrajectory>> CatalogImpl::GetTrajectories()
    {
        return _trajectories;
    }
    std::vector<std::shared_ptr<IRoute>> CatalogImpl::GetRoutes()
    {
        return _routes;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the catalog.]
	 * 
	*/
    void CatalogImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property vehicles
	 * @param vehicles from OpenSCENARIO class model specification: [A list of vehicle types that can be reused in a scenario.]
	 * 
	*/
    void CatalogImpl::SetVehicles(std::vector<std::shared_ptr<IVehicle>>& vehicles)
    {
        _vehicles = vehicles;
    }
	/**
	 * Sets the value of model property controllers
	 * @param controllers from OpenSCENARIO class model specification: [A list of controller types that can be reused in a 
	 * scenario.]
	 * 
	*/
    void CatalogImpl::SetControllers(std::vector<std::shared_ptr<IController>>& controllers)
    {
        _controllers = controllers;
    }
	/**
	 * Sets the value of model property pedestrians
	 * @param pedestrians from OpenSCENARIO class model specification: [A list of pedestrian types that can be reused in a 
	 * scenario.]
	 * 
	*/
    void CatalogImpl::SetPedestrians(std::vector<std::shared_ptr<IPedestrian>>& pedestrians)
    {
        _pedestrians = pedestrians;
    }
	/**
	 * Sets the value of model property miscObjects
	 * @param miscObjects from OpenSCENARIO class model specification: [A list of miscellaneous object type that that can be 
	 * reused in a scenario.]
	 * 
	*/
    void CatalogImpl::SetMiscObjects(std::vector<std::shared_ptr<IMiscObject>>& miscObjects)
    {
        _miscObjects = miscObjects;
    }
	/**
	 * Sets the value of model property environments
	 * @param environments from OpenSCENARIO class model specification: [A list of environment types that can be reused in a 
	 * scenario.]
	 * 
	*/
    void CatalogImpl::SetEnvironments(std::vector<std::shared_ptr<IEnvironment>>& environments)
    {
        _environments = environments;
    }
	/**
	 * Sets the value of model property maneuvers
	 * @param maneuvers from OpenSCENARIO class model specification: [A list of maneuver types that can be reused in a 
	 * scenario.]
	 * 
	*/
    void CatalogImpl::SetManeuvers(std::vector<std::shared_ptr<IManeuver>>& maneuvers)
    {
        _maneuvers = maneuvers;
    }
	/**
	 * Sets the value of model property trajectories
	 * @param trajectories from OpenSCENARIO class model specification: [A list of trajectory types that can be reused in a 
	 * scenario.]
	 * 
	*/
    void CatalogImpl::SetTrajectories(std::vector<std::shared_ptr<ITrajectory>>& trajectories)
    {
        _trajectories = trajectories;
    }
	/**
	 * Sets the value of model property routes
	 * @param routes from OpenSCENARIO class model specification: [A list of route types that can be reused in a scenario.]
	 * 
	*/
    void CatalogImpl::SetRoutes(std::vector<std::shared_ptr<IRoute>>& routes)
    {
        _routes = routes;
    }

    void CatalogImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string CatalogImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CatalogImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto vehicles =  GetVehicles();
            if (!vehicles.empty())
            {
                for(auto&& item : vehicles)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto controllers =  GetControllers();
            if (!controllers.empty())
            {
                for(auto&& item : controllers)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto pedestrians =  GetPedestrians();
            if (!pedestrians.empty())
            {
                for(auto&& item : pedestrians)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto miscObjects =  GetMiscObjects();
            if (!miscObjects.empty())
            {
                for(auto&& item : miscObjects)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto environments =  GetEnvironments();
            if (!environments.empty())
            {
                for(auto&& item : environments)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto maneuvers =  GetManeuvers();
            if (!maneuvers.empty())
            {
                for(auto&& item : maneuvers)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto trajectories =  GetTrajectories();
            if (!trajectories.empty())
            {
                for(auto&& item : trajectories)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto routes =  GetRoutes();
            if (!routes.empty())
            {
                for(auto&& item : routes)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CatalogImpl CatalogImpl::Clone()
    {
        CatalogImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kVehicles =  GetVehicles();
        if (!kVehicles.empty())
        {
            std::vector<std::shared_ptr<IVehicle>> clonedList;
            for(auto&& kItem : kVehicles)
            {
                auto clonedChild = std::make_shared <VehicleImpl>(std::dynamic_pointer_cast<VehicleImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetVehicles(clonedList);
        }
        const auto kControllers =  GetControllers();
        if (!kControllers.empty())
        {
            std::vector<std::shared_ptr<IController>> clonedList;
            for(auto&& kItem : kControllers)
            {
                auto clonedChild = std::make_shared <ControllerImpl>(std::dynamic_pointer_cast<ControllerImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetControllers(clonedList);
        }
        const auto kPedestrians =  GetPedestrians();
        if (!kPedestrians.empty())
        {
            std::vector<std::shared_ptr<IPedestrian>> clonedList;
            for(auto&& kItem : kPedestrians)
            {
                auto clonedChild = std::make_shared <PedestrianImpl>(std::dynamic_pointer_cast<PedestrianImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetPedestrians(clonedList);
        }
        const auto kMiscObjects =  GetMiscObjects();
        if (!kMiscObjects.empty())
        {
            std::vector<std::shared_ptr<IMiscObject>> clonedList;
            for(auto&& kItem : kMiscObjects)
            {
                auto clonedChild = std::make_shared <MiscObjectImpl>(std::dynamic_pointer_cast<MiscObjectImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetMiscObjects(clonedList);
        }
        const auto kEnvironments =  GetEnvironments();
        if (!kEnvironments.empty())
        {
            std::vector<std::shared_ptr<IEnvironment>> clonedList;
            for(auto&& kItem : kEnvironments)
            {
                auto clonedChild = std::make_shared <EnvironmentImpl>(std::dynamic_pointer_cast<EnvironmentImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetEnvironments(clonedList);
        }
        const auto kManeuvers =  GetManeuvers();
        if (!kManeuvers.empty())
        {
            std::vector<std::shared_ptr<IManeuver>> clonedList;
            for(auto&& kItem : kManeuvers)
            {
                auto clonedChild = std::make_shared <ManeuverImpl>(std::dynamic_pointer_cast<ManeuverImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetManeuvers(clonedList);
        }
        const auto kTrajectories =  GetTrajectories();
        if (!kTrajectories.empty())
        {
            std::vector<std::shared_ptr<ITrajectory>> clonedList;
            for(auto&& kItem : kTrajectories)
            {
                auto clonedChild = std::make_shared <TrajectoryImpl>(std::dynamic_pointer_cast<TrajectoryImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetTrajectories(clonedList);
        }
        const auto kRoutes =  GetRoutes();
        if (!kRoutes.empty())
        {
            std::vector<std::shared_ptr<IRoute>> clonedList;
            for(auto&& kItem : kRoutes)
            {
                auto clonedChild = std::make_shared <RouteImpl>(std::dynamic_pointer_cast<RouteImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetRoutes(clonedList);
        }
        return clonedObject;
    }




    CatalogDefinitionImpl::CatalogDefinitionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ICatalog> CatalogDefinitionImpl::GetCatalog()
    {
        return _catalog;
    }

	/**
	 * Sets the value of model property catalog
	 * @param catalog from OpenSCENARIO class model specification: [Definition of a catalog.]
	 * 
	*/
    void CatalogDefinitionImpl::SetCatalog(std::shared_ptr<ICatalog>& catalog )
    {
        _catalog = catalog;
    }

    void CatalogDefinitionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string CatalogDefinitionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CatalogDefinitionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kCatalog =  GetCatalog();
            if (kCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalog));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CatalogDefinitionImpl CatalogDefinitionImpl::Clone()
    {
        CatalogDefinitionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kCatalog =  GetCatalog();
        if (kCatalog)
        {
            auto clonedChild = std::make_shared<CatalogImpl>(std::dynamic_pointer_cast<CatalogImpl>(kCatalog)->Clone());
            auto clonedChildICatalog = std::dynamic_pointer_cast<ICatalog>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalog(clonedChildICatalog);
        }
        return clonedObject;
    }




    CatalogLocationsImpl::CatalogLocationsImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IVehicleCatalogLocation> CatalogLocationsImpl::GetVehicleCatalog()
    {
        return _vehicleCatalog;
    }
    std::shared_ptr<IControllerCatalogLocation> CatalogLocationsImpl::GetControllerCatalog()
    {
        return _controllerCatalog;
    }
    std::shared_ptr<IPedestrianCatalogLocation> CatalogLocationsImpl::GetPedestrianCatalog()
    {
        return _pedestrianCatalog;
    }
    std::shared_ptr<IMiscObjectCatalogLocation> CatalogLocationsImpl::GetMiscObjectCatalog()
    {
        return _miscObjectCatalog;
    }
    std::shared_ptr<IEnvironmentCatalogLocation> CatalogLocationsImpl::GetEnvironmentCatalog()
    {
        return _environmentCatalog;
    }
    std::shared_ptr<IManeuverCatalogLocation> CatalogLocationsImpl::GetManeuverCatalog()
    {
        return _maneuverCatalog;
    }
    std::shared_ptr<ITrajectoryCatalogLocation> CatalogLocationsImpl::GetTrajectoryCatalog()
    {
        return _trajectoryCatalog;
    }
    std::shared_ptr<IRouteCatalogLocation> CatalogLocationsImpl::GetRouteCatalog()
    {
        return _routeCatalog;
    }

	/**
	 * Sets the value of model property vehicleCatalog
	 * @param vehicleCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to resolve
	 * CatalogReferences on vehicle types.]
	 * 
	*/
    void CatalogLocationsImpl::SetVehicleCatalog(std::shared_ptr<IVehicleCatalogLocation>& vehicleCatalog )
    {
        _vehicleCatalog = vehicleCatalog;
    }
	/**
	 * Sets the value of model property controllerCatalog
	 * @param controllerCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on controller types.]
	 * 
	*/
    void CatalogLocationsImpl::SetControllerCatalog(std::shared_ptr<IControllerCatalogLocation>& controllerCatalog )
    {
        _controllerCatalog = controllerCatalog;
    }
	/**
	 * Sets the value of model property pedestrianCatalog
	 * @param pedestrianCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on pedestrian types.]
	 * 
	*/
    void CatalogLocationsImpl::SetPedestrianCatalog(std::shared_ptr<IPedestrianCatalogLocation>& pedestrianCatalog )
    {
        _pedestrianCatalog = pedestrianCatalog;
    }
	/**
	 * Sets the value of model property miscObjectCatalog
	 * @param miscObjectCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on miscellaneous object types.]
	 * 
	*/
    void CatalogLocationsImpl::SetMiscObjectCatalog(std::shared_ptr<IMiscObjectCatalogLocation>& miscObjectCatalog )
    {
        _miscObjectCatalog = miscObjectCatalog;
    }
	/**
	 * Sets the value of model property environmentCatalog
	 * @param environmentCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on environment types.]
	 * 
	*/
    void CatalogLocationsImpl::SetEnvironmentCatalog(std::shared_ptr<IEnvironmentCatalogLocation>& environmentCatalog )
    {
        _environmentCatalog = environmentCatalog;
    }
	/**
	 * Sets the value of model property maneuverCatalog
	 * @param maneuverCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on maneuver types.]
	 * 
	*/
    void CatalogLocationsImpl::SetManeuverCatalog(std::shared_ptr<IManeuverCatalogLocation>& maneuverCatalog )
    {
        _maneuverCatalog = maneuverCatalog;
    }
	/**
	 * Sets the value of model property trajectoryCatalog
	 * @param trajectoryCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to 
	 * resolve CatalogReferences on trajectory types.]
	 * 
	*/
    void CatalogLocationsImpl::SetTrajectoryCatalog(std::shared_ptr<ITrajectoryCatalogLocation>& trajectoryCatalog )
    {
        _trajectoryCatalog = trajectoryCatalog;
    }
	/**
	 * Sets the value of model property routeCatalog
	 * @param routeCatalog from OpenSCENARIO class model specification: [This catalog location is the first choice to resolve 
	 * CatalogReferences on route types.]
	 * 
	*/
    void CatalogLocationsImpl::SetRouteCatalog(std::shared_ptr<IRouteCatalogLocation>& routeCatalog )
    {
        _routeCatalog = routeCatalog;
    }

    void CatalogLocationsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string CatalogLocationsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CatalogLocationsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kVehicleCatalog =  GetVehicleCatalog();
            if (kVehicleCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kVehicleCatalog));
            }
            const auto kControllerCatalog =  GetControllerCatalog();
            if (kControllerCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kControllerCatalog));
            }
            const auto kPedestrianCatalog =  GetPedestrianCatalog();
            if (kPedestrianCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPedestrianCatalog));
            }
            const auto kMiscObjectCatalog =  GetMiscObjectCatalog();
            if (kMiscObjectCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kMiscObjectCatalog));
            }
            const auto kEnvironmentCatalog =  GetEnvironmentCatalog();
            if (kEnvironmentCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEnvironmentCatalog));
            }
            const auto kManeuverCatalog =  GetManeuverCatalog();
            if (kManeuverCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kManeuverCatalog));
            }
            const auto kTrajectoryCatalog =  GetTrajectoryCatalog();
            if (kTrajectoryCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrajectoryCatalog));
            }
            const auto kRouteCatalog =  GetRouteCatalog();
            if (kRouteCatalog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRouteCatalog));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CatalogLocationsImpl CatalogLocationsImpl::Clone()
    {
        CatalogLocationsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kVehicleCatalog =  GetVehicleCatalog();
        if (kVehicleCatalog)
        {
            auto clonedChild = std::make_shared<VehicleCatalogLocationImpl>(std::dynamic_pointer_cast<VehicleCatalogLocationImpl>(kVehicleCatalog)->Clone());
            auto clonedChildIVehicleCatalogLocation = std::dynamic_pointer_cast<IVehicleCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetVehicleCatalog(clonedChildIVehicleCatalogLocation);
        }
        const auto kControllerCatalog =  GetControllerCatalog();
        if (kControllerCatalog)
        {
            auto clonedChild = std::make_shared<ControllerCatalogLocationImpl>(std::dynamic_pointer_cast<ControllerCatalogLocationImpl>(kControllerCatalog)->Clone());
            auto clonedChildIControllerCatalogLocation = std::dynamic_pointer_cast<IControllerCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetControllerCatalog(clonedChildIControllerCatalogLocation);
        }
        const auto kPedestrianCatalog =  GetPedestrianCatalog();
        if (kPedestrianCatalog)
        {
            auto clonedChild = std::make_shared<PedestrianCatalogLocationImpl>(std::dynamic_pointer_cast<PedestrianCatalogLocationImpl>(kPedestrianCatalog)->Clone());
            auto clonedChildIPedestrianCatalogLocation = std::dynamic_pointer_cast<IPedestrianCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPedestrianCatalog(clonedChildIPedestrianCatalogLocation);
        }
        const auto kMiscObjectCatalog =  GetMiscObjectCatalog();
        if (kMiscObjectCatalog)
        {
            auto clonedChild = std::make_shared<MiscObjectCatalogLocationImpl>(std::dynamic_pointer_cast<MiscObjectCatalogLocationImpl>(kMiscObjectCatalog)->Clone());
            auto clonedChildIMiscObjectCatalogLocation = std::dynamic_pointer_cast<IMiscObjectCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetMiscObjectCatalog(clonedChildIMiscObjectCatalogLocation);
        }
        const auto kEnvironmentCatalog =  GetEnvironmentCatalog();
        if (kEnvironmentCatalog)
        {
            auto clonedChild = std::make_shared<EnvironmentCatalogLocationImpl>(std::dynamic_pointer_cast<EnvironmentCatalogLocationImpl>(kEnvironmentCatalog)->Clone());
            auto clonedChildIEnvironmentCatalogLocation = std::dynamic_pointer_cast<IEnvironmentCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEnvironmentCatalog(clonedChildIEnvironmentCatalogLocation);
        }
        const auto kManeuverCatalog =  GetManeuverCatalog();
        if (kManeuverCatalog)
        {
            auto clonedChild = std::make_shared<ManeuverCatalogLocationImpl>(std::dynamic_pointer_cast<ManeuverCatalogLocationImpl>(kManeuverCatalog)->Clone());
            auto clonedChildIManeuverCatalogLocation = std::dynamic_pointer_cast<IManeuverCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetManeuverCatalog(clonedChildIManeuverCatalogLocation);
        }
        const auto kTrajectoryCatalog =  GetTrajectoryCatalog();
        if (kTrajectoryCatalog)
        {
            auto clonedChild = std::make_shared<TrajectoryCatalogLocationImpl>(std::dynamic_pointer_cast<TrajectoryCatalogLocationImpl>(kTrajectoryCatalog)->Clone());
            auto clonedChildITrajectoryCatalogLocation = std::dynamic_pointer_cast<ITrajectoryCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrajectoryCatalog(clonedChildITrajectoryCatalogLocation);
        }
        const auto kRouteCatalog =  GetRouteCatalog();
        if (kRouteCatalog)
        {
            auto clonedChild = std::make_shared<RouteCatalogLocationImpl>(std::dynamic_pointer_cast<RouteCatalogLocationImpl>(kRouteCatalog)->Clone());
            auto clonedChildIRouteCatalogLocation = std::dynamic_pointer_cast<IRouteCatalogLocation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRouteCatalog(clonedChildIRouteCatalogLocation);
        }
        return clonedObject;
    }




    CatalogReferenceImpl::CatalogReferenceImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, typeid(std::string).name());
    }

    std::string CatalogReferenceImpl::GetCatalogName()
    {
        return _catalogName;
    }
    std::string CatalogReferenceImpl::GetEntryName()
    {
        return _entryName;
    }
    std::vector<std::shared_ptr<IParameterAssignment>> CatalogReferenceImpl::GetParameterAssignments()
    {
        return _parameterAssignments;
    }
    std::shared_ptr<ICatalogElement> CatalogReferenceImpl::GetRef()
    {
        return _ref;
    }

	/**
	 * Sets the value of model property catalogName
	 * @param catalogName from OpenSCENARIO class model specification: [Name of the catalog.]
	 * 
	*/
    void CatalogReferenceImpl::SetCatalogName(std::string& catalogName )
    {
        _catalogName = catalogName;
    }
	/**
	 * Sets the value of model property entryName
	 * @param entryName from OpenSCENARIO class model specification: [Name of catalog entry.]
	 * 
	*/
    void CatalogReferenceImpl::SetEntryName(std::string& entryName )
    {
        _entryName = entryName;
    }
	/**
	 * Sets the value of model property parameterAssignments
	 * @param parameterAssignments from OpenSCENARIO class model specification: [List of parameter assignments for 
	 * instantiation.]
	 * 
	*/
    void CatalogReferenceImpl::SetParameterAssignments(std::vector<std::shared_ptr<IParameterAssignment>>& parameterAssignments)
    {
        _parameterAssignments = parameterAssignments;
    }
	/**
	 * Sets the value of model property ref
	 * @param ref from OpenSCENARIO class model specification: [The resolved reference to a catalog element (out of the 
	 * catalogName and entryName). Transient means, that it is not , mapped to the schema.]
	 * 
	*/
    void CatalogReferenceImpl::SetRef(std::shared_ptr<ICatalogElement>& ref )
    {
        _ref = ref;
    }

    void CatalogReferenceImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME)
        {
            // Simple type
            _catalogName = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME)
        {
            // Simple type
            _entryName = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string CatalogReferenceImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CatalogReferenceImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterAssignments =  GetParameterAssignments();
            if (!parameterAssignments.empty())
            {
                for(auto&& item : parameterAssignments)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CatalogReferenceImpl CatalogReferenceImpl::Clone()
    {
        CatalogReferenceImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetCatalogName(_catalogName);
        // Simple type
        clonedObject.SetEntryName(_entryName);
        // clone children
        const auto kParameterAssignments =  GetParameterAssignments();
        if (!kParameterAssignments.empty())
        {
            std::vector<std::shared_ptr<IParameterAssignment>> clonedList;
            for(auto&& kItem : kParameterAssignments)
            {
                auto clonedChild = std::make_shared <ParameterAssignmentImpl>(std::dynamic_pointer_cast<ParameterAssignmentImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterAssignments(clonedList);
        }
        return clonedObject;
    }




    CenterImpl::CenterImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__X, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__Y, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__Z, typeid(double).name());
    }

    double CenterImpl::GetX()
    {
        return _x;
    }
    double CenterImpl::GetY()
    {
        return _y;
    }
    double CenterImpl::GetZ()
    {
        return _z;
    }

	/**
	 * Sets the value of model property x
	 * @param x from OpenSCENARIO class model specification: [Center offset in x direction.]
	 * 
	*/
    void CenterImpl::SetX(double& x )
    {
        _x = x;
    }
	/**
	 * Sets the value of model property y
	 * @param y from OpenSCENARIO class model specification: [Center offset in y direction.]
	 * 
	*/
    void CenterImpl::SetY(double& y )
    {
        _y = y;
    }
	/**
	 * Sets the value of model property z
	 * @param z from OpenSCENARIO class model specification: [Center offset in z direction.]
	 * 
	*/
    void CenterImpl::SetZ(double& z )
    {
        _z = z;
    }

    void CenterImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__X)
        {
            // Simple type
            _x = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__Y)
        {
            // Simple type
            _y = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__Z)
        {
            // Simple type
            _z = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string CenterImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CenterImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CenterImpl CenterImpl::Clone()
    {
        CenterImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetX(_x);
        // Simple type
        clonedObject.SetY(_y);
        // Simple type
        clonedObject.SetZ(_z);
        // clone children
        return clonedObject;
    }




    CentralSwarmObjectImpl::CentralSwarmObjectImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
    }

    INamedReference<IEntity>* CentralSwarmObjectImpl::GetEntityRef()
    {
        return &_entityRef;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the central entity the swarm traffic is created 
	 * around.]
	 * 
	*/
    void CentralSwarmObjectImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }

    void CentralSwarmObjectImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string CentralSwarmObjectImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CentralSwarmObjectImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CentralSwarmObjectImpl CentralSwarmObjectImpl::Clone()
    {
        CentralSwarmObjectImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // clone children
        return clonedObject;
    }




    ClothoidImpl::ClothoidImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LENGTH, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__START_TIME, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STOP_TIME, typeid(double).name());
    }

    double ClothoidImpl::GetCurvature()
    {
        return _curvature;
    }
    double ClothoidImpl::GetCurvatureDot()
    {
        return _curvatureDot;
    }
    double ClothoidImpl::GetLength()
    {
        return _length;
    }
    double ClothoidImpl::GetStartTime()
    {
        return _startTime;
    }
    double ClothoidImpl::GetStopTime()
    {
        return _stopTime;
    }
    std::shared_ptr<IPosition> ClothoidImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property curvature
	 * @param curvature from OpenSCENARIO class model specification: [Start curvature of clothoid.]
	 * 
	*/
    void ClothoidImpl::SetCurvature(double& curvature )
    {
        _curvature = curvature;
    }
	/**
	 * Sets the value of model property curvatureDot
	 * @param curvatureDot from OpenSCENARIO class model specification: [Rate of change of the curvature of the clothoid.Unit: 
	 * 1/s;Range [0..inf[.]
	 * 
	*/
    void ClothoidImpl::SetCurvatureDot(double& curvatureDot )
    {
        _curvatureDot = curvatureDot;
    }
	/**
	 * Sets the value of model property length
	 * @param length from OpenSCENARIO class model specification: [Length of clothoid.]
	 * 
	*/
    void ClothoidImpl::SetLength(double& length )
    {
        _length = length;
    }
	/**
	 * Sets the value of model property startTime
	 * @param startTime from OpenSCENARIO class model specification: [Optional time specification at the start of the clothoid.
	 * Unit: s;Range [0..inf[.]
	 * 
	*/
    void ClothoidImpl::SetStartTime(double& startTime )
    {
        _startTime = startTime;
    }
	/**
	 * Sets the value of model property stopTime
	 * @param stopTime from OpenSCENARIO class model specification: [Optional time specification at the end of the clothoid. 
	 * Unit: s;Range ]0..inf[.]
	 * 
	*/
    void ClothoidImpl::SetStopTime(double& stopTime )
    {
        _stopTime = stopTime;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Start position of a clothoid.]
	 * 
	*/
    void ClothoidImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void ClothoidImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CURVATURE)
        {
            // Simple type
            _curvature = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT)
        {
            // Simple type
            _curvatureDot = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LENGTH)
        {
            // Simple type
            _length = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__START_TIME)
        {
            // Simple type
            _startTime = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STOP_TIME)
        {
            // Simple type
            _stopTime = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ClothoidImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ClothoidImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ClothoidImpl ClothoidImpl::Clone()
    {
        ClothoidImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetCurvature(_curvature);
        // Simple type
        clonedObject.SetCurvatureDot(_curvatureDot);
        // Simple type
        clonedObject.SetLength(_length);
        // Simple type
        clonedObject.SetStartTime(_startTime);
        // Simple type
        clonedObject.SetStopTime(_stopTime);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    CollisionConditionImpl::CollisionConditionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IEntityRef> CollisionConditionImpl::GetEntityRef()
    {
        return _entityRef;
    }
    std::shared_ptr<IByObjectType> CollisionConditionImpl::GetByType()
    {
        return _byType;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of a specific entity.]
	 * 
	*/
    void CollisionConditionImpl::SetEntityRef(std::shared_ptr<IEntityRef>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property byType
	 * @param byType from OpenSCENARIO class model specification: [Entities of this type can trigger the condition when 
	 * collide.]
	 * 
	*/
    void CollisionConditionImpl::SetByType(std::shared_ptr<IByObjectType>& byType )
    {
        _byType = byType;
    }

    void CollisionConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string CollisionConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CollisionConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kEntityRef =  GetEntityRef();
            if (kEntityRef)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEntityRef));
            }
            const auto kByType =  GetByType();
            if (kByType)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kByType));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CollisionConditionImpl CollisionConditionImpl::Clone()
    {
        CollisionConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kEntityRef =  GetEntityRef();
        if (kEntityRef)
        {
            auto clonedChild = std::make_shared<EntityRefImpl>(std::dynamic_pointer_cast<EntityRefImpl>(kEntityRef)->Clone());
            auto clonedChildIEntityRef = std::dynamic_pointer_cast<IEntityRef>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEntityRef(clonedChildIEntityRef);
        }
        const auto kByType =  GetByType();
        if (kByType)
        {
            auto clonedChild = std::make_shared<ByObjectTypeImpl>(std::dynamic_pointer_cast<ByObjectTypeImpl>(kByType)->Clone());
            auto clonedChildIByObjectType = std::dynamic_pointer_cast<IByObjectType>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetByType(clonedChildIByObjectType);
        }
        return clonedObject;
    }




    ConditionImpl::ConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DELAY, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, typeid(std::string).name());
    }

    std::string ConditionImpl::GetName()
    {
        return _name;
    }
    double ConditionImpl::GetDelay()
    {
        return _delay;
    }
    ConditionEdge ConditionImpl::GetConditionEdge()
    {
        return _conditionEdge;
    }
    std::shared_ptr<IByEntityCondition> ConditionImpl::GetByEntityCondition()
    {
        return _byEntityCondition;
    }
    std::shared_ptr<IByValueCondition> ConditionImpl::GetByValueCondition()
    {
        return _byValueCondition;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the condition.]
	 * 
	*/
    void ConditionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property delay
	 * @param delay from OpenSCENARIO class model specification: [Time elapsed after the edge condition is verified, until the 
	 * condition returns true to the scenario. Unit: s; Range: , [0..inf[.]
	 * 
	*/
    void ConditionImpl::SetDelay(double& delay )
    {
        _delay = delay;
    }
	/**
	 * Sets the value of model property conditionEdge
	 * @param conditionEdge from OpenSCENARIO class model specification: [Specifies the edge when the condition is evaluated to
	 * true (rising, falling, any).]
	 * 
	*/
    void ConditionImpl::SetConditionEdge(ConditionEdge& conditionEdge )
    {
        _conditionEdge = conditionEdge;
    }
	/**
	 * Sets the value of model property byEntityCondition
	 * @param byEntityCondition from OpenSCENARIO class model specification: [A condition that refers to an entity.]
	 * 
	*/
    void ConditionImpl::SetByEntityCondition(std::shared_ptr<IByEntityCondition>& byEntityCondition )
    {
        _byEntityCondition = byEntityCondition;
    }
	/**
	 * Sets the value of model property byValueCondition
	 * @param byValueCondition from OpenSCENARIO class model specification: [A condition that refers to a runtime value.]
	 * 
	*/
    void ConditionImpl::SetByValueCondition(std::shared_ptr<IByValueCondition>& byValueCondition )
    {
        _byValueCondition = byValueCondition;
    }

    void ConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DELAY)
        {
            // Simple type
            _delay = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE)
        {
            // Enumeration Type
            const auto kResult = ConditionEdge::GetFromLiteral(parameterLiteralValue);
            if (kResult != ConditionEdge::UNKNOWN)
            {
                _conditionEdge = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string ConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kByEntityCondition =  GetByEntityCondition();
            if (kByEntityCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kByEntityCondition));
            }
            const auto kByValueCondition =  GetByValueCondition();
            if (kByValueCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kByValueCondition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ConditionImpl ConditionImpl::Clone()
    {
        ConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetDelay(_delay);
        // Enumeration Type
        clonedObject.SetConditionEdge(_conditionEdge);
        // clone children
        const auto kByEntityCondition =  GetByEntityCondition();
        if (kByEntityCondition)
        {
            auto clonedChild = std::make_shared<ByEntityConditionImpl>(std::dynamic_pointer_cast<ByEntityConditionImpl>(kByEntityCondition)->Clone());
            auto clonedChildIByEntityCondition = std::dynamic_pointer_cast<IByEntityCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetByEntityCondition(clonedChildIByEntityCondition);
        }
        const auto kByValueCondition =  GetByValueCondition();
        if (kByValueCondition)
        {
            auto clonedChild = std::make_shared<ByValueConditionImpl>(std::dynamic_pointer_cast<ByValueConditionImpl>(kByValueCondition)->Clone());
            auto clonedChildIByValueCondition = std::dynamic_pointer_cast<IByValueCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetByValueCondition(clonedChildIByValueCondition);
        }
        return clonedObject;
    }




    ConditionGroupImpl::ConditionGroupImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<ICondition>> ConditionGroupImpl::GetConditions()
    {
        return _conditions;
    }

	/**
	 * Sets the value of model property conditions
	 * @param conditions from OpenSCENARIO class model specification: [A associated list of conditions.]
	 * 
	*/
    void ConditionGroupImpl::SetConditions(std::vector<std::shared_ptr<ICondition>>& conditions)
    {
        _conditions = conditions;
    }

    void ConditionGroupImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ConditionGroupImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ConditionGroupImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto conditions =  GetConditions();
            if (!conditions.empty())
            {
                for(auto&& item : conditions)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ConditionGroupImpl ConditionGroupImpl::Clone()
    {
        ConditionGroupImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kConditions =  GetConditions();
        if (!kConditions.empty())
        {
            std::vector<std::shared_ptr<ICondition>> clonedList;
            for(auto&& kItem : kConditions)
            {
                auto clonedChild = std::make_shared <ConditionImpl>(std::dynamic_pointer_cast<ConditionImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetConditions(clonedList);
        }
        return clonedObject;
    }




    ControlPointImpl::ControlPointImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TIME, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, typeid(double).name());
    }

    double ControlPointImpl::GetTime()
    {
        return _time;
    }
    double ControlPointImpl::GetWeight()
    {
        return _weight;
    }
    std::shared_ptr<IPosition> ControlPointImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property time
	 * @param time from OpenSCENARIO class model specification: [Optional specification of the time dimension of the control 
	 * point. Unit: s;Range [0..inf[.]
	 * 
	*/
    void ControlPointImpl::SetTime(double& time )
    {
        _time = time;
    }
	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [Optional weight specification of the control point. If 
	 * unspecified, all control points will be equal weighted. Range , ]-inf..inf[.]
	 * 
	*/
    void ControlPointImpl::SetWeight(double& weight )
    {
        _weight = weight;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position of the control point.]
	 * 
	*/
    void ControlPointImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void ControlPointImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TIME)
        {
            // Simple type
            _time = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__WEIGHT)
        {
            // Simple type
            _weight = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ControlPointImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ControlPointImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ControlPointImpl ControlPointImpl::Clone()
    {
        ControlPointImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetTime(_time);
        // Simple type
        clonedObject.SetWeight(_weight);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    ControllerImpl::ControllerImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string ControllerImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> ControllerImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<IProperties> ControllerImpl::GetProperties()
    {
        return _properties;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the controller type.]
	 * 
	*/
    void ControllerImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void ControllerImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Describing properties for the controller.]
	 * 
	*/
    void ControllerImpl::SetProperties(std::shared_ptr<IProperties>& properties )
    {
        _properties = properties;
    }

    void ControllerImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ControllerImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool ControllerImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> ControllerImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ControllerImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kProperties =  GetProperties();
            if (kProperties)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kProperties));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ControllerImpl ControllerImpl::Clone()
    {
        ControllerImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kProperties =  GetProperties();
        if (kProperties)
        {
            auto clonedChild = std::make_shared<PropertiesImpl>(std::dynamic_pointer_cast<PropertiesImpl>(kProperties)->Clone());
            auto clonedChildIProperties = std::dynamic_pointer_cast<IProperties>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetProperties(clonedChildIProperties);
        }
        return clonedObject;
    }




    ControllerActionImpl::ControllerActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IAssignControllerAction> ControllerActionImpl::GetAssignControllerAction()
    {
        return _assignControllerAction;
    }
    std::shared_ptr<IOverrideControllerValueAction> ControllerActionImpl::GetOverrideControllerValueAction()
    {
        return _overrideControllerValueAction;
    }

	/**
	 * Sets the value of model property assignControllerAction
	 * @param assignControllerAction from OpenSCENARIO class model specification: [Assign a controller to an entity.]
	 * 
	*/
    void ControllerActionImpl::SetAssignControllerAction(std::shared_ptr<IAssignControllerAction>& assignControllerAction )
    {
        _assignControllerAction = assignControllerAction;
    }
	/**
	 * Sets the value of model property overrideControllerValueAction
	 * @param overrideControllerValueAction from OpenSCENARIO class model specification: [Values for throttle, brake, clutch, 
	 * parking brake, steering wheel or gear.]
	 * 
	*/
    void ControllerActionImpl::SetOverrideControllerValueAction(std::shared_ptr<IOverrideControllerValueAction>& overrideControllerValueAction )
    {
        _overrideControllerValueAction = overrideControllerValueAction;
    }

    void ControllerActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ControllerActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ControllerActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kAssignControllerAction =  GetAssignControllerAction();
            if (kAssignControllerAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAssignControllerAction));
            }
            const auto kOverrideControllerValueAction =  GetOverrideControllerValueAction();
            if (kOverrideControllerValueAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOverrideControllerValueAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ControllerActionImpl ControllerActionImpl::Clone()
    {
        ControllerActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kAssignControllerAction =  GetAssignControllerAction();
        if (kAssignControllerAction)
        {
            auto clonedChild = std::make_shared<AssignControllerActionImpl>(std::dynamic_pointer_cast<AssignControllerActionImpl>(kAssignControllerAction)->Clone());
            auto clonedChildIAssignControllerAction = std::dynamic_pointer_cast<IAssignControllerAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAssignControllerAction(clonedChildIAssignControllerAction);
        }
        const auto kOverrideControllerValueAction =  GetOverrideControllerValueAction();
        if (kOverrideControllerValueAction)
        {
            auto clonedChild = std::make_shared<OverrideControllerValueActionImpl>(std::dynamic_pointer_cast<OverrideControllerValueActionImpl>(kOverrideControllerValueAction)->Clone());
            auto clonedChildIOverrideControllerValueAction = std::dynamic_pointer_cast<IOverrideControllerValueAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOverrideControllerValueAction(clonedChildIOverrideControllerValueAction);
        }
        return clonedObject;
    }




    ControllerCatalogLocationImpl::ControllerCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> ControllerCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalog files in this directory must be evaluated.]
	 * 
	*/
    void ControllerCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void ControllerCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ControllerCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ControllerCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ControllerCatalogLocationImpl ControllerCatalogLocationImpl::Clone()
    {
        ControllerCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    ControllerDistributionImpl::ControllerDistributionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IControllerDistributionEntry>> ControllerDistributionImpl::GetControllerDistributionEntries()
    {
        return _controllerDistributionEntries;
    }

	/**
	 * Sets the value of model property controllerDistributionEntries
	 * @param controllerDistributionEntries from OpenSCENARIO class model specification: [The weights of controllers of a 
	 * specific type in a traffic.]
	 * 
	*/
    void ControllerDistributionImpl::SetControllerDistributionEntries(std::vector<std::shared_ptr<IControllerDistributionEntry>>& controllerDistributionEntries)
    {
        _controllerDistributionEntries = controllerDistributionEntries;
    }

    void ControllerDistributionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ControllerDistributionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ControllerDistributionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto controllerDistributionEntries =  GetControllerDistributionEntries();
            if (!controllerDistributionEntries.empty())
            {
                for(auto&& item : controllerDistributionEntries)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ControllerDistributionImpl ControllerDistributionImpl::Clone()
    {
        ControllerDistributionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kControllerDistributionEntries =  GetControllerDistributionEntries();
        if (!kControllerDistributionEntries.empty())
        {
            std::vector<std::shared_ptr<IControllerDistributionEntry>> clonedList;
            for(auto&& kItem : kControllerDistributionEntries)
            {
                auto clonedChild = std::make_shared <ControllerDistributionEntryImpl>(std::dynamic_pointer_cast<ControllerDistributionEntryImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetControllerDistributionEntries(clonedList);
        }
        return clonedObject;
    }




    ControllerDistributionEntryImpl::ControllerDistributionEntryImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, typeid(double).name());
    }

    double ControllerDistributionEntryImpl::GetWeight()
    {
        return _weight;
    }
    std::shared_ptr<IController> ControllerDistributionEntryImpl::GetController()
    {
        return _controller;
    }
    std::shared_ptr<ICatalogReference> ControllerDistributionEntryImpl::GetCatalogReference()
    {
        return _catalogReference;
    }

	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [The weight of the entry. Range: ]0..inf[.]
	 * 
	*/
    void ControllerDistributionEntryImpl::SetWeight(double& weight )
    {
        _weight = weight;
    }
	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [The specified controller type.]
	 * 
	*/
    void ControllerDistributionEntryImpl::SetController(std::shared_ptr<IController>& controller )
    {
        _controller = controller;
    }
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A controller type import from a catalog.]
	 * 
	*/
    void ControllerDistributionEntryImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }

    void ControllerDistributionEntryImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__WEIGHT)
        {
            // Simple type
            _weight = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ControllerDistributionEntryImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ControllerDistributionEntryImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kController =  GetController();
            if (kController)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kController));
            }
            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ControllerDistributionEntryImpl ControllerDistributionEntryImpl::Clone()
    {
        ControllerDistributionEntryImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetWeight(_weight);
        // clone children
        const auto kController =  GetController();
        if (kController)
        {
            auto clonedChild = std::make_shared<ControllerImpl>(std::dynamic_pointer_cast<ControllerImpl>(kController)->Clone());
            auto clonedChildIController = std::dynamic_pointer_cast<IController>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetController(clonedChildIController);
        }
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        return clonedObject;
    }




    CustomCommandActionImpl::CustomCommandActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CONTENT, typeid(std::string).name());
    }

    std::string CustomCommandActionImpl::GetType()
    {
        return _type;
    }
    std::string CustomCommandActionImpl::GetContent()
    {
        return _content;
    }

	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Type that is defined as a contract between the simulation 
	 * environment provider and the author of a scenario.]
	 * 
	*/
    void CustomCommandActionImpl::SetType(std::string& type )
    {
        _type = type;
    }
	/**
	 * Sets the value of model property content
	 * @param content from OpenSCENARIO class model specification: [The command that is defined as a contract between the 
	 * simulation environment provider and the author of a scenario.]
	 * 
	*/
    void CustomCommandActionImpl::SetContent(std::string& content )
    {
        _content = content;
    }

    void CustomCommandActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TYPE)
        {
            // Simple type
            _type = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CONTENT)
        {
            // Simple type
            _content = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string CustomCommandActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> CustomCommandActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    CustomCommandActionImpl CustomCommandActionImpl::Clone()
    {
        CustomCommandActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetType(_type);
        // clone children
        return clonedObject;
    }




    DeleteEntityActionImpl::DeleteEntityActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }



    void DeleteEntityActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string DeleteEntityActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> DeleteEntityActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    DeleteEntityActionImpl DeleteEntityActionImpl::Clone()
    {
        DeleteEntityActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        return clonedObject;
    }




    DimensionsImpl::DimensionsImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__WIDTH, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LENGTH, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, typeid(double).name());
    }

    double DimensionsImpl::GetWidth()
    {
        return _width;
    }
    double DimensionsImpl::GetLength()
    {
        return _length;
    }
    double DimensionsImpl::GetHeight()
    {
        return _height;
    }

	/**
	 * Sets the value of model property width
	 * @param width from OpenSCENARIO class model specification: [Width of the entity's bounding box. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
    void DimensionsImpl::SetWidth(double& width )
    {
        _width = width;
    }
	/**
	 * Sets the value of model property length
	 * @param length from OpenSCENARIO class model specification: [Length of the entity's bounding box. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
    void DimensionsImpl::SetLength(double& length )
    {
        _length = length;
    }
	/**
	 * Sets the value of model property height
	 * @param height from OpenSCENARIO class model specification: [Height of the entity's bounding box. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
    void DimensionsImpl::SetHeight(double& height )
    {
        _height = height;
    }

    void DimensionsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__WIDTH)
        {
            // Simple type
            _width = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LENGTH)
        {
            // Simple type
            _length = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__HEIGHT)
        {
            // Simple type
            _height = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string DimensionsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> DimensionsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    DimensionsImpl DimensionsImpl::Clone()
    {
        DimensionsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetWidth(_width);
        // Simple type
        clonedObject.SetLength(_length);
        // Simple type
        clonedObject.SetHeight(_height);
        // clone children
        return clonedObject;
    }




    DirectoryImpl::DirectoryImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PATH, typeid(std::string).name());
    }

    std::string DirectoryImpl::GetPath()
    {
        return _path;
    }

	/**
	 * Sets the value of model property path
	 * @param path from OpenSCENARIO class model specification: [File system path, e.g. path=/home/simulation/.]
	 * 
	*/
    void DirectoryImpl::SetPath(std::string& path )
    {
        _path = path;
    }

    void DirectoryImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PATH)
        {
            // Simple type
            _path = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string DirectoryImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> DirectoryImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    DirectoryImpl DirectoryImpl::Clone()
    {
        DirectoryImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetPath(_path);
        // clone children
        return clonedObject;
    }




    DistanceConditionImpl::DistanceConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    double DistanceConditionImpl::GetValue()
    {
        return _value;
    }
    bool DistanceConditionImpl::GetFreespace()
    {
        return _freespace;
    }
    bool DistanceConditionImpl::GetAlongRoute()
    {
        return _alongRoute;
    }
    Rule DistanceConditionImpl::GetRule()
    {
        return _rule;
    }
    std::shared_ptr<IPosition> DistanceConditionImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The distance value. Unit: s; Range: [0..inf[.]
	 * 
	*/
    void DistanceConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: distance is measured between closest bounding box 
	 * points. False: reference point distance is used.]
	 * 
	*/
    void DistanceConditionImpl::SetFreespace(bool& freespace )
    {
        _freespace = freespace;
    }
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
    void DistanceConditionImpl::SetAlongRoute(bool& alongRoute )
    {
        _alongRoute = alongRoute;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void DistanceConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The given position the distance is related to.]
	 * 
	*/
    void DistanceConditionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void DistanceConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FREESPACE)
        {
            // Simple type
            _freespace = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE)
        {
            // Simple type
            _alongRoute = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string DistanceConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> DistanceConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    DistanceConditionImpl DistanceConditionImpl::Clone()
    {
        DistanceConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetFreespace(_freespace);
        // Simple type
        clonedObject.SetAlongRoute(_alongRoute);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    DynamicConstraintsImpl::DynamicConstraintsImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, typeid(double).name());
    }

    double DynamicConstraintsImpl::GetMaxAcceleration()
    {
        return _maxAcceleration;
    }
    double DynamicConstraintsImpl::GetMaxDeceleration()
    {
        return _maxDeceleration;
    }
    double DynamicConstraintsImpl::GetMaxSpeed()
    {
        return _maxSpeed;
    }

	/**
	 * Sets the value of model property maxAcceleration
	 * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration the distance controller is 
	 * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
    void DynamicConstraintsImpl::SetMaxAcceleration(double& maxAcceleration )
    {
        _maxAcceleration = maxAcceleration;
    }
	/**
	 * Sets the value of model property maxDeceleration
	 * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration the distance controller is 
	 * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
    void DynamicConstraintsImpl::SetMaxDeceleration(double& maxDeceleration )
    {
        _maxDeceleration = maxDeceleration;
    }
	/**
	 * Sets the value of model property maxSpeed
	 * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed the distance controller is allowed to use 
	 * for keeping the distance. Unit: m/s; Range: [0..inf[.]
	 * 
	*/
    void DynamicConstraintsImpl::SetMaxSpeed(double& maxSpeed )
    {
        _maxSpeed = maxSpeed;
    }

    void DynamicConstraintsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION)
        {
            // Simple type
            _maxAcceleration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION)
        {
            // Simple type
            _maxDeceleration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED)
        {
            // Simple type
            _maxSpeed = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string DynamicConstraintsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> DynamicConstraintsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    DynamicConstraintsImpl DynamicConstraintsImpl::Clone()
    {
        DynamicConstraintsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetMaxAcceleration(_maxAcceleration);
        // Simple type
        clonedObject.SetMaxDeceleration(_maxDeceleration);
        // Simple type
        clonedObject.SetMaxSpeed(_maxSpeed);
        // clone children
        return clonedObject;
    }




    EndOfRoadConditionImpl::EndOfRoadConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DURATION, typeid(double).name());
    }

    double EndOfRoadConditionImpl::GetDuration()
    {
        return _duration;
    }

	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Amount of time at end of road. Unit: s; Range: [0..inf[.]
	 * 
	*/
    void EndOfRoadConditionImpl::SetDuration(double& duration )
    {
        _duration = duration;
    }

    void EndOfRoadConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DURATION)
        {
            // Simple type
            _duration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string EndOfRoadConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EndOfRoadConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EndOfRoadConditionImpl EndOfRoadConditionImpl::Clone()
    {
        EndOfRoadConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetDuration(_duration);
        // clone children
        return clonedObject;
    }




    EntitiesImpl::EntitiesImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IScenarioObject>> EntitiesImpl::GetScenarioObjects()
    {
        return _scenarioObjects;
    }
    std::vector<std::shared_ptr<IEntitySelection>> EntitiesImpl::GetEntitySelections()
    {
        return _entitySelections;
    }

	/**
	 * Sets the value of model property scenarioObjects
	 * @param scenarioObjects from OpenSCENARIO class model specification: [A list of scenario object definitions that pairs an
	 * entity object and a controller.]
	 * 
	*/
    void EntitiesImpl::SetScenarioObjects(std::vector<std::shared_ptr<IScenarioObject>>& scenarioObjects)
    {
        _scenarioObjects = scenarioObjects;
    }
	/**
	 * Sets the value of model property entitySelections
	 * @param entitySelections from OpenSCENARIO class model specification: [A list of entity selection definitions.]
	 * 
	*/
    void EntitiesImpl::SetEntitySelections(std::vector<std::shared_ptr<IEntitySelection>>& entitySelections)
    {
        _entitySelections = entitySelections;
    }

    void EntitiesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string EntitiesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EntitiesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto scenarioObjects =  GetScenarioObjects();
            if (!scenarioObjects.empty())
            {
                for(auto&& item : scenarioObjects)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto entitySelections =  GetEntitySelections();
            if (!entitySelections.empty())
            {
                for(auto&& item : entitySelections)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EntitiesImpl EntitiesImpl::Clone()
    {
        EntitiesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kScenarioObjects =  GetScenarioObjects();
        if (!kScenarioObjects.empty())
        {
            std::vector<std::shared_ptr<IScenarioObject>> clonedList;
            for(auto&& kItem : kScenarioObjects)
            {
                auto clonedChild = std::make_shared <ScenarioObjectImpl>(std::dynamic_pointer_cast<ScenarioObjectImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetScenarioObjects(clonedList);
        }
        const auto kEntitySelections =  GetEntitySelections();
        if (!kEntitySelections.empty())
        {
            std::vector<std::shared_ptr<IEntitySelection>> clonedList;
            for(auto&& kItem : kEntitySelections)
            {
                auto clonedChild = std::make_shared <EntitySelectionImpl>(std::dynamic_pointer_cast<EntitySelectionImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetEntitySelections(clonedList);
        }
        return clonedObject;
    }




    EntityActionImpl::EntityActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
    }

    INamedReference<IEntity>* EntityActionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    std::shared_ptr<IAddEntityAction> EntityActionImpl::GetAddEntityAction()
    {
        return _addEntityAction;
    }
    std::shared_ptr<IDeleteEntityAction> EntityActionImpl::GetDeleteEntityAction()
    {
        return _deleteEntityAction;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity.]
	 * 
	*/
    void EntityActionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property addEntityAction
	 * @param addEntityAction from OpenSCENARIO class model specification: [Action that adds the reference entity to the 
	 * scenario.]
	 * 
	*/
    void EntityActionImpl::SetAddEntityAction(std::shared_ptr<IAddEntityAction>& addEntityAction )
    {
        _addEntityAction = addEntityAction;
    }
	/**
	 * Sets the value of model property deleteEntityAction
	 * @param deleteEntityAction from OpenSCENARIO class model specification: [Action that deletes the reference entity from 
	 * the scenario.]
	 * 
	*/
    void EntityActionImpl::SetDeleteEntityAction(std::shared_ptr<IDeleteEntityAction>& deleteEntityAction )
    {
        _deleteEntityAction = deleteEntityAction;
    }

    void EntityActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string EntityActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EntityActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kAddEntityAction =  GetAddEntityAction();
            if (kAddEntityAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAddEntityAction));
            }
            const auto kDeleteEntityAction =  GetDeleteEntityAction();
            if (kDeleteEntityAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDeleteEntityAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EntityActionImpl EntityActionImpl::Clone()
    {
        EntityActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // clone children
        const auto kAddEntityAction =  GetAddEntityAction();
        if (kAddEntityAction)
        {
            auto clonedChild = std::make_shared<AddEntityActionImpl>(std::dynamic_pointer_cast<AddEntityActionImpl>(kAddEntityAction)->Clone());
            auto clonedChildIAddEntityAction = std::dynamic_pointer_cast<IAddEntityAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAddEntityAction(clonedChildIAddEntityAction);
        }
        const auto kDeleteEntityAction =  GetDeleteEntityAction();
        if (kDeleteEntityAction)
        {
            auto clonedChild = std::make_shared<DeleteEntityActionImpl>(std::dynamic_pointer_cast<DeleteEntityActionImpl>(kDeleteEntityAction)->Clone());
            auto clonedChildIDeleteEntityAction = std::dynamic_pointer_cast<IDeleteEntityAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDeleteEntityAction(clonedChildIDeleteEntityAction);
        }
        return clonedObject;
    }




    EntityConditionImpl::EntityConditionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IEndOfRoadCondition> EntityConditionImpl::GetEndOfRoadCondition()
    {
        return _endOfRoadCondition;
    }
    std::shared_ptr<ICollisionCondition> EntityConditionImpl::GetCollisionCondition()
    {
        return _collisionCondition;
    }
    std::shared_ptr<IOffroadCondition> EntityConditionImpl::GetOffroadCondition()
    {
        return _offroadCondition;
    }
    std::shared_ptr<ITimeHeadwayCondition> EntityConditionImpl::GetTimeHeadwayCondition()
    {
        return _timeHeadwayCondition;
    }
    std::shared_ptr<ITimeToCollisionCondition> EntityConditionImpl::GetTimeToCollisionCondition()
    {
        return _timeToCollisionCondition;
    }
    std::shared_ptr<IAccelerationCondition> EntityConditionImpl::GetAccelerationCondition()
    {
        return _accelerationCondition;
    }
    std::shared_ptr<IStandStillCondition> EntityConditionImpl::GetStandStillCondition()
    {
        return _standStillCondition;
    }
    std::shared_ptr<ISpeedCondition> EntityConditionImpl::GetSpeedCondition()
    {
        return _speedCondition;
    }
    std::shared_ptr<IRelativeSpeedCondition> EntityConditionImpl::GetRelativeSpeedCondition()
    {
        return _relativeSpeedCondition;
    }
    std::shared_ptr<ITraveledDistanceCondition> EntityConditionImpl::GetTraveledDistanceCondition()
    {
        return _traveledDistanceCondition;
    }
    std::shared_ptr<IReachPositionCondition> EntityConditionImpl::GetReachPositionCondition()
    {
        return _reachPositionCondition;
    }
    std::shared_ptr<IDistanceCondition> EntityConditionImpl::GetDistanceCondition()
    {
        return _distanceCondition;
    }
    std::shared_ptr<IRelativeDistanceCondition> EntityConditionImpl::GetRelativeDistanceCondition()
    {
        return _relativeDistanceCondition;
    }

	/**
	 * Sets the value of model property endOfRoadCondition
	 * @param endOfRoadCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has reached the end of the road.]
	 * 
	*/
    void EntityConditionImpl::SetEndOfRoadCondition(std::shared_ptr<IEndOfRoadCondition>& endOfRoadCondition )
    {
        _endOfRoadCondition = endOfRoadCondition;
    }
	/**
	 * Sets the value of model property collisionCondition
	 * @param collisionCondition from OpenSCENARIO class model specification: [Condition checking whether the reference entity 
	 * was involved in a collision.]
	 * 
	*/
    void EntityConditionImpl::SetCollisionCondition(std::shared_ptr<ICollisionCondition>& collisionCondition )
    {
        _collisionCondition = collisionCondition;
    }
	/**
	 * Sets the value of model property offroadCondition
	 * @param offroadCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has left the road.]
	 * 
	*/
    void EntityConditionImpl::SetOffroadCondition(std::shared_ptr<IOffroadCondition>& offroadCondition )
    {
        _offroadCondition = offroadCondition;
    }
	/**
	 * Sets the value of model property timeHeadwayCondition
	 * @param timeHeadwayCondition from OpenSCENARIO class model specification: [Condition checking the time headway between 
	 * two entities.]
	 * 
	*/
    void EntityConditionImpl::SetTimeHeadwayCondition(std::shared_ptr<ITimeHeadwayCondition>& timeHeadwayCondition )
    {
        _timeHeadwayCondition = timeHeadwayCondition;
    }
	/**
	 * Sets the value of model property timeToCollisionCondition
	 * @param timeToCollisionCondition from OpenSCENARIO class model specification: [Condition checking the time to collision 
	 * between two entities.]
	 * 
	*/
    void EntityConditionImpl::SetTimeToCollisionCondition(std::shared_ptr<ITimeToCollisionCondition>& timeToCollisionCondition )
    {
        _timeToCollisionCondition = timeToCollisionCondition;
    }
	/**
	 * Sets the value of model property accelerationCondition
	 * @param accelerationCondition from OpenSCENARIO class model specification: [Condition checking the current acceleration 
	 * of an entity.]
	 * 
	*/
    void EntityConditionImpl::SetAccelerationCondition(std::shared_ptr<IAccelerationCondition>& accelerationCondition )
    {
        _accelerationCondition = accelerationCondition;
    }
	/**
	 * Sets the value of model property standStillCondition
	 * @param standStillCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has not moved.]
	 * 
	*/
    void EntityConditionImpl::SetStandStillCondition(std::shared_ptr<IStandStillCondition>& standStillCondition )
    {
        _standStillCondition = standStillCondition;
    }
	/**
	 * Sets the value of model property speedCondition
	 * @param speedCondition from OpenSCENARIO class model specification: [Condition checking the current speed of the 
	 * referenced entities.]
	 * 
	*/
    void EntityConditionImpl::SetSpeedCondition(std::shared_ptr<ISpeedCondition>& speedCondition )
    {
        _speedCondition = speedCondition;
    }
	/**
	 * Sets the value of model property relativeSpeedCondition
	 * @param relativeSpeedCondition from OpenSCENARIO class model specification: [Condition checking the relative speed 
	 * between two entity.]
	 * 
	*/
    void EntityConditionImpl::SetRelativeSpeedCondition(std::shared_ptr<IRelativeSpeedCondition>& relativeSpeedCondition )
    {
        _relativeSpeedCondition = relativeSpeedCondition;
    }
	/**
	 * Sets the value of model property traveledDistanceCondition
	 * @param traveledDistanceCondition from OpenSCENARIO class model specification: [Condition checking the total traveled 
	 * distance of the reference entity since the start of the scenario.]
	 * 
	*/
    void EntityConditionImpl::SetTraveledDistanceCondition(std::shared_ptr<ITraveledDistanceCondition>& traveledDistanceCondition )
    {
        _traveledDistanceCondition = traveledDistanceCondition;
    }
	/**
	 * Sets the value of model property reachPositionCondition
	 * @param reachPositionCondition from OpenSCENARIO class model specification: [Condition checking whether the reference 
	 * entity has reached a given position within a given uncertainty.]
	 * 
	*/
    void EntityConditionImpl::SetReachPositionCondition(std::shared_ptr<IReachPositionCondition>& reachPositionCondition )
    {
        _reachPositionCondition = reachPositionCondition;
    }
	/**
	 * Sets the value of model property distanceCondition
	 * @param distanceCondition from OpenSCENARIO class model specification: [Condition checking the distance between two 
	 * entities or an entity and a position.]
	 * 
	*/
    void EntityConditionImpl::SetDistanceCondition(std::shared_ptr<IDistanceCondition>& distanceCondition )
    {
        _distanceCondition = distanceCondition;
    }
	/**
	 * Sets the value of model property relativeDistanceCondition
	 * @param relativeDistanceCondition from OpenSCENARIO class model specification: [Condition checking the relative distance 
	 * between two entities.]
	 * 
	*/
    void EntityConditionImpl::SetRelativeDistanceCondition(std::shared_ptr<IRelativeDistanceCondition>& relativeDistanceCondition )
    {
        _relativeDistanceCondition = relativeDistanceCondition;
    }

    void EntityConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string EntityConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EntityConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kEndOfRoadCondition =  GetEndOfRoadCondition();
            if (kEndOfRoadCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEndOfRoadCondition));
            }
            const auto kCollisionCondition =  GetCollisionCondition();
            if (kCollisionCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCollisionCondition));
            }
            const auto kOffroadCondition =  GetOffroadCondition();
            if (kOffroadCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOffroadCondition));
            }
            const auto kTimeHeadwayCondition =  GetTimeHeadwayCondition();
            if (kTimeHeadwayCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTimeHeadwayCondition));
            }
            const auto kTimeToCollisionCondition =  GetTimeToCollisionCondition();
            if (kTimeToCollisionCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTimeToCollisionCondition));
            }
            const auto kAccelerationCondition =  GetAccelerationCondition();
            if (kAccelerationCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAccelerationCondition));
            }
            const auto kStandStillCondition =  GetStandStillCondition();
            if (kStandStillCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStandStillCondition));
            }
            const auto kSpeedCondition =  GetSpeedCondition();
            if (kSpeedCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSpeedCondition));
            }
            const auto kRelativeSpeedCondition =  GetRelativeSpeedCondition();
            if (kRelativeSpeedCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeSpeedCondition));
            }
            const auto kTraveledDistanceCondition =  GetTraveledDistanceCondition();
            if (kTraveledDistanceCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTraveledDistanceCondition));
            }
            const auto kReachPositionCondition =  GetReachPositionCondition();
            if (kReachPositionCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kReachPositionCondition));
            }
            const auto kDistanceCondition =  GetDistanceCondition();
            if (kDistanceCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDistanceCondition));
            }
            const auto kRelativeDistanceCondition =  GetRelativeDistanceCondition();
            if (kRelativeDistanceCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeDistanceCondition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EntityConditionImpl EntityConditionImpl::Clone()
    {
        EntityConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kEndOfRoadCondition =  GetEndOfRoadCondition();
        if (kEndOfRoadCondition)
        {
            auto clonedChild = std::make_shared<EndOfRoadConditionImpl>(std::dynamic_pointer_cast<EndOfRoadConditionImpl>(kEndOfRoadCondition)->Clone());
            auto clonedChildIEndOfRoadCondition = std::dynamic_pointer_cast<IEndOfRoadCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEndOfRoadCondition(clonedChildIEndOfRoadCondition);
        }
        const auto kCollisionCondition =  GetCollisionCondition();
        if (kCollisionCondition)
        {
            auto clonedChild = std::make_shared<CollisionConditionImpl>(std::dynamic_pointer_cast<CollisionConditionImpl>(kCollisionCondition)->Clone());
            auto clonedChildICollisionCondition = std::dynamic_pointer_cast<ICollisionCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCollisionCondition(clonedChildICollisionCondition);
        }
        const auto kOffroadCondition =  GetOffroadCondition();
        if (kOffroadCondition)
        {
            auto clonedChild = std::make_shared<OffroadConditionImpl>(std::dynamic_pointer_cast<OffroadConditionImpl>(kOffroadCondition)->Clone());
            auto clonedChildIOffroadCondition = std::dynamic_pointer_cast<IOffroadCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOffroadCondition(clonedChildIOffroadCondition);
        }
        const auto kTimeHeadwayCondition =  GetTimeHeadwayCondition();
        if (kTimeHeadwayCondition)
        {
            auto clonedChild = std::make_shared<TimeHeadwayConditionImpl>(std::dynamic_pointer_cast<TimeHeadwayConditionImpl>(kTimeHeadwayCondition)->Clone());
            auto clonedChildITimeHeadwayCondition = std::dynamic_pointer_cast<ITimeHeadwayCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTimeHeadwayCondition(clonedChildITimeHeadwayCondition);
        }
        const auto kTimeToCollisionCondition =  GetTimeToCollisionCondition();
        if (kTimeToCollisionCondition)
        {
            auto clonedChild = std::make_shared<TimeToCollisionConditionImpl>(std::dynamic_pointer_cast<TimeToCollisionConditionImpl>(kTimeToCollisionCondition)->Clone());
            auto clonedChildITimeToCollisionCondition = std::dynamic_pointer_cast<ITimeToCollisionCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTimeToCollisionCondition(clonedChildITimeToCollisionCondition);
        }
        const auto kAccelerationCondition =  GetAccelerationCondition();
        if (kAccelerationCondition)
        {
            auto clonedChild = std::make_shared<AccelerationConditionImpl>(std::dynamic_pointer_cast<AccelerationConditionImpl>(kAccelerationCondition)->Clone());
            auto clonedChildIAccelerationCondition = std::dynamic_pointer_cast<IAccelerationCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAccelerationCondition(clonedChildIAccelerationCondition);
        }
        const auto kStandStillCondition =  GetStandStillCondition();
        if (kStandStillCondition)
        {
            auto clonedChild = std::make_shared<StandStillConditionImpl>(std::dynamic_pointer_cast<StandStillConditionImpl>(kStandStillCondition)->Clone());
            auto clonedChildIStandStillCondition = std::dynamic_pointer_cast<IStandStillCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStandStillCondition(clonedChildIStandStillCondition);
        }
        const auto kSpeedCondition =  GetSpeedCondition();
        if (kSpeedCondition)
        {
            auto clonedChild = std::make_shared<SpeedConditionImpl>(std::dynamic_pointer_cast<SpeedConditionImpl>(kSpeedCondition)->Clone());
            auto clonedChildISpeedCondition = std::dynamic_pointer_cast<ISpeedCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSpeedCondition(clonedChildISpeedCondition);
        }
        const auto kRelativeSpeedCondition =  GetRelativeSpeedCondition();
        if (kRelativeSpeedCondition)
        {
            auto clonedChild = std::make_shared<RelativeSpeedConditionImpl>(std::dynamic_pointer_cast<RelativeSpeedConditionImpl>(kRelativeSpeedCondition)->Clone());
            auto clonedChildIRelativeSpeedCondition = std::dynamic_pointer_cast<IRelativeSpeedCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeSpeedCondition(clonedChildIRelativeSpeedCondition);
        }
        const auto kTraveledDistanceCondition =  GetTraveledDistanceCondition();
        if (kTraveledDistanceCondition)
        {
            auto clonedChild = std::make_shared<TraveledDistanceConditionImpl>(std::dynamic_pointer_cast<TraveledDistanceConditionImpl>(kTraveledDistanceCondition)->Clone());
            auto clonedChildITraveledDistanceCondition = std::dynamic_pointer_cast<ITraveledDistanceCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTraveledDistanceCondition(clonedChildITraveledDistanceCondition);
        }
        const auto kReachPositionCondition =  GetReachPositionCondition();
        if (kReachPositionCondition)
        {
            auto clonedChild = std::make_shared<ReachPositionConditionImpl>(std::dynamic_pointer_cast<ReachPositionConditionImpl>(kReachPositionCondition)->Clone());
            auto clonedChildIReachPositionCondition = std::dynamic_pointer_cast<IReachPositionCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetReachPositionCondition(clonedChildIReachPositionCondition);
        }
        const auto kDistanceCondition =  GetDistanceCondition();
        if (kDistanceCondition)
        {
            auto clonedChild = std::make_shared<DistanceConditionImpl>(std::dynamic_pointer_cast<DistanceConditionImpl>(kDistanceCondition)->Clone());
            auto clonedChildIDistanceCondition = std::dynamic_pointer_cast<IDistanceCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDistanceCondition(clonedChildIDistanceCondition);
        }
        const auto kRelativeDistanceCondition =  GetRelativeDistanceCondition();
        if (kRelativeDistanceCondition)
        {
            auto clonedChild = std::make_shared<RelativeDistanceConditionImpl>(std::dynamic_pointer_cast<RelativeDistanceConditionImpl>(kRelativeDistanceCondition)->Clone());
            auto clonedChildIRelativeDistanceCondition = std::dynamic_pointer_cast<IRelativeDistanceCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeDistanceCondition(clonedChildIRelativeDistanceCondition);
        }
        return clonedObject;
    }




    EntityObjectImpl::EntityObjectImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ICatalogReference> EntityObjectImpl::GetCatalogReference()
    {
        return _catalogReference;
    }
    std::shared_ptr<IVehicle> EntityObjectImpl::GetVehicle()
    {
        return _vehicle;
    }
    std::shared_ptr<IPedestrian> EntityObjectImpl::GetPedestrian()
    {
        return _pedestrian;
    }
    std::shared_ptr<IMiscObject> EntityObjectImpl::GetMiscObject()
    {
        return _miscObject;
    }

	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to a catalog entry of type MiscObject, 
	 * Vehicle or Pedestrian.]
	 * 
	*/
    void EntityObjectImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }
	/**
	 * Sets the value of model property vehicle
	 * @param vehicle from OpenSCENARIO class model specification: [Vehicle definition.]
	 * 
	*/
    void EntityObjectImpl::SetVehicle(std::shared_ptr<IVehicle>& vehicle )
    {
        _vehicle = vehicle;
    }
	/**
	 * Sets the value of model property pedestrian
	 * @param pedestrian from OpenSCENARIO class model specification: [Pedestrian definition.]
	 * 
	*/
    void EntityObjectImpl::SetPedestrian(std::shared_ptr<IPedestrian>& pedestrian )
    {
        _pedestrian = pedestrian;
    }
	/**
	 * Sets the value of model property miscObject
	 * @param miscObject from OpenSCENARIO class model specification: [Definition of a MiscObject.]
	 * 
	*/
    void EntityObjectImpl::SetMiscObject(std::shared_ptr<IMiscObject>& miscObject )
    {
        _miscObject = miscObject;
    }

    void EntityObjectImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string EntityObjectImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EntityObjectImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
            const auto kVehicle =  GetVehicle();
            if (kVehicle)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kVehicle));
            }
            const auto kPedestrian =  GetPedestrian();
            if (kPedestrian)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPedestrian));
            }
            const auto kMiscObject =  GetMiscObject();
            if (kMiscObject)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kMiscObject));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EntityObjectImpl EntityObjectImpl::Clone()
    {
        EntityObjectImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        const auto kVehicle =  GetVehicle();
        if (kVehicle)
        {
            auto clonedChild = std::make_shared<VehicleImpl>(std::dynamic_pointer_cast<VehicleImpl>(kVehicle)->Clone());
            auto clonedChildIVehicle = std::dynamic_pointer_cast<IVehicle>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetVehicle(clonedChildIVehicle);
        }
        const auto kPedestrian =  GetPedestrian();
        if (kPedestrian)
        {
            auto clonedChild = std::make_shared<PedestrianImpl>(std::dynamic_pointer_cast<PedestrianImpl>(kPedestrian)->Clone());
            auto clonedChildIPedestrian = std::dynamic_pointer_cast<IPedestrian>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPedestrian(clonedChildIPedestrian);
        }
        const auto kMiscObject =  GetMiscObject();
        if (kMiscObject)
        {
            auto clonedChild = std::make_shared<MiscObjectImpl>(std::dynamic_pointer_cast<MiscObjectImpl>(kMiscObject)->Clone());
            auto clonedChildIMiscObject = std::dynamic_pointer_cast<IMiscObject>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetMiscObject(clonedChildIMiscObject);
        }
        return clonedObject;
    }




    EntityRefImpl::EntityRefImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
    }

    INamedReference<IEntity>* EntityRefImpl::GetEntityRef()
    {
        return &_entityRef;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity.]
	 * 
	*/
    void EntityRefImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }

    void EntityRefImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string EntityRefImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EntityRefImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EntityRefImpl EntityRefImpl::Clone()
    {
        EntityRefImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // clone children
        return clonedObject;
    }




    EntitySelectionImpl::EntitySelectionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string EntitySelectionImpl::GetName()
    {
        return _name;
    }
    std::shared_ptr<ISelectedEntities> EntitySelectionImpl::GetMembers()
    {
        return _members;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the entity selection. By this name, a selection can be
	 * referenced as an entity.]
	 * 
	*/
    void EntitySelectionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property members
	 * @param members from OpenSCENARIO class model specification: [Selected entities as members of the entity selection.]
	 * 
	*/
    void EntitySelectionImpl::SetMembers(std::shared_ptr<ISelectedEntities>& members )
    {
        _members = members;
    }

    void EntitySelectionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string EntitySelectionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EntitySelectionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kMembers =  GetMembers();
            if (kMembers)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kMembers));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EntitySelectionImpl EntitySelectionImpl::Clone()
    {
        EntitySelectionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kMembers =  GetMembers();
        if (kMembers)
        {
            auto clonedChild = std::make_shared<SelectedEntitiesImpl>(std::dynamic_pointer_cast<SelectedEntitiesImpl>(kMembers)->Clone());
            auto clonedChildISelectedEntities = std::dynamic_pointer_cast<ISelectedEntities>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetMembers(clonedChildISelectedEntities);
        }
        return clonedObject;
    }




    EnvironmentImpl::EnvironmentImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string EnvironmentImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> EnvironmentImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<ITimeOfDay> EnvironmentImpl::GetTimeOfDay()
    {
        return _timeOfDay;
    }
    std::shared_ptr<IWeather> EnvironmentImpl::GetWeather()
    {
        return _weather;
    }
    std::shared_ptr<IRoadCondition> EnvironmentImpl::GetRoadCondition()
    {
        return _roadCondition;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the environment. If used in catalog name is required.]
	 * 
	*/
    void EnvironmentImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void EnvironmentImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property timeOfDay
	 * @param timeOfDay from OpenSCENARIO class model specification: [Time of the day during the simulation.]
	 * 
	*/
    void EnvironmentImpl::SetTimeOfDay(std::shared_ptr<ITimeOfDay>& timeOfDay )
    {
        _timeOfDay = timeOfDay;
    }
	/**
	 * Sets the value of model property weather
	 * @param weather from OpenSCENARIO class model specification: [Weather conditions during the simulation.]
	 * 
	*/
    void EnvironmentImpl::SetWeather(std::shared_ptr<IWeather>& weather )
    {
        _weather = weather;
    }
	/**
	 * Sets the value of model property roadCondition
	 * @param roadCondition from OpenSCENARIO class model specification: [Road conditions during the simulation.]
	 * 
	*/
    void EnvironmentImpl::SetRoadCondition(std::shared_ptr<IRoadCondition>& roadCondition )
    {
        _roadCondition = roadCondition;
    }

    void EnvironmentImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string EnvironmentImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool EnvironmentImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> EnvironmentImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EnvironmentImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kTimeOfDay =  GetTimeOfDay();
            if (kTimeOfDay)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTimeOfDay));
            }
            const auto kWeather =  GetWeather();
            if (kWeather)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kWeather));
            }
            const auto kRoadCondition =  GetRoadCondition();
            if (kRoadCondition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoadCondition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EnvironmentImpl EnvironmentImpl::Clone()
    {
        EnvironmentImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kTimeOfDay =  GetTimeOfDay();
        if (kTimeOfDay)
        {
            auto clonedChild = std::make_shared<TimeOfDayImpl>(std::dynamic_pointer_cast<TimeOfDayImpl>(kTimeOfDay)->Clone());
            auto clonedChildITimeOfDay = std::dynamic_pointer_cast<ITimeOfDay>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTimeOfDay(clonedChildITimeOfDay);
        }
        const auto kWeather =  GetWeather();
        if (kWeather)
        {
            auto clonedChild = std::make_shared<WeatherImpl>(std::dynamic_pointer_cast<WeatherImpl>(kWeather)->Clone());
            auto clonedChildIWeather = std::dynamic_pointer_cast<IWeather>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetWeather(clonedChildIWeather);
        }
        const auto kRoadCondition =  GetRoadCondition();
        if (kRoadCondition)
        {
            auto clonedChild = std::make_shared<RoadConditionImpl>(std::dynamic_pointer_cast<RoadConditionImpl>(kRoadCondition)->Clone());
            auto clonedChildIRoadCondition = std::dynamic_pointer_cast<IRoadCondition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoadCondition(clonedChildIRoadCondition);
        }
        return clonedObject;
    }




    EnvironmentActionImpl::EnvironmentActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IEnvironment> EnvironmentActionImpl::GetEnvironment()
    {
        return _environment;
    }
    std::shared_ptr<ICatalogReference> EnvironmentActionImpl::GetCatalogReference()
    {
        return _catalogReference;
    }

	/**
	 * Sets the value of model property environment
	 * @param environment from OpenSCENARIO class model specification: [New environment definition.]
	 * 
	*/
    void EnvironmentActionImpl::SetEnvironment(std::shared_ptr<IEnvironment>& environment )
    {
        _environment = environment;
    }
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to a catalog entry of type Environment.]
	 * 
	*/
    void EnvironmentActionImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }

    void EnvironmentActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string EnvironmentActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EnvironmentActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kEnvironment =  GetEnvironment();
            if (kEnvironment)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEnvironment));
            }
            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EnvironmentActionImpl EnvironmentActionImpl::Clone()
    {
        EnvironmentActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kEnvironment =  GetEnvironment();
        if (kEnvironment)
        {
            auto clonedChild = std::make_shared<EnvironmentImpl>(std::dynamic_pointer_cast<EnvironmentImpl>(kEnvironment)->Clone());
            auto clonedChildIEnvironment = std::dynamic_pointer_cast<IEnvironment>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEnvironment(clonedChildIEnvironment);
        }
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        return clonedObject;
    }




    EnvironmentCatalogLocationImpl::EnvironmentCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> EnvironmentCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
    void EnvironmentCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void EnvironmentCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string EnvironmentCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EnvironmentCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EnvironmentCatalogLocationImpl EnvironmentCatalogLocationImpl::Clone()
    {
        EnvironmentCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    EventImpl::EventImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, typeid(unsigned int).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    Priority EventImpl::GetPriority()
    {
        return _priority;
    }
    unsigned int EventImpl::GetMaximumExecutionCount()
    {
        return _maximumExecutionCount;
    }
    std::string EventImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IAction>> EventImpl::GetActions()
    {
        return _actions;
    }
    std::shared_ptr<ITrigger> EventImpl::GetStartTrigger()
    {
        return _startTrigger;
    }

	/**
	 * Sets the value of model property priority
	 * @param priority from OpenSCENARIO class model specification: [Priority of each event.]
	 * 
	*/
    void EventImpl::SetPriority(Priority& priority )
    {
        _priority = priority;
    }
	/**
	 * Sets the value of model property maximumExecutionCount
	 * @param maximumExecutionCount from OpenSCENARIO class model specification: [Maximum number of executions. Default value 
	 * is 1. Range: [1..inf[.]
	 * 
	*/
    void EventImpl::SetMaximumExecutionCount(unsigned int& maximumExecutionCount )
    {
        _maximumExecutionCount = maximumExecutionCount;
    }
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the event.]
	 * 
	*/
    void EventImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property actions
	 * @param actions from OpenSCENARIO class model specification: [List of actions in an event.]
	 * 
	*/
    void EventImpl::SetActions(std::vector<std::shared_ptr<IAction>>& actions)
    {
        _actions = actions;
    }
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Actions are executed as soon as the start trigger 
	 * fires. This point in time represents the start of the event.]
	 * 
	*/
    void EventImpl::SetStartTrigger(std::shared_ptr<ITrigger>& startTrigger )
    {
        _startTrigger = startTrigger;
    }

    void EventImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PRIORITY)
        {
            // Enumeration Type
            const auto kResult = Priority::GetFromLiteral(parameterLiteralValue);
            if (kResult != Priority::UNKNOWN)
            {
                _priority = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT)
        {
            // Simple type
            _maximumExecutionCount = ParserHelper::ParseUnsignedInt(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string EventImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> EventImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto actions =  GetActions();
            if (!actions.empty())
            {
                for(auto&& item : actions)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kStartTrigger =  GetStartTrigger();
            if (kStartTrigger)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStartTrigger));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    EventImpl EventImpl::Clone()
    {
        EventImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetPriority(_priority);
        // Simple type
        clonedObject.SetMaximumExecutionCount(_maximumExecutionCount);
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kActions =  GetActions();
        if (!kActions.empty())
        {
            std::vector<std::shared_ptr<IAction>> clonedList;
            for(auto&& kItem : kActions)
            {
                auto clonedChild = std::make_shared <ActionImpl>(std::dynamic_pointer_cast<ActionImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetActions(clonedList);
        }
        const auto kStartTrigger =  GetStartTrigger();
        if (kStartTrigger)
        {
            auto clonedChild = std::make_shared<TriggerImpl>(std::dynamic_pointer_cast<TriggerImpl>(kStartTrigger)->Clone());
            auto clonedChildITrigger = std::dynamic_pointer_cast<ITrigger>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStartTrigger(clonedChildITrigger);
        }
        return clonedObject;
    }




    FileImpl::FileImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, typeid(std::string).name());
    }

    std::string FileImpl::GetFilepath()
    {
        return _filepath;
    }

	/**
	 * Sets the value of model property filepath
	 * @param filepath from OpenSCENARIO class model specification: [Filepath e.g. 
	 * filepath=/home/simulator/customDriverSpecification.xml.]
	 * 
	*/
    void FileImpl::SetFilepath(std::string& filepath )
    {
        _filepath = filepath;
    }

    void FileImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FILEPATH)
        {
            // Simple type
            _filepath = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string FileImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> FileImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    FileImpl FileImpl::Clone()
    {
        FileImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetFilepath(_filepath);
        // clone children
        return clonedObject;
    }




    FileHeaderImpl::FileHeaderImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, typeid(unsigned short).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, typeid(unsigned short).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DATE, typeid(DateTime).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, typeid(std::string).name());
    }

    unsigned short FileHeaderImpl::GetRevMajor()
    {
        return _revMajor;
    }
    unsigned short FileHeaderImpl::GetRevMinor()
    {
        return _revMinor;
    }
    DateTime FileHeaderImpl::GetDate()
    {
        return _date;
    }
    std::string FileHeaderImpl::GetDescription()
    {
        return _description;
    }
    std::string FileHeaderImpl::GetAuthor()
    {
        return _author;
    }

	/**
	 * Sets the value of model property revMajor
	 * @param revMajor from OpenSCENARIO class model specification: [Major OpenSCENARIO revision, this file conforms to Range: 
	 * [0..inf[.]
	 * 
	*/
    void FileHeaderImpl::SetRevMajor(unsigned short& revMajor )
    {
        _revMajor = revMajor;
    }
	/**
	 * Sets the value of model property revMinor
	 * @param revMinor from OpenSCENARIO class model specification: [Minor OpenSCENARIO revision, this file conforms to Range: 
	 * [0..inf[.]
	 * 
	*/
    void FileHeaderImpl::SetRevMinor(unsigned short& revMinor )
    {
        _revMinor = revMinor;
    }
	/**
	 * Sets the value of model property date
	 * @param date from OpenSCENARIO class model specification: [User specific date and time recommended: YYYY-MM-DDThh:mm:ss.]
	 * 
	*/
    void FileHeaderImpl::SetDate(DateTime& date )
    {
        _date = date;
    }
	/**
	 * Sets the value of model property description
	 * @param description from OpenSCENARIO class model specification: [User specific description.]
	 * 
	*/
    void FileHeaderImpl::SetDescription(std::string& description )
    {
        _description = description;
    }
	/**
	 * Sets the value of model property author
	 * @param author from OpenSCENARIO class model specification: [Author of the scenario or the catalog.]
	 * 
	*/
    void FileHeaderImpl::SetAuthor(std::string& author )
    {
        _author = author;
    }

    void FileHeaderImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR)
        {
            // Simple type
            _revMajor = ParserHelper::ParseUnsignedShort(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__REV_MINOR)
        {
            // Simple type
            _revMinor = ParserHelper::ParseUnsignedShort(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DATE)
        {
            // Simple type
            _date = ParserHelper::ParseDateTime(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION)
        {
            // Simple type
            _description = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__AUTHOR)
        {
            // Simple type
            _author = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string FileHeaderImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> FileHeaderImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    FileHeaderImpl FileHeaderImpl::Clone()
    {
        FileHeaderImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetRevMajor(_revMajor);
        // Simple type
        clonedObject.SetRevMinor(_revMinor);
        // Simple type
        clonedObject.SetDate(_date);
        // Simple type
        clonedObject.SetDescription(_description);
        // Simple type
        clonedObject.SetAuthor(_author);
        // clone children
        return clonedObject;
    }




    FinalSpeedImpl::FinalSpeedImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IAbsoluteSpeed> FinalSpeedImpl::GetAbsoluteSpeed()
    {
        return _absoluteSpeed;
    }
    std::shared_ptr<IRelativeSpeedToMaster> FinalSpeedImpl::GetRelativeSpeedToMaster()
    {
        return _relativeSpeedToMaster;
    }

	/**
	 * Sets the value of model property absoluteSpeed
	 * @param absoluteSpeed from OpenSCENARIO class model specification: [The absolute speed a synchronized entity should have 
	 * at its target position.]
	 * 
	*/
    void FinalSpeedImpl::SetAbsoluteSpeed(std::shared_ptr<IAbsoluteSpeed>& absoluteSpeed )
    {
        _absoluteSpeed = absoluteSpeed;
    }
	/**
	 * Sets the value of model property relativeSpeedToMaster
	 * @param relativeSpeedToMaster from OpenSCENARIO class model specification: [The speed a synchronized entity should have 
	 * relative to its master entity at its target position.]
	 * 
	*/
    void FinalSpeedImpl::SetRelativeSpeedToMaster(std::shared_ptr<IRelativeSpeedToMaster>& relativeSpeedToMaster )
    {
        _relativeSpeedToMaster = relativeSpeedToMaster;
    }

    void FinalSpeedImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string FinalSpeedImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> FinalSpeedImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kAbsoluteSpeed =  GetAbsoluteSpeed();
            if (kAbsoluteSpeed)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAbsoluteSpeed));
            }
            const auto kRelativeSpeedToMaster =  GetRelativeSpeedToMaster();
            if (kRelativeSpeedToMaster)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeSpeedToMaster));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    FinalSpeedImpl FinalSpeedImpl::Clone()
    {
        FinalSpeedImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kAbsoluteSpeed =  GetAbsoluteSpeed();
        if (kAbsoluteSpeed)
        {
            auto clonedChild = std::make_shared<AbsoluteSpeedImpl>(std::dynamic_pointer_cast<AbsoluteSpeedImpl>(kAbsoluteSpeed)->Clone());
            auto clonedChildIAbsoluteSpeed = std::dynamic_pointer_cast<IAbsoluteSpeed>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAbsoluteSpeed(clonedChildIAbsoluteSpeed);
        }
        const auto kRelativeSpeedToMaster =  GetRelativeSpeedToMaster();
        if (kRelativeSpeedToMaster)
        {
            auto clonedChild = std::make_shared<RelativeSpeedToMasterImpl>(std::dynamic_pointer_cast<RelativeSpeedToMasterImpl>(kRelativeSpeedToMaster)->Clone());
            auto clonedChildIRelativeSpeedToMaster = std::dynamic_pointer_cast<IRelativeSpeedToMaster>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeSpeedToMaster(clonedChildIRelativeSpeedToMaster);
        }
        return clonedObject;
    }




    FogImpl::FogImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, typeid(double).name());
    }

    double FogImpl::GetVisualRange()
    {
        return _visualRange;
    }
    std::shared_ptr<IBoundingBox> FogImpl::GetBoundingBox()
    {
        return _boundingBox;
    }

	/**
	 * Sets the value of model property visualRange
	 * @param visualRange from OpenSCENARIO class model specification: [Unit: m; Range: [0..inf[.]
	 * 
	*/
    void FogImpl::SetVisualRange(double& visualRange )
    {
        _visualRange = visualRange;
    }
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Dimensions and center of fog in fixed coordinates.]
	 * 
	*/
    void FogImpl::SetBoundingBox(std::shared_ptr<IBoundingBox>& boundingBox )
    {
        _boundingBox = boundingBox;
    }

    void FogImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE)
        {
            // Simple type
            _visualRange = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string FogImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> FogImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kBoundingBox =  GetBoundingBox();
            if (kBoundingBox)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kBoundingBox));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    FogImpl FogImpl::Clone()
    {
        FogImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetVisualRange(_visualRange);
        // clone children
        const auto kBoundingBox =  GetBoundingBox();
        if (kBoundingBox)
        {
            auto clonedChild = std::make_shared<BoundingBoxImpl>(std::dynamic_pointer_cast<BoundingBoxImpl>(kBoundingBox)->Clone());
            auto clonedChildIBoundingBox = std::dynamic_pointer_cast<IBoundingBox>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetBoundingBox(clonedChildIBoundingBox);
        }
        return clonedObject;
    }




    FollowTrajectoryActionImpl::FollowTrajectoryActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ITrajectory> FollowTrajectoryActionImpl::GetTrajectory()
    {
        return _trajectory;
    }
    std::shared_ptr<ICatalogReference> FollowTrajectoryActionImpl::GetCatalogReference()
    {
        return _catalogReference;
    }
    std::shared_ptr<ITimeReference> FollowTrajectoryActionImpl::GetTimeReference()
    {
        return _timeReference;
    }
    std::shared_ptr<ITrajectoryFollowingMode> FollowTrajectoryActionImpl::GetTrajectoryFollowingMode()
    {
        return _trajectoryFollowingMode;
    }

	/**
	 * Sets the value of model property trajectory
	 * @param trajectory from OpenSCENARIO class model specification: [Trajectory definition.]
	 * 
	*/
    void FollowTrajectoryActionImpl::SetTrajectory(std::shared_ptr<ITrajectory>& trajectory )
    {
        _trajectory = trajectory;
    }
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A reference to the trajectory type in a catalog.]
	 * 
	*/
    void FollowTrajectoryActionImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }
	/**
	 * Sets the value of model property timeReference
	 * @param timeReference from OpenSCENARIO class model specification: [Defines if time information provided within the 
	 * trajectory should be considered. If so, it may be used as either , absolute or relative time along the trajectory in 
	 * order to define longitudinal velocity of the actor. Moreover, a time , offset or time scaling may be applied.]
	 * 
	*/
    void FollowTrajectoryActionImpl::SetTimeReference(std::shared_ptr<ITimeReference>& timeReference )
    {
        _timeReference = timeReference;
    }
	/**
	 * Sets the value of model property trajectoryFollowingMode
	 * @param trajectoryFollowingMode from OpenSCENARIO class model specification: [The mode how to follow the given 
	 * trajectory.]
	 * 
	*/
    void FollowTrajectoryActionImpl::SetTrajectoryFollowingMode(std::shared_ptr<ITrajectoryFollowingMode>& trajectoryFollowingMode )
    {
        _trajectoryFollowingMode = trajectoryFollowingMode;
    }

    void FollowTrajectoryActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string FollowTrajectoryActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> FollowTrajectoryActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTrajectory =  GetTrajectory();
            if (kTrajectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrajectory));
            }
            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
            const auto kTimeReference =  GetTimeReference();
            if (kTimeReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTimeReference));
            }
            const auto kTrajectoryFollowingMode =  GetTrajectoryFollowingMode();
            if (kTrajectoryFollowingMode)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrajectoryFollowingMode));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    FollowTrajectoryActionImpl FollowTrajectoryActionImpl::Clone()
    {
        FollowTrajectoryActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kTrajectory =  GetTrajectory();
        if (kTrajectory)
        {
            auto clonedChild = std::make_shared<TrajectoryImpl>(std::dynamic_pointer_cast<TrajectoryImpl>(kTrajectory)->Clone());
            auto clonedChildITrajectory = std::dynamic_pointer_cast<ITrajectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrajectory(clonedChildITrajectory);
        }
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        const auto kTimeReference =  GetTimeReference();
        if (kTimeReference)
        {
            auto clonedChild = std::make_shared<TimeReferenceImpl>(std::dynamic_pointer_cast<TimeReferenceImpl>(kTimeReference)->Clone());
            auto clonedChildITimeReference = std::dynamic_pointer_cast<ITimeReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTimeReference(clonedChildITimeReference);
        }
        const auto kTrajectoryFollowingMode =  GetTrajectoryFollowingMode();
        if (kTrajectoryFollowingMode)
        {
            auto clonedChild = std::make_shared<TrajectoryFollowingModeImpl>(std::dynamic_pointer_cast<TrajectoryFollowingModeImpl>(kTrajectoryFollowingMode)->Clone());
            auto clonedChildITrajectoryFollowingMode = std::dynamic_pointer_cast<ITrajectoryFollowingMode>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrajectoryFollowingMode(clonedChildITrajectoryFollowingMode);
        }
        return clonedObject;
    }




    GlobalActionImpl::GlobalActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IEnvironmentAction> GlobalActionImpl::GetEnvironmentAction()
    {
        return _environmentAction;
    }
    std::shared_ptr<IEntityAction> GlobalActionImpl::GetEntityAction()
    {
        return _entityAction;
    }
    std::shared_ptr<IParameterAction> GlobalActionImpl::GetParameterAction()
    {
        return _parameterAction;
    }
    std::shared_ptr<IInfrastructureAction> GlobalActionImpl::GetInfrastructureAction()
    {
        return _infrastructureAction;
    }
    std::shared_ptr<ITrafficAction> GlobalActionImpl::GetTrafficAction()
    {
        return _trafficAction;
    }

	/**
	 * Sets the value of model property environmentAction
	 * @param environmentAction from OpenSCENARIO class model specification: [Sets the weather state, road conditions, and time
	 * of the day.]
	 * 
	*/
    void GlobalActionImpl::SetEnvironmentAction(std::shared_ptr<IEnvironmentAction>& environmentAction )
    {
        _environmentAction = environmentAction;
    }
	/**
	 * Sets the value of model property entityAction
	 * @param entityAction from OpenSCENARIO class model specification: [Removing or adding entities.]
	 * 
	*/
    void GlobalActionImpl::SetEntityAction(std::shared_ptr<IEntityAction>& entityAction )
    {
        _entityAction = entityAction;
    }
	/**
	 * Sets the value of model property parameterAction
	 * @param parameterAction from OpenSCENARIO class model specification: [Setting/modifying values of parameters.]
	 * 
	*/
    void GlobalActionImpl::SetParameterAction(std::shared_ptr<IParameterAction>& parameterAction )
    {
        _parameterAction = parameterAction;
    }
	/**
	 * Sets the value of model property infrastructureAction
	 * @param infrastructureAction from OpenSCENARIO class model specification: [Setting/modifying traffic signals.]
	 * 
	*/
    void GlobalActionImpl::SetInfrastructureAction(std::shared_ptr<IInfrastructureAction>& infrastructureAction )
    {
        _infrastructureAction = infrastructureAction;
    }
	/**
	 * Sets the value of model property trafficAction
	 * @param trafficAction from OpenSCENARIO class model specification: [Populating ambient traffic.]
	 * 
	*/
    void GlobalActionImpl::SetTrafficAction(std::shared_ptr<ITrafficAction>& trafficAction )
    {
        _trafficAction = trafficAction;
    }

    void GlobalActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string GlobalActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> GlobalActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kEnvironmentAction =  GetEnvironmentAction();
            if (kEnvironmentAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEnvironmentAction));
            }
            const auto kEntityAction =  GetEntityAction();
            if (kEntityAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEntityAction));
            }
            const auto kParameterAction =  GetParameterAction();
            if (kParameterAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kParameterAction));
            }
            const auto kInfrastructureAction =  GetInfrastructureAction();
            if (kInfrastructureAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kInfrastructureAction));
            }
            const auto kTrafficAction =  GetTrafficAction();
            if (kTrafficAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    GlobalActionImpl GlobalActionImpl::Clone()
    {
        GlobalActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kEnvironmentAction =  GetEnvironmentAction();
        if (kEnvironmentAction)
        {
            auto clonedChild = std::make_shared<EnvironmentActionImpl>(std::dynamic_pointer_cast<EnvironmentActionImpl>(kEnvironmentAction)->Clone());
            auto clonedChildIEnvironmentAction = std::dynamic_pointer_cast<IEnvironmentAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEnvironmentAction(clonedChildIEnvironmentAction);
        }
        const auto kEntityAction =  GetEntityAction();
        if (kEntityAction)
        {
            auto clonedChild = std::make_shared<EntityActionImpl>(std::dynamic_pointer_cast<EntityActionImpl>(kEntityAction)->Clone());
            auto clonedChildIEntityAction = std::dynamic_pointer_cast<IEntityAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEntityAction(clonedChildIEntityAction);
        }
        const auto kParameterAction =  GetParameterAction();
        if (kParameterAction)
        {
            auto clonedChild = std::make_shared<ParameterActionImpl>(std::dynamic_pointer_cast<ParameterActionImpl>(kParameterAction)->Clone());
            auto clonedChildIParameterAction = std::dynamic_pointer_cast<IParameterAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetParameterAction(clonedChildIParameterAction);
        }
        const auto kInfrastructureAction =  GetInfrastructureAction();
        if (kInfrastructureAction)
        {
            auto clonedChild = std::make_shared<InfrastructureActionImpl>(std::dynamic_pointer_cast<InfrastructureActionImpl>(kInfrastructureAction)->Clone());
            auto clonedChildIInfrastructureAction = std::dynamic_pointer_cast<IInfrastructureAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetInfrastructureAction(clonedChildIInfrastructureAction);
        }
        const auto kTrafficAction =  GetTrafficAction();
        if (kTrafficAction)
        {
            auto clonedChild = std::make_shared<TrafficActionImpl>(std::dynamic_pointer_cast<TrafficActionImpl>(kTrafficAction)->Clone());
            auto clonedChildITrafficAction = std::dynamic_pointer_cast<ITrafficAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficAction(clonedChildITrafficAction);
        }
        return clonedObject;
    }




    InRoutePositionImpl::InRoutePositionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IPositionOfCurrentEntity> InRoutePositionImpl::GetFromCurrentEntity()
    {
        return _fromCurrentEntity;
    }
    std::shared_ptr<IPositionInRoadCoordinates> InRoutePositionImpl::GetFromRoadCoordinates()
    {
        return _fromRoadCoordinates;
    }
    std::shared_ptr<IPositionInLaneCoordinates> InRoutePositionImpl::GetFromLaneCoordinates()
    {
        return _fromLaneCoordinates;
    }

	/**
	 * Sets the value of model property fromCurrentEntity
	 * @param fromCurrentEntity from OpenSCENARIO class model specification: [The position is defined through the current 
	 * position of a given entity.]
	 * 
	*/
    void InRoutePositionImpl::SetFromCurrentEntity(std::shared_ptr<IPositionOfCurrentEntity>& fromCurrentEntity )
    {
        _fromCurrentEntity = fromCurrentEntity;
    }
	/**
	 * Sets the value of model property fromRoadCoordinates
	 * @param fromRoadCoordinates from OpenSCENARIO class model specification: [Route position in road coordinate system.]
	 * 
	*/
    void InRoutePositionImpl::SetFromRoadCoordinates(std::shared_ptr<IPositionInRoadCoordinates>& fromRoadCoordinates )
    {
        _fromRoadCoordinates = fromRoadCoordinates;
    }
	/**
	 * Sets the value of model property fromLaneCoordinates
	 * @param fromLaneCoordinates from OpenSCENARIO class model specification: [Route position in lane coordinate system.]
	 * 
	*/
    void InRoutePositionImpl::SetFromLaneCoordinates(std::shared_ptr<IPositionInLaneCoordinates>& fromLaneCoordinates )
    {
        _fromLaneCoordinates = fromLaneCoordinates;
    }

    void InRoutePositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string InRoutePositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> InRoutePositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kFromCurrentEntity =  GetFromCurrentEntity();
            if (kFromCurrentEntity)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFromCurrentEntity));
            }
            const auto kFromRoadCoordinates =  GetFromRoadCoordinates();
            if (kFromRoadCoordinates)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFromRoadCoordinates));
            }
            const auto kFromLaneCoordinates =  GetFromLaneCoordinates();
            if (kFromLaneCoordinates)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFromLaneCoordinates));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    InRoutePositionImpl InRoutePositionImpl::Clone()
    {
        InRoutePositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kFromCurrentEntity =  GetFromCurrentEntity();
        if (kFromCurrentEntity)
        {
            auto clonedChild = std::make_shared<PositionOfCurrentEntityImpl>(std::dynamic_pointer_cast<PositionOfCurrentEntityImpl>(kFromCurrentEntity)->Clone());
            auto clonedChildIPositionOfCurrentEntity = std::dynamic_pointer_cast<IPositionOfCurrentEntity>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFromCurrentEntity(clonedChildIPositionOfCurrentEntity);
        }
        const auto kFromRoadCoordinates =  GetFromRoadCoordinates();
        if (kFromRoadCoordinates)
        {
            auto clonedChild = std::make_shared<PositionInRoadCoordinatesImpl>(std::dynamic_pointer_cast<PositionInRoadCoordinatesImpl>(kFromRoadCoordinates)->Clone());
            auto clonedChildIPositionInRoadCoordinates = std::dynamic_pointer_cast<IPositionInRoadCoordinates>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFromRoadCoordinates(clonedChildIPositionInRoadCoordinates);
        }
        const auto kFromLaneCoordinates =  GetFromLaneCoordinates();
        if (kFromLaneCoordinates)
        {
            auto clonedChild = std::make_shared<PositionInLaneCoordinatesImpl>(std::dynamic_pointer_cast<PositionInLaneCoordinatesImpl>(kFromLaneCoordinates)->Clone());
            auto clonedChildIPositionInLaneCoordinates = std::dynamic_pointer_cast<IPositionInLaneCoordinates>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFromLaneCoordinates(clonedChildIPositionInLaneCoordinates);
        }
        return clonedObject;
    }




    InfrastructureActionImpl::InfrastructureActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ITrafficSignalAction> InfrastructureActionImpl::GetTrafficSignalAction()
    {
        return _trafficSignalAction;
    }

	/**
	 * Sets the value of model property trafficSignalAction
	 * @param trafficSignalAction from OpenSCENARIO class model specification: [Set or overwrite a signals state or a signal 
	 * controllers state from a road network.]
	 * 
	*/
    void InfrastructureActionImpl::SetTrafficSignalAction(std::shared_ptr<ITrafficSignalAction>& trafficSignalAction )
    {
        _trafficSignalAction = trafficSignalAction;
    }

    void InfrastructureActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string InfrastructureActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> InfrastructureActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTrafficSignalAction =  GetTrafficSignalAction();
            if (kTrafficSignalAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSignalAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    InfrastructureActionImpl InfrastructureActionImpl::Clone()
    {
        InfrastructureActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kTrafficSignalAction =  GetTrafficSignalAction();
        if (kTrafficSignalAction)
        {
            auto clonedChild = std::make_shared<TrafficSignalActionImpl>(std::dynamic_pointer_cast<TrafficSignalActionImpl>(kTrafficSignalAction)->Clone());
            auto clonedChildITrafficSignalAction = std::dynamic_pointer_cast<ITrafficSignalAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSignalAction(clonedChildITrafficSignalAction);
        }
        return clonedObject;
    }




    InitImpl::InitImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IInitActions> InitImpl::GetActions()
    {
        return _actions;
    }

	/**
	 * Sets the value of model property actions
	 * @param actions from OpenSCENARIO class model specification: [A list of actions initially executed when the enclosing 
	 * storyboard starts.]
	 * 
	*/
    void InitImpl::SetActions(std::shared_ptr<IInitActions>& actions )
    {
        _actions = actions;
    }

    void InitImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string InitImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> InitImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kActions =  GetActions();
            if (kActions)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kActions));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    InitImpl InitImpl::Clone()
    {
        InitImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kActions =  GetActions();
        if (kActions)
        {
            auto clonedChild = std::make_shared<InitActionsImpl>(std::dynamic_pointer_cast<InitActionsImpl>(kActions)->Clone());
            auto clonedChildIInitActions = std::dynamic_pointer_cast<IInitActions>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetActions(clonedChildIInitActions);
        }
        return clonedObject;
    }




    InitActionsImpl::InitActionsImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IGlobalAction>> InitActionsImpl::GetGlobalActions()
    {
        return _globalActions;
    }
    std::vector<std::shared_ptr<IUserDefinedAction>> InitActionsImpl::GetUserDefinedActions()
    {
        return _userDefinedActions;
    }
    std::vector<std::shared_ptr<IPrivate>> InitActionsImpl::GetPrivates()
    {
        return _privates;
    }

	/**
	 * Sets the value of model property globalActions
	 * @param globalActions from OpenSCENARIO class model specification: [An optional list of global actions.]
	 * 
	*/
    void InitActionsImpl::SetGlobalActions(std::vector<std::shared_ptr<IGlobalAction>>& globalActions)
    {
        _globalActions = globalActions;
    }
	/**
	 * Sets the value of model property userDefinedActions
	 * @param userDefinedActions from OpenSCENARIO class model specification: [An optional list of user defined actions.]
	 * 
	*/
    void InitActionsImpl::SetUserDefinedActions(std::vector<std::shared_ptr<IUserDefinedAction>>& userDefinedActions)
    {
        _userDefinedActions = userDefinedActions;
    }
	/**
	 * Sets the value of model property privates
	 * @param privates from OpenSCENARIO class model specification: [An optional list of private actions.]
	 * 
	*/
    void InitActionsImpl::SetPrivates(std::vector<std::shared_ptr<IPrivate>>& privates)
    {
        _privates = privates;
    }

    void InitActionsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string InitActionsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> InitActionsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto globalActions =  GetGlobalActions();
            if (!globalActions.empty())
            {
                for(auto&& item : globalActions)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto userDefinedActions =  GetUserDefinedActions();
            if (!userDefinedActions.empty())
            {
                for(auto&& item : userDefinedActions)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto privates =  GetPrivates();
            if (!privates.empty())
            {
                for(auto&& item : privates)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    InitActionsImpl InitActionsImpl::Clone()
    {
        InitActionsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kGlobalActions =  GetGlobalActions();
        if (!kGlobalActions.empty())
        {
            std::vector<std::shared_ptr<IGlobalAction>> clonedList;
            for(auto&& kItem : kGlobalActions)
            {
                auto clonedChild = std::make_shared <GlobalActionImpl>(std::dynamic_pointer_cast<GlobalActionImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetGlobalActions(clonedList);
        }
        const auto kUserDefinedActions =  GetUserDefinedActions();
        if (!kUserDefinedActions.empty())
        {
            std::vector<std::shared_ptr<IUserDefinedAction>> clonedList;
            for(auto&& kItem : kUserDefinedActions)
            {
                auto clonedChild = std::make_shared <UserDefinedActionImpl>(std::dynamic_pointer_cast<UserDefinedActionImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetUserDefinedActions(clonedList);
        }
        const auto kPrivates =  GetPrivates();
        if (!kPrivates.empty())
        {
            std::vector<std::shared_ptr<IPrivate>> clonedList;
            for(auto&& kItem : kPrivates)
            {
                auto clonedChild = std::make_shared <PrivateImpl>(std::dynamic_pointer_cast<PrivateImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetPrivates(clonedList);
        }
        return clonedObject;
    }




    KnotImpl::KnotImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double KnotImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Knot vector value. Range ]-inf..inf[.]
	 * 
	*/
    void KnotImpl::SetValue(double& value )
    {
        _value = value;
    }

    void KnotImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string KnotImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> KnotImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    KnotImpl KnotImpl::Clone()
    {
        KnotImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    LaneChangeActionImpl::LaneChangeActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET, typeid(double).name());
    }

    double LaneChangeActionImpl::GetTargetLaneOffset()
    {
        return _targetLaneOffset;
    }
    std::shared_ptr<ITransitionDynamics> LaneChangeActionImpl::GetLaneChangeActionDynamics()
    {
        return _laneChangeActionDynamics;
    }
    std::shared_ptr<ILaneChangeTarget> LaneChangeActionImpl::GetLaneChangeTarget()
    {
        return _laneChangeTarget;
    }

	/**
	 * Sets the value of model property targetLaneOffset
	 * @param targetLaneOffset from OpenSCENARIO class model specification: [Lane offset to be reached at the target lane; the 
	 * action will end there. Unit: m.]
	 * 
	*/
    void LaneChangeActionImpl::SetTargetLaneOffset(double& targetLaneOffset )
    {
        _targetLaneOffset = targetLaneOffset;
    }
	/**
	 * Sets the value of model property laneChangeActionDynamics
	 * @param laneChangeActionDynamics from OpenSCENARIO class model specification: [Shape/time of lane change action.]
	 * 
	*/
    void LaneChangeActionImpl::SetLaneChangeActionDynamics(std::shared_ptr<ITransitionDynamics>& laneChangeActionDynamics )
    {
        _laneChangeActionDynamics = laneChangeActionDynamics;
    }
	/**
	 * Sets the value of model property laneChangeTarget
	 * @param laneChangeTarget from OpenSCENARIO class model specification: [Direction of lane change action.]
	 * 
	*/
    void LaneChangeActionImpl::SetLaneChangeTarget(std::shared_ptr<ILaneChangeTarget>& laneChangeTarget )
    {
        _laneChangeTarget = laneChangeTarget;
    }

    void LaneChangeActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TARGET_LANE_OFFSET)
        {
            // Simple type
            _targetLaneOffset = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string LaneChangeActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LaneChangeActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kLaneChangeActionDynamics =  GetLaneChangeActionDynamics();
            if (kLaneChangeActionDynamics)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLaneChangeActionDynamics));
            }
            const auto kLaneChangeTarget =  GetLaneChangeTarget();
            if (kLaneChangeTarget)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLaneChangeTarget));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LaneChangeActionImpl LaneChangeActionImpl::Clone()
    {
        LaneChangeActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetTargetLaneOffset(_targetLaneOffset);
        // clone children
        const auto kLaneChangeActionDynamics =  GetLaneChangeActionDynamics();
        if (kLaneChangeActionDynamics)
        {
            auto clonedChild = std::make_shared<TransitionDynamicsImpl>(std::dynamic_pointer_cast<TransitionDynamicsImpl>(kLaneChangeActionDynamics)->Clone());
            auto clonedChildITransitionDynamics = std::dynamic_pointer_cast<ITransitionDynamics>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLaneChangeActionDynamics(clonedChildITransitionDynamics);
        }
        const auto kLaneChangeTarget =  GetLaneChangeTarget();
        if (kLaneChangeTarget)
        {
            auto clonedChild = std::make_shared<LaneChangeTargetImpl>(std::dynamic_pointer_cast<LaneChangeTargetImpl>(kLaneChangeTarget)->Clone());
            auto clonedChildILaneChangeTarget = std::dynamic_pointer_cast<ILaneChangeTarget>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLaneChangeTarget(clonedChildILaneChangeTarget);
        }
        return clonedObject;
    }




    LaneChangeTargetImpl::LaneChangeTargetImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IRelativeTargetLane> LaneChangeTargetImpl::GetRelativeTargetLane()
    {
        return _relativeTargetLane;
    }
    std::shared_ptr<IAbsoluteTargetLane> LaneChangeTargetImpl::GetAbsoluteTargetLane()
    {
        return _absoluteTargetLane;
    }

	/**
	 * Sets the value of model property relativeTargetLane
	 * @param relativeTargetLane from OpenSCENARIO class model specification: [Lane change direction relative to entity's 
	 * lane.]
	 * 
	*/
    void LaneChangeTargetImpl::SetRelativeTargetLane(std::shared_ptr<IRelativeTargetLane>& relativeTargetLane )
    {
        _relativeTargetLane = relativeTargetLane;
    }
	/**
	 * Sets the value of model property absoluteTargetLane
	 * @param absoluteTargetLane from OpenSCENARIO class model specification: [Lane change target lane number.]
	 * 
	*/
    void LaneChangeTargetImpl::SetAbsoluteTargetLane(std::shared_ptr<IAbsoluteTargetLane>& absoluteTargetLane )
    {
        _absoluteTargetLane = absoluteTargetLane;
    }

    void LaneChangeTargetImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string LaneChangeTargetImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LaneChangeTargetImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRelativeTargetLane =  GetRelativeTargetLane();
            if (kRelativeTargetLane)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeTargetLane));
            }
            const auto kAbsoluteTargetLane =  GetAbsoluteTargetLane();
            if (kAbsoluteTargetLane)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAbsoluteTargetLane));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LaneChangeTargetImpl LaneChangeTargetImpl::Clone()
    {
        LaneChangeTargetImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRelativeTargetLane =  GetRelativeTargetLane();
        if (kRelativeTargetLane)
        {
            auto clonedChild = std::make_shared<RelativeTargetLaneImpl>(std::dynamic_pointer_cast<RelativeTargetLaneImpl>(kRelativeTargetLane)->Clone());
            auto clonedChildIRelativeTargetLane = std::dynamic_pointer_cast<IRelativeTargetLane>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeTargetLane(clonedChildIRelativeTargetLane);
        }
        const auto kAbsoluteTargetLane =  GetAbsoluteTargetLane();
        if (kAbsoluteTargetLane)
        {
            auto clonedChild = std::make_shared<AbsoluteTargetLaneImpl>(std::dynamic_pointer_cast<AbsoluteTargetLaneImpl>(kAbsoluteTargetLane)->Clone());
            auto clonedChildIAbsoluteTargetLane = std::dynamic_pointer_cast<IAbsoluteTargetLane>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAbsoluteTargetLane(clonedChildIAbsoluteTargetLane);
        }
        return clonedObject;
    }




    LaneOffsetActionImpl::LaneOffsetActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, typeid(bool).name());
    }

    bool LaneOffsetActionImpl::GetContinuous()
    {
        return _continuous;
    }
    std::shared_ptr<ILaneOffsetActionDynamics> LaneOffsetActionImpl::GetLaneOffsetActionDynamics()
    {
        return _laneOffsetActionDynamics;
    }
    std::shared_ptr<ILaneOffsetTarget> LaneOffsetActionImpl::GetLaneOffsetTarget()
    {
        return _laneOffsetTarget;
    }

	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target lane is 
	 * reached. If true it does not end but has to be stopped.]
	 * 
	*/
    void LaneOffsetActionImpl::SetContinuous(bool& continuous )
    {
        _continuous = continuous;
    }
	/**
	 * Sets the value of model property laneOffsetActionDynamics
	 * @param laneOffsetActionDynamics from OpenSCENARIO class model specification: [Parameters defining the dynamics of the 
	 * LaneOffsetAction.]
	 * 
	*/
    void LaneOffsetActionImpl::SetLaneOffsetActionDynamics(std::shared_ptr<ILaneOffsetActionDynamics>& laneOffsetActionDynamics )
    {
        _laneOffsetActionDynamics = laneOffsetActionDynamics;
    }
	/**
	 * Sets the value of model property laneOffsetTarget
	 * @param laneOffsetTarget from OpenSCENARIO class model specification: [Parameters indicating if the lane offset is 
	 * defined relative to another entity or absolute to the current lane's center , line.]
	 * 
	*/
    void LaneOffsetActionImpl::SetLaneOffsetTarget(std::shared_ptr<ILaneOffsetTarget>& laneOffsetTarget )
    {
        _laneOffsetTarget = laneOffsetTarget;
    }

    void LaneOffsetActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS)
        {
            // Simple type
            _continuous = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string LaneOffsetActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LaneOffsetActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kLaneOffsetActionDynamics =  GetLaneOffsetActionDynamics();
            if (kLaneOffsetActionDynamics)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLaneOffsetActionDynamics));
            }
            const auto kLaneOffsetTarget =  GetLaneOffsetTarget();
            if (kLaneOffsetTarget)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLaneOffsetTarget));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LaneOffsetActionImpl LaneOffsetActionImpl::Clone()
    {
        LaneOffsetActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetContinuous(_continuous);
        // clone children
        const auto kLaneOffsetActionDynamics =  GetLaneOffsetActionDynamics();
        if (kLaneOffsetActionDynamics)
        {
            auto clonedChild = std::make_shared<LaneOffsetActionDynamicsImpl>(std::dynamic_pointer_cast<LaneOffsetActionDynamicsImpl>(kLaneOffsetActionDynamics)->Clone());
            auto clonedChildILaneOffsetActionDynamics = std::dynamic_pointer_cast<ILaneOffsetActionDynamics>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLaneOffsetActionDynamics(clonedChildILaneOffsetActionDynamics);
        }
        const auto kLaneOffsetTarget =  GetLaneOffsetTarget();
        if (kLaneOffsetTarget)
        {
            auto clonedChild = std::make_shared<LaneOffsetTargetImpl>(std::dynamic_pointer_cast<LaneOffsetTargetImpl>(kLaneOffsetTarget)->Clone());
            auto clonedChildILaneOffsetTarget = std::dynamic_pointer_cast<ILaneOffsetTarget>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLaneOffsetTarget(clonedChildILaneOffsetTarget);
        }
        return clonedObject;
    }




    LaneOffsetActionDynamicsImpl::LaneOffsetActionDynamicsImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, typeid(std::string).name());
    }

    double LaneOffsetActionDynamicsImpl::GetMaxLateralAcc()
    {
        return _maxLateralAcc;
    }
    DynamicsShape LaneOffsetActionDynamicsImpl::GetDynamicsShape()
    {
        return _dynamicsShape;
    }

	/**
	 * Sets the value of model property maxLateralAcc
	 * @param maxLateralAcc from OpenSCENARIO class model specification: [Maximum lateral acceleration used to initially reach 
	 * and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
    void LaneOffsetActionDynamicsImpl::SetMaxLateralAcc(double& maxLateralAcc )
    {
        _maxLateralAcc = maxLateralAcc;
    }
	/**
	 * Sets the value of model property dynamicsShape
	 * @param dynamicsShape from OpenSCENARIO class model specification: [Geometrical shape of the LaneOffsetAction's 
	 * dynamics.]
	 * 
	*/
    void LaneOffsetActionDynamicsImpl::SetDynamicsShape(DynamicsShape& dynamicsShape )
    {
        _dynamicsShape = dynamicsShape;
    }

    void LaneOffsetActionDynamicsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC)
        {
            // Simple type
            _maxLateralAcc = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE)
        {
            // Enumeration Type
            const auto kResult = DynamicsShape::GetFromLiteral(parameterLiteralValue);
            if (kResult != DynamicsShape::UNKNOWN)
            {
                _dynamicsShape = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string LaneOffsetActionDynamicsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LaneOffsetActionDynamicsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LaneOffsetActionDynamicsImpl LaneOffsetActionDynamicsImpl::Clone()
    {
        LaneOffsetActionDynamicsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetMaxLateralAcc(_maxLateralAcc);
        // Enumeration Type
        clonedObject.SetDynamicsShape(_dynamicsShape);
        // clone children
        return clonedObject;
    }




    LaneOffsetTargetImpl::LaneOffsetTargetImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IRelativeTargetLaneOffset> LaneOffsetTargetImpl::GetRelativeTargetLaneOffset()
    {
        return _relativeTargetLaneOffset;
    }
    std::shared_ptr<IAbsoluteTargetLaneOffset> LaneOffsetTargetImpl::GetAbsoluteTargetLaneOffset()
    {
        return _absoluteTargetLaneOffset;
    }

	/**
	 * Sets the value of model property relativeTargetLaneOffset
	 * @param relativeTargetLaneOffset from OpenSCENARIO class model specification: [Relative reference to the lane position of
	 * a specific entity.]
	 * 
	*/
    void LaneOffsetTargetImpl::SetRelativeTargetLaneOffset(std::shared_ptr<IRelativeTargetLaneOffset>& relativeTargetLaneOffset )
    {
        _relativeTargetLaneOffset = relativeTargetLaneOffset;
    }
	/**
	 * Sets the value of model property absoluteTargetLaneOffset
	 * @param absoluteTargetLaneOffset from OpenSCENARIO class model specification: [Absolute reference to the current lane's 
	 * center line.]
	 * 
	*/
    void LaneOffsetTargetImpl::SetAbsoluteTargetLaneOffset(std::shared_ptr<IAbsoluteTargetLaneOffset>& absoluteTargetLaneOffset )
    {
        _absoluteTargetLaneOffset = absoluteTargetLaneOffset;
    }

    void LaneOffsetTargetImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string LaneOffsetTargetImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LaneOffsetTargetImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRelativeTargetLaneOffset =  GetRelativeTargetLaneOffset();
            if (kRelativeTargetLaneOffset)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeTargetLaneOffset));
            }
            const auto kAbsoluteTargetLaneOffset =  GetAbsoluteTargetLaneOffset();
            if (kAbsoluteTargetLaneOffset)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAbsoluteTargetLaneOffset));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LaneOffsetTargetImpl LaneOffsetTargetImpl::Clone()
    {
        LaneOffsetTargetImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRelativeTargetLaneOffset =  GetRelativeTargetLaneOffset();
        if (kRelativeTargetLaneOffset)
        {
            auto clonedChild = std::make_shared<RelativeTargetLaneOffsetImpl>(std::dynamic_pointer_cast<RelativeTargetLaneOffsetImpl>(kRelativeTargetLaneOffset)->Clone());
            auto clonedChildIRelativeTargetLaneOffset = std::dynamic_pointer_cast<IRelativeTargetLaneOffset>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeTargetLaneOffset(clonedChildIRelativeTargetLaneOffset);
        }
        const auto kAbsoluteTargetLaneOffset =  GetAbsoluteTargetLaneOffset();
        if (kAbsoluteTargetLaneOffset)
        {
            auto clonedChild = std::make_shared<AbsoluteTargetLaneOffsetImpl>(std::dynamic_pointer_cast<AbsoluteTargetLaneOffsetImpl>(kAbsoluteTargetLaneOffset)->Clone());
            auto clonedChildIAbsoluteTargetLaneOffset = std::dynamic_pointer_cast<IAbsoluteTargetLaneOffset>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAbsoluteTargetLaneOffset(clonedChildIAbsoluteTargetLaneOffset);
        }
        return clonedObject;
    }




    LanePositionImpl::LanePositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__OFFSET, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__S, typeid(double).name());
    }

    std::string LanePositionImpl::GetRoadId()
    {
        return _roadId;
    }
    std::string LanePositionImpl::GetLaneId()
    {
        return _laneId;
    }
    double LanePositionImpl::GetOffset()
    {
        return _offset;
    }
    double LanePositionImpl::GetS()
    {
        return _s;
    }
    std::shared_ptr<IOrientation> LanePositionImpl::GetOrientation()
    {
        return _orientation;
    }

	/**
	 * Sets the value of model property roadId
	 * @param roadId from OpenSCENARIO class model specification: [ID of the current road (ID of a road in road network).]
	 * 
	*/
    void LanePositionImpl::SetRoadId(std::string& roadId )
    {
        _roadId = roadId;
    }
	/**
	 * Sets the value of model property laneId
	 * @param laneId from OpenSCENARIO class model specification: [ID of the current lane (ID of a lane in road network).]
	 * 
	*/
    void LanePositionImpl::SetLaneId(std::string& laneId )
    {
        _laneId = laneId;
    }
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Lateral offset to the centerline of the current lane. Unit: 
	 * m.]
	 * 
	*/
    void LanePositionImpl::SetOffset(double& offset )
    {
        _offset = offset;
    }
	/**
	 * Sets the value of model property s
	 * @param s from OpenSCENARIO class model specification: [The s coordinate of the current position. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
    void LanePositionImpl::SetS(double& s )
    {
        _s = s;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
    void LanePositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }

    void LanePositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ROAD_ID)
        {
            // Simple type
            _roadId = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LANE_ID)
        {
            // Simple type
            _laneId = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__OFFSET)
        {
            // Simple type
            _offset = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__S)
        {
            // Simple type
            _s = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string LanePositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LanePositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LanePositionImpl LanePositionImpl::Clone()
    {
        LanePositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetRoadId(_roadId);
        // Simple type
        clonedObject.SetLaneId(_laneId);
        // Simple type
        clonedObject.SetOffset(_offset);
        // Simple type
        clonedObject.SetS(_s);
        // clone children
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        return clonedObject;
    }




    LateralActionImpl::LateralActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ILaneChangeAction> LateralActionImpl::GetLaneChangeAction()
    {
        return _laneChangeAction;
    }
    std::shared_ptr<ILaneOffsetAction> LateralActionImpl::GetLaneOffsetAction()
    {
        return _laneOffsetAction;
    }
    std::shared_ptr<ILateralDistanceAction> LateralActionImpl::GetLateralDistanceAction()
    {
        return _lateralDistanceAction;
    }

	/**
	 * Sets the value of model property laneChangeAction
	 * @param laneChangeAction from OpenSCENARIO class model specification: [Action defining a lane change.]
	 * 
	*/
    void LateralActionImpl::SetLaneChangeAction(std::shared_ptr<ILaneChangeAction>& laneChangeAction )
    {
        _laneChangeAction = laneChangeAction;
    }
	/**
	 * Sets the value of model property laneOffsetAction
	 * @param laneOffsetAction from OpenSCENARIO class model specification: [Action defining a continuously kept lane offset.]
	 * 
	*/
    void LateralActionImpl::SetLaneOffsetAction(std::shared_ptr<ILaneOffsetAction>& laneOffsetAction )
    {
        _laneOffsetAction = laneOffsetAction;
    }
	/**
	 * Sets the value of model property lateralDistanceAction
	 * @param lateralDistanceAction from OpenSCENARIO class model specification: [Action defining a continuously kept lateral 
	 * distance to a specific entity.]
	 * 
	*/
    void LateralActionImpl::SetLateralDistanceAction(std::shared_ptr<ILateralDistanceAction>& lateralDistanceAction )
    {
        _lateralDistanceAction = lateralDistanceAction;
    }

    void LateralActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string LateralActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LateralActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kLaneChangeAction =  GetLaneChangeAction();
            if (kLaneChangeAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLaneChangeAction));
            }
            const auto kLaneOffsetAction =  GetLaneOffsetAction();
            if (kLaneOffsetAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLaneOffsetAction));
            }
            const auto kLateralDistanceAction =  GetLateralDistanceAction();
            if (kLateralDistanceAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLateralDistanceAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LateralActionImpl LateralActionImpl::Clone()
    {
        LateralActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kLaneChangeAction =  GetLaneChangeAction();
        if (kLaneChangeAction)
        {
            auto clonedChild = std::make_shared<LaneChangeActionImpl>(std::dynamic_pointer_cast<LaneChangeActionImpl>(kLaneChangeAction)->Clone());
            auto clonedChildILaneChangeAction = std::dynamic_pointer_cast<ILaneChangeAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLaneChangeAction(clonedChildILaneChangeAction);
        }
        const auto kLaneOffsetAction =  GetLaneOffsetAction();
        if (kLaneOffsetAction)
        {
            auto clonedChild = std::make_shared<LaneOffsetActionImpl>(std::dynamic_pointer_cast<LaneOffsetActionImpl>(kLaneOffsetAction)->Clone());
            auto clonedChildILaneOffsetAction = std::dynamic_pointer_cast<ILaneOffsetAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLaneOffsetAction(clonedChildILaneOffsetAction);
        }
        const auto kLateralDistanceAction =  GetLateralDistanceAction();
        if (kLateralDistanceAction)
        {
            auto clonedChild = std::make_shared<LateralDistanceActionImpl>(std::dynamic_pointer_cast<LateralDistanceActionImpl>(kLateralDistanceAction)->Clone());
            auto clonedChildILateralDistanceAction = std::dynamic_pointer_cast<ILateralDistanceAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLateralDistanceAction(clonedChildILateralDistanceAction);
        }
        return clonedObject;
    }




    LateralDistanceActionImpl::LateralDistanceActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, typeid(bool).name());
    }

    INamedReference<IEntity>* LateralDistanceActionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double LateralDistanceActionImpl::GetDistance()
    {
        return _distance;
    }
    bool LateralDistanceActionImpl::GetFreespace()
    {
        return _freespace;
    }
    bool LateralDistanceActionImpl::GetContinuous()
    {
        return _continuous;
    }
    std::shared_ptr<IDynamicConstraints> LateralDistanceActionImpl::GetDynamicConstraints()
    {
        return _dynamicConstraints;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity the lateral distance shall 
	 * be kept to.]
	 * 
	*/
    void LateralDistanceActionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property distance
	 * @param distance from OpenSCENARIO class model specification: [Lateral distance value. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void LateralDistanceActionImpl::SetDistance(double& distance )
    {
        _distance = distance;
    }
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: Lateral distance is measured using the distance 
	 * between closest bounding box points. False: Reference point , distance is used.]
	 * 
	*/
    void LateralDistanceActionImpl::SetFreespace(bool& freespace )
    {
        _freespace = freespace;
    }
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target distance is 
	 * reached. If true it does not end and can only be stopped.]
	 * 
	*/
    void LateralDistanceActionImpl::SetContinuous(bool& continuous )
    {
        _continuous = continuous;
    }
	/**
	 * Sets the value of model property dynamicConstraints
	 * @param dynamicConstraints from OpenSCENARIO class model specification: [Parameter that assigns either unlimited dynamics
	 * (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the, action.]
	 * 
	*/
    void LateralDistanceActionImpl::SetDynamicConstraints(std::shared_ptr<IDynamicConstraints>& dynamicConstraints )
    {
        _dynamicConstraints = dynamicConstraints;
    }

    void LateralDistanceActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DISTANCE)
        {
            // Simple type
            _distance = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FREESPACE)
        {
            // Simple type
            _freespace = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS)
        {
            // Simple type
            _continuous = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string LateralDistanceActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LateralDistanceActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDynamicConstraints =  GetDynamicConstraints();
            if (kDynamicConstraints)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDynamicConstraints));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LateralDistanceActionImpl LateralDistanceActionImpl::Clone()
    {
        LateralDistanceActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetDistance(_distance);
        // Simple type
        clonedObject.SetFreespace(_freespace);
        // Simple type
        clonedObject.SetContinuous(_continuous);
        // clone children
        const auto kDynamicConstraints =  GetDynamicConstraints();
        if (kDynamicConstraints)
        {
            auto clonedChild = std::make_shared<DynamicConstraintsImpl>(std::dynamic_pointer_cast<DynamicConstraintsImpl>(kDynamicConstraints)->Clone());
            auto clonedChildIDynamicConstraints = std::dynamic_pointer_cast<IDynamicConstraints>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDynamicConstraints(clonedChildIDynamicConstraints);
        }
        return clonedObject;
    }




    LongitudinalActionImpl::LongitudinalActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ISpeedAction> LongitudinalActionImpl::GetSpeedAction()
    {
        return _speedAction;
    }
    std::shared_ptr<ILongitudinalDistanceAction> LongitudinalActionImpl::GetLongitudinalDistanceAction()
    {
        return _longitudinalDistanceAction;
    }

	/**
	 * Sets the value of model property speedAction
	 * @param speedAction from OpenSCENARIO class model specification: [This action describes the transition between the 
	 * current longitudinal speed of an entity and its target speed.]
	 * 
	*/
    void LongitudinalActionImpl::SetSpeedAction(std::shared_ptr<ISpeedAction>& speedAction )
    {
        _speedAction = speedAction;
    }
	/**
	 * Sets the value of model property longitudinalDistanceAction
	 * @param longitudinalDistanceAction from OpenSCENARIO class model specification: [This Action defines a continuously kept 
	 * longitudinal distance to a specific entity.]
	 * 
	*/
    void LongitudinalActionImpl::SetLongitudinalDistanceAction(std::shared_ptr<ILongitudinalDistanceAction>& longitudinalDistanceAction )
    {
        _longitudinalDistanceAction = longitudinalDistanceAction;
    }

    void LongitudinalActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string LongitudinalActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LongitudinalActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kSpeedAction =  GetSpeedAction();
            if (kSpeedAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSpeedAction));
            }
            const auto kLongitudinalDistanceAction =  GetLongitudinalDistanceAction();
            if (kLongitudinalDistanceAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLongitudinalDistanceAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LongitudinalActionImpl LongitudinalActionImpl::Clone()
    {
        LongitudinalActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kSpeedAction =  GetSpeedAction();
        if (kSpeedAction)
        {
            auto clonedChild = std::make_shared<SpeedActionImpl>(std::dynamic_pointer_cast<SpeedActionImpl>(kSpeedAction)->Clone());
            auto clonedChildISpeedAction = std::dynamic_pointer_cast<ISpeedAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSpeedAction(clonedChildISpeedAction);
        }
        const auto kLongitudinalDistanceAction =  GetLongitudinalDistanceAction();
        if (kLongitudinalDistanceAction)
        {
            auto clonedChild = std::make_shared<LongitudinalDistanceActionImpl>(std::dynamic_pointer_cast<LongitudinalDistanceActionImpl>(kLongitudinalDistanceAction)->Clone());
            auto clonedChildILongitudinalDistanceAction = std::dynamic_pointer_cast<ILongitudinalDistanceAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLongitudinalDistanceAction(clonedChildILongitudinalDistanceAction);
        }
        return clonedObject;
    }




    LongitudinalDistanceActionImpl::LongitudinalDistanceActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TIME_GAP, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, typeid(bool).name());
    }

    INamedReference<IEntity>* LongitudinalDistanceActionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double LongitudinalDistanceActionImpl::GetDistance()
    {
        return _distance;
    }
    double LongitudinalDistanceActionImpl::GetTimeGap()
    {
        return _timeGap;
    }
    bool LongitudinalDistanceActionImpl::GetFreespace()
    {
        return _freespace;
    }
    bool LongitudinalDistanceActionImpl::GetContinuous()
    {
        return _continuous;
    }
    std::shared_ptr<IDynamicConstraints> LongitudinalDistanceActionImpl::GetDynamicConstraints()
    {
        return _dynamicConstraints;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity the distance shall be kept to.]
	 * 
	*/
    void LongitudinalDistanceActionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property distance
	 * @param distance from OpenSCENARIO class model specification: [Distance value, not to be used together with timeGap 
	 * attribute. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void LongitudinalDistanceActionImpl::SetDistance(double& distance )
    {
        _distance = distance;
    }
	/**
	 * Sets the value of model property timeGap
	 * @param timeGap from OpenSCENARIO class model specification: [Time gap value, not to be used together with distance 
	 * attribute. Unit: s; Range: [0..inf[.]
	 * 
	*/
    void LongitudinalDistanceActionImpl::SetTimeGap(double& timeGap )
    {
        _timeGap = timeGap;
    }
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: Distance is measured using the distance between 
	 * closest bounding box points False: Reference point distance is , used.]
	 * 
	*/
    void LongitudinalDistanceActionImpl::SetFreespace(bool& freespace )
    {
        _freespace = freespace;
    }
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target distance is 
	 * reached. If true it does not end and can only be stopped.]
	 * 
	*/
    void LongitudinalDistanceActionImpl::SetContinuous(bool& continuous )
    {
        _continuous = continuous;
    }
	/**
	 * Sets the value of model property dynamicConstraints
	 * @param dynamicConstraints from OpenSCENARIO class model specification: [Parameter that assigns either unlimited dynamics
	 * (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to , the action.]
	 * 
	*/
    void LongitudinalDistanceActionImpl::SetDynamicConstraints(std::shared_ptr<IDynamicConstraints>& dynamicConstraints )
    {
        _dynamicConstraints = dynamicConstraints;
    }

    void LongitudinalDistanceActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DISTANCE)
        {
            // Simple type
            _distance = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TIME_GAP)
        {
            // Simple type
            _timeGap = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FREESPACE)
        {
            // Simple type
            _freespace = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS)
        {
            // Simple type
            _continuous = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string LongitudinalDistanceActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> LongitudinalDistanceActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDynamicConstraints =  GetDynamicConstraints();
            if (kDynamicConstraints)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDynamicConstraints));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    LongitudinalDistanceActionImpl LongitudinalDistanceActionImpl::Clone()
    {
        LongitudinalDistanceActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetDistance(_distance);
        // Simple type
        clonedObject.SetTimeGap(_timeGap);
        // Simple type
        clonedObject.SetFreespace(_freespace);
        // Simple type
        clonedObject.SetContinuous(_continuous);
        // clone children
        const auto kDynamicConstraints =  GetDynamicConstraints();
        if (kDynamicConstraints)
        {
            auto clonedChild = std::make_shared<DynamicConstraintsImpl>(std::dynamic_pointer_cast<DynamicConstraintsImpl>(kDynamicConstraints)->Clone());
            auto clonedChildIDynamicConstraints = std::dynamic_pointer_cast<IDynamicConstraints>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDynamicConstraints(clonedChildIDynamicConstraints);
        }
        return clonedObject;
    }




    ManeuverImpl::ManeuverImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string ManeuverImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> ManeuverImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::vector<std::shared_ptr<IEvent>> ManeuverImpl::GetEvents()
    {
        return _events;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the maneuver.]
	 * 
	*/
    void ManeuverImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void ManeuverImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property events
	 * @param events from OpenSCENARIO class model specification: [List of events that are comprised by the maneuver.]
	 * 
	*/
    void ManeuverImpl::SetEvents(std::vector<std::shared_ptr<IEvent>>& events)
    {
        _events = events;
    }

    void ManeuverImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ManeuverImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool ManeuverImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> ManeuverImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ManeuverImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto events =  GetEvents();
            if (!events.empty())
            {
                for(auto&& item : events)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ManeuverImpl ManeuverImpl::Clone()
    {
        ManeuverImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kEvents =  GetEvents();
        if (!kEvents.empty())
        {
            std::vector<std::shared_ptr<IEvent>> clonedList;
            for(auto&& kItem : kEvents)
            {
                auto clonedChild = std::make_shared <EventImpl>(std::dynamic_pointer_cast<EventImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetEvents(clonedList);
        }
        return clonedObject;
    }




    ManeuverCatalogLocationImpl::ManeuverCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> ManeuverCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
    void ManeuverCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void ManeuverCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ManeuverCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ManeuverCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ManeuverCatalogLocationImpl ManeuverCatalogLocationImpl::Clone()
    {
        ManeuverCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    ManeuverGroupImpl::ManeuverGroupImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, typeid(unsigned int).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    unsigned int ManeuverGroupImpl::GetMaximumExecutionCount()
    {
        return _maximumExecutionCount;
    }
    std::string ManeuverGroupImpl::GetName()
    {
        return _name;
    }
    std::shared_ptr<IActors> ManeuverGroupImpl::GetActors()
    {
        return _actors;
    }
    std::vector<std::shared_ptr<ICatalogReference>> ManeuverGroupImpl::GetCatalogReferences()
    {
        return _catalogReferences;
    }
    std::vector<std::shared_ptr<IManeuver>> ManeuverGroupImpl::GetManeuvers()
    {
        return _maneuvers;
    }

	/**
	 * Sets the value of model property maximumExecutionCount
	 * @param maximumExecutionCount from OpenSCENARIO class model specification: [Number of allowed executions of the maneuver 
	 * group. Default value is 1. Range: [1..inf[.]
	 * 
	*/
    void ManeuverGroupImpl::SetMaximumExecutionCount(unsigned int& maximumExecutionCount )
    {
        _maximumExecutionCount = maximumExecutionCount;
    }
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the maneuver group.]
	 * 
	*/
    void ManeuverGroupImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property actors
	 * @param actors from OpenSCENARIO class model specification: [Actors of the maneuver group.]
	 * 
	*/
    void ManeuverGroupImpl::SetActors(std::shared_ptr<IActors>& actors )
    {
        _actors = actors;
    }
	/**
	 * Sets the value of model property catalogReferences
	 * @param catalogReferences from OpenSCENARIO class model specification: [Each element of this list of must reference a 
	 * maneuver type in a catalog.]
	 * 
	*/
    void ManeuverGroupImpl::SetCatalogReferences(std::vector<std::shared_ptr<ICatalogReference>>& catalogReferences)
    {
        _catalogReferences = catalogReferences;
    }
	/**
	 * Sets the value of model property maneuvers
	 * @param maneuvers from OpenSCENARIO class model specification: [Maneuver type definitions.]
	 * 
	*/
    void ManeuverGroupImpl::SetManeuvers(std::vector<std::shared_ptr<IManeuver>>& maneuvers)
    {
        _maneuvers = maneuvers;
    }

    void ManeuverGroupImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT)
        {
            // Simple type
            _maximumExecutionCount = ParserHelper::ParseUnsignedInt(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ManeuverGroupImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ManeuverGroupImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kActors =  GetActors();
            if (kActors)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kActors));
            }
            auto catalogReferences =  GetCatalogReferences();
            if (!catalogReferences.empty())
            {
                for(auto&& item : catalogReferences)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto maneuvers =  GetManeuvers();
            if (!maneuvers.empty())
            {
                for(auto&& item : maneuvers)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ManeuverGroupImpl ManeuverGroupImpl::Clone()
    {
        ManeuverGroupImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetMaximumExecutionCount(_maximumExecutionCount);
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kActors =  GetActors();
        if (kActors)
        {
            auto clonedChild = std::make_shared<ActorsImpl>(std::dynamic_pointer_cast<ActorsImpl>(kActors)->Clone());
            auto clonedChildIActors = std::dynamic_pointer_cast<IActors>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetActors(clonedChildIActors);
        }
        const auto kCatalogReferences =  GetCatalogReferences();
        if (!kCatalogReferences.empty())
        {
            std::vector<std::shared_ptr<ICatalogReference>> clonedList;
            for(auto&& kItem : kCatalogReferences)
            {
                auto clonedChild = std::make_shared <CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetCatalogReferences(clonedList);
        }
        const auto kManeuvers =  GetManeuvers();
        if (!kManeuvers.empty())
        {
            std::vector<std::shared_ptr<IManeuver>> clonedList;
            for(auto&& kItem : kManeuvers)
            {
                auto clonedChild = std::make_shared <ManeuverImpl>(std::dynamic_pointer_cast<ManeuverImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetManeuvers(clonedList);
        }
        return clonedObject;
    }




    MiscObjectImpl::MiscObjectImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MASS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    MiscObjectCategory MiscObjectImpl::GetMiscObjectCategory()
    {
        return _miscObjectCategory;
    }
    double MiscObjectImpl::GetMass()
    {
        return _mass;
    }
    std::string MiscObjectImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> MiscObjectImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<IBoundingBox> MiscObjectImpl::GetBoundingBox()
    {
        return _boundingBox;
    }
    std::shared_ptr<IProperties> MiscObjectImpl::GetProperties()
    {
        return _properties;
    }

	/**
	 * Sets the value of model property miscObjectCategory
	 * @param miscObjectCategory from OpenSCENARIO class model specification: [Categorization of the miscellaneous object.]
	 * 
	*/
    void MiscObjectImpl::SetMiscObjectCategory(MiscObjectCategory& miscObjectCategory )
    {
        _miscObjectCategory = miscObjectCategory;
    }
	/**
	 * Sets the value of model property mass
	 * @param mass from OpenSCENARIO class model specification: [Mass of the miscellaneous object. Unit: kg; Range: [0..inf[.]
	 * 
	*/
    void MiscObjectImpl::SetMass(double& mass )
    {
        _mass = mass;
    }
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the miscellaneous object type.]
	 * 
	*/
    void MiscObjectImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void MiscObjectImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Bounding box definition for the miscellaneous object.]
	 * 
	*/
    void MiscObjectImpl::SetBoundingBox(std::shared_ptr<IBoundingBox>& boundingBox )
    {
        _boundingBox = boundingBox;
    }
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Property definitions for the miscellaneous object.]
	 * 
	*/
    void MiscObjectImpl::SetProperties(std::shared_ptr<IProperties>& properties )
    {
        _properties = properties;
    }

    void MiscObjectImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY)
        {
            // Enumeration Type
            const auto kResult = MiscObjectCategory::GetFromLiteral(parameterLiteralValue);
            if (kResult != MiscObjectCategory::UNKNOWN)
            {
                _miscObjectCategory = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MASS)
        {
            // Simple type
            _mass = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string MiscObjectImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool MiscObjectImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> MiscObjectImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> MiscObjectImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kBoundingBox =  GetBoundingBox();
            if (kBoundingBox)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kBoundingBox));
            }
            const auto kProperties =  GetProperties();
            if (kProperties)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kProperties));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    MiscObjectImpl MiscObjectImpl::Clone()
    {
        MiscObjectImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetMiscObjectCategory(_miscObjectCategory);
        // Simple type
        clonedObject.SetMass(_mass);
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kBoundingBox =  GetBoundingBox();
        if (kBoundingBox)
        {
            auto clonedChild = std::make_shared<BoundingBoxImpl>(std::dynamic_pointer_cast<BoundingBoxImpl>(kBoundingBox)->Clone());
            auto clonedChildIBoundingBox = std::dynamic_pointer_cast<IBoundingBox>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetBoundingBox(clonedChildIBoundingBox);
        }
        const auto kProperties =  GetProperties();
        if (kProperties)
        {
            auto clonedChild = std::make_shared<PropertiesImpl>(std::dynamic_pointer_cast<PropertiesImpl>(kProperties)->Clone());
            auto clonedChildIProperties = std::dynamic_pointer_cast<IProperties>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetProperties(clonedChildIProperties);
        }
        return clonedObject;
    }




    MiscObjectCatalogLocationImpl::MiscObjectCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> MiscObjectCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
    void MiscObjectCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void MiscObjectCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string MiscObjectCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> MiscObjectCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    MiscObjectCatalogLocationImpl MiscObjectCatalogLocationImpl::Clone()
    {
        MiscObjectCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    ModifyRuleImpl::ModifyRuleImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IParameterAddValueRule> ModifyRuleImpl::GetAddValue()
    {
        return _addValue;
    }
    std::shared_ptr<IParameterMultiplyByValueRule> ModifyRuleImpl::GetMultiplyByValue()
    {
        return _multiplyByValue;
    }

	/**
	 * Sets the value of model property addValue
	 * @param addValue from OpenSCENARIO class model specification: [Adding a value to a parameter.]
	 * 
	*/
    void ModifyRuleImpl::SetAddValue(std::shared_ptr<IParameterAddValueRule>& addValue )
    {
        _addValue = addValue;
    }
	/**
	 * Sets the value of model property multiplyByValue
	 * @param multiplyByValue from OpenSCENARIO class model specification: [Multiply a parameter by a value.]
	 * 
	*/
    void ModifyRuleImpl::SetMultiplyByValue(std::shared_ptr<IParameterMultiplyByValueRule>& multiplyByValue )
    {
        _multiplyByValue = multiplyByValue;
    }

    void ModifyRuleImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ModifyRuleImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ModifyRuleImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kAddValue =  GetAddValue();
            if (kAddValue)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAddValue));
            }
            const auto kMultiplyByValue =  GetMultiplyByValue();
            if (kMultiplyByValue)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kMultiplyByValue));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ModifyRuleImpl ModifyRuleImpl::Clone()
    {
        ModifyRuleImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kAddValue =  GetAddValue();
        if (kAddValue)
        {
            auto clonedChild = std::make_shared<ParameterAddValueRuleImpl>(std::dynamic_pointer_cast<ParameterAddValueRuleImpl>(kAddValue)->Clone());
            auto clonedChildIParameterAddValueRule = std::dynamic_pointer_cast<IParameterAddValueRule>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAddValue(clonedChildIParameterAddValueRule);
        }
        const auto kMultiplyByValue =  GetMultiplyByValue();
        if (kMultiplyByValue)
        {
            auto clonedChild = std::make_shared<ParameterMultiplyByValueRuleImpl>(std::dynamic_pointer_cast<ParameterMultiplyByValueRuleImpl>(kMultiplyByValue)->Clone());
            auto clonedChildIParameterMultiplyByValueRule = std::dynamic_pointer_cast<IParameterMultiplyByValueRule>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetMultiplyByValue(clonedChildIParameterMultiplyByValueRule);
        }
        return clonedObject;
    }




    NoneImpl::NoneImpl()
    {
        /**
        * Filling the property to type map
        */
    }



    void NoneImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string NoneImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> NoneImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    NoneImpl NoneImpl::Clone()
    {
        NoneImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        return clonedObject;
    }




    NurbsImpl::NurbsImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ORDER, typeid(unsigned int).name());
    }

    unsigned int NurbsImpl::GetOrder()
    {
        return _order;
    }
    std::vector<std::shared_ptr<IControlPoint>> NurbsImpl::GetControlPoints()
    {
        return _controlPoints;
    }
    std::vector<std::shared_ptr<IKnot>> NurbsImpl::GetKnots()
    {
        return _knots;
    }

	/**
	 * Sets the value of model property order
	 * @param order from OpenSCENARIO class model specification: [Order of the NURBS trajectory. This is the order of the 
	 * curve, not the degree of the polynomials, which will be one less, than the order of the curve. Range [2..inf[.]
	 * 
	*/
    void NurbsImpl::SetOrder(unsigned int& order )
    {
        _order = order;
    }
	/**
	 * Sets the value of model property controlPoints
	 * @param controlPoints from OpenSCENARIO class model specification: [Control point vector of the NURBS trajectory. The 
	 * number of control points must be greater or equal to the order of the , curve.]
	 * 
	*/
    void NurbsImpl::SetControlPoints(std::vector<std::shared_ptr<IControlPoint>>& controlPoints)
    {
        _controlPoints = controlPoints;
    }
	/**
	 * Sets the value of model property knots
	 * @param knots from OpenSCENARIO class model specification: [Knot vector of the NURBS trajectory. Knot values must be 
	 * given in ascending order. The number of knot vector values must, be equal to the number of control points plus the order
	 * of the curve.]
	 * 
	*/
    void NurbsImpl::SetKnots(std::vector<std::shared_ptr<IKnot>>& knots)
    {
        _knots = knots;
    }

    void NurbsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ORDER)
        {
            // Simple type
            _order = ParserHelper::ParseUnsignedInt(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string NurbsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> NurbsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto controlPoints =  GetControlPoints();
            if (!controlPoints.empty())
            {
                for(auto&& item : controlPoints)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto knots =  GetKnots();
            if (!knots.empty())
            {
                for(auto&& item : knots)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    NurbsImpl NurbsImpl::Clone()
    {
        NurbsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetOrder(_order);
        // clone children
        const auto kControlPoints =  GetControlPoints();
        if (!kControlPoints.empty())
        {
            std::vector<std::shared_ptr<IControlPoint>> clonedList;
            for(auto&& kItem : kControlPoints)
            {
                auto clonedChild = std::make_shared <ControlPointImpl>(std::dynamic_pointer_cast<ControlPointImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetControlPoints(clonedList);
        }
        const auto kKnots =  GetKnots();
        if (!kKnots.empty())
        {
            std::vector<std::shared_ptr<IKnot>> clonedList;
            for(auto&& kItem : kKnots)
            {
                auto clonedChild = std::make_shared <KnotImpl>(std::dynamic_pointer_cast<KnotImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetKnots(clonedList);
        }
        return clonedObject;
    }




    ObjectControllerImpl::ObjectControllerImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ICatalogReference> ObjectControllerImpl::GetCatalogReference()
    {
        return _catalogReference;
    }
    std::shared_ptr<IController> ObjectControllerImpl::GetController()
    {
        return _controller;
    }

	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Catalog reference to a controller.]
	 * 
	*/
    void ObjectControllerImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }
	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [Controller type definition.]
	 * 
	*/
    void ObjectControllerImpl::SetController(std::shared_ptr<IController>& controller )
    {
        _controller = controller;
    }

    void ObjectControllerImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ObjectControllerImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ObjectControllerImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
            const auto kController =  GetController();
            if (kController)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kController));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ObjectControllerImpl ObjectControllerImpl::Clone()
    {
        ObjectControllerImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        const auto kController =  GetController();
        if (kController)
        {
            auto clonedChild = std::make_shared<ControllerImpl>(std::dynamic_pointer_cast<ControllerImpl>(kController)->Clone());
            auto clonedChildIController = std::dynamic_pointer_cast<IController>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetController(clonedChildIController);
        }
        return clonedObject;
    }




    OffroadConditionImpl::OffroadConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DURATION, typeid(double).name());
    }

    double OffroadConditionImpl::GetDuration()
    {
        return _duration;
    }

	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Amount of time of driving offroad. Unit: s; Range: 
	 * [0..inf[.]
	 * 
	*/
    void OffroadConditionImpl::SetDuration(double& duration )
    {
        _duration = duration;
    }

    void OffroadConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DURATION)
        {
            // Simple type
            _duration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OffroadConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OffroadConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OffroadConditionImpl OffroadConditionImpl::Clone()
    {
        OffroadConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetDuration(_duration);
        // clone children
        return clonedObject;
    }




    OpenScenarioImpl::OpenScenarioImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IFileHeader> OpenScenarioImpl::GetFileHeader()
    {
        return _fileHeader;
    }
    std::shared_ptr<IOpenScenarioCategory> OpenScenarioImpl::GetOpenScenarioCategory()
    {
        return _openScenarioCategory;
    }

	/**
	 * Sets the value of model property fileHeader
	 * @param fileHeader from OpenSCENARIO class model specification: [Header information for the scenario or the catalog.]
	 * 
	*/
    void OpenScenarioImpl::SetFileHeader(std::shared_ptr<IFileHeader>& fileHeader )
    {
        _fileHeader = fileHeader;
    }
	/**
	 * Sets the value of model property openScenarioCategory
	 * @param openScenarioCategory from OpenSCENARIO class model specification: [Category (catalog or scenario) of the 
	 * OpenSCENARIO description.]
	 * 
	*/
    void OpenScenarioImpl::SetOpenScenarioCategory(std::shared_ptr<IOpenScenarioCategory>& openScenarioCategory )
    {
        _openScenarioCategory = openScenarioCategory;
    }

    void OpenScenarioImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string OpenScenarioImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OpenScenarioImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kFileHeader =  GetFileHeader();
            if (kFileHeader)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFileHeader));
            }
            const auto kOpenScenarioCategory =  GetOpenScenarioCategory();
            if (kOpenScenarioCategory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOpenScenarioCategory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OpenScenarioImpl OpenScenarioImpl::Clone()
    {
        OpenScenarioImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kFileHeader =  GetFileHeader();
        if (kFileHeader)
        {
            auto clonedChild = std::make_shared<FileHeaderImpl>(std::dynamic_pointer_cast<FileHeaderImpl>(kFileHeader)->Clone());
            auto clonedChildIFileHeader = std::dynamic_pointer_cast<IFileHeader>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFileHeader(clonedChildIFileHeader);
        }
        const auto kOpenScenarioCategory =  GetOpenScenarioCategory();
        if (kOpenScenarioCategory)
        {
            auto clonedChild = std::make_shared<OpenScenarioCategoryImpl>(std::dynamic_pointer_cast<OpenScenarioCategoryImpl>(kOpenScenarioCategory)->Clone());
            auto clonedChildIOpenScenarioCategory = std::dynamic_pointer_cast<IOpenScenarioCategory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOpenScenarioCategory(clonedChildIOpenScenarioCategory);
        }
        return clonedObject;
    }




    OpenScenarioCategoryImpl::OpenScenarioCategoryImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IScenarioDefinition> OpenScenarioCategoryImpl::GetScenarioDefinition()
    {
        return _scenarioDefinition;
    }
    std::shared_ptr<ICatalogDefinition> OpenScenarioCategoryImpl::GetCatalogDefinition()
    {
        return _catalogDefinition;
    }

	/**
	 * Sets the value of model property scenarioDefinition
	 * @param scenarioDefinition from OpenSCENARIO class model specification: [Definition of a scenario.]
	 * 
	*/
    void OpenScenarioCategoryImpl::SetScenarioDefinition(std::shared_ptr<IScenarioDefinition>& scenarioDefinition )
    {
        _scenarioDefinition = scenarioDefinition;
    }
	/**
	 * Sets the value of model property catalogDefinition
	 * @param catalogDefinition from OpenSCENARIO class model specification: [Definition of a catalog.]
	 * 
	*/
    void OpenScenarioCategoryImpl::SetCatalogDefinition(std::shared_ptr<ICatalogDefinition>& catalogDefinition )
    {
        _catalogDefinition = catalogDefinition;
    }

    void OpenScenarioCategoryImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string OpenScenarioCategoryImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OpenScenarioCategoryImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kScenarioDefinition =  GetScenarioDefinition();
            if (kScenarioDefinition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kScenarioDefinition));
            }
            const auto kCatalogDefinition =  GetCatalogDefinition();
            if (kCatalogDefinition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogDefinition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OpenScenarioCategoryImpl OpenScenarioCategoryImpl::Clone()
    {
        OpenScenarioCategoryImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kScenarioDefinition =  GetScenarioDefinition();
        if (kScenarioDefinition)
        {
            auto clonedChild = std::make_shared<ScenarioDefinitionImpl>(std::dynamic_pointer_cast<ScenarioDefinitionImpl>(kScenarioDefinition)->Clone());
            auto clonedChildIScenarioDefinition = std::dynamic_pointer_cast<IScenarioDefinition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetScenarioDefinition(clonedChildIScenarioDefinition);
        }
        const auto kCatalogDefinition =  GetCatalogDefinition();
        if (kCatalogDefinition)
        {
            auto clonedChild = std::make_shared<CatalogDefinitionImpl>(std::dynamic_pointer_cast<CatalogDefinitionImpl>(kCatalogDefinition)->Clone());
            auto clonedChildICatalogDefinition = std::dynamic_pointer_cast<ICatalogDefinition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogDefinition(clonedChildICatalogDefinition);
        }
        return clonedObject;
    }




    OrientationImpl::OrientationImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__H, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__P, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__R, typeid(double).name());
    }

    ReferenceContext OrientationImpl::GetType()
    {
        return _type;
    }
    double OrientationImpl::GetH()
    {
        return _h;
    }
    double OrientationImpl::GetP()
    {
        return _p;
    }
    double OrientationImpl::GetR()
    {
        return _r;
    }

	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Relative or absolute definition.]
	 * 
	*/
    void OrientationImpl::SetType(ReferenceContext& type )
    {
        _type = type;
    }
	/**
	 * Sets the value of model property h
	 * @param h from OpenSCENARIO class model specification: [Heading angle. Unit: rad;.]
	 * 
	*/
    void OrientationImpl::SetH(double& h )
    {
        _h = h;
    }
	/**
	 * Sets the value of model property p
	 * @param p from OpenSCENARIO class model specification: [Pitch angle. Unit: rad;.]
	 * 
	*/
    void OrientationImpl::SetP(double& p )
    {
        _p = p;
    }
	/**
	 * Sets the value of model property r
	 * @param r from OpenSCENARIO class model specification: [Roll angle. Unit: rad;.]
	 * 
	*/
    void OrientationImpl::SetR(double& r )
    {
        _r = r;
    }

    void OrientationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TYPE)
        {
            // Enumeration Type
            const auto kResult = ReferenceContext::GetFromLiteral(parameterLiteralValue);
            if (kResult != ReferenceContext::UNKNOWN)
            {
                _type = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__H)
        {
            // Simple type
            _h = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__P)
        {
            // Simple type
            _p = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__R)
        {
            // Simple type
            _r = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OrientationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OrientationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OrientationImpl OrientationImpl::Clone()
    {
        OrientationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetType(_type);
        // Simple type
        clonedObject.SetH(_h);
        // Simple type
        clonedObject.SetP(_p);
        // Simple type
        clonedObject.SetR(_r);
        // clone children
        return clonedObject;
    }




    OverrideBrakeActionImpl::OverrideBrakeActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, typeid(bool).name());
    }

    double OverrideBrakeActionImpl::GetValue()
    {
        return _value;
    }
    bool OverrideBrakeActionImpl::GetActive()
    {
        return _active;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Brake pedal value. Range: [0..1]. 0 represents 0%, 1 
	 * represents 100% of pressing the brake pedal.]
	 * 
	*/
    void OverrideBrakeActionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
    void OverrideBrakeActionImpl::SetActive(bool& active )
    {
        _active = active;
    }

    void OverrideBrakeActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ACTIVE)
        {
            // Simple type
            _active = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OverrideBrakeActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideBrakeActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideBrakeActionImpl OverrideBrakeActionImpl::Clone()
    {
        OverrideBrakeActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetActive(_active);
        // clone children
        return clonedObject;
    }




    OverrideClutchActionImpl::OverrideClutchActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, typeid(bool).name());
    }

    double OverrideClutchActionImpl::GetValue()
    {
        return _value;
    }
    bool OverrideClutchActionImpl::GetActive()
    {
        return _active;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 
	 * represents 100% of pressing the clutch pedal.]
	 * 
	*/
    void OverrideClutchActionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
    void OverrideClutchActionImpl::SetActive(bool& active )
    {
        _active = active;
    }

    void OverrideClutchActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ACTIVE)
        {
            // Simple type
            _active = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OverrideClutchActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideClutchActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideClutchActionImpl OverrideClutchActionImpl::Clone()
    {
        OverrideClutchActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetActive(_active);
        // clone children
        return clonedObject;
    }




    OverrideControllerValueActionImpl::OverrideControllerValueActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IOverrideThrottleAction> OverrideControllerValueActionImpl::GetThrottle()
    {
        return _throttle;
    }
    std::shared_ptr<IOverrideBrakeAction> OverrideControllerValueActionImpl::GetBrake()
    {
        return _brake;
    }
    std::shared_ptr<IOverrideClutchAction> OverrideControllerValueActionImpl::GetClutch()
    {
        return _clutch;
    }
    std::shared_ptr<IOverrideParkingBrakeAction> OverrideControllerValueActionImpl::GetParkingBrake()
    {
        return _parkingBrake;
    }
    std::shared_ptr<IOverrideSteeringWheelAction> OverrideControllerValueActionImpl::GetSteeringWheel()
    {
        return _steeringWheel;
    }
    std::shared_ptr<IOverrideGearAction> OverrideControllerValueActionImpl::GetGear()
    {
        return _gear;
    }

	/**
	 * Sets the value of model property throttle
	 * @param throttle from OpenSCENARIO class model specification: [New value for throttle pedal position or unset value.]
	 * 
	*/
    void OverrideControllerValueActionImpl::SetThrottle(std::shared_ptr<IOverrideThrottleAction>& throttle )
    {
        _throttle = throttle;
    }
	/**
	 * Sets the value of model property brake
	 * @param brake from OpenSCENARIO class model specification: [New value for brake position or unset value.]
	 * 
	*/
    void OverrideControllerValueActionImpl::SetBrake(std::shared_ptr<IOverrideBrakeAction>& brake )
    {
        _brake = brake;
    }
	/**
	 * Sets the value of model property clutch
	 * @param clutch from OpenSCENARIO class model specification: [New value for clutch position or unset value.]
	 * 
	*/
    void OverrideControllerValueActionImpl::SetClutch(std::shared_ptr<IOverrideClutchAction>& clutch )
    {
        _clutch = clutch;
    }
	/**
	 * Sets the value of model property parkingBrake
	 * @param parkingBrake from OpenSCENARIO class model specification: [New value for parking brake position or unset value.]
	 * 
	*/
    void OverrideControllerValueActionImpl::SetParkingBrake(std::shared_ptr<IOverrideParkingBrakeAction>& parkingBrake )
    {
        _parkingBrake = parkingBrake;
    }
	/**
	 * Sets the value of model property steeringWheel
	 * @param steeringWheel from OpenSCENARIO class model specification: [New value for steering wheel position or unset 
	 * value.]
	 * 
	*/
    void OverrideControllerValueActionImpl::SetSteeringWheel(std::shared_ptr<IOverrideSteeringWheelAction>& steeringWheel )
    {
        _steeringWheel = steeringWheel;
    }
	/**
	 * Sets the value of model property gear
	 * @param gear from OpenSCENARIO class model specification: [New value for gear position or unset value.]
	 * 
	*/
    void OverrideControllerValueActionImpl::SetGear(std::shared_ptr<IOverrideGearAction>& gear )
    {
        _gear = gear;
    }

    void OverrideControllerValueActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string OverrideControllerValueActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideControllerValueActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kThrottle =  GetThrottle();
            if (kThrottle)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kThrottle));
            }
            const auto kBrake =  GetBrake();
            if (kBrake)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kBrake));
            }
            const auto kClutch =  GetClutch();
            if (kClutch)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kClutch));
            }
            const auto kParkingBrake =  GetParkingBrake();
            if (kParkingBrake)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kParkingBrake));
            }
            const auto kSteeringWheel =  GetSteeringWheel();
            if (kSteeringWheel)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSteeringWheel));
            }
            const auto kGear =  GetGear();
            if (kGear)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kGear));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideControllerValueActionImpl OverrideControllerValueActionImpl::Clone()
    {
        OverrideControllerValueActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kThrottle =  GetThrottle();
        if (kThrottle)
        {
            auto clonedChild = std::make_shared<OverrideThrottleActionImpl>(std::dynamic_pointer_cast<OverrideThrottleActionImpl>(kThrottle)->Clone());
            auto clonedChildIOverrideThrottleAction = std::dynamic_pointer_cast<IOverrideThrottleAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetThrottle(clonedChildIOverrideThrottleAction);
        }
        const auto kBrake =  GetBrake();
        if (kBrake)
        {
            auto clonedChild = std::make_shared<OverrideBrakeActionImpl>(std::dynamic_pointer_cast<OverrideBrakeActionImpl>(kBrake)->Clone());
            auto clonedChildIOverrideBrakeAction = std::dynamic_pointer_cast<IOverrideBrakeAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetBrake(clonedChildIOverrideBrakeAction);
        }
        const auto kClutch =  GetClutch();
        if (kClutch)
        {
            auto clonedChild = std::make_shared<OverrideClutchActionImpl>(std::dynamic_pointer_cast<OverrideClutchActionImpl>(kClutch)->Clone());
            auto clonedChildIOverrideClutchAction = std::dynamic_pointer_cast<IOverrideClutchAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetClutch(clonedChildIOverrideClutchAction);
        }
        const auto kParkingBrake =  GetParkingBrake();
        if (kParkingBrake)
        {
            auto clonedChild = std::make_shared<OverrideParkingBrakeActionImpl>(std::dynamic_pointer_cast<OverrideParkingBrakeActionImpl>(kParkingBrake)->Clone());
            auto clonedChildIOverrideParkingBrakeAction = std::dynamic_pointer_cast<IOverrideParkingBrakeAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetParkingBrake(clonedChildIOverrideParkingBrakeAction);
        }
        const auto kSteeringWheel =  GetSteeringWheel();
        if (kSteeringWheel)
        {
            auto clonedChild = std::make_shared<OverrideSteeringWheelActionImpl>(std::dynamic_pointer_cast<OverrideSteeringWheelActionImpl>(kSteeringWheel)->Clone());
            auto clonedChildIOverrideSteeringWheelAction = std::dynamic_pointer_cast<IOverrideSteeringWheelAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSteeringWheel(clonedChildIOverrideSteeringWheelAction);
        }
        const auto kGear =  GetGear();
        if (kGear)
        {
            auto clonedChild = std::make_shared<OverrideGearActionImpl>(std::dynamic_pointer_cast<OverrideGearActionImpl>(kGear)->Clone());
            auto clonedChildIOverrideGearAction = std::dynamic_pointer_cast<IOverrideGearAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetGear(clonedChildIOverrideGearAction);
        }
        return clonedObject;
    }




    OverrideGearActionImpl::OverrideGearActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NUMBER, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, typeid(bool).name());
    }

    double OverrideGearActionImpl::GetNumber()
    {
        return _number;
    }
    bool OverrideGearActionImpl::GetActive()
    {
        return _active;
    }

	/**
	 * Sets the value of model property number
	 * @param number from OpenSCENARIO class model specification: [Gear number.]
	 * 
	*/
    void OverrideGearActionImpl::SetNumber(double& number )
    {
        _number = number;
    }
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
    void OverrideGearActionImpl::SetActive(bool& active )
    {
        _active = active;
    }

    void OverrideGearActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NUMBER)
        {
            // Simple type
            _number = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ACTIVE)
        {
            // Simple type
            _active = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OverrideGearActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideGearActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideGearActionImpl OverrideGearActionImpl::Clone()
    {
        OverrideGearActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetNumber(_number);
        // Simple type
        clonedObject.SetActive(_active);
        // clone children
        return clonedObject;
    }




    OverrideParkingBrakeActionImpl::OverrideParkingBrakeActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, typeid(bool).name());
    }

    double OverrideParkingBrakeActionImpl::GetValue()
    {
        return _value;
    }
    bool OverrideParkingBrakeActionImpl::GetActive()
    {
        return _active;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Parking brake value. Unit: %; Range: [0..1]. The value 1 
	 * represent the maximum parking brake state.]
	 * 
	*/
    void OverrideParkingBrakeActionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
    void OverrideParkingBrakeActionImpl::SetActive(bool& active )
    {
        _active = active;
    }

    void OverrideParkingBrakeActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ACTIVE)
        {
            // Simple type
            _active = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OverrideParkingBrakeActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideParkingBrakeActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideParkingBrakeActionImpl OverrideParkingBrakeActionImpl::Clone()
    {
        OverrideParkingBrakeActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetActive(_active);
        // clone children
        return clonedObject;
    }




    OverrideSteeringWheelActionImpl::OverrideSteeringWheelActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, typeid(bool).name());
    }

    double OverrideSteeringWheelActionImpl::GetValue()
    {
        return _value;
    }
    bool OverrideSteeringWheelActionImpl::GetActive()
    {
        return _active;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Steering wheel angle. Unit: rad.]
	 * 
	*/
    void OverrideSteeringWheelActionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
    void OverrideSteeringWheelActionImpl::SetActive(bool& active )
    {
        _active = active;
    }

    void OverrideSteeringWheelActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ACTIVE)
        {
            // Simple type
            _active = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OverrideSteeringWheelActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideSteeringWheelActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideSteeringWheelActionImpl OverrideSteeringWheelActionImpl::Clone()
    {
        OverrideSteeringWheelActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetActive(_active);
        // clone children
        return clonedObject;
    }




    OverrideThrottleActionImpl::OverrideThrottleActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, typeid(bool).name());
    }

    double OverrideThrottleActionImpl::GetValue()
    {
        return _value;
    }
    bool OverrideThrottleActionImpl::GetActive()
    {
        return _active;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Throttle pedal value. Range: [0..1].0 represents 0%, 1 
	 * represents 100% of pressing the throttle pedal.]
	 * 
	*/
    void OverrideThrottleActionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property active
	 * @param active from OpenSCENARIO class model specification: [True: override; false: stop overriding.]
	 * 
	*/
    void OverrideThrottleActionImpl::SetActive(bool& active )
    {
        _active = active;
    }

    void OverrideThrottleActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ACTIVE)
        {
            // Simple type
            _active = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string OverrideThrottleActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> OverrideThrottleActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    OverrideThrottleActionImpl OverrideThrottleActionImpl::Clone()
    {
        OverrideThrottleActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetActive(_active);
        // clone children
        return clonedObject;
    }




    ParameterActionImpl::ParameterActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, typeid(std::string).name());
    }

    INamedReference<IParameterDeclaration>* ParameterActionImpl::GetParameterRef()
    {
        return &_parameterRef;
    }
    std::shared_ptr<IParameterSetAction> ParameterActionImpl::GetSetAction()
    {
        return _setAction;
    }
    std::shared_ptr<IParameterModifyAction> ParameterActionImpl::GetModifyAction()
    {
        return _modifyAction;
    }

	/**
	 * Sets the value of model property parameterRef
	 * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter.]
	 * 
	*/
    void ParameterActionImpl::SetParameterRef(NamedReferenceProxy<IParameterDeclaration>& parameterRef )
    {
        _parameterRef = parameterRef;
    }
	/**
	 * Sets the value of model property setAction
	 * @param setAction from OpenSCENARIO class model specification: [New value for the parameter.]
	 * 
	*/
    void ParameterActionImpl::SetSetAction(std::shared_ptr<IParameterSetAction>& setAction )
    {
        _setAction = setAction;
    }
	/**
	 * Sets the value of model property modifyAction
	 * @param modifyAction from OpenSCENARIO class model specification: [Modifying rule for the parameter (Add value or 
	 * multiply by value).]
	 * 
	*/
    void ParameterActionImpl::SetModifyAction(std::shared_ptr<IParameterModifyAction>& modifyAction )
    {
        _modifyAction = modifyAction;
    }

    void ParameterActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF)
        {
            // Proxy
            _parameterRef = NamedReferenceProxy<IParameterDeclaration>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ParameterActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kSetAction =  GetSetAction();
            if (kSetAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSetAction));
            }
            const auto kModifyAction =  GetModifyAction();
            if (kModifyAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kModifyAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterActionImpl ParameterActionImpl::Clone()
    {
        ParameterActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _parameterRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetParameterRef(proxy);
        // clone children
        const auto kSetAction =  GetSetAction();
        if (kSetAction)
        {
            auto clonedChild = std::make_shared<ParameterSetActionImpl>(std::dynamic_pointer_cast<ParameterSetActionImpl>(kSetAction)->Clone());
            auto clonedChildIParameterSetAction = std::dynamic_pointer_cast<IParameterSetAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSetAction(clonedChildIParameterSetAction);
        }
        const auto kModifyAction =  GetModifyAction();
        if (kModifyAction)
        {
            auto clonedChild = std::make_shared<ParameterModifyActionImpl>(std::dynamic_pointer_cast<ParameterModifyActionImpl>(kModifyAction)->Clone());
            auto clonedChildIParameterModifyAction = std::dynamic_pointer_cast<IParameterModifyAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetModifyAction(clonedChildIParameterModifyAction);
        }
        return clonedObject;
    }




    ParameterAddValueRuleImpl::ParameterAddValueRuleImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double ParameterAddValueRuleImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Add value to existing parameter.]
	 * 
	*/
    void ParameterAddValueRuleImpl::SetValue(double& value )
    {
        _value = value;
    }

    void ParameterAddValueRuleImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ParameterAddValueRuleImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterAddValueRuleImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterAddValueRuleImpl ParameterAddValueRuleImpl::Clone()
    {
        ParameterAddValueRuleImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    ParameterAssignmentImpl::ParameterAssignmentImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
    }

    INamedReference<IParameterDeclaration>* ParameterAssignmentImpl::GetParameterRef()
    {
        return &_parameterRef;
    }
    std::string ParameterAssignmentImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property parameterRef
	 * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter that must be declared in the 
	 * catalog.]
	 * 
	*/
    void ParameterAssignmentImpl::SetParameterRef(NamedReferenceProxy<IParameterDeclaration>& parameterRef )
    {
        _parameterRef = parameterRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the parameter that is handed over to the 
	 * parametrizable type.]
	 * 
	*/
    void ParameterAssignmentImpl::SetValue(std::string& value )
    {
        _value = value;
    }

    void ParameterAssignmentImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ParameterAssignmentImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterAssignmentImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterAssignmentImpl ParameterAssignmentImpl::Clone()
    {
        ParameterAssignmentImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _parameterRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetParameterRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    ParameterConditionImpl::ParameterConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    INamedReference<IParameterDeclaration>* ParameterConditionImpl::GetParameterRef()
    {
        return &_parameterRef;
    }
    std::string ParameterConditionImpl::GetValue()
    {
        return _value;
    }
    Rule ParameterConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property parameterRef
	 * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter that must be defined.]
	 * 
	*/
    void ParameterConditionImpl::SetParameterRef(NamedReferenceProxy<IParameterDeclaration>& parameterRef )
    {
        _parameterRef = parameterRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the parameter.]
	 * 
	*/
    void ParameterConditionImpl::SetValue(std::string& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void ParameterConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void ParameterConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF)
        {
            // Proxy
            _parameterRef = NamedReferenceProxy<IParameterDeclaration>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string ParameterConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterConditionImpl ParameterConditionImpl::Clone()
    {
        ParameterConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _parameterRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetParameterRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    ParameterDeclarationImpl::ParameterDeclarationImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
    }

    std::string ParameterDeclarationImpl::GetName()
    {
        return _name;
    }
    ParameterType ParameterDeclarationImpl::GetParameterType()
    {
        return _parameterType;
    }
    std::string ParameterDeclarationImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the parameter.]
	 * 
	*/
    void ParameterDeclarationImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property parameterType
	 * @param parameterType from OpenSCENARIO class model specification: [Type of the parameter.]
	 * 
	*/
    void ParameterDeclarationImpl::SetParameterType(ParameterType& parameterType )
    {
        _parameterType = parameterType;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the parameter as its default value.]
	 * 
	*/
    void ParameterDeclarationImpl::SetValue(std::string& value )
    {
        _value = value;
    }

    void ParameterDeclarationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE)
        {
            // Enumeration Type
            const auto kResult = ParameterType::GetFromLiteral(parameterLiteralValue);
            if (kResult != ParameterType::UNKNOWN)
            {
                _parameterType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ParameterDeclarationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterDeclarationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterDeclarationImpl ParameterDeclarationImpl::Clone()
    {
        ParameterDeclarationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Enumeration Type
        clonedObject.SetParameterType(_parameterType);
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    ParameterModifyActionImpl::ParameterModifyActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IModifyRule> ParameterModifyActionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [Either adding a value to a parameter or multiply a parameter 
	 * by a value. Has to match the parameter type.]
	 * 
	*/
    void ParameterModifyActionImpl::SetRule(std::shared_ptr<IModifyRule>& rule )
    {
        _rule = rule;
    }

    void ParameterModifyActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ParameterModifyActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterModifyActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRule =  GetRule();
            if (kRule)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRule));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterModifyActionImpl ParameterModifyActionImpl::Clone()
    {
        ParameterModifyActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRule =  GetRule();
        if (kRule)
        {
            auto clonedChild = std::make_shared<ModifyRuleImpl>(std::dynamic_pointer_cast<ModifyRuleImpl>(kRule)->Clone());
            auto clonedChildIModifyRule = std::dynamic_pointer_cast<IModifyRule>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRule(clonedChildIModifyRule);
        }
        return clonedObject;
    }




    ParameterMultiplyByValueRuleImpl::ParameterMultiplyByValueRuleImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double ParameterMultiplyByValueRuleImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Multiply existing parameter by the value (be aware of the 
	 * parameter data type).]
	 * 
	*/
    void ParameterMultiplyByValueRuleImpl::SetValue(double& value )
    {
        _value = value;
    }

    void ParameterMultiplyByValueRuleImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ParameterMultiplyByValueRuleImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterMultiplyByValueRuleImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterMultiplyByValueRuleImpl ParameterMultiplyByValueRuleImpl::Clone()
    {
        ParameterMultiplyByValueRuleImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    ParameterSetActionImpl::ParameterSetActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
    }

    std::string ParameterSetActionImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The new value for the parameter.]
	 * 
	*/
    void ParameterSetActionImpl::SetValue(std::string& value )
    {
        _value = value;
    }

    void ParameterSetActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ParameterSetActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ParameterSetActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ParameterSetActionImpl ParameterSetActionImpl::Clone()
    {
        ParameterSetActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    PedestrianImpl::PedestrianImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MODEL, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MASS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, typeid(std::string).name());
    }

    std::string PedestrianImpl::GetModel()
    {
        return _model;
    }
    double PedestrianImpl::GetMass()
    {
        return _mass;
    }
    std::string PedestrianImpl::GetName()
    {
        return _name;
    }
    PedestrianCategory PedestrianImpl::GetPedestrianCategory()
    {
        return _pedestrianCategory;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> PedestrianImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<IBoundingBox> PedestrianImpl::GetBoundingBox()
    {
        return _boundingBox;
    }
    std::shared_ptr<IProperties> PedestrianImpl::GetProperties()
    {
        return _properties;
    }

	/**
	 * Sets the value of model property model
	 * @param model from OpenSCENARIO class model specification: [Definition of the model of the pedestrian.]
	 * 
	*/
    void PedestrianImpl::SetModel(std::string& model )
    {
        _model = model;
    }
	/**
	 * Sets the value of model property mass
	 * @param mass from OpenSCENARIO class model specification: [The mass of a pedestrian in kg.]
	 * 
	*/
    void PedestrianImpl::SetMass(double& mass )
    {
        _mass = mass;
    }
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the pedestrian type. Required when used in catalog.]
	 * 
	*/
    void PedestrianImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property pedestrianCategory
	 * @param pedestrianCategory from OpenSCENARIO class model specification: [Category type of pedestrian.]
	 * 
	*/
    void PedestrianImpl::SetPedestrianCategory(PedestrianCategory& pedestrianCategory )
    {
        _pedestrianCategory = pedestrianCategory;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void PedestrianImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [Bounding box of the pedestrian.]
	 * 
	*/
    void PedestrianImpl::SetBoundingBox(std::shared_ptr<IBoundingBox>& boundingBox )
    {
        _boundingBox = boundingBox;
    }
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Properties (values/files) of the pedestrian.]
	 * 
	*/
    void PedestrianImpl::SetProperties(std::shared_ptr<IProperties>& properties )
    {
        _properties = properties;
    }

    void PedestrianImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MODEL)
        {
            // Simple type
            _model = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MASS)
        {
            // Simple type
            _mass = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY)
        {
            // Enumeration Type
            const auto kResult = PedestrianCategory::GetFromLiteral(parameterLiteralValue);
            if (kResult != PedestrianCategory::UNKNOWN)
            {
                _pedestrianCategory = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string PedestrianImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool PedestrianImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> PedestrianImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PedestrianImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kBoundingBox =  GetBoundingBox();
            if (kBoundingBox)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kBoundingBox));
            }
            const auto kProperties =  GetProperties();
            if (kProperties)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kProperties));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PedestrianImpl PedestrianImpl::Clone()
    {
        PedestrianImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetModel(_model);
        // Simple type
        clonedObject.SetMass(_mass);
        // Simple type
        clonedObject.SetName(_name);
        // Enumeration Type
        clonedObject.SetPedestrianCategory(_pedestrianCategory);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kBoundingBox =  GetBoundingBox();
        if (kBoundingBox)
        {
            auto clonedChild = std::make_shared<BoundingBoxImpl>(std::dynamic_pointer_cast<BoundingBoxImpl>(kBoundingBox)->Clone());
            auto clonedChildIBoundingBox = std::dynamic_pointer_cast<IBoundingBox>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetBoundingBox(clonedChildIBoundingBox);
        }
        const auto kProperties =  GetProperties();
        if (kProperties)
        {
            auto clonedChild = std::make_shared<PropertiesImpl>(std::dynamic_pointer_cast<PropertiesImpl>(kProperties)->Clone());
            auto clonedChildIProperties = std::dynamic_pointer_cast<IProperties>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetProperties(clonedChildIProperties);
        }
        return clonedObject;
    }




    PedestrianCatalogLocationImpl::PedestrianCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> PedestrianCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [File path for the pedestrian catalog files.]
	 * 
	*/
    void PedestrianCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void PedestrianCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string PedestrianCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PedestrianCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PedestrianCatalogLocationImpl PedestrianCatalogLocationImpl::Clone()
    {
        PedestrianCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    PerformanceImpl::PerformanceImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, typeid(double).name());
    }

    double PerformanceImpl::GetMaxSpeed()
    {
        return _maxSpeed;
    }
    double PerformanceImpl::GetMaxAcceleration()
    {
        return _maxAcceleration;
    }
    double PerformanceImpl::GetMaxDeceleration()
    {
        return _maxDeceleration;
    }

	/**
	 * Sets the value of model property maxSpeed
	 * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed of the vehicle. Unit: m/s.]
	 * 
	*/
    void PerformanceImpl::SetMaxSpeed(double& maxSpeed )
    {
        _maxSpeed = maxSpeed;
    }
	/**
	 * Sets the value of model property maxAcceleration
	 * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration of the vehicle. Unit: m/s^2. 
	 * Range: [0..inf[.]
	 * 
	*/
    void PerformanceImpl::SetMaxAcceleration(double& maxAcceleration )
    {
        _maxAcceleration = maxAcceleration;
    }
	/**
	 * Sets the value of model property maxDeceleration
	 * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration of the vehicle. Unit: m/s^2. 
	 * Range: [0..inf[.]
	 * 
	*/
    void PerformanceImpl::SetMaxDeceleration(double& maxDeceleration )
    {
        _maxDeceleration = maxDeceleration;
    }

    void PerformanceImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED)
        {
            // Simple type
            _maxSpeed = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION)
        {
            // Simple type
            _maxAcceleration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION)
        {
            // Simple type
            _maxDeceleration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PerformanceImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PerformanceImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PerformanceImpl PerformanceImpl::Clone()
    {
        PerformanceImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetMaxSpeed(_maxSpeed);
        // Simple type
        clonedObject.SetMaxAcceleration(_maxAcceleration);
        // Simple type
        clonedObject.SetMaxDeceleration(_maxDeceleration);
        // clone children
        return clonedObject;
    }




    PhaseImpl::PhaseImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DURATION, typeid(double).name());
    }

    std::string PhaseImpl::GetName()
    {
        return _name;
    }
    double PhaseImpl::GetDuration()
    {
        return _duration;
    }
    std::vector<std::shared_ptr<ITrafficSignalState>> PhaseImpl::GetTrafficSignalStates()
    {
        return _trafficSignalStates;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the phase.]
	 * 
	*/
    void PhaseImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Duration of the phase. Unit: s; Range: [0..inf[.]
	 * 
	*/
    void PhaseImpl::SetDuration(double& duration )
    {
        _duration = duration;
    }
	/**
	 * Sets the value of model property trafficSignalStates
	 * @param trafficSignalStates from OpenSCENARIO class model specification: [Each phase has multiple TrafficSignalStates. 
	 * One for each TrafficSignal that is controlled. E.g. phase1 , (trafficSignal1:true;false;false, 
	 * trafficSignal2:false;false;true).]
	 * 
	*/
    void PhaseImpl::SetTrafficSignalStates(std::vector<std::shared_ptr<ITrafficSignalState>>& trafficSignalStates)
    {
        _trafficSignalStates = trafficSignalStates;
    }

    void PhaseImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DURATION)
        {
            // Simple type
            _duration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PhaseImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PhaseImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto trafficSignalStates =  GetTrafficSignalStates();
            if (!trafficSignalStates.empty())
            {
                for(auto&& item : trafficSignalStates)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PhaseImpl PhaseImpl::Clone()
    {
        PhaseImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetDuration(_duration);
        // clone children
        const auto kTrafficSignalStates =  GetTrafficSignalStates();
        if (!kTrafficSignalStates.empty())
        {
            std::vector<std::shared_ptr<ITrafficSignalState>> clonedList;
            for(auto&& kItem : kTrafficSignalStates)
            {
                auto clonedChild = std::make_shared <TrafficSignalStateImpl>(std::dynamic_pointer_cast<TrafficSignalStateImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetTrafficSignalStates(clonedList);
        }
        return clonedObject;
    }




    PolylineImpl::PolylineImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IVertex>> PolylineImpl::GetVertices()
    {
        return _vertices;
    }

	/**
	 * Sets the value of model property vertices
	 * @param vertices from OpenSCENARIO class model specification: [Ordered chain of vertices of the polygonal chain.]
	 * 
	*/
    void PolylineImpl::SetVertices(std::vector<std::shared_ptr<IVertex>>& vertices)
    {
        _vertices = vertices;
    }

    void PolylineImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string PolylineImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PolylineImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto vertices =  GetVertices();
            if (!vertices.empty())
            {
                for(auto&& item : vertices)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PolylineImpl PolylineImpl::Clone()
    {
        PolylineImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kVertices =  GetVertices();
        if (!kVertices.empty())
        {
            std::vector<std::shared_ptr<IVertex>> clonedList;
            for(auto&& kItem : kVertices)
            {
                auto clonedChild = std::make_shared <VertexImpl>(std::dynamic_pointer_cast<VertexImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetVertices(clonedList);
        }
        return clonedObject;
    }




    PositionImpl::PositionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IWorldPosition> PositionImpl::GetWorldPosition()
    {
        return _worldPosition;
    }
    std::shared_ptr<IRelativeWorldPosition> PositionImpl::GetRelativeWorldPosition()
    {
        return _relativeWorldPosition;
    }
    std::shared_ptr<IRelativeObjectPosition> PositionImpl::GetRelativeObjectPosition()
    {
        return _relativeObjectPosition;
    }
    std::shared_ptr<IRoadPosition> PositionImpl::GetRoadPosition()
    {
        return _roadPosition;
    }
    std::shared_ptr<IRelativeRoadPosition> PositionImpl::GetRelativeRoadPosition()
    {
        return _relativeRoadPosition;
    }
    std::shared_ptr<ILanePosition> PositionImpl::GetLanePosition()
    {
        return _lanePosition;
    }
    std::shared_ptr<IRelativeLanePosition> PositionImpl::GetRelativeLanePosition()
    {
        return _relativeLanePosition;
    }
    std::shared_ptr<IRoutePosition> PositionImpl::GetRoutePosition()
    {
        return _routePosition;
    }

	/**
	 * Sets the value of model property worldPosition
	 * @param worldPosition from OpenSCENARIO class model specification: [Position that uses global coordinates.]
	 * 
	*/
    void PositionImpl::SetWorldPosition(std::shared_ptr<IWorldPosition>& worldPosition )
    {
        _worldPosition = worldPosition;
    }
	/**
	 * Sets the value of model property relativeWorldPosition
	 * @param relativeWorldPosition from OpenSCENARIO class model specification: [Position is given relative to a world 
	 * position.]
	 * 
	*/
    void PositionImpl::SetRelativeWorldPosition(std::shared_ptr<IRelativeWorldPosition>& relativeWorldPosition )
    {
        _relativeWorldPosition = relativeWorldPosition;
    }
	/**
	 * Sets the value of model property relativeObjectPosition
	 * @param relativeObjectPosition from OpenSCENARIO class model specification: [Position is given relative to an entity.]
	 * 
	*/
    void PositionImpl::SetRelativeObjectPosition(std::shared_ptr<IRelativeObjectPosition>& relativeObjectPosition )
    {
        _relativeObjectPosition = relativeObjectPosition;
    }
	/**
	 * Sets the value of model property roadPosition
	 * @param roadPosition from OpenSCENARIO class model specification: [Position in road coordinates (t,s) applied to a given 
	 * road.]
	 * 
	*/
    void PositionImpl::SetRoadPosition(std::shared_ptr<IRoadPosition>& roadPosition )
    {
        _roadPosition = roadPosition;
    }
	/**
	 * Sets the value of model property relativeRoadPosition
	 * @param relativeRoadPosition from OpenSCENARIO class model specification: [Position relative to an entity's road position
	 * (ds, dt).]
	 * 
	*/
    void PositionImpl::SetRelativeRoadPosition(std::shared_ptr<IRelativeRoadPosition>& relativeRoadPosition )
    {
        _relativeRoadPosition = relativeRoadPosition;
    }
	/**
	 * Sets the value of model property lanePosition
	 * @param lanePosition from OpenSCENARIO class model specification: [Position that is determined by a lane (lane ID) and 
	 * the s coordinate of a given road.]
	 * 
	*/
    void PositionImpl::SetLanePosition(std::shared_ptr<ILanePosition>& lanePosition )
    {
        _lanePosition = lanePosition;
    }
	/**
	 * Sets the value of model property relativeLanePosition
	 * @param relativeLanePosition from OpenSCENARIO class model specification: [Position that is determined relative to the 
	 * lane coordinates of a given entity. (Relative lane and relative s to this , entity).]
	 * 
	*/
    void PositionImpl::SetRelativeLanePosition(std::shared_ptr<IRelativeLanePosition>& relativeLanePosition )
    {
        _relativeLanePosition = relativeLanePosition;
    }
	/**
	 * Sets the value of model property routePosition
	 * @param routePosition from OpenSCENARIO class model specification: [Position that is determined by a given route.]
	 * 
	*/
    void PositionImpl::SetRoutePosition(std::shared_ptr<IRoutePosition>& routePosition )
    {
        _routePosition = routePosition;
    }

    void PositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string PositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kWorldPosition =  GetWorldPosition();
            if (kWorldPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kWorldPosition));
            }
            const auto kRelativeWorldPosition =  GetRelativeWorldPosition();
            if (kRelativeWorldPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeWorldPosition));
            }
            const auto kRelativeObjectPosition =  GetRelativeObjectPosition();
            if (kRelativeObjectPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeObjectPosition));
            }
            const auto kRoadPosition =  GetRoadPosition();
            if (kRoadPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoadPosition));
            }
            const auto kRelativeRoadPosition =  GetRelativeRoadPosition();
            if (kRelativeRoadPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeRoadPosition));
            }
            const auto kLanePosition =  GetLanePosition();
            if (kLanePosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLanePosition));
            }
            const auto kRelativeLanePosition =  GetRelativeLanePosition();
            if (kRelativeLanePosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeLanePosition));
            }
            const auto kRoutePosition =  GetRoutePosition();
            if (kRoutePosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoutePosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PositionImpl PositionImpl::Clone()
    {
        PositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kWorldPosition =  GetWorldPosition();
        if (kWorldPosition)
        {
            auto clonedChild = std::make_shared<WorldPositionImpl>(std::dynamic_pointer_cast<WorldPositionImpl>(kWorldPosition)->Clone());
            auto clonedChildIWorldPosition = std::dynamic_pointer_cast<IWorldPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetWorldPosition(clonedChildIWorldPosition);
        }
        const auto kRelativeWorldPosition =  GetRelativeWorldPosition();
        if (kRelativeWorldPosition)
        {
            auto clonedChild = std::make_shared<RelativeWorldPositionImpl>(std::dynamic_pointer_cast<RelativeWorldPositionImpl>(kRelativeWorldPosition)->Clone());
            auto clonedChildIRelativeWorldPosition = std::dynamic_pointer_cast<IRelativeWorldPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeWorldPosition(clonedChildIRelativeWorldPosition);
        }
        const auto kRelativeObjectPosition =  GetRelativeObjectPosition();
        if (kRelativeObjectPosition)
        {
            auto clonedChild = std::make_shared<RelativeObjectPositionImpl>(std::dynamic_pointer_cast<RelativeObjectPositionImpl>(kRelativeObjectPosition)->Clone());
            auto clonedChildIRelativeObjectPosition = std::dynamic_pointer_cast<IRelativeObjectPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeObjectPosition(clonedChildIRelativeObjectPosition);
        }
        const auto kRoadPosition =  GetRoadPosition();
        if (kRoadPosition)
        {
            auto clonedChild = std::make_shared<RoadPositionImpl>(std::dynamic_pointer_cast<RoadPositionImpl>(kRoadPosition)->Clone());
            auto clonedChildIRoadPosition = std::dynamic_pointer_cast<IRoadPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoadPosition(clonedChildIRoadPosition);
        }
        const auto kRelativeRoadPosition =  GetRelativeRoadPosition();
        if (kRelativeRoadPosition)
        {
            auto clonedChild = std::make_shared<RelativeRoadPositionImpl>(std::dynamic_pointer_cast<RelativeRoadPositionImpl>(kRelativeRoadPosition)->Clone());
            auto clonedChildIRelativeRoadPosition = std::dynamic_pointer_cast<IRelativeRoadPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeRoadPosition(clonedChildIRelativeRoadPosition);
        }
        const auto kLanePosition =  GetLanePosition();
        if (kLanePosition)
        {
            auto clonedChild = std::make_shared<LanePositionImpl>(std::dynamic_pointer_cast<LanePositionImpl>(kLanePosition)->Clone());
            auto clonedChildILanePosition = std::dynamic_pointer_cast<ILanePosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLanePosition(clonedChildILanePosition);
        }
        const auto kRelativeLanePosition =  GetRelativeLanePosition();
        if (kRelativeLanePosition)
        {
            auto clonedChild = std::make_shared<RelativeLanePositionImpl>(std::dynamic_pointer_cast<RelativeLanePositionImpl>(kRelativeLanePosition)->Clone());
            auto clonedChildIRelativeLanePosition = std::dynamic_pointer_cast<IRelativeLanePosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeLanePosition(clonedChildIRelativeLanePosition);
        }
        const auto kRoutePosition =  GetRoutePosition();
        if (kRoutePosition)
        {
            auto clonedChild = std::make_shared<RoutePositionImpl>(std::dynamic_pointer_cast<RoutePositionImpl>(kRoutePosition)->Clone());
            auto clonedChildIRoutePosition = std::dynamic_pointer_cast<IRoutePosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoutePosition(clonedChildIRoutePosition);
        }
        return clonedObject;
    }




    PositionInLaneCoordinatesImpl::PositionInLaneCoordinatesImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PATH_S, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET, typeid(double).name());
    }

    double PositionInLaneCoordinatesImpl::GetPathS()
    {
        return _pathS;
    }
    std::string PositionInLaneCoordinatesImpl::GetLaneId()
    {
        return _laneId;
    }
    double PositionInLaneCoordinatesImpl::GetLaneOffset()
    {
        return _laneOffset;
    }

	/**
	 * Sets the value of model property pathS
	 * @param pathS from OpenSCENARIO class model specification: [s-coordinate of the actual position. Unit: m; Range: 
	 * [0..inf[.]
	 * 
	*/
    void PositionInLaneCoordinatesImpl::SetPathS(double& pathS )
    {
        _pathS = pathS;
    }
	/**
	 * Sets the value of model property laneId
	 * @param laneId from OpenSCENARIO class model specification: [Lane ID of the actual position.]
	 * 
	*/
    void PositionInLaneCoordinatesImpl::SetLaneId(std::string& laneId )
    {
        _laneId = laneId;
    }
	/**
	 * Sets the value of model property laneOffset
	 * @param laneOffset from OpenSCENARIO class model specification: [Lateral offset (relative to the lane centerline) of the 
	 * actual position. Unit: m.]
	 * 
	*/
    void PositionInLaneCoordinatesImpl::SetLaneOffset(double& laneOffset )
    {
        _laneOffset = laneOffset;
    }

    void PositionInLaneCoordinatesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PATH_S)
        {
            // Simple type
            _pathS = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LANE_ID)
        {
            // Simple type
            _laneId = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__LANE_OFFSET)
        {
            // Simple type
            _laneOffset = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PositionInLaneCoordinatesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PositionInLaneCoordinatesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PositionInLaneCoordinatesImpl PositionInLaneCoordinatesImpl::Clone()
    {
        PositionInLaneCoordinatesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetPathS(_pathS);
        // Simple type
        clonedObject.SetLaneId(_laneId);
        // Simple type
        clonedObject.SetLaneOffset(_laneOffset);
        // clone children
        return clonedObject;
    }




    PositionInRoadCoordinatesImpl::PositionInRoadCoordinatesImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PATH_S, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__T, typeid(double).name());
    }

    double PositionInRoadCoordinatesImpl::GetPathS()
    {
        return _pathS;
    }
    double PositionInRoadCoordinatesImpl::GetT()
    {
        return _t;
    }

	/**
	 * Sets the value of model property pathS
	 * @param pathS from OpenSCENARIO class model specification: [Position in s coordinates along the reference line of the 
	 * road.]
	 * 
	*/
    void PositionInRoadCoordinatesImpl::SetPathS(double& pathS )
    {
        _pathS = pathS;
    }
	/**
	 * Sets the value of model property t
	 * @param t from OpenSCENARIO class model specification: [Position in t coordinates orthogonal to the reference line of the
	 * road.]
	 * 
	*/
    void PositionInRoadCoordinatesImpl::SetT(double& t )
    {
        _t = t;
    }

    void PositionInRoadCoordinatesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PATH_S)
        {
            // Simple type
            _pathS = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__T)
        {
            // Simple type
            _t = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PositionInRoadCoordinatesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PositionInRoadCoordinatesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PositionInRoadCoordinatesImpl PositionInRoadCoordinatesImpl::Clone()
    {
        PositionInRoadCoordinatesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetPathS(_pathS);
        // Simple type
        clonedObject.SetT(_t);
        // clone children
        return clonedObject;
    }




    PositionOfCurrentEntityImpl::PositionOfCurrentEntityImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
    }

    INamedReference<IEntity>* PositionOfCurrentEntityImpl::GetEntityRef()
    {
        return &_entityRef;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference to an entity.]
	 * 
	*/
    void PositionOfCurrentEntityImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }

    void PositionOfCurrentEntityImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PositionOfCurrentEntityImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PositionOfCurrentEntityImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PositionOfCurrentEntityImpl PositionOfCurrentEntityImpl::Clone()
    {
        PositionOfCurrentEntityImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // clone children
        return clonedObject;
    }




    PrecipitationImpl::PrecipitationImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, typeid(double).name());
    }

    PrecipitationType PrecipitationImpl::GetPrecipitationType()
    {
        return _precipitationType;
    }
    double PrecipitationImpl::GetIntensity()
    {
        return _intensity;
    }

	/**
	 * Sets the value of model property precipitationType
	 * @param precipitationType from OpenSCENARIO class model specification: [Type of the precipitation.]
	 * 
	*/
    void PrecipitationImpl::SetPrecipitationType(PrecipitationType& precipitationType )
    {
        _precipitationType = precipitationType;
    }
	/**
	 * Sets the value of model property intensity
	 * @param intensity from OpenSCENARIO class model specification: [The intensity of the precipitation. Range: [0..1].]
	 * 
	*/
    void PrecipitationImpl::SetIntensity(double& intensity )
    {
        _intensity = intensity;
    }

    void PrecipitationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE)
        {
            // Enumeration Type
            const auto kResult = PrecipitationType::GetFromLiteral(parameterLiteralValue);
            if (kResult != PrecipitationType::UNKNOWN)
            {
                _precipitationType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__INTENSITY)
        {
            // Simple type
            _intensity = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PrecipitationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PrecipitationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PrecipitationImpl PrecipitationImpl::Clone()
    {
        PrecipitationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetPrecipitationType(_precipitationType);
        // Simple type
        clonedObject.SetIntensity(_intensity);
        // clone children
        return clonedObject;
    }




    PrivateImpl::PrivateImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
    }

    INamedReference<IEntity>* PrivateImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    std::vector<std::shared_ptr<IPrivateAction>> PrivateImpl::GetPrivateActions()
    {
        return _privateActions;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: []
	 * 
	*/
    void PrivateImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property privateActions
	 * @param privateActions from OpenSCENARIO class model specification: [List of private actions to be executed when the 
	 * enclosing container gets triggered.]
	 * 
	*/
    void PrivateImpl::SetPrivateActions(std::vector<std::shared_ptr<IPrivateAction>>& privateActions)
    {
        _privateActions = privateActions;
    }

    void PrivateImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PrivateImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PrivateImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto privateActions =  GetPrivateActions();
            if (!privateActions.empty())
            {
                for(auto&& item : privateActions)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PrivateImpl PrivateImpl::Clone()
    {
        PrivateImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // clone children
        const auto kPrivateActions =  GetPrivateActions();
        if (!kPrivateActions.empty())
        {
            std::vector<std::shared_ptr<IPrivateAction>> clonedList;
            for(auto&& kItem : kPrivateActions)
            {
                auto clonedChild = std::make_shared <PrivateActionImpl>(std::dynamic_pointer_cast<PrivateActionImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetPrivateActions(clonedList);
        }
        return clonedObject;
    }




    PrivateActionImpl::PrivateActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ILongitudinalAction> PrivateActionImpl::GetLongitudinalAction()
    {
        return _longitudinalAction;
    }
    std::shared_ptr<ILateralAction> PrivateActionImpl::GetLateralAction()
    {
        return _lateralAction;
    }
    std::shared_ptr<IVisibilityAction> PrivateActionImpl::GetVisibilityAction()
    {
        return _visibilityAction;
    }
    std::shared_ptr<ISynchronizeAction> PrivateActionImpl::GetSynchronizeAction()
    {
        return _synchronizeAction;
    }
    std::shared_ptr<IActivateControllerAction> PrivateActionImpl::GetActivateControllerAction()
    {
        return _activateControllerAction;
    }
    std::shared_ptr<IControllerAction> PrivateActionImpl::GetControllerAction()
    {
        return _controllerAction;
    }
    std::shared_ptr<ITeleportAction> PrivateActionImpl::GetTeleportAction()
    {
        return _teleportAction;
    }
    std::shared_ptr<IRoutingAction> PrivateActionImpl::GetRoutingAction()
    {
        return _routingAction;
    }

	/**
	 * Sets the value of model property longitudinalAction
	 * @param longitudinalAction from OpenSCENARIO class model specification: [Applies longitudinal control behavior on the 
	 * reference entity/entities. Either a SpeedAction or a , LongitudinalDistanceAction.]
	 * 
	*/
    void PrivateActionImpl::SetLongitudinalAction(std::shared_ptr<ILongitudinalAction>& longitudinalAction )
    {
        _longitudinalAction = longitudinalAction;
    }
	/**
	 * Sets the value of model property lateralAction
	 * @param lateralAction from OpenSCENARIO class model specification: [Applies lateral control behavior on the reference 
	 * entity/entities. Either a LaneChangeAction, LaneOffsetAction or a , LateralDistanceAction.]
	 * 
	*/
    void PrivateActionImpl::SetLateralAction(std::shared_ptr<ILateralAction>& lateralAction )
    {
        _lateralAction = lateralAction;
    }
	/**
	 * Sets the value of model property visibilityAction
	 * @param visibilityAction from OpenSCENARIO class model specification: [Sets visibility attributes on the reference 
	 * entity/entities.]
	 * 
	*/
    void PrivateActionImpl::SetVisibilityAction(std::shared_ptr<IVisibilityAction>& visibilityAction )
    {
        _visibilityAction = visibilityAction;
    }
	/**
	 * Sets the value of model property synchronizeAction
	 * @param synchronizeAction from OpenSCENARIO class model specification: [Synchronizes the reference entity/entities with a
	 * master entity. A target position is provided for the entity and for , the master entity to be reached at the same time.]
	 * 
	*/
    void PrivateActionImpl::SetSynchronizeAction(std::shared_ptr<ISynchronizeAction>& synchronizeAction )
    {
        _synchronizeAction = synchronizeAction;
    }
	/**
	 * Sets the value of model property activateControllerAction
	 * @param activateControllerAction from OpenSCENARIO class model specification: [Activates/ deactivates a controller on the
	 * reference entity/entities.]
	 * 
	*/
    void PrivateActionImpl::SetActivateControllerAction(std::shared_ptr<IActivateControllerAction>& activateControllerAction )
    {
        _activateControllerAction = activateControllerAction;
    }
	/**
	 * Sets the value of model property controllerAction
	 * @param controllerAction from OpenSCENARIO class model specification: [Assigns a controller to the reference 
	 * entity/entities.]
	 * 
	*/
    void PrivateActionImpl::SetControllerAction(std::shared_ptr<IControllerAction>& controllerAction )
    {
        _controllerAction = controllerAction;
    }
	/**
	 * Sets the value of model property teleportAction
	 * @param teleportAction from OpenSCENARIO class model specification: [Assigns a position to the reference 
	 * entity/entities.]
	 * 
	*/
    void PrivateActionImpl::SetTeleportAction(std::shared_ptr<ITeleportAction>& teleportAction )
    {
        _teleportAction = teleportAction;
    }
	/**
	 * Sets the value of model property routingAction
	 * @param routingAction from OpenSCENARIO class model specification: [Applies an AssignRouteAction, a 
	 * FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.]
	 * 
	*/
    void PrivateActionImpl::SetRoutingAction(std::shared_ptr<IRoutingAction>& routingAction )
    {
        _routingAction = routingAction;
    }

    void PrivateActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string PrivateActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PrivateActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kLongitudinalAction =  GetLongitudinalAction();
            if (kLongitudinalAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLongitudinalAction));
            }
            const auto kLateralAction =  GetLateralAction();
            if (kLateralAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLateralAction));
            }
            const auto kVisibilityAction =  GetVisibilityAction();
            if (kVisibilityAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kVisibilityAction));
            }
            const auto kSynchronizeAction =  GetSynchronizeAction();
            if (kSynchronizeAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSynchronizeAction));
            }
            const auto kActivateControllerAction =  GetActivateControllerAction();
            if (kActivateControllerAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kActivateControllerAction));
            }
            const auto kControllerAction =  GetControllerAction();
            if (kControllerAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kControllerAction));
            }
            const auto kTeleportAction =  GetTeleportAction();
            if (kTeleportAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTeleportAction));
            }
            const auto kRoutingAction =  GetRoutingAction();
            if (kRoutingAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoutingAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PrivateActionImpl PrivateActionImpl::Clone()
    {
        PrivateActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kLongitudinalAction =  GetLongitudinalAction();
        if (kLongitudinalAction)
        {
            auto clonedChild = std::make_shared<LongitudinalActionImpl>(std::dynamic_pointer_cast<LongitudinalActionImpl>(kLongitudinalAction)->Clone());
            auto clonedChildILongitudinalAction = std::dynamic_pointer_cast<ILongitudinalAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLongitudinalAction(clonedChildILongitudinalAction);
        }
        const auto kLateralAction =  GetLateralAction();
        if (kLateralAction)
        {
            auto clonedChild = std::make_shared<LateralActionImpl>(std::dynamic_pointer_cast<LateralActionImpl>(kLateralAction)->Clone());
            auto clonedChildILateralAction = std::dynamic_pointer_cast<ILateralAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLateralAction(clonedChildILateralAction);
        }
        const auto kVisibilityAction =  GetVisibilityAction();
        if (kVisibilityAction)
        {
            auto clonedChild = std::make_shared<VisibilityActionImpl>(std::dynamic_pointer_cast<VisibilityActionImpl>(kVisibilityAction)->Clone());
            auto clonedChildIVisibilityAction = std::dynamic_pointer_cast<IVisibilityAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetVisibilityAction(clonedChildIVisibilityAction);
        }
        const auto kSynchronizeAction =  GetSynchronizeAction();
        if (kSynchronizeAction)
        {
            auto clonedChild = std::make_shared<SynchronizeActionImpl>(std::dynamic_pointer_cast<SynchronizeActionImpl>(kSynchronizeAction)->Clone());
            auto clonedChildISynchronizeAction = std::dynamic_pointer_cast<ISynchronizeAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSynchronizeAction(clonedChildISynchronizeAction);
        }
        const auto kActivateControllerAction =  GetActivateControllerAction();
        if (kActivateControllerAction)
        {
            auto clonedChild = std::make_shared<ActivateControllerActionImpl>(std::dynamic_pointer_cast<ActivateControllerActionImpl>(kActivateControllerAction)->Clone());
            auto clonedChildIActivateControllerAction = std::dynamic_pointer_cast<IActivateControllerAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetActivateControllerAction(clonedChildIActivateControllerAction);
        }
        const auto kControllerAction =  GetControllerAction();
        if (kControllerAction)
        {
            auto clonedChild = std::make_shared<ControllerActionImpl>(std::dynamic_pointer_cast<ControllerActionImpl>(kControllerAction)->Clone());
            auto clonedChildIControllerAction = std::dynamic_pointer_cast<IControllerAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetControllerAction(clonedChildIControllerAction);
        }
        const auto kTeleportAction =  GetTeleportAction();
        if (kTeleportAction)
        {
            auto clonedChild = std::make_shared<TeleportActionImpl>(std::dynamic_pointer_cast<TeleportActionImpl>(kTeleportAction)->Clone());
            auto clonedChildITeleportAction = std::dynamic_pointer_cast<ITeleportAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTeleportAction(clonedChildITeleportAction);
        }
        const auto kRoutingAction =  GetRoutingAction();
        if (kRoutingAction)
        {
            auto clonedChild = std::make_shared<RoutingActionImpl>(std::dynamic_pointer_cast<RoutingActionImpl>(kRoutingAction)->Clone());
            auto clonedChildIRoutingAction = std::dynamic_pointer_cast<IRoutingAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoutingAction(clonedChildIRoutingAction);
        }
        return clonedObject;
    }




    PropertiesImpl::PropertiesImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IProperty>> PropertiesImpl::GetProperties()
    {
        return _properties;
    }
    std::vector<std::shared_ptr<IFile>> PropertiesImpl::GetFiles()
    {
        return _files;
    }

	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [A name/value pair. The semantic of the name/values are 
	 * subject of a contract between the provider of a simulation , environment and the author of a scenario.]
	 * 
	*/
    void PropertiesImpl::SetProperties(std::vector<std::shared_ptr<IProperty>>& properties)
    {
        _properties = properties;
    }
	/**
	 * Sets the value of model property files
	 * @param files from OpenSCENARIO class model specification: [A list of arbitrary files attached to an object that owns the
	 * properties. The semantic and the file formats are subject , of a contract between the provider of a simulation 
	 * environment and the author of a scenario.]
	 * 
	*/
    void PropertiesImpl::SetFiles(std::vector<std::shared_ptr<IFile>>& files)
    {
        _files = files;
    }

    void PropertiesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string PropertiesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PropertiesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto properties =  GetProperties();
            if (!properties.empty())
            {
                for(auto&& item : properties)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto files =  GetFiles();
            if (!files.empty())
            {
                for(auto&& item : files)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PropertiesImpl PropertiesImpl::Clone()
    {
        PropertiesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kProperties =  GetProperties();
        if (!kProperties.empty())
        {
            std::vector<std::shared_ptr<IProperty>> clonedList;
            for(auto&& kItem : kProperties)
            {
                auto clonedChild = std::make_shared <PropertyImpl>(std::dynamic_pointer_cast<PropertyImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetProperties(clonedList);
        }
        const auto kFiles =  GetFiles();
        if (!kFiles.empty())
        {
            std::vector<std::shared_ptr<IFile>> clonedList;
            for(auto&& kItem : kFiles)
            {
                auto clonedChild = std::make_shared <FileImpl>(std::dynamic_pointer_cast<FileImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetFiles(clonedList);
        }
        return clonedObject;
    }




    PropertyImpl::PropertyImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
    }

    std::string PropertyImpl::GetName()
    {
        return _name;
    }
    std::string PropertyImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of a user defined property.]
	 * 
	*/
    void PropertyImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of a user defined property.]
	 * 
	*/
    void PropertyImpl::SetValue(std::string& value )
    {
        _value = value;
    }

    void PropertyImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string PropertyImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> PropertyImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    PropertyImpl PropertyImpl::Clone()
    {
        PropertyImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    ReachPositionConditionImpl::ReachPositionConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, typeid(double).name());
    }

    double ReachPositionConditionImpl::GetTolerance()
    {
        return _tolerance;
    }
    std::shared_ptr<IPosition> ReachPositionConditionImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property tolerance
	 * @param tolerance from OpenSCENARIO class model specification: [Radius of tolerance circle around given position. Unit: 
	 * m; Range: [0..inf[.]
	 * 
	*/
    void ReachPositionConditionImpl::SetTolerance(double& tolerance )
    {
        _tolerance = tolerance;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The position to be reached with the defined tolerance.]
	 * 
	*/
    void ReachPositionConditionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void ReachPositionConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TOLERANCE)
        {
            // Simple type
            _tolerance = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ReachPositionConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ReachPositionConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ReachPositionConditionImpl ReachPositionConditionImpl::Clone()
    {
        ReachPositionConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetTolerance(_tolerance);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    RelativeDistanceConditionImpl::RelativeDistanceConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    INamedReference<IEntity>* RelativeDistanceConditionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    RelativeDistanceType RelativeDistanceConditionImpl::GetRelativeDistanceType()
    {
        return _relativeDistanceType;
    }
    double RelativeDistanceConditionImpl::GetValue()
    {
        return _value;
    }
    bool RelativeDistanceConditionImpl::GetFreespace()
    {
        return _freespace;
    }
    Rule RelativeDistanceConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeDistanceConditionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property relativeDistanceType
	 * @param relativeDistanceType from OpenSCENARIO class model specification: [The domain the distance is calculated in.]
	 * 
	*/
    void RelativeDistanceConditionImpl::SetRelativeDistanceType(RelativeDistanceType& relativeDistanceType )
    {
        _relativeDistanceType = relativeDistanceType;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The distance value. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void RelativeDistanceConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: distance is measured between closest bounding box 
	 * points. False: reference point distance is used.]
	 * 
	*/
    void RelativeDistanceConditionImpl::SetFreespace(bool& freespace )
    {
        _freespace = freespace;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void RelativeDistanceConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void RelativeDistanceConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE)
        {
            // Enumeration Type
            const auto kResult = RelativeDistanceType::GetFromLiteral(parameterLiteralValue);
            if (kResult != RelativeDistanceType::UNKNOWN)
            {
                _relativeDistanceType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FREESPACE)
        {
            // Simple type
            _freespace = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string RelativeDistanceConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeDistanceConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeDistanceConditionImpl RelativeDistanceConditionImpl::Clone()
    {
        RelativeDistanceConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Enumeration Type
        clonedObject.SetRelativeDistanceType(_relativeDistanceType);
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetFreespace(_freespace);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    RelativeLanePositionImpl::RelativeLanePositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__D_LANE, typeid(int).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__OFFSET, typeid(double).name());
    }

    INamedReference<IEntity>* RelativeLanePositionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    int RelativeLanePositionImpl::GetDLane()
    {
        return _dLane;
    }
    double RelativeLanePositionImpl::GetDs()
    {
        return _ds;
    }
    double RelativeLanePositionImpl::GetOffset()
    {
        return _offset;
    }
    std::shared_ptr<IOrientation> RelativeLanePositionImpl::GetOrientation()
    {
        return _orientation;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeLanePositionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property dLane
	 * @param dLane from OpenSCENARIO class model specification: [Relative dlane to the lane of the reference entity.]
	 * 
	*/
    void RelativeLanePositionImpl::SetDLane(int& dLane )
    {
        _dLane = dLane;
    }
	/**
	 * Sets the value of model property ds
	 * @param ds from OpenSCENARIO class model specification: [Relative ds to the s of reference entity.]
	 * 
	*/
    void RelativeLanePositionImpl::SetDs(double& ds )
    {
        _ds = ds;
    }
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Lateral offset to the taqrget lane. Unit: m; Range: 
	 * ]-inf..inf[]
	 * 
	*/
    void RelativeLanePositionImpl::SetOffset(double& offset )
    {
        _offset = offset;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced lane's s and t coordinates.]
	 * 
	*/
    void RelativeLanePositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }

    void RelativeLanePositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__D_LANE)
        {
            // Simple type
            _dLane = ParserHelper::ParseInt(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DS)
        {
            // Simple type
            _ds = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__OFFSET)
        {
            // Simple type
            _offset = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeLanePositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeLanePositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeLanePositionImpl RelativeLanePositionImpl::Clone()
    {
        RelativeLanePositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetDLane(_dLane);
        // Simple type
        clonedObject.SetDs(_ds);
        // Simple type
        clonedObject.SetOffset(_offset);
        // clone children
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        return clonedObject;
    }




    RelativeObjectPositionImpl::RelativeObjectPositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DX, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DY, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DZ, typeid(double).name());
    }

    INamedReference<IEntity>* RelativeObjectPositionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double RelativeObjectPositionImpl::GetDx()
    {
        return _dx;
    }
    double RelativeObjectPositionImpl::GetDy()
    {
        return _dy;
    }
    double RelativeObjectPositionImpl::GetDz()
    {
        return _dz;
    }
    std::shared_ptr<IOrientation> RelativeObjectPositionImpl::GetOrientation()
    {
        return _orientation;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeObjectPositionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property dx
	 * @param dx from OpenSCENARIO class model specification: [Relative position in the x axis, using the coordinate system of 
	 * the reference entity.]
	 * 
	*/
    void RelativeObjectPositionImpl::SetDx(double& dx )
    {
        _dx = dx;
    }
	/**
	 * Sets the value of model property dy
	 * @param dy from OpenSCENARIO class model specification: [Relative position in the y axis, using the coordinate system of 
	 * the reference entity.]
	 * 
	*/
    void RelativeObjectPositionImpl::SetDy(double& dy )
    {
        _dy = dy;
    }
	/**
	 * Sets the value of model property dz
	 * @param dz from OpenSCENARIO class model specification: [Relative position in the z axis, using the coordinate system of 
	 * the reference entity.]
	 * 
	*/
    void RelativeObjectPositionImpl::SetDz(double& dz )
    {
        _dz = dz;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the orientation of the reference entity.]
	 * 
	*/
    void RelativeObjectPositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }

    void RelativeObjectPositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DX)
        {
            // Simple type
            _dx = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DY)
        {
            // Simple type
            _dy = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DZ)
        {
            // Simple type
            _dz = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeObjectPositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeObjectPositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeObjectPositionImpl RelativeObjectPositionImpl::Clone()
    {
        RelativeObjectPositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetDx(_dx);
        // Simple type
        clonedObject.SetDy(_dy);
        // Simple type
        clonedObject.SetDz(_dz);
        // clone children
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        return clonedObject;
    }




    RelativeRoadPositionImpl::RelativeRoadPositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DT, typeid(double).name());
    }

    INamedReference<IEntity>* RelativeRoadPositionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double RelativeRoadPositionImpl::GetDs()
    {
        return _ds;
    }
    double RelativeRoadPositionImpl::GetDt()
    {
        return _dt;
    }
    std::shared_ptr<IOrientation> RelativeRoadPositionImpl::GetOrientation()
    {
        return _orientation;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [reference entity.]
	 * 
	*/
    void RelativeRoadPositionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property ds
	 * @param ds from OpenSCENARIO class model specification: [Relative ds road coordinate to s coordinate of the reference 
	 * entity.]
	 * 
	*/
    void RelativeRoadPositionImpl::SetDs(double& ds )
    {
        _ds = ds;
    }
	/**
	 * Sets the value of model property dt
	 * @param dt from OpenSCENARIO class model specification: [Relative dt road coordinate to t coordinate of the reference 
	 * entity.]
	 * 
	*/
    void RelativeRoadPositionImpl::SetDt(double& dt )
    {
        _dt = dt;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
    void RelativeRoadPositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }

    void RelativeRoadPositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DS)
        {
            // Simple type
            _ds = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DT)
        {
            // Simple type
            _dt = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeRoadPositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeRoadPositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeRoadPositionImpl RelativeRoadPositionImpl::Clone()
    {
        RelativeRoadPositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetDs(_ds);
        // Simple type
        clonedObject.SetDt(_dt);
        // clone children
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        return clonedObject;
    }




    RelativeSpeedConditionImpl::RelativeSpeedConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    INamedReference<IEntity>* RelativeSpeedConditionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double RelativeSpeedConditionImpl::GetValue()
    {
        return _value;
    }
    Rule RelativeSpeedConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeSpeedConditionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Relative speed value. Unit: m/s.]
	 * 
	*/
    void RelativeSpeedConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void RelativeSpeedConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void RelativeSpeedConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string RelativeSpeedConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeSpeedConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeSpeedConditionImpl RelativeSpeedConditionImpl::Clone()
    {
        RelativeSpeedConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    RelativeSpeedToMasterImpl::RelativeSpeedToMasterImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, typeid(std::string).name());
    }

    double RelativeSpeedToMasterImpl::GetValue()
    {
        return _value;
    }
    SpeedTargetValueType RelativeSpeedToMasterImpl::GetSpeedTargetValueType()
    {
        return _speedTargetValueType;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Relative speed. Unit: m/s. Range: ]-inf..inf[.]
	 * 
	*/
    void RelativeSpeedToMasterImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property speedTargetValueType
	 * @param speedTargetValueType from OpenSCENARIO class model specification: [The semantics of the value (delta, offset, 
	 * factor).]
	 * 
	*/
    void RelativeSpeedToMasterImpl::SetSpeedTargetValueType(SpeedTargetValueType& speedTargetValueType )
    {
        _speedTargetValueType = speedTargetValueType;
    }

    void RelativeSpeedToMasterImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE)
        {
            // Enumeration Type
            const auto kResult = SpeedTargetValueType::GetFromLiteral(parameterLiteralValue);
            if (kResult != SpeedTargetValueType::UNKNOWN)
            {
                _speedTargetValueType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string RelativeSpeedToMasterImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeSpeedToMasterImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeSpeedToMasterImpl RelativeSpeedToMasterImpl::Clone()
    {
        RelativeSpeedToMasterImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetSpeedTargetValueType(_speedTargetValueType);
        // clone children
        return clonedObject;
    }




    RelativeTargetLaneImpl::RelativeTargetLaneImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(int).name());
    }

    INamedReference<IEntity>* RelativeTargetLaneImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    int RelativeTargetLaneImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeTargetLaneImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Signed number of lanes that is offset the reference entity's 
	 * current lane.]
	 * 
	*/
    void RelativeTargetLaneImpl::SetValue(int& value )
    {
        _value = value;
    }

    void RelativeTargetLaneImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseInt(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeTargetLaneImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeTargetLaneImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeTargetLaneImpl RelativeTargetLaneImpl::Clone()
    {
        RelativeTargetLaneImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    RelativeTargetLaneOffsetImpl::RelativeTargetLaneOffsetImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    INamedReference<IEntity>* RelativeTargetLaneOffsetImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double RelativeTargetLaneOffsetImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeTargetLaneOffsetImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Lane offset with respect to the reference entity's current 
	 * lane position. Unit: m.]
	 * 
	*/
    void RelativeTargetLaneOffsetImpl::SetValue(double& value )
    {
        _value = value;
    }

    void RelativeTargetLaneOffsetImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeTargetLaneOffsetImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeTargetLaneOffsetImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeTargetLaneOffsetImpl RelativeTargetLaneOffsetImpl::Clone()
    {
        RelativeTargetLaneOffsetImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    RelativeTargetSpeedImpl::RelativeTargetSpeedImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, typeid(bool).name());
    }

    INamedReference<IEntity>* RelativeTargetSpeedImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double RelativeTargetSpeedImpl::GetValue()
    {
        return _value;
    }
    SpeedTargetValueType RelativeTargetSpeedImpl::GetSpeedTargetValueType()
    {
        return _speedTargetValueType;
    }
    bool RelativeTargetSpeedImpl::GetContinuous()
    {
        return _continuous;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void RelativeTargetSpeedImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the relative speed. This value is either given as a 
	 * delta or as a factor. E.g. value=10 together with , valueType=delta means the entity/entities are supposed to drive 
	 * 10m/s faster than the target reference entity. E.g. , value=1.1 together with valueType=factor means that the 
	 * entity/entities are supposed to drive 10% faster than the target, reference entity. Unit: m/s or 1.]
	 * 
	*/
    void RelativeTargetSpeedImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property speedTargetValueType
	 * @param speedTargetValueType from OpenSCENARIO class model specification: [The value is either a delta (Unit m/s) or a 
	 * factor (no Unit).]
	 * 
	*/
    void RelativeTargetSpeedImpl::SetSpeedTargetValueType(SpeedTargetValueType& speedTargetValueType )
    {
        _speedTargetValueType = speedTargetValueType;
    }
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [By setting continuous to true a controller comes into 
	 * place and tries to maintain a continuous relative speed. This may , not be used together with Dynamics.time or 
	 * Dynamics.distance.]
	 * 
	*/
    void RelativeTargetSpeedImpl::SetContinuous(bool& continuous )
    {
        _continuous = continuous;
    }

    void RelativeTargetSpeedImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE)
        {
            // Enumeration Type
            const auto kResult = SpeedTargetValueType::GetFromLiteral(parameterLiteralValue);
            if (kResult != SpeedTargetValueType::UNKNOWN)
            {
                _speedTargetValueType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS)
        {
            // Simple type
            _continuous = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeTargetSpeedImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeTargetSpeedImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeTargetSpeedImpl RelativeTargetSpeedImpl::Clone()
    {
        RelativeTargetSpeedImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetSpeedTargetValueType(_speedTargetValueType);
        // Simple type
        clonedObject.SetContinuous(_continuous);
        // clone children
        return clonedObject;
    }




    RelativeWorldPositionImpl::RelativeWorldPositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DX, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DY, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DZ, typeid(double).name());
    }

    INamedReference<IEntity>* RelativeWorldPositionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double RelativeWorldPositionImpl::GetDx()
    {
        return _dx;
    }
    double RelativeWorldPositionImpl::GetDy()
    {
        return _dy;
    }
    double RelativeWorldPositionImpl::GetDz()
    {
        return _dz;
    }
    std::shared_ptr<IOrientation> RelativeWorldPositionImpl::GetOrientation()
    {
        return _orientation;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity from which the relative world position 
	 * is measured.]
	 * 
	*/
    void RelativeWorldPositionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property dx
	 * @param dx from OpenSCENARIO class model specification: [Relative x coordinate in the world coordinate system.]
	 * 
	*/
    void RelativeWorldPositionImpl::SetDx(double& dx )
    {
        _dx = dx;
    }
	/**
	 * Sets the value of model property dy
	 * @param dy from OpenSCENARIO class model specification: [Relative y coordinate in the world coordinate system.]
	 * 
	*/
    void RelativeWorldPositionImpl::SetDy(double& dy )
    {
        _dy = dy;
    }
	/**
	 * Sets the value of model property dz
	 * @param dz from OpenSCENARIO class model specification: [Relative z coordinate in the world coordinate system.]
	 * 
	*/
    void RelativeWorldPositionImpl::SetDz(double& dz )
    {
        _dz = dz;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the reference entity's orientation.]
	 * 
	*/
    void RelativeWorldPositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }

    void RelativeWorldPositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DX)
        {
            // Simple type
            _dx = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DY)
        {
            // Simple type
            _dy = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DZ)
        {
            // Simple type
            _dz = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RelativeWorldPositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RelativeWorldPositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RelativeWorldPositionImpl RelativeWorldPositionImpl::Clone()
    {
        RelativeWorldPositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetDx(_dx);
        // Simple type
        clonedObject.SetDy(_dy);
        // Simple type
        clonedObject.SetDz(_dz);
        // clone children
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        return clonedObject;
    }




    RoadConditionImpl::RoadConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, typeid(double).name());
    }

    double RoadConditionImpl::GetFrictionScaleFactor()
    {
        return _frictionScaleFactor;
    }
    std::shared_ptr<IProperties> RoadConditionImpl::GetProperties()
    {
        return _properties;
    }

	/**
	 * Sets the value of model property frictionScaleFactor
	 * @param frictionScaleFactor from OpenSCENARIO class model specification: [Friction scale factor. Range: [0..inf[]
	 * 
	*/
    void RoadConditionImpl::SetFrictionScaleFactor(double& frictionScaleFactor )
    {
        _frictionScaleFactor = frictionScaleFactor;
    }
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Additional properties to describe the road condition.]
	 * 
	*/
    void RoadConditionImpl::SetProperties(std::shared_ptr<IProperties>& properties )
    {
        _properties = properties;
    }

    void RoadConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR)
        {
            // Simple type
            _frictionScaleFactor = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RoadConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RoadConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kProperties =  GetProperties();
            if (kProperties)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kProperties));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RoadConditionImpl RoadConditionImpl::Clone()
    {
        RoadConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetFrictionScaleFactor(_frictionScaleFactor);
        // clone children
        const auto kProperties =  GetProperties();
        if (kProperties)
        {
            auto clonedChild = std::make_shared<PropertiesImpl>(std::dynamic_pointer_cast<PropertiesImpl>(kProperties)->Clone());
            auto clonedChildIProperties = std::dynamic_pointer_cast<IProperties>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetProperties(clonedChildIProperties);
        }
        return clonedObject;
    }




    RoadNetworkImpl::RoadNetworkImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IFile> RoadNetworkImpl::GetLogicFile()
    {
        return _logicFile;
    }
    std::shared_ptr<IFile> RoadNetworkImpl::GetSceneGraphFile()
    {
        return _sceneGraphFile;
    }
    std::vector<std::shared_ptr<ITrafficSignalController>> RoadNetworkImpl::GetTrafficSignals()
    {
        return _trafficSignals;
    }

	/**
	 * Sets the value of model property logicFile
	 * @param logicFile from OpenSCENARIO class model specification: [File path of the road network file (e.g. an ASAM 
	 * OpenDRIVE file).]
	 * 
	*/
    void RoadNetworkImpl::SetLogicFile(std::shared_ptr<IFile>& logicFile )
    {
        _logicFile = logicFile;
    }
	/**
	 * Sets the value of model property sceneGraphFile
	 * @param sceneGraphFile from OpenSCENARIO class model specification: [File path of a 3D model representing the virtual 
	 * environment. This may be used for visual representation (rendering).]
	 * 
	*/
    void RoadNetworkImpl::SetSceneGraphFile(std::shared_ptr<IFile>& sceneGraphFile )
    {
        _sceneGraphFile = sceneGraphFile;
    }
	/**
	 * Sets the value of model property trafficSignals
	 * @param trafficSignals from OpenSCENARIO class model specification: [Name references and description of dynamic behavior 
	 * for traffic signals defined in the road network file.]
	 * 
	*/
    void RoadNetworkImpl::SetTrafficSignals(std::vector<std::shared_ptr<ITrafficSignalController>>& trafficSignals)
    {
        _trafficSignals = trafficSignals;
    }

    void RoadNetworkImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string RoadNetworkImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RoadNetworkImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kLogicFile =  GetLogicFile();
            if (kLogicFile)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kLogicFile));
            }
            const auto kSceneGraphFile =  GetSceneGraphFile();
            if (kSceneGraphFile)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSceneGraphFile));
            }
            auto trafficSignals =  GetTrafficSignals();
            if (!trafficSignals.empty())
            {
                for(auto&& item : trafficSignals)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RoadNetworkImpl RoadNetworkImpl::Clone()
    {
        RoadNetworkImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kLogicFile =  GetLogicFile();
        if (kLogicFile)
        {
            auto clonedChild = std::make_shared<FileImpl>(std::dynamic_pointer_cast<FileImpl>(kLogicFile)->Clone());
            auto clonedChildIFile = std::dynamic_pointer_cast<IFile>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetLogicFile(clonedChildIFile);
        }
        const auto kSceneGraphFile =  GetSceneGraphFile();
        if (kSceneGraphFile)
        {
            auto clonedChild = std::make_shared<FileImpl>(std::dynamic_pointer_cast<FileImpl>(kSceneGraphFile)->Clone());
            auto clonedChildIFile = std::dynamic_pointer_cast<IFile>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSceneGraphFile(clonedChildIFile);
        }
        const auto kTrafficSignals =  GetTrafficSignals();
        if (!kTrafficSignals.empty())
        {
            std::vector<std::shared_ptr<ITrafficSignalController>> clonedList;
            for(auto&& kItem : kTrafficSignals)
            {
                auto clonedChild = std::make_shared <TrafficSignalControllerImpl>(std::dynamic_pointer_cast<TrafficSignalControllerImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetTrafficSignals(clonedList);
        }
        return clonedObject;
    }




    RoadPositionImpl::RoadPositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__S, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__T, typeid(double).name());
    }

    std::string RoadPositionImpl::GetRoadId()
    {
        return _roadId;
    }
    double RoadPositionImpl::GetS()
    {
        return _s;
    }
    double RoadPositionImpl::GetT()
    {
        return _t;
    }
    std::shared_ptr<IOrientation> RoadPositionImpl::GetOrientation()
    {
        return _orientation;
    }

	/**
	 * Sets the value of model property roadId
	 * @param roadId from OpenSCENARIO class model specification: [Identifier of the road, defined in the road network 
	 * definition file (external to ASAM OpenSCENARIO).]
	 * 
	*/
    void RoadPositionImpl::SetRoadId(std::string& roadId )
    {
        _roadId = roadId;
    }
	/**
	 * Sets the value of model property s
	 * @param s from OpenSCENARIO class model specification: [Represents s coordinate along the reference line of the road.]
	 * 
	*/
    void RoadPositionImpl::SetS(double& s )
    {
        _s = s;
    }
	/**
	 * Sets the value of model property t
	 * @param t from OpenSCENARIO class model specification: [Represents t coordinate orthogonal to the reference line of the 
	 * road.]
	 * 
	*/
    void RoadPositionImpl::SetT(double& t )
    {
        _t = t;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates.]
	 * 
	*/
    void RoadPositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }

    void RoadPositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ROAD_ID)
        {
            // Simple type
            _roadId = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__S)
        {
            // Simple type
            _s = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__T)
        {
            // Simple type
            _t = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RoadPositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RoadPositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RoadPositionImpl RoadPositionImpl::Clone()
    {
        RoadPositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetRoadId(_roadId);
        // Simple type
        clonedObject.SetS(_s);
        // Simple type
        clonedObject.SetT(_t);
        // clone children
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        return clonedObject;
    }




    RouteImpl::RouteImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CLOSED, typeid(bool).name());
    }

    std::string RouteImpl::GetName()
    {
        return _name;
    }
    bool RouteImpl::GetClosed()
    {
        return _closed;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> RouteImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::vector<std::shared_ptr<IWaypoint>> RouteImpl::GetWaypoints()
    {
        return _waypoints;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the route. Required in catalogs.]
	 * 
	*/
    void RouteImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property closed
	 * @param closed from OpenSCENARIO class model specification: [In a closed route, the last waypoint is followed by the 
	 * first waypoint to create a closed route.]
	 * 
	*/
    void RouteImpl::SetClosed(bool& closed )
    {
        _closed = closed;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void RouteImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property waypoints
	 * @param waypoints from OpenSCENARIO class model specification: [At least two waypoints are needed to define a route.]
	 * 
	*/
    void RouteImpl::SetWaypoints(std::vector<std::shared_ptr<IWaypoint>>& waypoints)
    {
        _waypoints = waypoints;
    }

    void RouteImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CLOSED)
        {
            // Simple type
            _closed = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string RouteImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool RouteImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> RouteImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RouteImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto waypoints =  GetWaypoints();
            if (!waypoints.empty())
            {
                for(auto&& item : waypoints)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RouteImpl RouteImpl::Clone()
    {
        RouteImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetClosed(_closed);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kWaypoints =  GetWaypoints();
        if (!kWaypoints.empty())
        {
            std::vector<std::shared_ptr<IWaypoint>> clonedList;
            for(auto&& kItem : kWaypoints)
            {
                auto clonedChild = std::make_shared <WaypointImpl>(std::dynamic_pointer_cast<WaypointImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetWaypoints(clonedList);
        }
        return clonedObject;
    }




    RouteCatalogLocationImpl::RouteCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> RouteCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
    void RouteCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void RouteCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string RouteCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RouteCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RouteCatalogLocationImpl RouteCatalogLocationImpl::Clone()
    {
        RouteCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    RoutePositionImpl::RoutePositionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IRouteRef> RoutePositionImpl::GetRouteRef()
    {
        return _routeRef;
    }
    std::shared_ptr<IOrientation> RoutePositionImpl::GetOrientation()
    {
        return _orientation;
    }
    std::shared_ptr<IInRoutePosition> RoutePositionImpl::GetInRoutePosition()
    {
        return _inRoutePosition;
    }

	/**
	 * Sets the value of model property routeRef
	 * @param routeRef from OpenSCENARIO class model specification: [Reference to the route the position is calculated from.]
	 * 
	*/
    void RoutePositionImpl::SetRouteRef(std::shared_ptr<IRouteRef>& routeRef )
    {
        _routeRef = routeRef;
    }
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates, to the current lane's s, and t coordinates or to the orientation of the 
	 * reference entity.]
	 * 
	*/
    void RoutePositionImpl::SetOrientation(std::shared_ptr<IOrientation>& orientation )
    {
        _orientation = orientation;
    }
	/**
	 * Sets the value of model property inRoutePosition
	 * @param inRoutePosition from OpenSCENARIO class model specification: [Position along the route.]
	 * 
	*/
    void RoutePositionImpl::SetInRoutePosition(std::shared_ptr<IInRoutePosition>& inRoutePosition )
    {
        _inRoutePosition = inRoutePosition;
    }

    void RoutePositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string RoutePositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RoutePositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRouteRef =  GetRouteRef();
            if (kRouteRef)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRouteRef));
            }
            const auto kOrientation =  GetOrientation();
            if (kOrientation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kOrientation));
            }
            const auto kInRoutePosition =  GetInRoutePosition();
            if (kInRoutePosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kInRoutePosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RoutePositionImpl RoutePositionImpl::Clone()
    {
        RoutePositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRouteRef =  GetRouteRef();
        if (kRouteRef)
        {
            auto clonedChild = std::make_shared<RouteRefImpl>(std::dynamic_pointer_cast<RouteRefImpl>(kRouteRef)->Clone());
            auto clonedChildIRouteRef = std::dynamic_pointer_cast<IRouteRef>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRouteRef(clonedChildIRouteRef);
        }
        const auto kOrientation =  GetOrientation();
        if (kOrientation)
        {
            auto clonedChild = std::make_shared<OrientationImpl>(std::dynamic_pointer_cast<OrientationImpl>(kOrientation)->Clone());
            auto clonedChildIOrientation = std::dynamic_pointer_cast<IOrientation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetOrientation(clonedChildIOrientation);
        }
        const auto kInRoutePosition =  GetInRoutePosition();
        if (kInRoutePosition)
        {
            auto clonedChild = std::make_shared<InRoutePositionImpl>(std::dynamic_pointer_cast<InRoutePositionImpl>(kInRoutePosition)->Clone());
            auto clonedChildIInRoutePosition = std::dynamic_pointer_cast<IInRoutePosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetInRoutePosition(clonedChildIInRoutePosition);
        }
        return clonedObject;
    }




    RouteRefImpl::RouteRefImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IRoute> RouteRefImpl::GetRoute()
    {
        return _route;
    }
    std::shared_ptr<ICatalogReference> RouteRefImpl::GetCatalogReference()
    {
        return _catalogReference;
    }

	/**
	 * Sets the value of model property route
	 * @param route from OpenSCENARIO class model specification: [Route definition.]
	 * 
	*/
    void RouteRefImpl::SetRoute(std::shared_ptr<IRoute>& route )
    {
        _route = route;
    }
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to route in the catalog.]
	 * 
	*/
    void RouteRefImpl::SetCatalogReference(std::shared_ptr<ICatalogReference>& catalogReference )
    {
        _catalogReference = catalogReference;
    }

    void RouteRefImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string RouteRefImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RouteRefImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRoute =  GetRoute();
            if (kRoute)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoute));
            }
            const auto kCatalogReference =  GetCatalogReference();
            if (kCatalogReference)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogReference));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RouteRefImpl RouteRefImpl::Clone()
    {
        RouteRefImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRoute =  GetRoute();
        if (kRoute)
        {
            auto clonedChild = std::make_shared<RouteImpl>(std::dynamic_pointer_cast<RouteImpl>(kRoute)->Clone());
            auto clonedChildIRoute = std::dynamic_pointer_cast<IRoute>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoute(clonedChildIRoute);
        }
        const auto kCatalogReference =  GetCatalogReference();
        if (kCatalogReference)
        {
            auto clonedChild = std::make_shared<CatalogReferenceImpl>(std::dynamic_pointer_cast<CatalogReferenceImpl>(kCatalogReference)->Clone());
            auto clonedChildICatalogReference = std::dynamic_pointer_cast<ICatalogReference>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogReference(clonedChildICatalogReference);
        }
        return clonedObject;
    }




    RoutingActionImpl::RoutingActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IAssignRouteAction> RoutingActionImpl::GetAssignRouteAction()
    {
        return _assignRouteAction;
    }
    std::shared_ptr<IFollowTrajectoryAction> RoutingActionImpl::GetFollowTrajectoryAction()
    {
        return _followTrajectoryAction;
    }
    std::shared_ptr<IAcquirePositionAction> RoutingActionImpl::GetAcquirePositionAction()
    {
        return _acquirePositionAction;
    }

	/**
	 * Sets the value of model property assignRouteAction
	 * @param assignRouteAction from OpenSCENARIO class model specification: [Assigns a route to an entity. The route is 
	 * defined by at least two waypoints.]
	 * 
	*/
    void RoutingActionImpl::SetAssignRouteAction(std::shared_ptr<IAssignRouteAction>& assignRouteAction )
    {
        _assignRouteAction = assignRouteAction;
    }
	/**
	 * Sets the value of model property followTrajectoryAction
	 * @param followTrajectoryAction from OpenSCENARIO class model specification: [Controls an entity to follow a trajectory.]
	 * 
	*/
    void RoutingActionImpl::SetFollowTrajectoryAction(std::shared_ptr<IFollowTrajectoryAction>& followTrajectoryAction )
    {
        _followTrajectoryAction = followTrajectoryAction;
    }
	/**
	 * Sets the value of model property acquirePositionAction
	 * @param acquirePositionAction from OpenSCENARIO class model specification: [Assigns a route to an entity. The route 
	 * assigned will be the shortest route (along roads) between the entity's current , position and the position specified.]
	 * 
	*/
    void RoutingActionImpl::SetAcquirePositionAction(std::shared_ptr<IAcquirePositionAction>& acquirePositionAction )
    {
        _acquirePositionAction = acquirePositionAction;
    }

    void RoutingActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string RoutingActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> RoutingActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kAssignRouteAction =  GetAssignRouteAction();
            if (kAssignRouteAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAssignRouteAction));
            }
            const auto kFollowTrajectoryAction =  GetFollowTrajectoryAction();
            if (kFollowTrajectoryAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFollowTrajectoryAction));
            }
            const auto kAcquirePositionAction =  GetAcquirePositionAction();
            if (kAcquirePositionAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAcquirePositionAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    RoutingActionImpl RoutingActionImpl::Clone()
    {
        RoutingActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kAssignRouteAction =  GetAssignRouteAction();
        if (kAssignRouteAction)
        {
            auto clonedChild = std::make_shared<AssignRouteActionImpl>(std::dynamic_pointer_cast<AssignRouteActionImpl>(kAssignRouteAction)->Clone());
            auto clonedChildIAssignRouteAction = std::dynamic_pointer_cast<IAssignRouteAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAssignRouteAction(clonedChildIAssignRouteAction);
        }
        const auto kFollowTrajectoryAction =  GetFollowTrajectoryAction();
        if (kFollowTrajectoryAction)
        {
            auto clonedChild = std::make_shared<FollowTrajectoryActionImpl>(std::dynamic_pointer_cast<FollowTrajectoryActionImpl>(kFollowTrajectoryAction)->Clone());
            auto clonedChildIFollowTrajectoryAction = std::dynamic_pointer_cast<IFollowTrajectoryAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFollowTrajectoryAction(clonedChildIFollowTrajectoryAction);
        }
        const auto kAcquirePositionAction =  GetAcquirePositionAction();
        if (kAcquirePositionAction)
        {
            auto clonedChild = std::make_shared<AcquirePositionActionImpl>(std::dynamic_pointer_cast<AcquirePositionActionImpl>(kAcquirePositionAction)->Clone());
            auto clonedChildIAcquirePositionAction = std::dynamic_pointer_cast<IAcquirePositionAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAcquirePositionAction(clonedChildIAcquirePositionAction);
        }
        return clonedObject;
    }




    ScenarioDefinitionImpl::ScenarioDefinitionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IParameterDeclaration>> ScenarioDefinitionImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<ICatalogLocations> ScenarioDefinitionImpl::GetCatalogLocations()
    {
        return _catalogLocations;
    }
    std::shared_ptr<IRoadNetwork> ScenarioDefinitionImpl::GetRoadNetwork()
    {
        return _roadNetwork;
    }
    std::shared_ptr<IEntities> ScenarioDefinitionImpl::GetEntities()
    {
        return _entities;
    }
    std::shared_ptr<IStoryboard> ScenarioDefinitionImpl::GetStoryboard()
    {
        return _storyboard;
    }

	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Global Parameter declaration. Some parameter 
	 * represent placeholders to be resolved when the scenario file is loaded. , Some parameters represent runtime values that 
	 * can be controlled with ParameterActions and ParameterConditions during , simulation time.]
	 * 
	*/
    void ScenarioDefinitionImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property catalogLocations
	 * @param catalogLocations from OpenSCENARIO class model specification: [A list of locations to look up catalog files. Each
	 * catalog element type has its own list.]
	 * 
	*/
    void ScenarioDefinitionImpl::SetCatalogLocations(std::shared_ptr<ICatalogLocations>& catalogLocations )
    {
        _catalogLocations = catalogLocations;
    }
	/**
	 * Sets the value of model property roadNetwork
	 * @param roadNetwork from OpenSCENARIO class model specification: [Reference to the road network.]
	 * 
	*/
    void ScenarioDefinitionImpl::SetRoadNetwork(std::shared_ptr<IRoadNetwork>& roadNetwork )
    {
        _roadNetwork = roadNetwork;
    }
	/**
	 * Sets the value of model property entities
	 * @param entities from OpenSCENARIO class model specification: [Container for entity selections and scenario object 
	 * definitions. Instances of ScenarioObject, of EntitySelection and of , SpawnedObject considered instances of Entity.]
	 * 
	*/
    void ScenarioDefinitionImpl::SetEntities(std::shared_ptr<IEntities>& entities )
    {
        _entities = entities;
    }
	/**
	 * Sets the value of model property storyboard
	 * @param storyboard from OpenSCENARIO class model specification: [Container for the dynamic content of the scenario.]
	 * 
	*/
    void ScenarioDefinitionImpl::SetStoryboard(std::shared_ptr<IStoryboard>& storyboard )
    {
        _storyboard = storyboard;
    }

    void ScenarioDefinitionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ScenarioDefinitionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool ScenarioDefinitionImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> ScenarioDefinitionImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ScenarioDefinitionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kCatalogLocations =  GetCatalogLocations();
            if (kCatalogLocations)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCatalogLocations));
            }
            const auto kRoadNetwork =  GetRoadNetwork();
            if (kRoadNetwork)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRoadNetwork));
            }
            const auto kEntities =  GetEntities();
            if (kEntities)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEntities));
            }
            const auto kStoryboard =  GetStoryboard();
            if (kStoryboard)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStoryboard));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ScenarioDefinitionImpl ScenarioDefinitionImpl::Clone()
    {
        ScenarioDefinitionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kCatalogLocations =  GetCatalogLocations();
        if (kCatalogLocations)
        {
            auto clonedChild = std::make_shared<CatalogLocationsImpl>(std::dynamic_pointer_cast<CatalogLocationsImpl>(kCatalogLocations)->Clone());
            auto clonedChildICatalogLocations = std::dynamic_pointer_cast<ICatalogLocations>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCatalogLocations(clonedChildICatalogLocations);
        }
        const auto kRoadNetwork =  GetRoadNetwork();
        if (kRoadNetwork)
        {
            auto clonedChild = std::make_shared<RoadNetworkImpl>(std::dynamic_pointer_cast<RoadNetworkImpl>(kRoadNetwork)->Clone());
            auto clonedChildIRoadNetwork = std::dynamic_pointer_cast<IRoadNetwork>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRoadNetwork(clonedChildIRoadNetwork);
        }
        const auto kEntities =  GetEntities();
        if (kEntities)
        {
            auto clonedChild = std::make_shared<EntitiesImpl>(std::dynamic_pointer_cast<EntitiesImpl>(kEntities)->Clone());
            auto clonedChildIEntities = std::dynamic_pointer_cast<IEntities>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEntities(clonedChildIEntities);
        }
        const auto kStoryboard =  GetStoryboard();
        if (kStoryboard)
        {
            auto clonedChild = std::make_shared<StoryboardImpl>(std::dynamic_pointer_cast<StoryboardImpl>(kStoryboard)->Clone());
            auto clonedChildIStoryboard = std::dynamic_pointer_cast<IStoryboard>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStoryboard(clonedChildIStoryboard);
        }
        return clonedObject;
    }




    ScenarioObjectImpl::ScenarioObjectImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string ScenarioObjectImpl::GetName()
    {
        return _name;
    }
    std::shared_ptr<IEntityObject> ScenarioObjectImpl::GetEntityObject()
    {
        return _entityObject;
    }
    std::shared_ptr<IObjectController> ScenarioObjectImpl::GetObjectController()
    {
        return _objectController;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Identifier of the scenario object.]
	 * 
	*/
    void ScenarioObjectImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property entityObject
	 * @param entityObject from OpenSCENARIO class model specification: [The EntityObject (either instance of type Vehicle, 
	 * Pedestrian or MiscObject).]
	 * 
	*/
    void ScenarioObjectImpl::SetEntityObject(std::shared_ptr<IEntityObject>& entityObject )
    {
        _entityObject = entityObject;
    }
	/**
	 * Sets the value of model property objectController
	 * @param objectController from OpenSCENARIO class model specification: [Controller of the EntityObject instance.]
	 * 
	*/
    void ScenarioObjectImpl::SetObjectController(std::shared_ptr<IObjectController>& objectController )
    {
        _objectController = objectController;
    }

    void ScenarioObjectImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string ScenarioObjectImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ScenarioObjectImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kEntityObject =  GetEntityObject();
            if (kEntityObject)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEntityObject));
            }
            const auto kObjectController =  GetObjectController();
            if (kObjectController)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kObjectController));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ScenarioObjectImpl ScenarioObjectImpl::Clone()
    {
        ScenarioObjectImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kEntityObject =  GetEntityObject();
        if (kEntityObject)
        {
            auto clonedChild = std::make_shared<EntityObjectImpl>(std::dynamic_pointer_cast<EntityObjectImpl>(kEntityObject)->Clone());
            auto clonedChildIEntityObject = std::dynamic_pointer_cast<IEntityObject>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEntityObject(clonedChildIEntityObject);
        }
        const auto kObjectController =  GetObjectController();
        if (kObjectController)
        {
            auto clonedChild = std::make_shared<ObjectControllerImpl>(std::dynamic_pointer_cast<ObjectControllerImpl>(kObjectController)->Clone());
            auto clonedChildIObjectController = std::dynamic_pointer_cast<IObjectController>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetObjectController(clonedChildIObjectController);
        }
        return clonedObject;
    }




    SelectedEntitiesImpl::SelectedEntitiesImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IEntityRef>> SelectedEntitiesImpl::GetEntityRef()
    {
        return _entityRef;
    }
    std::vector<std::shared_ptr<IByType>> SelectedEntitiesImpl::GetByType()
    {
        return _byType;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [References to the selected entities.]
	 * 
	*/
    void SelectedEntitiesImpl::SetEntityRef(std::vector<std::shared_ptr<IEntityRef>>& entityRef)
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property byType
	 * @param byType from OpenSCENARIO class model specification: [Defines the type to determine that all entities of a 
	 * specific type are members.]
	 * 
	*/
    void SelectedEntitiesImpl::SetByType(std::vector<std::shared_ptr<IByType>>& byType)
    {
        _byType = byType;
    }

    void SelectedEntitiesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string SelectedEntitiesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SelectedEntitiesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto entityRef =  GetEntityRef();
            if (!entityRef.empty())
            {
                for(auto&& item : entityRef)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto byType =  GetByType();
            if (!byType.empty())
            {
                for(auto&& item : byType)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SelectedEntitiesImpl SelectedEntitiesImpl::Clone()
    {
        SelectedEntitiesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kEntityRef =  GetEntityRef();
        if (!kEntityRef.empty())
        {
            std::vector<std::shared_ptr<IEntityRef>> clonedList;
            for(auto&& kItem : kEntityRef)
            {
                auto clonedChild = std::make_shared <EntityRefImpl>(std::dynamic_pointer_cast<EntityRefImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetEntityRef(clonedList);
        }
        const auto kByType =  GetByType();
        if (!kByType.empty())
        {
            std::vector<std::shared_ptr<IByType>> clonedList;
            for(auto&& kItem : kByType)
            {
                auto clonedChild = std::make_shared <ByTypeImpl>(std::dynamic_pointer_cast<ByTypeImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetByType(clonedList);
        }
        return clonedObject;
    }




    ShapeImpl::ShapeImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IPolyline> ShapeImpl::GetPolyline()
    {
        return _polyline;
    }
    std::shared_ptr<IClothoid> ShapeImpl::GetClothoid()
    {
        return _clothoid;
    }
    std::shared_ptr<INurbs> ShapeImpl::GetNurbs()
    {
        return _nurbs;
    }

	/**
	 * Sets the value of model property polyline
	 * @param polyline from OpenSCENARIO class model specification: [Polyline property of a shape.]
	 * 
	*/
    void ShapeImpl::SetPolyline(std::shared_ptr<IPolyline>& polyline )
    {
        _polyline = polyline;
    }
	/**
	 * Sets the value of model property clothoid
	 * @param clothoid from OpenSCENARIO class model specification: [Clothoid property of a shape.]
	 * 
	*/
    void ShapeImpl::SetClothoid(std::shared_ptr<IClothoid>& clothoid )
    {
        _clothoid = clothoid;
    }
	/**
	 * Sets the value of model property nurbs
	 * @param nurbs from OpenSCENARIO class model specification: [NURBS property of a shape.]
	 * 
	*/
    void ShapeImpl::SetNurbs(std::shared_ptr<INurbs>& nurbs )
    {
        _nurbs = nurbs;
    }

    void ShapeImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string ShapeImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> ShapeImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPolyline =  GetPolyline();
            if (kPolyline)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPolyline));
            }
            const auto kClothoid =  GetClothoid();
            if (kClothoid)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kClothoid));
            }
            const auto kNurbs =  GetNurbs();
            if (kNurbs)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kNurbs));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    ShapeImpl ShapeImpl::Clone()
    {
        ShapeImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kPolyline =  GetPolyline();
        if (kPolyline)
        {
            auto clonedChild = std::make_shared<PolylineImpl>(std::dynamic_pointer_cast<PolylineImpl>(kPolyline)->Clone());
            auto clonedChildIPolyline = std::dynamic_pointer_cast<IPolyline>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPolyline(clonedChildIPolyline);
        }
        const auto kClothoid =  GetClothoid();
        if (kClothoid)
        {
            auto clonedChild = std::make_shared<ClothoidImpl>(std::dynamic_pointer_cast<ClothoidImpl>(kClothoid)->Clone());
            auto clonedChildIClothoid = std::dynamic_pointer_cast<IClothoid>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetClothoid(clonedChildIClothoid);
        }
        const auto kNurbs =  GetNurbs();
        if (kNurbs)
        {
            auto clonedChild = std::make_shared<NurbsImpl>(std::dynamic_pointer_cast<NurbsImpl>(kNurbs)->Clone());
            auto clonedChildINurbs = std::dynamic_pointer_cast<INurbs>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetNurbs(clonedChildINurbs);
        }
        return clonedObject;
    }




    SimulationTimeConditionImpl::SimulationTimeConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    double SimulationTimeConditionImpl::GetValue()
    {
        return _value;
    }
    Rule SimulationTimeConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Time value of the simulation time condition. Unit: s.]
	 * 
	*/
    void SimulationTimeConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void SimulationTimeConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void SimulationTimeConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string SimulationTimeConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SimulationTimeConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SimulationTimeConditionImpl SimulationTimeConditionImpl::Clone()
    {
        SimulationTimeConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    SpeedActionImpl::SpeedActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ITransitionDynamics> SpeedActionImpl::GetSpeedActionDynamics()
    {
        return _speedActionDynamics;
    }
    std::shared_ptr<ISpeedActionTarget> SpeedActionImpl::GetSpeedActionTarget()
    {
        return _speedActionTarget;
    }

	/**
	 * Sets the value of model property speedActionDynamics
	 * @param speedActionDynamics from OpenSCENARIO class model specification: [Defines how the target speed is reached.]
	 * 
	*/
    void SpeedActionImpl::SetSpeedActionDynamics(std::shared_ptr<ITransitionDynamics>& speedActionDynamics )
    {
        _speedActionDynamics = speedActionDynamics;
    }
	/**
	 * Sets the value of model property speedActionTarget
	 * @param speedActionTarget from OpenSCENARIO class model specification: [Defines the target speed which should be 
	 * reached.]
	 * 
	*/
    void SpeedActionImpl::SetSpeedActionTarget(std::shared_ptr<ISpeedActionTarget>& speedActionTarget )
    {
        _speedActionTarget = speedActionTarget;
    }

    void SpeedActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string SpeedActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SpeedActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kSpeedActionDynamics =  GetSpeedActionDynamics();
            if (kSpeedActionDynamics)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSpeedActionDynamics));
            }
            const auto kSpeedActionTarget =  GetSpeedActionTarget();
            if (kSpeedActionTarget)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSpeedActionTarget));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SpeedActionImpl SpeedActionImpl::Clone()
    {
        SpeedActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kSpeedActionDynamics =  GetSpeedActionDynamics();
        if (kSpeedActionDynamics)
        {
            auto clonedChild = std::make_shared<TransitionDynamicsImpl>(std::dynamic_pointer_cast<TransitionDynamicsImpl>(kSpeedActionDynamics)->Clone());
            auto clonedChildITransitionDynamics = std::dynamic_pointer_cast<ITransitionDynamics>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSpeedActionDynamics(clonedChildITransitionDynamics);
        }
        const auto kSpeedActionTarget =  GetSpeedActionTarget();
        if (kSpeedActionTarget)
        {
            auto clonedChild = std::make_shared<SpeedActionTargetImpl>(std::dynamic_pointer_cast<SpeedActionTargetImpl>(kSpeedActionTarget)->Clone());
            auto clonedChildISpeedActionTarget = std::dynamic_pointer_cast<ISpeedActionTarget>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSpeedActionTarget(clonedChildISpeedActionTarget);
        }
        return clonedObject;
    }




    SpeedActionTargetImpl::SpeedActionTargetImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IRelativeTargetSpeed> SpeedActionTargetImpl::GetRelativeTargetSpeed()
    {
        return _relativeTargetSpeed;
    }
    std::shared_ptr<IAbsoluteTargetSpeed> SpeedActionTargetImpl::GetAbsoluteTargetSpeed()
    {
        return _absoluteTargetSpeed;
    }

	/**
	 * Sets the value of model property relativeTargetSpeed
	 * @param relativeTargetSpeed from OpenSCENARIO class model specification: [Defines the target speed as relative speed to a
	 * reference entity. Unit: m/s.]
	 * 
	*/
    void SpeedActionTargetImpl::SetRelativeTargetSpeed(std::shared_ptr<IRelativeTargetSpeed>& relativeTargetSpeed )
    {
        _relativeTargetSpeed = relativeTargetSpeed;
    }
	/**
	 * Sets the value of model property absoluteTargetSpeed
	 * @param absoluteTargetSpeed from OpenSCENARIO class model specification: [Defines the target speed as absolute 
	 * speed.Unit: m/s.]
	 * 
	*/
    void SpeedActionTargetImpl::SetAbsoluteTargetSpeed(std::shared_ptr<IAbsoluteTargetSpeed>& absoluteTargetSpeed )
    {
        _absoluteTargetSpeed = absoluteTargetSpeed;
    }

    void SpeedActionTargetImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string SpeedActionTargetImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SpeedActionTargetImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kRelativeTargetSpeed =  GetRelativeTargetSpeed();
            if (kRelativeTargetSpeed)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kRelativeTargetSpeed));
            }
            const auto kAbsoluteTargetSpeed =  GetAbsoluteTargetSpeed();
            if (kAbsoluteTargetSpeed)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAbsoluteTargetSpeed));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SpeedActionTargetImpl SpeedActionTargetImpl::Clone()
    {
        SpeedActionTargetImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kRelativeTargetSpeed =  GetRelativeTargetSpeed();
        if (kRelativeTargetSpeed)
        {
            auto clonedChild = std::make_shared<RelativeTargetSpeedImpl>(std::dynamic_pointer_cast<RelativeTargetSpeedImpl>(kRelativeTargetSpeed)->Clone());
            auto clonedChildIRelativeTargetSpeed = std::dynamic_pointer_cast<IRelativeTargetSpeed>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetRelativeTargetSpeed(clonedChildIRelativeTargetSpeed);
        }
        const auto kAbsoluteTargetSpeed =  GetAbsoluteTargetSpeed();
        if (kAbsoluteTargetSpeed)
        {
            auto clonedChild = std::make_shared<AbsoluteTargetSpeedImpl>(std::dynamic_pointer_cast<AbsoluteTargetSpeedImpl>(kAbsoluteTargetSpeed)->Clone());
            auto clonedChildIAbsoluteTargetSpeed = std::dynamic_pointer_cast<IAbsoluteTargetSpeed>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAbsoluteTargetSpeed(clonedChildIAbsoluteTargetSpeed);
        }
        return clonedObject;
    }




    SpeedConditionImpl::SpeedConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    double SpeedConditionImpl::GetValue()
    {
        return _value;
    }
    Rule SpeedConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Speed value of the speed condition. Unit m/s.]
	 * 
	*/
    void SpeedConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void SpeedConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void SpeedConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string SpeedConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SpeedConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SpeedConditionImpl SpeedConditionImpl::Clone()
    {
        SpeedConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    StandStillConditionImpl::StandStillConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DURATION, typeid(double).name());
    }

    double StandStillConditionImpl::GetDuration()
    {
        return _duration;
    }

	/**
	 * Sets the value of model property duration
	 * @param duration from OpenSCENARIO class model specification: [Duration time of still standing to let the logical 
	 * expression become true. Unit: s. Range [0..inf[.]
	 * 
	*/
    void StandStillConditionImpl::SetDuration(double& duration )
    {
        _duration = duration;
    }

    void StandStillConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DURATION)
        {
            // Simple type
            _duration = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string StandStillConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> StandStillConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    StandStillConditionImpl StandStillConditionImpl::Clone()
    {
        StandStillConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetDuration(_duration);
        // clone children
        return clonedObject;
    }




    StoryImpl::StoryImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string StoryImpl::GetName()
    {
        return _name;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> StoryImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::vector<std::shared_ptr<IAct>> StoryImpl::GetActs()
    {
        return _acts;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the story, must be unique within an OpenSCENARIO 
	 * file.]
	 * 
	*/
    void StoryImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void StoryImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property acts
	 * @param acts from OpenSCENARIO class model specification: [Defines the acts of the story.]
	 * 
	*/
    void StoryImpl::SetActs(std::vector<std::shared_ptr<IAct>>& acts)
    {
        _acts = acts;
    }

    void StoryImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string StoryImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool StoryImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> StoryImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> StoryImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            auto acts =  GetActs();
            if (!acts.empty())
            {
                for(auto&& item : acts)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    StoryImpl StoryImpl::Clone()
    {
        StoryImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kActs =  GetActs();
        if (!kActs.empty())
        {
            std::vector<std::shared_ptr<IAct>> clonedList;
            for(auto&& kItem : kActs)
            {
                auto clonedChild = std::make_shared <ActImpl>(std::dynamic_pointer_cast<ActImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetActs(clonedList);
        }
        return clonedObject;
    }




    StoryboardImpl::StoryboardImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IInit> StoryboardImpl::GetInit()
    {
        return _init;
    }
    std::vector<std::shared_ptr<IStory>> StoryboardImpl::GetStories()
    {
        return _stories;
    }
    std::shared_ptr<ITrigger> StoryboardImpl::GetStopTrigger()
    {
        return _stopTrigger;
    }

	/**
	 * Sets the value of model property init
	 * @param init from OpenSCENARIO class model specification: [Initialization of the storyboard instance. Initial conditions 
	 * are set and initial actions are applied to entities.]
	 * 
	*/
    void StoryboardImpl::SetInit(std::shared_ptr<IInit>& init )
    {
        _init = init;
    }
	/**
	 * Sets the value of model property stories
	 * @param stories from OpenSCENARIO class model specification: [List of stories defined in a story board.]
	 * 
	*/
    void StoryboardImpl::SetStories(std::vector<std::shared_ptr<IStory>>& stories)
    {
        _stories = stories;
    }
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Trigger to stop the Storyboard instance.]
	 * 
	*/
    void StoryboardImpl::SetStopTrigger(std::shared_ptr<ITrigger>& stopTrigger )
    {
        _stopTrigger = stopTrigger;
    }

    void StoryboardImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string StoryboardImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> StoryboardImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kInit =  GetInit();
            if (kInit)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kInit));
            }
            auto stories =  GetStories();
            if (!stories.empty())
            {
                for(auto&& item : stories)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kStopTrigger =  GetStopTrigger();
            if (kStopTrigger)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kStopTrigger));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    StoryboardImpl StoryboardImpl::Clone()
    {
        StoryboardImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kInit =  GetInit();
        if (kInit)
        {
            auto clonedChild = std::make_shared<InitImpl>(std::dynamic_pointer_cast<InitImpl>(kInit)->Clone());
            auto clonedChildIInit = std::dynamic_pointer_cast<IInit>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetInit(clonedChildIInit);
        }
        const auto kStories =  GetStories();
        if (!kStories.empty())
        {
            std::vector<std::shared_ptr<IStory>> clonedList;
            for(auto&& kItem : kStories)
            {
                auto clonedChild = std::make_shared <StoryImpl>(std::dynamic_pointer_cast<StoryImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetStories(clonedList);
        }
        const auto kStopTrigger =  GetStopTrigger();
        if (kStopTrigger)
        {
            auto clonedChild = std::make_shared<TriggerImpl>(std::dynamic_pointer_cast<TriggerImpl>(kStopTrigger)->Clone());
            auto clonedChildITrigger = std::dynamic_pointer_cast<ITrigger>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetStopTrigger(clonedChildITrigger);
        }
        return clonedObject;
    }




    StoryboardElementStateConditionImpl::StoryboardElementStateConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STATE, typeid(std::string).name());
    }

    StoryboardElementType StoryboardElementStateConditionImpl::GetStoryboardElementType()
    {
        return _storyboardElementType;
    }
    INamedReference<IStoryboardElement>* StoryboardElementStateConditionImpl::GetStoryboardElementRef()
    {
        return &_storyboardElementRef;
    }
    StoryboardElementState StoryboardElementStateConditionImpl::GetState()
    {
        return _state;
    }

	/**
	 * Sets the value of model property storyboardElementType
	 * @param storyboardElementType from OpenSCENARIO class model specification: [Type of storyboard element instance.]
	 * 
	*/
    void StoryboardElementStateConditionImpl::SetStoryboardElementType(StoryboardElementType& storyboardElementType )
    {
        _storyboardElementType = storyboardElementType;
    }
	/**
	 * Sets the value of model property storyboardElementRef
	 * @param storyboardElementRef from OpenSCENARIO class model specification: [Name of the referenced Storyboard instance.]
	 * 
	*/
    void StoryboardElementStateConditionImpl::SetStoryboardElementRef(NamedReferenceProxy<IStoryboardElement>& storyboardElementRef )
    {
        _storyboardElementRef = storyboardElementRef;
    }
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [The state or the transition of the storyboard element 
	 * instance for which the condition becomes true.]
	 * 
	*/
    void StoryboardElementStateConditionImpl::SetState(StoryboardElementState& state )
    {
        _state = state;
    }

    void StoryboardElementStateConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE)
        {
            // Enumeration Type
            const auto kResult = StoryboardElementType::GetFromLiteral(parameterLiteralValue);
            if (kResult != StoryboardElementType::UNKNOWN)
            {
                _storyboardElementType = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF)
        {
            // Proxy
            _storyboardElementRef = NamedReferenceProxy<IStoryboardElement>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STATE)
        {
            // Enumeration Type
            const auto kResult = StoryboardElementState::GetFromLiteral(parameterLiteralValue);
            if (kResult != StoryboardElementState::UNKNOWN)
            {
                _state = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string StoryboardElementStateConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> StoryboardElementStateConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    StoryboardElementStateConditionImpl StoryboardElementStateConditionImpl::Clone()
    {
        StoryboardElementStateConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetStoryboardElementType(_storyboardElementType);
        // Proxy
        auto proxy = _storyboardElementRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetStoryboardElementRef(proxy);
        // Enumeration Type
        clonedObject.SetState(_state);
        // clone children
        return clonedObject;
    }




    SunImpl::SunImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, typeid(double).name());
    }

    double SunImpl::GetIntensity()
    {
        return _intensity;
    }
    double SunImpl::GetAzimuth()
    {
        return _azimuth;
    }
    double SunImpl::GetElevation()
    {
        return _elevation;
    }

	/**
	 * Sets the value of model property intensity
	 * @param intensity from OpenSCENARIO class model specification: [Illuminance of the sun, direct sunlight is around 100,00 
	 * lx. Unit: lux; Range: [0..inf[.]
	 * 
	*/
    void SunImpl::SetIntensity(double& intensity )
    {
        _intensity = intensity;
    }
	/**
	 * Sets the value of model property azimuth
	 * @param azimuth from OpenSCENARIO class model specification: [Azimuth of the sun, counted counterclockwise, 0=north, PI/2
	 * = east, PI=south, 3/2 PI=west. Unit: radian; Range: , [0..2PI].]
	 * 
	*/
    void SunImpl::SetAzimuth(double& azimuth )
    {
        _azimuth = azimuth;
    }
	/**
	 * Sets the value of model property elevation
	 * @param elevation from OpenSCENARIO class model specification: [Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: 
	 * rad; Range: [-PI..PI].]
	 * 
	*/
    void SunImpl::SetElevation(double& elevation )
    {
        _elevation = elevation;
    }

    void SunImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__INTENSITY)
        {
            // Simple type
            _intensity = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__AZIMUTH)
        {
            // Simple type
            _azimuth = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ELEVATION)
        {
            // Simple type
            _elevation = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string SunImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SunImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SunImpl SunImpl::Clone()
    {
        SunImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetIntensity(_intensity);
        // Simple type
        clonedObject.SetAzimuth(_azimuth);
        // Simple type
        clonedObject.SetElevation(_elevation);
        // clone children
        return clonedObject;
    }




    SynchronizeActionImpl::SynchronizeActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, typeid(std::string).name());
    }

    INamedReference<IEntity>* SynchronizeActionImpl::GetMasterEntityRef()
    {
        return &_masterEntityRef;
    }
    std::shared_ptr<IPosition> SynchronizeActionImpl::GetTargetPositionMaster()
    {
        return _targetPositionMaster;
    }
    std::shared_ptr<IPosition> SynchronizeActionImpl::GetTargetPosition()
    {
        return _targetPosition;
    }
    std::shared_ptr<IFinalSpeed> SynchronizeActionImpl::GetFinalSpeed()
    {
        return _finalSpeed;
    }

	/**
	 * Sets the value of model property masterEntityRef
	 * @param masterEntityRef from OpenSCENARIO class model specification: [A reference to the master entity.]
	 * 
	*/
    void SynchronizeActionImpl::SetMasterEntityRef(NamedReferenceProxy<IEntity>& masterEntityRef )
    {
        _masterEntityRef = masterEntityRef;
    }
	/**
	 * Sets the value of model property targetPositionMaster
	 * @param targetPositionMaster from OpenSCENARIO class model specification: [The target position for the master entity.]
	 * 
	*/
    void SynchronizeActionImpl::SetTargetPositionMaster(std::shared_ptr<IPosition>& targetPositionMaster )
    {
        _targetPositionMaster = targetPositionMaster;
    }
	/**
	 * Sets the value of model property targetPosition
	 * @param targetPosition from OpenSCENARIO class model specification: [The target position for the entity that should be 
	 * synchronized.]
	 * 
	*/
    void SynchronizeActionImpl::SetTargetPosition(std::shared_ptr<IPosition>& targetPosition )
    {
        _targetPosition = targetPosition;
    }
	/**
	 * Sets the value of model property finalSpeed
	 * @param finalSpeed from OpenSCENARIO class model specification: [The speed that the synchronized entity should have at 
	 * its target position.]
	 * 
	*/
    void SynchronizeActionImpl::SetFinalSpeed(std::shared_ptr<IFinalSpeed>& finalSpeed )
    {
        _finalSpeed = finalSpeed;
    }

    void SynchronizeActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF)
        {
            // Proxy
            _masterEntityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string SynchronizeActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> SynchronizeActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTargetPositionMaster =  GetTargetPositionMaster();
            if (kTargetPositionMaster)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTargetPositionMaster));
            }
            const auto kTargetPosition =  GetTargetPosition();
            if (kTargetPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTargetPosition));
            }
            const auto kFinalSpeed =  GetFinalSpeed();
            if (kFinalSpeed)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFinalSpeed));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    SynchronizeActionImpl SynchronizeActionImpl::Clone()
    {
        SynchronizeActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _masterEntityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetMasterEntityRef(proxy);
        // clone children
        const auto kTargetPositionMaster =  GetTargetPositionMaster();
        if (kTargetPositionMaster)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kTargetPositionMaster)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTargetPositionMaster(clonedChildIPosition);
        }
        const auto kTargetPosition =  GetTargetPosition();
        if (kTargetPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kTargetPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTargetPosition(clonedChildIPosition);
        }
        const auto kFinalSpeed =  GetFinalSpeed();
        if (kFinalSpeed)
        {
            auto clonedChild = std::make_shared<FinalSpeedImpl>(std::dynamic_pointer_cast<FinalSpeedImpl>(kFinalSpeed)->Clone());
            auto clonedChildIFinalSpeed = std::dynamic_pointer_cast<IFinalSpeed>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFinalSpeed(clonedChildIFinalSpeed);
        }
        return clonedObject;
    }




    TeleportActionImpl::TeleportActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IPosition> TeleportActionImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The position the entity/entities are teleported to.]
	 * 
	*/
    void TeleportActionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void TeleportActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TeleportActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TeleportActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TeleportActionImpl TeleportActionImpl::Clone()
    {
        TeleportActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    TimeHeadwayConditionImpl::TimeHeadwayConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    INamedReference<IEntity>* TimeHeadwayConditionImpl::GetEntityRef()
    {
        return &_entityRef;
    }
    double TimeHeadwayConditionImpl::GetValue()
    {
        return _value;
    }
    bool TimeHeadwayConditionImpl::GetFreespace()
    {
        return _freespace;
    }
    bool TimeHeadwayConditionImpl::GetAlongRoute()
    {
        return _alongRoute;
    }
    Rule TimeHeadwayConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity to which the time headway is computed.]
	 * 
	*/
    void TimeHeadwayConditionImpl::SetEntityRef(NamedReferenceProxy<IEntity>& entityRef )
    {
        _entityRef = entityRef;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The time headway value. Unit: s; Range: [0..inf[.]
	 * 
	*/
    void TimeHeadwayConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: time headway is measured using the distance between
	 * closest bounding box points. False: reference point distance , is used.]
	 * 
	*/
    void TimeHeadwayConditionImpl::SetFreespace(bool& freespace )
    {
        _freespace = freespace;
    }
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
    void TimeHeadwayConditionImpl::SetAlongRoute(bool& alongRoute )
    {
        _alongRoute = alongRoute;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void TimeHeadwayConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void TimeHeadwayConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF)
        {
            // Proxy
            _entityRef = NamedReferenceProxy<IEntity>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FREESPACE)
        {
            // Simple type
            _freespace = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE)
        {
            // Simple type
            _alongRoute = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string TimeHeadwayConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimeHeadwayConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimeHeadwayConditionImpl TimeHeadwayConditionImpl::Clone()
    {
        TimeHeadwayConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _entityRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetEntityRef(proxy);
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetFreespace(_freespace);
        // Simple type
        clonedObject.SetAlongRoute(_alongRoute);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    TimeOfDayImpl::TimeOfDayImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, typeid(DateTime).name());
    }

    bool TimeOfDayImpl::GetAnimation()
    {
        return _animation;
    }
    DateTime TimeOfDayImpl::GetDateTime()
    {
        return _dateTime;
    }

	/**
	 * Sets the value of model property animation
	 * @param animation from OpenSCENARIO class model specification: [If true, the timeofday is animated with progressing 
	 * simulation time, e.g. in order to animate the position of the sun.]
	 * 
	*/
    void TimeOfDayImpl::SetAnimation(bool& animation )
    {
        _animation = animation;
    }
	/**
	 * Sets the value of model property dateTime
	 * @param dateTime from OpenSCENARIO class model specification: [Datetime value.]
	 * 
	*/
    void TimeOfDayImpl::SetDateTime(DateTime& dateTime )
    {
        _dateTime = dateTime;
    }

    void TimeOfDayImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ANIMATION)
        {
            // Simple type
            _animation = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DATE_TIME)
        {
            // Simple type
            _dateTime = ParserHelper::ParseDateTime(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TimeOfDayImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimeOfDayImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimeOfDayImpl TimeOfDayImpl::Clone()
    {
        TimeOfDayImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetAnimation(_animation);
        // Simple type
        clonedObject.SetDateTime(_dateTime);
        // clone children
        return clonedObject;
    }




    TimeOfDayConditionImpl::TimeOfDayConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, typeid(DateTime).name());
    }

    Rule TimeOfDayConditionImpl::GetRule()
    {
        return _rule;
    }
    DateTime TimeOfDayConditionImpl::GetDateTime()
    {
        return _dateTime;
    }

	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void TimeOfDayConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }
	/**
	 * Sets the value of model property dateTime
	 * @param dateTime from OpenSCENARIO class model specification: [Datetime value for comparison.]
	 * 
	*/
    void TimeOfDayConditionImpl::SetDateTime(DateTime& dateTime )
    {
        _dateTime = dateTime;
    }

    void TimeOfDayConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DATE_TIME)
        {
            // Simple type
            _dateTime = ParserHelper::ParseDateTime(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TimeOfDayConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimeOfDayConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimeOfDayConditionImpl TimeOfDayConditionImpl::Clone()
    {
        TimeOfDayConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // Simple type
        clonedObject.SetDateTime(_dateTime);
        // clone children
        return clonedObject;
    }




    TimeReferenceImpl::TimeReferenceImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<INone> TimeReferenceImpl::GetNone()
    {
        return _none;
    }
    std::shared_ptr<ITiming> TimeReferenceImpl::GetTiming()
    {
        return _timing;
    }

	/**
	 * Sets the value of model property none
	 * @param none from OpenSCENARIO class model specification: [This property indicates Timing information is neglected.]
	 * 
	*/
    void TimeReferenceImpl::SetNone(std::shared_ptr<INone>& none )
    {
        _none = none;
    }
	/**
	 * Sets the value of model property timing
	 * @param timing from OpenSCENARIO class model specification: [This property indicates timing information is taken into 
	 * account. Its underlying properties allow specification of the , time domain (absolute or relative), time scaling and a 
	 * global time offset.]
	 * 
	*/
    void TimeReferenceImpl::SetTiming(std::shared_ptr<ITiming>& timing )
    {
        _timing = timing;
    }

    void TimeReferenceImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TimeReferenceImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimeReferenceImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kNone =  GetNone();
            if (kNone)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kNone));
            }
            const auto kTiming =  GetTiming();
            if (kTiming)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTiming));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimeReferenceImpl TimeReferenceImpl::Clone()
    {
        TimeReferenceImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kNone =  GetNone();
        if (kNone)
        {
            auto clonedChild = std::make_shared<NoneImpl>(std::dynamic_pointer_cast<NoneImpl>(kNone)->Clone());
            auto clonedChildINone = std::dynamic_pointer_cast<INone>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetNone(clonedChildINone);
        }
        const auto kTiming =  GetTiming();
        if (kTiming)
        {
            auto clonedChild = std::make_shared<TimingImpl>(std::dynamic_pointer_cast<TimingImpl>(kTiming)->Clone());
            auto clonedChildITiming = std::dynamic_pointer_cast<ITiming>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTiming(clonedChildITiming);
        }
        return clonedObject;
    }




    TimeToCollisionConditionImpl::TimeToCollisionConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    double TimeToCollisionConditionImpl::GetValue()
    {
        return _value;
    }
    bool TimeToCollisionConditionImpl::GetFreespace()
    {
        return _freespace;
    }
    bool TimeToCollisionConditionImpl::GetAlongRoute()
    {
        return _alongRoute;
    }
    Rule TimeToCollisionConditionImpl::GetRule()
    {
        return _rule;
    }
    std::shared_ptr<ITimeToCollisionConditionTarget> TimeToCollisionConditionImpl::GetTimeToCollisionConditionTarget()
    {
        return _timeToCollisionConditionTarget;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The time to collision value. Unit: s; Range: [0..inf[.]
	 * 
	*/
    void TimeToCollisionConditionImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: time to collision is measured using the distance 
	 * between closest bounding box points.False: reference point , distance is used.]
	 * 
	*/
    void TimeToCollisionConditionImpl::SetFreespace(bool& freespace )
    {
        _freespace = freespace;
    }
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
    void TimeToCollisionConditionImpl::SetAlongRoute(bool& alongRoute )
    {
        _alongRoute = alongRoute;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void TimeToCollisionConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }
	/**
	 * Sets the value of model property timeToCollisionConditionTarget
	 * @param timeToCollisionConditionTarget from OpenSCENARIO class model specification: [The explicit position or a position 
	 * defined through the current position of a reference entity.]
	 * 
	*/
    void TimeToCollisionConditionImpl::SetTimeToCollisionConditionTarget(std::shared_ptr<ITimeToCollisionConditionTarget>& timeToCollisionConditionTarget )
    {
        _timeToCollisionConditionTarget = timeToCollisionConditionTarget;
    }

    void TimeToCollisionConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FREESPACE)
        {
            // Simple type
            _freespace = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE)
        {
            // Simple type
            _alongRoute = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string TimeToCollisionConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimeToCollisionConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTimeToCollisionConditionTarget =  GetTimeToCollisionConditionTarget();
            if (kTimeToCollisionConditionTarget)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTimeToCollisionConditionTarget));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimeToCollisionConditionImpl TimeToCollisionConditionImpl::Clone()
    {
        TimeToCollisionConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // Simple type
        clonedObject.SetFreespace(_freespace);
        // Simple type
        clonedObject.SetAlongRoute(_alongRoute);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        const auto kTimeToCollisionConditionTarget =  GetTimeToCollisionConditionTarget();
        if (kTimeToCollisionConditionTarget)
        {
            auto clonedChild = std::make_shared<TimeToCollisionConditionTargetImpl>(std::dynamic_pointer_cast<TimeToCollisionConditionTargetImpl>(kTimeToCollisionConditionTarget)->Clone());
            auto clonedChildITimeToCollisionConditionTarget = std::dynamic_pointer_cast<ITimeToCollisionConditionTarget>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTimeToCollisionConditionTarget(clonedChildITimeToCollisionConditionTarget);
        }
        return clonedObject;
    }




    TimeToCollisionConditionTargetImpl::TimeToCollisionConditionTargetImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IPosition> TimeToCollisionConditionTargetImpl::GetPosition()
    {
        return _position;
    }
    std::shared_ptr<IEntityRef> TimeToCollisionConditionTargetImpl::GetEntityRef()
    {
        return _entityRef;
    }

	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position.]
	 * 
	*/
    void TimeToCollisionConditionTargetImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
    void TimeToCollisionConditionTargetImpl::SetEntityRef(std::shared_ptr<IEntityRef>& entityRef )
    {
        _entityRef = entityRef;
    }

    void TimeToCollisionConditionTargetImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TimeToCollisionConditionTargetImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimeToCollisionConditionTargetImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
            const auto kEntityRef =  GetEntityRef();
            if (kEntityRef)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kEntityRef));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimeToCollisionConditionTargetImpl TimeToCollisionConditionTargetImpl::Clone()
    {
        TimeToCollisionConditionTargetImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        const auto kEntityRef =  GetEntityRef();
        if (kEntityRef)
        {
            auto clonedChild = std::make_shared<EntityRefImpl>(std::dynamic_pointer_cast<EntityRefImpl>(kEntityRef)->Clone());
            auto clonedChildIEntityRef = std::dynamic_pointer_cast<IEntityRef>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetEntityRef(clonedChildIEntityRef);
        }
        return clonedObject;
    }




    TimingImpl::TimingImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SCALE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__OFFSET, typeid(double).name());
    }

    ReferenceContext TimingImpl::GetDomainAbsoluteRelative()
    {
        return _domainAbsoluteRelative;
    }
    double TimingImpl::GetScale()
    {
        return _scale;
    }
    double TimingImpl::GetOffset()
    {
        return _offset;
    }

	/**
	 * Sets the value of model property domainAbsoluteRelative
	 * @param domainAbsoluteRelative from OpenSCENARIO class model specification: [Definition of time value context as either 
	 * absolute or relative.]
	 * 
	*/
    void TimingImpl::SetDomainAbsoluteRelative(ReferenceContext& domainAbsoluteRelative )
    {
        _domainAbsoluteRelative = domainAbsoluteRelative;
    }
	/**
	 * Sets the value of model property scale
	 * @param scale from OpenSCENARIO class model specification: [Scaling factor for time values. While values smaller than 1.0
	 * represent negative scaling, values larger than 1.0 will , result in positive scaling. A value of 1.0 means no scaling. 
	 * Range: ]0..inf[.]
	 * 
	*/
    void TimingImpl::SetScale(double& scale )
    {
        _scale = scale;
    }
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Introduction of a global offset for all time values. Unit: 
	 * s; Range: ]-inf..inf[.]
	 * 
	*/
    void TimingImpl::SetOffset(double& offset )
    {
        _offset = offset;
    }

    void TimingImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE)
        {
            // Enumeration Type
            const auto kResult = ReferenceContext::GetFromLiteral(parameterLiteralValue);
            if (kResult != ReferenceContext::UNKNOWN)
            {
                _domainAbsoluteRelative = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SCALE)
        {
            // Simple type
            _scale = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__OFFSET)
        {
            // Simple type
            _offset = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TimingImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TimingImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TimingImpl TimingImpl::Clone()
    {
        TimingImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetDomainAbsoluteRelative(_domainAbsoluteRelative);
        // Simple type
        clonedObject.SetScale(_scale);
        // Simple type
        clonedObject.SetOffset(_offset);
        // clone children
        return clonedObject;
    }




    TrafficActionImpl::TrafficActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ITrafficSourceAction> TrafficActionImpl::GetTrafficSourceAction()
    {
        return _trafficSourceAction;
    }
    std::shared_ptr<ITrafficSinkAction> TrafficActionImpl::GetTrafficSinkAction()
    {
        return _trafficSinkAction;
    }
    std::shared_ptr<ITrafficSwarmAction> TrafficActionImpl::GetTrafficSwarmAction()
    {
        return _trafficSwarmAction;
    }

	/**
	 * Sets the value of model property trafficSourceAction
	 * @param trafficSourceAction from OpenSCENARIO class model specification: [Defines a source of traffic at a specific 
	 * position.]
	 * 
	*/
    void TrafficActionImpl::SetTrafficSourceAction(std::shared_ptr<ITrafficSourceAction>& trafficSourceAction )
    {
        _trafficSourceAction = trafficSourceAction;
    }
	/**
	 * Sets the value of model property trafficSinkAction
	 * @param trafficSinkAction from OpenSCENARIO class model specification: [Defines a sink of traffic at a specific 
	 * position.]
	 * 
	*/
    void TrafficActionImpl::SetTrafficSinkAction(std::shared_ptr<ITrafficSinkAction>& trafficSinkAction )
    {
        _trafficSinkAction = trafficSinkAction;
    }
	/**
	 * Sets the value of model property trafficSwarmAction
	 * @param trafficSwarmAction from OpenSCENARIO class model specification: [Defines swarm traffic around a given central 
	 * entity.]
	 * 
	*/
    void TrafficActionImpl::SetTrafficSwarmAction(std::shared_ptr<ITrafficSwarmAction>& trafficSwarmAction )
    {
        _trafficSwarmAction = trafficSwarmAction;
    }

    void TrafficActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TrafficActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTrafficSourceAction =  GetTrafficSourceAction();
            if (kTrafficSourceAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSourceAction));
            }
            const auto kTrafficSinkAction =  GetTrafficSinkAction();
            if (kTrafficSinkAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSinkAction));
            }
            const auto kTrafficSwarmAction =  GetTrafficSwarmAction();
            if (kTrafficSwarmAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSwarmAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficActionImpl TrafficActionImpl::Clone()
    {
        TrafficActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kTrafficSourceAction =  GetTrafficSourceAction();
        if (kTrafficSourceAction)
        {
            auto clonedChild = std::make_shared<TrafficSourceActionImpl>(std::dynamic_pointer_cast<TrafficSourceActionImpl>(kTrafficSourceAction)->Clone());
            auto clonedChildITrafficSourceAction = std::dynamic_pointer_cast<ITrafficSourceAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSourceAction(clonedChildITrafficSourceAction);
        }
        const auto kTrafficSinkAction =  GetTrafficSinkAction();
        if (kTrafficSinkAction)
        {
            auto clonedChild = std::make_shared<TrafficSinkActionImpl>(std::dynamic_pointer_cast<TrafficSinkActionImpl>(kTrafficSinkAction)->Clone());
            auto clonedChildITrafficSinkAction = std::dynamic_pointer_cast<ITrafficSinkAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSinkAction(clonedChildITrafficSinkAction);
        }
        const auto kTrafficSwarmAction =  GetTrafficSwarmAction();
        if (kTrafficSwarmAction)
        {
            auto clonedChild = std::make_shared<TrafficSwarmActionImpl>(std::dynamic_pointer_cast<TrafficSwarmActionImpl>(kTrafficSwarmAction)->Clone());
            auto clonedChildITrafficSwarmAction = std::dynamic_pointer_cast<ITrafficSwarmAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSwarmAction(clonedChildITrafficSwarmAction);
        }
        return clonedObject;
    }




    TrafficDefinitionImpl::TrafficDefinitionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
    }

    std::string TrafficDefinitionImpl::GetName()
    {
        return _name;
    }
    std::shared_ptr<IVehicleCategoryDistribution> TrafficDefinitionImpl::GetVehicleCategoryDistribution()
    {
        return _vehicleCategoryDistribution;
    }
    std::shared_ptr<IControllerDistribution> TrafficDefinitionImpl::GetControllerDistribution()
    {
        return _controllerDistribution;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the traffic definition.]
	 * 
	*/
    void TrafficDefinitionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property vehicleCategoryDistribution
	 * @param vehicleCategoryDistribution from OpenSCENARIO class model specification: [Distribution of vehicle categories 
	 * within the traffic.]
	 * 
	*/
    void TrafficDefinitionImpl::SetVehicleCategoryDistribution(std::shared_ptr<IVehicleCategoryDistribution>& vehicleCategoryDistribution )
    {
        _vehicleCategoryDistribution = vehicleCategoryDistribution;
    }
	/**
	 * Sets the value of model property controllerDistribution
	 * @param controllerDistribution from OpenSCENARIO class model specification: [Distribution of controllers within this 
	 * traffic.]
	 * 
	*/
    void TrafficDefinitionImpl::SetControllerDistribution(std::shared_ptr<IControllerDistribution>& controllerDistribution )
    {
        _controllerDistribution = controllerDistribution;
    }

    void TrafficDefinitionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficDefinitionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficDefinitionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kVehicleCategoryDistribution =  GetVehicleCategoryDistribution();
            if (kVehicleCategoryDistribution)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kVehicleCategoryDistribution));
            }
            const auto kControllerDistribution =  GetControllerDistribution();
            if (kControllerDistribution)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kControllerDistribution));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficDefinitionImpl TrafficDefinitionImpl::Clone()
    {
        TrafficDefinitionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // clone children
        const auto kVehicleCategoryDistribution =  GetVehicleCategoryDistribution();
        if (kVehicleCategoryDistribution)
        {
            auto clonedChild = std::make_shared<VehicleCategoryDistributionImpl>(std::dynamic_pointer_cast<VehicleCategoryDistributionImpl>(kVehicleCategoryDistribution)->Clone());
            auto clonedChildIVehicleCategoryDistribution = std::dynamic_pointer_cast<IVehicleCategoryDistribution>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetVehicleCategoryDistribution(clonedChildIVehicleCategoryDistribution);
        }
        const auto kControllerDistribution =  GetControllerDistribution();
        if (kControllerDistribution)
        {
            auto clonedChild = std::make_shared<ControllerDistributionImpl>(std::dynamic_pointer_cast<ControllerDistributionImpl>(kControllerDistribution)->Clone());
            auto clonedChildIControllerDistribution = std::dynamic_pointer_cast<IControllerDistribution>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetControllerDistribution(clonedChildIControllerDistribution);
        }
        return clonedObject;
    }




    TrafficSignalActionImpl::TrafficSignalActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ITrafficSignalControllerAction> TrafficSignalActionImpl::GetTrafficSignalControllerAction()
    {
        return _trafficSignalControllerAction;
    }
    std::shared_ptr<ITrafficSignalStateAction> TrafficSignalActionImpl::GetTrafficSignalStateAction()
    {
        return _trafficSignalStateAction;
    }

	/**
	 * Sets the value of model property trafficSignalControllerAction
	 * @param trafficSignalControllerAction from OpenSCENARIO class model specification: [Action used to control the state of a
	 * signal.]
	 * 
	*/
    void TrafficSignalActionImpl::SetTrafficSignalControllerAction(std::shared_ptr<ITrafficSignalControllerAction>& trafficSignalControllerAction )
    {
        _trafficSignalControllerAction = trafficSignalControllerAction;
    }
	/**
	 * Sets the value of model property trafficSignalStateAction
	 * @param trafficSignalStateAction from OpenSCENARIO class model specification: [Action used to set a specific phase of a 
	 * signal controller.]
	 * 
	*/
    void TrafficSignalActionImpl::SetTrafficSignalStateAction(std::shared_ptr<ITrafficSignalStateAction>& trafficSignalStateAction )
    {
        _trafficSignalStateAction = trafficSignalStateAction;
    }

    void TrafficSignalActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TrafficSignalActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kTrafficSignalControllerAction =  GetTrafficSignalControllerAction();
            if (kTrafficSignalControllerAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSignalControllerAction));
            }
            const auto kTrafficSignalStateAction =  GetTrafficSignalStateAction();
            if (kTrafficSignalStateAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficSignalStateAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalActionImpl TrafficSignalActionImpl::Clone()
    {
        TrafficSignalActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kTrafficSignalControllerAction =  GetTrafficSignalControllerAction();
        if (kTrafficSignalControllerAction)
        {
            auto clonedChild = std::make_shared<TrafficSignalControllerActionImpl>(std::dynamic_pointer_cast<TrafficSignalControllerActionImpl>(kTrafficSignalControllerAction)->Clone());
            auto clonedChildITrafficSignalControllerAction = std::dynamic_pointer_cast<ITrafficSignalControllerAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSignalControllerAction(clonedChildITrafficSignalControllerAction);
        }
        const auto kTrafficSignalStateAction =  GetTrafficSignalStateAction();
        if (kTrafficSignalStateAction)
        {
            auto clonedChild = std::make_shared<TrafficSignalStateActionImpl>(std::dynamic_pointer_cast<TrafficSignalStateActionImpl>(kTrafficSignalStateAction)->Clone());
            auto clonedChildITrafficSignalStateAction = std::dynamic_pointer_cast<ITrafficSignalStateAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficSignalStateAction(clonedChildITrafficSignalStateAction);
        }
        return clonedObject;
    }




    TrafficSignalConditionImpl::TrafficSignalConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STATE, typeid(std::string).name());
    }

    std::string TrafficSignalConditionImpl::GetName()
    {
        return _name;
    }
    std::string TrafficSignalConditionImpl::GetState()
    {
        return _state;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of the referenced signal defined in a road network. The 
	 * signal ID must be listed in the TrafficSignal list of the , RoadNetwork section.]
	 * 
	*/
    void TrafficSignalConditionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [State of the signal to be reached for the condition to become
	 * true.]
	 * 
	*/
    void TrafficSignalConditionImpl::SetState(std::string& state )
    {
        _state = state;
    }

    void TrafficSignalConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STATE)
        {
            // Simple type
            _state = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSignalConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalConditionImpl TrafficSignalConditionImpl::Clone()
    {
        TrafficSignalConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetState(_state);
        // clone children
        return clonedObject;
    }




    TrafficSignalControllerImpl::TrafficSignalControllerImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DELAY, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__REFERENCE, typeid(std::string).name());
    }

    std::string TrafficSignalControllerImpl::GetName()
    {
        return _name;
    }
    double TrafficSignalControllerImpl::GetDelay()
    {
        return _delay;
    }
    std::string TrafficSignalControllerImpl::GetReference()
    {
        return _reference;
    }
    std::vector<std::shared_ptr<IPhase>> TrafficSignalControllerImpl::GetPhases()
    {
        return _phases;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of the traffic signal controller in the road network.]
	 * 
	*/
    void TrafficSignalControllerImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property delay
	 * @param delay from OpenSCENARIO class model specification: [The delay to the controller in the reference property. A 
	 * controller having a delay to another one means that its first , phase virtually starts delaytime seconds after the start
	 * of the reference's first phase. This can be used to define a , progressive signal system, but only makes sense, if the 
	 * total times of all connected controllers are the same. If delay , is set, reference is required. Unit: s; Range: 
	 * [0..inf[.]
	 * 
	*/
    void TrafficSignalControllerImpl::SetDelay(double& delay )
    {
        _delay = delay;
    }
	/**
	 * Sets the value of model property reference
	 * @param reference from OpenSCENARIO class model specification: [A reference (ID) to the connected controller in the road 
	 * network. If reference is set, a delay is required.]
	 * 
	*/
    void TrafficSignalControllerImpl::SetReference(std::string& reference )
    {
        _reference = reference;
    }
	/**
	 * Sets the value of model property phases
	 * @param phases from OpenSCENARIO class model specification: [Phases of a TrafficSignalController.]
	 * 
	*/
    void TrafficSignalControllerImpl::SetPhases(std::vector<std::shared_ptr<IPhase>>& phases)
    {
        _phases = phases;
    }

    void TrafficSignalControllerImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DELAY)
        {
            // Simple type
            _delay = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__REFERENCE)
        {
            // Simple type
            _reference = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSignalControllerImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalControllerImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto phases =  GetPhases();
            if (!phases.empty())
            {
                for(auto&& item : phases)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalControllerImpl TrafficSignalControllerImpl::Clone()
    {
        TrafficSignalControllerImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetDelay(_delay);
        // Simple type
        clonedObject.SetReference(_reference);
        // clone children
        const auto kPhases =  GetPhases();
        if (!kPhases.empty())
        {
            std::vector<std::shared_ptr<IPhase>> clonedList;
            for(auto&& kItem : kPhases)
            {
                auto clonedChild = std::make_shared <PhaseImpl>(std::dynamic_pointer_cast<PhaseImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetPhases(clonedList);
        }
        return clonedObject;
    }




    TrafficSignalControllerActionImpl::TrafficSignalControllerActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PHASE, typeid(std::string).name());
    }

    INamedReference<ITrafficSignalController>* TrafficSignalControllerActionImpl::GetTrafficSignalControllerRef()
    {
        return &_trafficSignalControllerRef;
    }
    std::string TrafficSignalControllerActionImpl::GetPhase()
    {
        return _phase;
    }
    std::vector<std::shared_ptr<IPhase>> TrafficSignalControllerActionImpl::GetPhaseRef()
    {
        return _phaseRef;
    }

	/**
	 * Sets the value of model property trafficSignalControllerRef
	 * @param trafficSignalControllerRef from OpenSCENARIO class model specification: [ID of the signal controller in a road 
	 * network.]
	 * 
	*/
    void TrafficSignalControllerActionImpl::SetTrafficSignalControllerRef(NamedReferenceProxy<ITrafficSignalController>& trafficSignalControllerRef )
    {
        _trafficSignalControllerRef = trafficSignalControllerRef;
    }
	/**
	 * Sets the value of model property phase
	 * @param phase from OpenSCENARIO class model specification: [Targeted phase of the signal controller. The available phases
	 * are defined in type RoadNetwork under the property , trafficSignalControllers.]
	 * 
	*/
    void TrafficSignalControllerActionImpl::SetPhase(std::string& phase )
    {
        _phase = phase;
    }
	/**
	 * Sets the value of model property phaseRef
	 * @param phaseRef from OpenSCENARIO class model specification: [The reference to the phase (phase is the referential key 
	 * in the referenced TrafficSignalController).]
	 * 
	*/
    void TrafficSignalControllerActionImpl::SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef)
    {
        _phaseRef = phaseRef;
    }

    void TrafficSignalControllerActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF)
        {
            // Proxy
            _trafficSignalControllerRef = NamedReferenceProxy<ITrafficSignalController>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PHASE)
        {
            // Simple type
            _phase = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSignalControllerActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalControllerActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalControllerActionImpl TrafficSignalControllerActionImpl::Clone()
    {
        TrafficSignalControllerActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _trafficSignalControllerRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetTrafficSignalControllerRef(proxy);
        // Simple type
        clonedObject.SetPhase(_phase);
        // clone children
        return clonedObject;
    }




    TrafficSignalControllerConditionImpl::TrafficSignalControllerConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__PHASE, typeid(std::string).name());
    }

    INamedReference<ITrafficSignalController>* TrafficSignalControllerConditionImpl::GetTrafficSignalControllerRef()
    {
        return &_trafficSignalControllerRef;
    }
    std::string TrafficSignalControllerConditionImpl::GetPhase()
    {
        return _phase;
    }
    std::vector<std::shared_ptr<IPhase>> TrafficSignalControllerConditionImpl::GetPhaseRef()
    {
        return _phaseRef;
    }

	/**
	 * Sets the value of model property trafficSignalControllerRef
	 * @param trafficSignalControllerRef from OpenSCENARIO class model specification: [ID of the referenced signal controller 
	 * in a road network.]
	 * 
	*/
    void TrafficSignalControllerConditionImpl::SetTrafficSignalControllerRef(NamedReferenceProxy<ITrafficSignalController>& trafficSignalControllerRef )
    {
        _trafficSignalControllerRef = trafficSignalControllerRef;
    }
	/**
	 * Sets the value of model property phase
	 * @param phase from OpenSCENARIO class model specification: [Name of the phase of the signal controller to be reached for 
	 * the condition to become true. The available phases are , defined in type RoadNetwork under the property 
	 * trafficSignalControllers.]
	 * 
	*/
    void TrafficSignalControllerConditionImpl::SetPhase(std::string& phase )
    {
        _phase = phase;
    }
	/**
	 * Sets the value of model property phaseRef
	 * @param phaseRef from OpenSCENARIO class model specification: [The reference to the phase (phase is the referential key 
	 * in the referenced TrafficSignalController).]
	 * 
	*/
    void TrafficSignalControllerConditionImpl::SetPhaseRef(std::vector<std::shared_ptr<IPhase>>& phaseRef)
    {
        _phaseRef = phaseRef;
    }

    void TrafficSignalControllerConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF)
        {
            // Proxy
            _trafficSignalControllerRef = NamedReferenceProxy<ITrafficSignalController>(parameterLiteralValue);
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__PHASE)
        {
            // Simple type
            _phase = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSignalControllerConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalControllerConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalControllerConditionImpl TrafficSignalControllerConditionImpl::Clone()
    {
        TrafficSignalControllerConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Proxy
        auto proxy = _trafficSignalControllerRef;
        proxy.SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
        clonedObject.SetTrafficSignalControllerRef(proxy);
        // Simple type
        clonedObject.SetPhase(_phase);
        // clone children
        return clonedObject;
    }




    TrafficSignalStateImpl::TrafficSignalStateImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STATE, typeid(std::string).name());
    }

    std::string TrafficSignalStateImpl::GetTrafficSignalId()
    {
        return _trafficSignalId;
    }
    std::string TrafficSignalStateImpl::GetState()
    {
        return _state;
    }

	/**
	 * Sets the value of model property trafficSignalId
	 * @param trafficSignalId from OpenSCENARIO class model specification: [ID of the referenced signal in a road network. The 
	 * signal ID must be listed in TrafficSignal list of the RoadNetwork.]
	 * 
	*/
    void TrafficSignalStateImpl::SetTrafficSignalId(std::string& trafficSignalId )
    {
        _trafficSignalId = trafficSignalId;
    }
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [State of the signal. The available states are listed in the 
	 * TrafficSignal list of the RoadNetwork.]
	 * 
	*/
    void TrafficSignalStateImpl::SetState(std::string& state )
    {
        _state = state;
    }

    void TrafficSignalStateImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID)
        {
            // Simple type
            _trafficSignalId = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STATE)
        {
            // Simple type
            _state = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSignalStateImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalStateImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalStateImpl TrafficSignalStateImpl::Clone()
    {
        TrafficSignalStateImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetTrafficSignalId(_trafficSignalId);
        // Simple type
        clonedObject.SetState(_state);
        // clone children
        return clonedObject;
    }




    TrafficSignalStateActionImpl::TrafficSignalStateActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__STATE, typeid(std::string).name());
    }

    std::string TrafficSignalStateActionImpl::GetName()
    {
        return _name;
    }
    std::string TrafficSignalStateActionImpl::GetState()
    {
        return _state;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of a signal in a road network. The signal ID must be listed
	 * in the TrafficSignal list of the RoadNetwork.]
	 * 
	*/
    void TrafficSignalStateActionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [Targeted state of the signal. The available states are listed
	 * in the TrafficSignal list of the RoadNetwork.]
	 * 
	*/
    void TrafficSignalStateActionImpl::SetState(std::string& state )
    {
        _state = state;
    }

    void TrafficSignalStateActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__STATE)
        {
            // Simple type
            _state = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSignalStateActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSignalStateActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSignalStateActionImpl TrafficSignalStateActionImpl::Clone()
    {
        TrafficSignalStateActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetState(_state);
        // clone children
        return clonedObject;
    }




    TrafficSinkActionImpl::TrafficSinkActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RATE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RADIUS, typeid(double).name());
    }

    double TrafficSinkActionImpl::GetRate()
    {
        return _rate;
    }
    double TrafficSinkActionImpl::GetRadius()
    {
        return _radius;
    }
    std::shared_ptr<IPosition> TrafficSinkActionImpl::GetPosition()
    {
        return _position;
    }
    std::shared_ptr<ITrafficDefinition> TrafficSinkActionImpl::GetTrafficDefinition()
    {
        return _trafficDefinition;
    }

	/**
	 * Sets the value of model property rate
	 * @param rate from OpenSCENARIO class model specification: [Defines the rate on which vehicles disappear at the sinks 
	 * location. Unit: vehicles/s Range: [0..inf[.]
	 * 
	*/
    void TrafficSinkActionImpl::SetRate(double& rate )
    {
        _rate = rate;
    }
	/**
	 * Sets the value of model property radius
	 * @param radius from OpenSCENARIO class model specification: [Defines the radius of the traffic sink where vehicles 
	 * disappear around the specified position. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void TrafficSinkActionImpl::SetRadius(double& radius )
    {
        _radius = radius;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Defines the position of the traffic sink.]
	 * 
	*/
    void TrafficSinkActionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Defines the vehicle and controller distribution 
	 * for the sink.]
	 * 
	*/
    void TrafficSinkActionImpl::SetTrafficDefinition(std::shared_ptr<ITrafficDefinition>& trafficDefinition )
    {
        _trafficDefinition = trafficDefinition;
    }

    void TrafficSinkActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RATE)
        {
            // Simple type
            _rate = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RADIUS)
        {
            // Simple type
            _radius = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSinkActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSinkActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
            const auto kTrafficDefinition =  GetTrafficDefinition();
            if (kTrafficDefinition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficDefinition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSinkActionImpl TrafficSinkActionImpl::Clone()
    {
        TrafficSinkActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetRate(_rate);
        // Simple type
        clonedObject.SetRadius(_radius);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        const auto kTrafficDefinition =  GetTrafficDefinition();
        if (kTrafficDefinition)
        {
            auto clonedChild = std::make_shared<TrafficDefinitionImpl>(std::dynamic_pointer_cast<TrafficDefinitionImpl>(kTrafficDefinition)->Clone());
            auto clonedChildITrafficDefinition = std::dynamic_pointer_cast<ITrafficDefinition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficDefinition(clonedChildITrafficDefinition);
        }
        return clonedObject;
    }




    TrafficSourceActionImpl::TrafficSourceActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RATE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RADIUS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, typeid(double).name());
    }

    double TrafficSourceActionImpl::GetRate()
    {
        return _rate;
    }
    double TrafficSourceActionImpl::GetRadius()
    {
        return _radius;
    }
    double TrafficSourceActionImpl::GetVelocity()
    {
        return _velocity;
    }
    std::shared_ptr<IPosition> TrafficSourceActionImpl::GetPosition()
    {
        return _position;
    }
    std::shared_ptr<ITrafficDefinition> TrafficSourceActionImpl::GetTrafficDefinition()
    {
        return _trafficDefinition;
    }

	/**
	 * Sets the value of model property rate
	 * @param rate from OpenSCENARIO class model specification: [Defines the rate on which vehicles appear at the source 
	 * location. Unit: vehicles/s. Range: [0..inf[.]
	 * 
	*/
    void TrafficSourceActionImpl::SetRate(double& rate )
    {
        _rate = rate;
    }
	/**
	 * Sets the value of model property radius
	 * @param radius from OpenSCENARIO class model specification: [Defines the radius of the traffic source where vehicles 
	 * appear around the specific position. Unit: m. Range: [0..inf[.]
	 * 
	*/
    void TrafficSourceActionImpl::SetRadius(double& radius )
    {
        _radius = radius;
    }
	/**
	 * Sets the value of model property velocity
	 * @param velocity from OpenSCENARIO class model specification: [The optional starting velocity of a scenario object. Unit:
	 * m/s; Range: [0..inf[.]
	 * 
	*/
    void TrafficSourceActionImpl::SetVelocity(double& velocity )
    {
        _velocity = velocity;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Defines the position of the traffic source.]
	 * 
	*/
    void TrafficSourceActionImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Defines the vehicle and controller distribution 
	 * for the source.]
	 * 
	*/
    void TrafficSourceActionImpl::SetTrafficDefinition(std::shared_ptr<ITrafficDefinition>& trafficDefinition )
    {
        _trafficDefinition = trafficDefinition;
    }

    void TrafficSourceActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RATE)
        {
            // Simple type
            _rate = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RADIUS)
        {
            // Simple type
            _radius = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VELOCITY)
        {
            // Simple type
            _velocity = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSourceActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSourceActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
            const auto kTrafficDefinition =  GetTrafficDefinition();
            if (kTrafficDefinition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficDefinition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSourceActionImpl TrafficSourceActionImpl::Clone()
    {
        TrafficSourceActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetRate(_rate);
        // Simple type
        clonedObject.SetRadius(_radius);
        // Simple type
        clonedObject.SetVelocity(_velocity);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        const auto kTrafficDefinition =  GetTrafficDefinition();
        if (kTrafficDefinition)
        {
            auto clonedChild = std::make_shared<TrafficDefinitionImpl>(std::dynamic_pointer_cast<TrafficDefinitionImpl>(kTrafficDefinition)->Clone());
            auto clonedChildITrafficDefinition = std::dynamic_pointer_cast<ITrafficDefinition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficDefinition(clonedChildITrafficDefinition);
        }
        return clonedObject;
    }




    TrafficSwarmActionImpl::TrafficSwarmActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__OFFSET, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, typeid(unsigned int).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VELOCITY, typeid(double).name());
    }

    double TrafficSwarmActionImpl::GetSemiMajorAxis()
    {
        return _semiMajorAxis;
    }
    double TrafficSwarmActionImpl::GetSemiMinorAxis()
    {
        return _semiMinorAxis;
    }
    double TrafficSwarmActionImpl::GetInnerRadius()
    {
        return _innerRadius;
    }
    double TrafficSwarmActionImpl::GetOffset()
    {
        return _offset;
    }
    unsigned int TrafficSwarmActionImpl::GetNumberOfVehicles()
    {
        return _numberOfVehicles;
    }
    double TrafficSwarmActionImpl::GetVelocity()
    {
        return _velocity;
    }
    std::shared_ptr<ICentralSwarmObject> TrafficSwarmActionImpl::GetCentralObject()
    {
        return _centralObject;
    }
    std::shared_ptr<ITrafficDefinition> TrafficSwarmActionImpl::GetTrafficDefinition()
    {
        return _trafficDefinition;
    }

	/**
	 * Sets the value of model property semiMajorAxis
	 * @param semiMajorAxis from OpenSCENARIO class model specification: [Shape of the swarm traffic distribution area is given
	 * as an ellipsis around a central entity. SemiMajorAxis defines the , half length of the major axis of this ellipsis. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetSemiMajorAxis(double& semiMajorAxis )
    {
        _semiMajorAxis = semiMajorAxis;
    }
	/**
	 * Sets the value of model property semiMinorAxis
	 * @param semiMinorAxis from OpenSCENARIO class model specification: [Shape of the swarm traffic distribution area is given
	 * as an ellipsis around a central entity. SemiMinorAxis defines the , half length of the minor axis of this ellipsis. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetSemiMinorAxis(double& semiMinorAxis )
    {
        _semiMinorAxis = semiMinorAxis;
    }
	/**
	 * Sets the value of model property innerRadius
	 * @param innerRadius from OpenSCENARIO class model specification: [Radius of the inner circular area around the central 
	 * entity. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetInnerRadius(double& innerRadius )
    {
        _innerRadius = innerRadius;
    }
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Offset in longitudinal direction related to the x-axis of 
	 * the central entity. Unit: m;.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetOffset(double& offset )
    {
        _offset = offset;
    }
	/**
	 * Sets the value of model property numberOfVehicles
	 * @param numberOfVehicles from OpenSCENARIO class model specification: [The maximum number of vehicles surrounding the 
	 * central entity. Depending on the current road situation less than , numberOfVehicles might be set up. Range: [0..inf[.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetNumberOfVehicles(unsigned int& numberOfVehicles )
    {
        _numberOfVehicles = numberOfVehicles;
    }
	/**
	 * Sets the value of model property velocity
	 * @param velocity from OpenSCENARIO class model specification: [The optional starting velocity of a created entity. Unit: 
	 * m/s; Range: [0..inf[.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetVelocity(double& velocity )
    {
        _velocity = velocity;
    }
	/**
	 * Sets the value of model property centralObject
	 * @param centralObject from OpenSCENARIO class model specification: [The entity that represents the center of a swarm.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetCentralObject(std::shared_ptr<ICentralSwarmObject>& centralObject )
    {
        _centralObject = centralObject;
    }
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Specifies properties of autonomous traffic with 
	 * respect to vehicle and driver distributions.]
	 * 
	*/
    void TrafficSwarmActionImpl::SetTrafficDefinition(std::shared_ptr<ITrafficDefinition>& trafficDefinition )
    {
        _trafficDefinition = trafficDefinition;
    }

    void TrafficSwarmActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS)
        {
            // Simple type
            _semiMajorAxis = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS)
        {
            // Simple type
            _semiMinorAxis = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS)
        {
            // Simple type
            _innerRadius = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__OFFSET)
        {
            // Simple type
            _offset = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES)
        {
            // Simple type
            _numberOfVehicles = ParserHelper::ParseUnsignedInt(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VELOCITY)
        {
            // Simple type
            _velocity = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrafficSwarmActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrafficSwarmActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kCentralObject =  GetCentralObject();
            if (kCentralObject)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCentralObject));
            }
            const auto kTrafficDefinition =  GetTrafficDefinition();
            if (kTrafficDefinition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kTrafficDefinition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrafficSwarmActionImpl TrafficSwarmActionImpl::Clone()
    {
        TrafficSwarmActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetSemiMajorAxis(_semiMajorAxis);
        // Simple type
        clonedObject.SetSemiMinorAxis(_semiMinorAxis);
        // Simple type
        clonedObject.SetInnerRadius(_innerRadius);
        // Simple type
        clonedObject.SetOffset(_offset);
        // Simple type
        clonedObject.SetNumberOfVehicles(_numberOfVehicles);
        // Simple type
        clonedObject.SetVelocity(_velocity);
        // clone children
        const auto kCentralObject =  GetCentralObject();
        if (kCentralObject)
        {
            auto clonedChild = std::make_shared<CentralSwarmObjectImpl>(std::dynamic_pointer_cast<CentralSwarmObjectImpl>(kCentralObject)->Clone());
            auto clonedChildICentralSwarmObject = std::dynamic_pointer_cast<ICentralSwarmObject>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCentralObject(clonedChildICentralSwarmObject);
        }
        const auto kTrafficDefinition =  GetTrafficDefinition();
        if (kTrafficDefinition)
        {
            auto clonedChild = std::make_shared<TrafficDefinitionImpl>(std::dynamic_pointer_cast<TrafficDefinitionImpl>(kTrafficDefinition)->Clone());
            auto clonedChildITrafficDefinition = std::dynamic_pointer_cast<ITrafficDefinition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetTrafficDefinition(clonedChildITrafficDefinition);
        }
        return clonedObject;
    }




    TrajectoryImpl::TrajectoryImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CLOSED, typeid(bool).name());
    }

    std::string TrajectoryImpl::GetName()
    {
        return _name;
    }
    bool TrajectoryImpl::GetClosed()
    {
        return _closed;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> TrajectoryImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<IShape> TrajectoryImpl::GetShape()
    {
        return _shape;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the trajectory type. Required if used in catalog.]
	 * 
	*/
    void TrajectoryImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property closed
	 * @param closed from OpenSCENARIO class model specification: [True if trajectory is closed.]
	 * 
	*/
    void TrajectoryImpl::SetClosed(bool& closed )
    {
        _closed = closed;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void TrajectoryImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property shape
	 * @param shape from OpenSCENARIO class model specification: [The shape of a trajectory (Polyline, Clothoid or Nurbs)]
	 * 
	*/
    void TrajectoryImpl::SetShape(std::shared_ptr<IShape>& shape )
    {
        _shape = shape;
    }

    void TrajectoryImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CLOSED)
        {
            // Simple type
            _closed = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TrajectoryImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool TrajectoryImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> TrajectoryImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrajectoryImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kShape =  GetShape();
            if (kShape)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kShape));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrajectoryImpl TrajectoryImpl::Clone()
    {
        TrajectoryImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetClosed(_closed);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kShape =  GetShape();
        if (kShape)
        {
            auto clonedChild = std::make_shared<ShapeImpl>(std::dynamic_pointer_cast<ShapeImpl>(kShape)->Clone());
            auto clonedChildIShape = std::dynamic_pointer_cast<IShape>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetShape(clonedChildIShape);
        }
        return clonedObject;
    }




    TrajectoryCatalogLocationImpl::TrajectoryCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> TrajectoryCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
    void TrajectoryCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void TrajectoryCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TrajectoryCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrajectoryCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrajectoryCatalogLocationImpl TrajectoryCatalogLocationImpl::Clone()
    {
        TrajectoryCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    TrajectoryFollowingModeImpl::TrajectoryFollowingModeImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, typeid(std::string).name());
    }

    FollowingMode TrajectoryFollowingModeImpl::GetFollowingMode()
    {
        return _followingMode;
    }

	/**
	 * Sets the value of model property followingMode
	 * @param followingMode from OpenSCENARIO class model specification: [Defines (lateral) trajectory following behavior of 
	 * the actor: Mode 'position' forces the actor to strictly adhere to the, trajectory. In contrast, mode 'follow' hands over
	 * control to the actor. In this mode, the actor tries to follow the , trajectory as best as he can. This may be restricted
	 * by dynamics constraints and/or control loop implementation.]
	 * 
	*/
    void TrajectoryFollowingModeImpl::SetFollowingMode(FollowingMode& followingMode )
    {
        _followingMode = followingMode;
    }

    void TrajectoryFollowingModeImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE)
        {
            // Enumeration Type
            const auto kResult = FollowingMode::GetFromLiteral(parameterLiteralValue);
            if (kResult != FollowingMode::UNKNOWN)
            {
                _followingMode = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string TrajectoryFollowingModeImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TrajectoryFollowingModeImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TrajectoryFollowingModeImpl TrajectoryFollowingModeImpl::Clone()
    {
        TrajectoryFollowingModeImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetFollowingMode(_followingMode);
        // clone children
        return clonedObject;
    }




    TransitionDynamicsImpl::TransitionDynamicsImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, typeid(std::string).name());
    }

    DynamicsShape TransitionDynamicsImpl::GetDynamicsShape()
    {
        return _dynamicsShape;
    }
    double TransitionDynamicsImpl::GetValue()
    {
        return _value;
    }
    DynamicsDimension TransitionDynamicsImpl::GetDynamicsDimension()
    {
        return _dynamicsDimension;
    }

	/**
	 * Sets the value of model property dynamicsShape
	 * @param dynamicsShape from OpenSCENARIO class model specification: [The shape of the transition function f(x) between 
	 * current and target value.]
	 * 
	*/
    void TransitionDynamicsImpl::SetDynamicsShape(DynamicsShape& dynamicsShape )
    {
        _dynamicsShape = dynamicsShape;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The value for a predefined rate (Unit: delta/s), time (Unit: 
	 * s) or distance (Unit: m) to acquire the target value. , Range: [0..inf[.]
	 * 
	*/
    void TransitionDynamicsImpl::SetValue(double& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property dynamicsDimension
	 * @param dynamicsDimension from OpenSCENARIO class model specification: [The semantics of the value: 'rate', 'time' or 
	 * 'distance'.]
	 * 
	*/
    void TransitionDynamicsImpl::SetDynamicsDimension(DynamicsDimension& dynamicsDimension )
    {
        _dynamicsDimension = dynamicsDimension;
    }

    void TransitionDynamicsImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE)
        {
            // Enumeration Type
            const auto kResult = DynamicsShape::GetFromLiteral(parameterLiteralValue);
            if (kResult != DynamicsShape::UNKNOWN)
            {
                _dynamicsShape = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION)
        {
            // Enumeration Type
            const auto kResult = DynamicsDimension::GetFromLiteral(parameterLiteralValue);
            if (kResult != DynamicsDimension::UNKNOWN)
            {
                _dynamicsDimension = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string TransitionDynamicsImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TransitionDynamicsImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TransitionDynamicsImpl TransitionDynamicsImpl::Clone()
    {
        TransitionDynamicsImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetDynamicsShape(_dynamicsShape);
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetDynamicsDimension(_dynamicsDimension);
        // clone children
        return clonedObject;
    }




    TraveledDistanceConditionImpl::TraveledDistanceConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(double).name());
    }

    double TraveledDistanceConditionImpl::GetValue()
    {
        return _value;
    }

	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Amount of traveled distance. Unit: m; Range: [0..inf[.]
	 * 
	*/
    void TraveledDistanceConditionImpl::SetValue(double& value )
    {
        _value = value;
    }

    void TraveledDistanceConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string TraveledDistanceConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TraveledDistanceConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TraveledDistanceConditionImpl TraveledDistanceConditionImpl::Clone()
    {
        TraveledDistanceConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetValue(_value);
        // clone children
        return clonedObject;
    }




    TriggerImpl::TriggerImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IConditionGroup>> TriggerImpl::GetConditionGroups()
    {
        return _conditionGroups;
    }

	/**
	 * Sets the value of model property conditionGroups
	 * @param conditionGroups from OpenSCENARIO class model specification: [List of condition groups as a container of 
	 * conditions.]
	 * 
	*/
    void TriggerImpl::SetConditionGroups(std::vector<std::shared_ptr<IConditionGroup>>& conditionGroups)
    {
        _conditionGroups = conditionGroups;
    }

    void TriggerImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string TriggerImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TriggerImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto conditionGroups =  GetConditionGroups();
            if (!conditionGroups.empty())
            {
                for(auto&& item : conditionGroups)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TriggerImpl TriggerImpl::Clone()
    {
        TriggerImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kConditionGroups =  GetConditionGroups();
        if (!kConditionGroups.empty())
        {
            std::vector<std::shared_ptr<IConditionGroup>> clonedList;
            for(auto&& kItem : kConditionGroups)
            {
                auto clonedChild = std::make_shared <ConditionGroupImpl>(std::dynamic_pointer_cast<ConditionGroupImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetConditionGroups(clonedList);
        }
        return clonedObject;
    }




    TriggeringEntitiesImpl::TriggeringEntitiesImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, typeid(std::string).name());
    }

    TriggeringEntitiesRule TriggeringEntitiesImpl::GetTriggeringEntitiesRule()
    {
        return _triggeringEntitiesRule;
    }
    std::vector<std::shared_ptr<IEntityRef>> TriggeringEntitiesImpl::GetEntityRefs()
    {
        return _entityRefs;
    }

	/**
	 * Sets the value of model property triggeringEntitiesRule
	 * @param triggeringEntitiesRule from OpenSCENARIO class model specification: [All or any.]
	 * 
	*/
    void TriggeringEntitiesImpl::SetTriggeringEntitiesRule(TriggeringEntitiesRule& triggeringEntitiesRule )
    {
        _triggeringEntitiesRule = triggeringEntitiesRule;
    }
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [List of referenced entities that trigger the condition.]
	 * 
	*/
    void TriggeringEntitiesImpl::SetEntityRefs(std::vector<std::shared_ptr<IEntityRef>>& entityRefs)
    {
        _entityRefs = entityRefs;
    }

    void TriggeringEntitiesImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE)
        {
            // Enumeration Type
            const auto kResult = TriggeringEntitiesRule::GetFromLiteral(parameterLiteralValue);
            if (kResult != TriggeringEntitiesRule::UNKNOWN)
            {
                _triggeringEntitiesRule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string TriggeringEntitiesImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> TriggeringEntitiesImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto entityRefs =  GetEntityRefs();
            if (!entityRefs.empty())
            {
                for(auto&& item : entityRefs)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    TriggeringEntitiesImpl TriggeringEntitiesImpl::Clone()
    {
        TriggeringEntitiesImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetTriggeringEntitiesRule(_triggeringEntitiesRule);
        // clone children
        const auto kEntityRefs =  GetEntityRefs();
        if (!kEntityRefs.empty())
        {
            std::vector<std::shared_ptr<IEntityRef>> clonedList;
            for(auto&& kItem : kEntityRefs)
            {
                auto clonedChild = std::make_shared <EntityRefImpl>(std::dynamic_pointer_cast<EntityRefImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetEntityRefs(clonedList);
        }
        return clonedObject;
    }




    UserDefinedActionImpl::UserDefinedActionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<ICustomCommandAction> UserDefinedActionImpl::GetCustomCommandAction()
    {
        return _customCommandAction;
    }

	/**
	 * Sets the value of model property customCommandAction
	 * @param customCommandAction from OpenSCENARIO class model specification: [The available commands are subject of a 
	 * contract between simulation environment provider and scenario author.]
	 * 
	*/
    void UserDefinedActionImpl::SetCustomCommandAction(std::shared_ptr<ICustomCommandAction>& customCommandAction )
    {
        _customCommandAction = customCommandAction;
    }

    void UserDefinedActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string UserDefinedActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> UserDefinedActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kCustomCommandAction =  GetCustomCommandAction();
            if (kCustomCommandAction)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kCustomCommandAction));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    UserDefinedActionImpl UserDefinedActionImpl::Clone()
    {
        UserDefinedActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kCustomCommandAction =  GetCustomCommandAction();
        if (kCustomCommandAction)
        {
            auto clonedChild = std::make_shared<CustomCommandActionImpl>(std::dynamic_pointer_cast<CustomCommandActionImpl>(kCustomCommandAction)->Clone());
            auto clonedChildICustomCommandAction = std::dynamic_pointer_cast<ICustomCommandAction>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetCustomCommandAction(clonedChildICustomCommandAction);
        }
        return clonedObject;
    }




    UserDefinedValueConditionImpl::UserDefinedValueConditionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VALUE, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__RULE, typeid(std::string).name());
    }

    std::string UserDefinedValueConditionImpl::GetName()
    {
        return _name;
    }
    std::string UserDefinedValueConditionImpl::GetValue()
    {
        return _value;
    }
    Rule UserDefinedValueConditionImpl::GetRule()
    {
        return _rule;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the external value.]
	 * 
	*/
    void UserDefinedValueConditionImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Reference value the external value is compared to.]
	 * 
	*/
    void UserDefinedValueConditionImpl::SetValue(std::string& value )
    {
        _value = value;
    }
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
    void UserDefinedValueConditionImpl::SetRule(Rule& rule )
    {
        _rule = rule;
    }

    void UserDefinedValueConditionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VALUE)
        {
            // Simple type
            _value = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__RULE)
        {
            // Enumeration Type
            const auto kResult = Rule::GetFromLiteral(parameterLiteralValue);
            if (kResult != Rule::UNKNOWN)
            {
                _rule = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string UserDefinedValueConditionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> UserDefinedValueConditionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    UserDefinedValueConditionImpl UserDefinedValueConditionImpl::Clone()
    {
        UserDefinedValueConditionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Simple type
        clonedObject.SetValue(_value);
        // Enumeration Type
        clonedObject.SetRule(_rule);
        // clone children
        return clonedObject;
    }




    VehicleImpl::VehicleImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__NAME, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, typeid(std::string).name());
    }

    std::string VehicleImpl::GetName()
    {
        return _name;
    }
    VehicleCategory VehicleImpl::GetVehicleCategory()
    {
        return _vehicleCategory;
    }
    std::vector<std::shared_ptr<IParameterDeclaration>> VehicleImpl::GetParameterDeclarations()
    {
        return _parameterDeclarations;
    }
    std::shared_ptr<IBoundingBox> VehicleImpl::GetBoundingBox()
    {
        return _boundingBox;
    }
    std::shared_ptr<IPerformance> VehicleImpl::GetPerformance()
    {
        return _performance;
    }
    std::shared_ptr<IAxles> VehicleImpl::GetAxles()
    {
        return _axles;
    }
    std::shared_ptr<IProperties> VehicleImpl::GetProperties()
    {
        return _properties;
    }

	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the vehicle type.]
	 * 
	*/
    void VehicleImpl::SetName(std::string& name )
    {
        _name = name;
    }
	/**
	 * Sets the value of model property vehicleCategory
	 * @param vehicleCategory from OpenSCENARIO class model specification: [Category of the vehicle (bicycle, train,...).]
	 * 
	*/
    void VehicleImpl::SetVehicleCategory(VehicleCategory& vehicleCategory )
    {
        _vehicleCategory = vehicleCategory;
    }
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
    void VehicleImpl::SetParameterDeclarations(std::vector<std::shared_ptr<IParameterDeclaration>>& parameterDeclarations)
    {
        _parameterDeclarations = parameterDeclarations;
    }
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [The three dimensional bounding box that encloses the 
	 * vehicle.]
	 * 
	*/
    void VehicleImpl::SetBoundingBox(std::shared_ptr<IBoundingBox>& boundingBox )
    {
        _boundingBox = boundingBox;
    }
	/**
	 * Sets the value of model property performance
	 * @param performance from OpenSCENARIO class model specification: [Performance properties of the vehicle.]
	 * 
	*/
    void VehicleImpl::SetPerformance(std::shared_ptr<IPerformance>& performance )
    {
        _performance = performance;
    }
	/**
	 * Sets the value of model property axles
	 * @param axles from OpenSCENARIO class model specification: [A set of axles (front, rear, additional) and their geometric 
	 * locations.]
	 * 
	*/
    void VehicleImpl::SetAxles(std::shared_ptr<IAxles>& axles )
    {
        _axles = axles;
    }
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Additional properties as name value pairs.]
	 * 
	*/
    void VehicleImpl::SetProperties(std::shared_ptr<IProperties>& properties )
    {
        _properties = properties;
    }

    void VehicleImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__NAME)
        {
            // Simple type
            _name = ParserHelper::ParseString(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY)
        {
            // Enumeration Type
            const auto kResult = VehicleCategory::GetFromLiteral(parameterLiteralValue);
            if (kResult != VehicleCategory::UNKNOWN)
            {
                _vehicleCategory = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string VehicleImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    bool VehicleImpl::HasParameterDefinitions() 
    {
        return true;
    }

    std::vector<std::shared_ptr<ParameterValue>> VehicleImpl::GetParameterDefinitions() 
    {
        std::vector<std::shared_ptr<ParameterValue>> result;
        if (!_parameterDeclarations.empty())
        {
            for (auto&& parameterDeclaration :_parameterDeclarations)
            {
                auto parameterType = parameterDeclaration->GetParameterType().GetLiteral();
                auto parameterValue = std::make_shared<ParameterValue>(parameterDeclaration->GetName(), GetParameterType(parameterType), parameterDeclaration->GetValue());
                result.push_back(parameterValue);
            }
        }
        return result;
    }

    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> VehicleImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto parameterDeclarations =  GetParameterDeclarations();
            if (!parameterDeclarations.empty())
            {
                for(auto&& item : parameterDeclarations)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
            const auto kBoundingBox =  GetBoundingBox();
            if (kBoundingBox)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kBoundingBox));
            }
            const auto kPerformance =  GetPerformance();
            if (kPerformance)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPerformance));
            }
            const auto kAxles =  GetAxles();
            if (kAxles)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kAxles));
            }
            const auto kProperties =  GetProperties();
            if (kProperties)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kProperties));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    VehicleImpl VehicleImpl::Clone()
    {
        VehicleImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetName(_name);
        // Enumeration Type
        clonedObject.SetVehicleCategory(_vehicleCategory);
        // clone children
        const auto kParameterDeclarations =  GetParameterDeclarations();
        if (!kParameterDeclarations.empty())
        {
            std::vector<std::shared_ptr<IParameterDeclaration>> clonedList;
            for(auto&& kItem : kParameterDeclarations)
            {
                auto clonedChild = std::make_shared <ParameterDeclarationImpl>(std::dynamic_pointer_cast<ParameterDeclarationImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetParameterDeclarations(clonedList);
        }
        const auto kBoundingBox =  GetBoundingBox();
        if (kBoundingBox)
        {
            auto clonedChild = std::make_shared<BoundingBoxImpl>(std::dynamic_pointer_cast<BoundingBoxImpl>(kBoundingBox)->Clone());
            auto clonedChildIBoundingBox = std::dynamic_pointer_cast<IBoundingBox>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetBoundingBox(clonedChildIBoundingBox);
        }
        const auto kPerformance =  GetPerformance();
        if (kPerformance)
        {
            auto clonedChild = std::make_shared<PerformanceImpl>(std::dynamic_pointer_cast<PerformanceImpl>(kPerformance)->Clone());
            auto clonedChildIPerformance = std::dynamic_pointer_cast<IPerformance>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPerformance(clonedChildIPerformance);
        }
        const auto kAxles =  GetAxles();
        if (kAxles)
        {
            auto clonedChild = std::make_shared<AxlesImpl>(std::dynamic_pointer_cast<AxlesImpl>(kAxles)->Clone());
            auto clonedChildIAxles = std::dynamic_pointer_cast<IAxles>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetAxles(clonedChildIAxles);
        }
        const auto kProperties =  GetProperties();
        if (kProperties)
        {
            auto clonedChild = std::make_shared<PropertiesImpl>(std::dynamic_pointer_cast<PropertiesImpl>(kProperties)->Clone());
            auto clonedChildIProperties = std::dynamic_pointer_cast<IProperties>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetProperties(clonedChildIProperties);
        }
        return clonedObject;
    }




    VehicleCatalogLocationImpl::VehicleCatalogLocationImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::shared_ptr<IDirectory> VehicleCatalogLocationImpl::GetDirectory()
    {
        return _directory;
    }

	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
    void VehicleCatalogLocationImpl::SetDirectory(std::shared_ptr<IDirectory>& directory )
    {
        _directory = directory;
    }

    void VehicleCatalogLocationImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string VehicleCatalogLocationImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> VehicleCatalogLocationImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kDirectory =  GetDirectory();
            if (kDirectory)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kDirectory));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    VehicleCatalogLocationImpl VehicleCatalogLocationImpl::Clone()
    {
        VehicleCatalogLocationImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kDirectory =  GetDirectory();
        if (kDirectory)
        {
            auto clonedChild = std::make_shared<DirectoryImpl>(std::dynamic_pointer_cast<DirectoryImpl>(kDirectory)->Clone());
            auto clonedChildIDirectory = std::dynamic_pointer_cast<IDirectory>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetDirectory(clonedChildIDirectory);
        }
        return clonedObject;
    }




    VehicleCategoryDistributionImpl::VehicleCategoryDistributionImpl()
    {
        /**
        * Filling the property to type map
        */
    }

    std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> VehicleCategoryDistributionImpl::GetVehicleCategoryDistributionEntries()
    {
        return _vehicleCategoryDistributionEntries;
    }

	/**
	 * Sets the value of model property vehicleCategoryDistributionEntries
	 * @param vehicleCategoryDistributionEntries from OpenSCENARIO class model specification: [List of elements that pair 
	 * vehicle categories and their weight within the distribution.]
	 * 
	*/
    void VehicleCategoryDistributionImpl::SetVehicleCategoryDistributionEntries(std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>>& vehicleCategoryDistributionEntries)
    {
        _vehicleCategoryDistributionEntries = vehicleCategoryDistributionEntries;
    }

    void VehicleCategoryDistributionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
    }

    std::string VehicleCategoryDistributionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> VehicleCategoryDistributionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            auto vehicleCategoryDistributionEntries =  GetVehicleCategoryDistributionEntries();
            if (!vehicleCategoryDistributionEntries.empty())
            {
                for(auto&& item : vehicleCategoryDistributionEntries)
                {
                    result.push_back(std::dynamic_pointer_cast<BaseImpl>(item) );
                }
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    VehicleCategoryDistributionImpl VehicleCategoryDistributionImpl::Clone()
    {
        VehicleCategoryDistributionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // clone children
        const auto kVehicleCategoryDistributionEntries =  GetVehicleCategoryDistributionEntries();
        if (!kVehicleCategoryDistributionEntries.empty())
        {
            std::vector<std::shared_ptr<IVehicleCategoryDistributionEntry>> clonedList;
            for(auto&& kItem : kVehicleCategoryDistributionEntries)
            {
                auto clonedChild = std::make_shared <VehicleCategoryDistributionEntryImpl>(std::dynamic_pointer_cast<VehicleCategoryDistributionEntryImpl>(kItem)->Clone());
                clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
                clonedList.push_back(clonedChild);
            }
            clonedObject.SetVehicleCategoryDistributionEntries(clonedList);
        }
        return clonedObject;
    }




    VehicleCategoryDistributionEntryImpl::VehicleCategoryDistributionEntryImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, typeid(std::string).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, typeid(double).name());
    }

    VehicleCategory VehicleCategoryDistributionEntryImpl::GetCategory()
    {
        return _category;
    }
    double VehicleCategoryDistributionEntryImpl::GetWeight()
    {
        return _weight;
    }

	/**
	 * Sets the value of model property category
	 * @param category from OpenSCENARIO class model specification: [The category of the vehicles that appear in traffic.]
	 * 
	*/
    void VehicleCategoryDistributionEntryImpl::SetCategory(VehicleCategory& category )
    {
        _category = category;
    }
	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [The weight of a vehicle category within a traffic 
	 * distribution. Range: [0..inf[.]
	 * 
	*/
    void VehicleCategoryDistributionEntryImpl::SetWeight(double& weight )
    {
        _weight = weight;
    }

    void VehicleCategoryDistributionEntryImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CATEGORY)
        {
            // Enumeration Type
            const auto kResult = VehicleCategory::GetFromLiteral(parameterLiteralValue);
            if (kResult != VehicleCategory::UNKNOWN)
            {
                _category = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__WEIGHT)
        {
            // Simple type
            _weight = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string VehicleCategoryDistributionEntryImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> VehicleCategoryDistributionEntryImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    VehicleCategoryDistributionEntryImpl VehicleCategoryDistributionEntryImpl::Clone()
    {
        VehicleCategoryDistributionEntryImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetCategory(_category);
        // Simple type
        clonedObject.SetWeight(_weight);
        // clone children
        return clonedObject;
    }




    VertexImpl::VertexImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TIME, typeid(double).name());
    }

    double VertexImpl::GetTime()
    {
        return _time;
    }
    std::shared_ptr<IPosition> VertexImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property time
	 * @param time from OpenSCENARIO class model specification: [Optional time specification of the vertex.]
	 * 
	*/
    void VertexImpl::SetTime(double& time )
    {
        _time = time;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position of the vertex.]
	 * 
	*/
    void VertexImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void VertexImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TIME)
        {
            // Simple type
            _time = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string VertexImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> VertexImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    VertexImpl VertexImpl::Clone()
    {
        VertexImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetTime(_time);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    VisibilityActionImpl::VisibilityActionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, typeid(bool).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__SENSORS, typeid(bool).name());
    }

    bool VisibilityActionImpl::GetGraphics()
    {
        return _graphics;
    }
    bool VisibilityActionImpl::GetTraffic()
    {
        return _traffic;
    }
    bool VisibilityActionImpl::GetSensors()
    {
        return _sensors;
    }

	/**
	 * Sets the value of model property graphics
	 * @param graphics from OpenSCENARIO class model specification: [True: actor is visible in image generator(s). False: actor
	 * is not visible in image generator(s).]
	 * 
	*/
    void VisibilityActionImpl::SetGraphics(bool& graphics )
    {
        _graphics = graphics;
    }
	/**
	 * Sets the value of model property traffic
	 * @param traffic from OpenSCENARIO class model specification: [True: actor is visible for other traffic participants, 
	 * particularly for autonomous driver models. False: actor is not , visible for other traffic participants.]
	 * 
	*/
    void VisibilityActionImpl::SetTraffic(bool& traffic )
    {
        _traffic = traffic;
    }
	/**
	 * Sets the value of model property sensors
	 * @param sensors from OpenSCENARIO class model specification: [True: actor is visible in sensor(s). False: actor is not 
	 * visible in sensor(s).]
	 * 
	*/
    void VisibilityActionImpl::SetSensors(bool& sensors )
    {
        _sensors = sensors;
    }

    void VisibilityActionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__GRAPHICS)
        {
            // Simple type
            _graphics = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__TRAFFIC)
        {
            // Simple type
            _traffic = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__SENSORS)
        {
            // Simple type
            _sensors = ParserHelper::ParseBoolean(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string VisibilityActionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> VisibilityActionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    VisibilityActionImpl VisibilityActionImpl::Clone()
    {
        VisibilityActionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetGraphics(_graphics);
        // Simple type
        clonedObject.SetTraffic(_traffic);
        // Simple type
        clonedObject.SetSensors(_sensors);
        // clone children
        return clonedObject;
    }




    WaypointImpl::WaypointImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, typeid(std::string).name());
    }

    RouteStrategy WaypointImpl::GetRouteStrategy()
    {
        return _routeStrategy;
    }
    std::shared_ptr<IPosition> WaypointImpl::GetPosition()
    {
        return _position;
    }

	/**
	 * Sets the value of model property routeStrategy
	 * @param routeStrategy from OpenSCENARIO class model specification: [The corresponding routing strategy (fastest, 
	 * shortest, random, leastIntersections).]
	 * 
	*/
    void WaypointImpl::SetRouteStrategy(RouteStrategy& routeStrategy )
    {
        _routeStrategy = routeStrategy;
    }
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The reference position to form the route.]
	 * 
	*/
    void WaypointImpl::SetPosition(std::shared_ptr<IPosition>& position )
    {
        _position = position;
    }

    void WaypointImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY)
        {
            // Enumeration Type
            const auto kResult = RouteStrategy::GetFromLiteral(parameterLiteralValue);
            if (kResult != RouteStrategy::UNKNOWN)
            {
                _routeStrategy = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string WaypointImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> WaypointImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kPosition =  GetPosition();
            if (kPosition)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPosition));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    WaypointImpl WaypointImpl::Clone()
    {
        WaypointImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetRouteStrategy(_routeStrategy);
        // clone children
        const auto kPosition =  GetPosition();
        if (kPosition)
        {
            auto clonedChild = std::make_shared<PositionImpl>(std::dynamic_pointer_cast<PositionImpl>(kPosition)->Clone());
            auto clonedChildIPosition = std::dynamic_pointer_cast<IPosition>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPosition(clonedChildIPosition);
        }
        return clonedObject;
    }




    WeatherImpl::WeatherImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, typeid(std::string).name());
    }

    CloudState WeatherImpl::GetCloudState()
    {
        return _cloudState;
    }
    std::shared_ptr<ISun> WeatherImpl::GetSun()
    {
        return _sun;
    }
    std::shared_ptr<IFog> WeatherImpl::GetFog()
    {
        return _fog;
    }
    std::shared_ptr<IPrecipitation> WeatherImpl::GetPrecipitation()
    {
        return _precipitation;
    }

	/**
	 * Sets the value of model property cloudState
	 * @param cloudState from OpenSCENARIO class model specification: [Definition of the cloud state, i.e. cloud state and sky 
	 * visualization settings.]
	 * 
	*/
    void WeatherImpl::SetCloudState(CloudState& cloudState )
    {
        _cloudState = cloudState;
    }
	/**
	 * Sets the value of model property sun
	 * @param sun from OpenSCENARIO class model specification: [Definition of the sun, i.e. position and intensity.]
	 * 
	*/
    void WeatherImpl::SetSun(std::shared_ptr<ISun>& sun )
    {
        _sun = sun;
    }
	/**
	 * Sets the value of model property fog
	 * @param fog from OpenSCENARIO class model specification: [Definition of fog, i.e. visual range and bounding box.]
	 * 
	*/
    void WeatherImpl::SetFog(std::shared_ptr<IFog>& fog )
    {
        _fog = fog;
    }
	/**
	 * Sets the value of model property precipitation
	 * @param precipitation from OpenSCENARIO class model specification: [Definition of precipitation, i.e. type and 
	 * intensity.]
	 * 
	*/
    void WeatherImpl::SetPrecipitation(std::shared_ptr<IPrecipitation>& precipitation )
    {
        _precipitation = precipitation;
    }

    void WeatherImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE)
        {
            // Enumeration Type
            const auto kResult = CloudState::GetFromLiteral(parameterLiteralValue);
            if (kResult != CloudState::UNKNOWN)
            {
                _cloudState = kResult;
                RemoveResolvedParameter(attributeKey);
            }
            else
            {
                auto msg = FileContentMessage("Value '" + parameterLiteralValue + "' is not allowed.", ERROR, *GetTextmarker(attributeKey));
                logger.LogMessage(msg );
            }
        }
    }

    std::string WeatherImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> WeatherImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

            const auto kSun =  GetSun();
            if (kSun)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kSun));
            }
            const auto kFog =  GetFog();
            if (kFog)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kFog));
            }
            const auto kPrecipitation =  GetPrecipitation();
            if (kPrecipitation)
            {
                result.push_back(std::dynamic_pointer_cast<BaseImpl>(kPrecipitation));
            }
        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    WeatherImpl WeatherImpl::Clone()
    {
        WeatherImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Enumeration Type
        clonedObject.SetCloudState(_cloudState);
        // clone children
        const auto kSun =  GetSun();
        if (kSun)
        {
            auto clonedChild = std::make_shared<SunImpl>(std::dynamic_pointer_cast<SunImpl>(kSun)->Clone());
            auto clonedChildISun = std::dynamic_pointer_cast<ISun>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetSun(clonedChildISun);
        }
        const auto kFog =  GetFog();
        if (kFog)
        {
            auto clonedChild = std::make_shared<FogImpl>(std::dynamic_pointer_cast<FogImpl>(kFog)->Clone());
            auto clonedChildIFog = std::dynamic_pointer_cast<IFog>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetFog(clonedChildIFog);
        }
        const auto kPrecipitation =  GetPrecipitation();
        if (kPrecipitation)
        {
            auto clonedChild = std::make_shared<PrecipitationImpl>(std::dynamic_pointer_cast<PrecipitationImpl>(kPrecipitation)->Clone());
            auto clonedChildIPrecipitation = std::dynamic_pointer_cast<IPrecipitation>(clonedChild);
            clonedChild->SetParent(std::make_shared<IOpenScenarioModelElement>(clonedObject));
            clonedObject.SetPrecipitation(clonedChildIPrecipitation);
        }
        return clonedObject;
    }




    WorldPositionImpl::WorldPositionImpl()
    {
        /**
        * Filling the property to type map
        */
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__X, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__Y, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__Z, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__H, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__P, typeid(double).name());
        _propertyToType.emplace(OSC_CONSTANTS::ATTRIBUTE__R, typeid(double).name());
    }

    double WorldPositionImpl::GetX()
    {
        return _x;
    }
    double WorldPositionImpl::GetY()
    {
        return _y;
    }
    double WorldPositionImpl::GetZ()
    {
        return _z;
    }
    double WorldPositionImpl::GetH()
    {
        return _h;
    }
    double WorldPositionImpl::GetP()
    {
        return _p;
    }
    double WorldPositionImpl::GetR()
    {
        return _r;
    }

	/**
	 * Sets the value of model property x
	 * @param x from OpenSCENARIO class model specification: [The x coordinate value.]
	 * 
	*/
    void WorldPositionImpl::SetX(double& x )
    {
        _x = x;
    }
	/**
	 * Sets the value of model property y
	 * @param y from OpenSCENARIO class model specification: [The y coordinate value.]
	 * 
	*/
    void WorldPositionImpl::SetY(double& y )
    {
        _y = y;
    }
	/**
	 * Sets the value of model property z
	 * @param z from OpenSCENARIO class model specification: [The z coordinate value.]
	 * 
	*/
    void WorldPositionImpl::SetZ(double& z )
    {
        _z = z;
    }
	/**
	 * Sets the value of model property h
	 * @param h from OpenSCENARIO class model specification: [The heading angle of the object, defining a mathematically 
	 * positive rotation about the z-axis (see ISO 8855:2011).]
	 * 
	*/
    void WorldPositionImpl::SetH(double& h )
    {
        _h = h;
    }
	/**
	 * Sets the value of model property p
	 * @param p from OpenSCENARIO class model specification: [The pitch angle of the object, defining a mathematically positive
	 * rotation about the y-axis (see ISO 8855:2011).]
	 * 
	*/
    void WorldPositionImpl::SetP(double& p )
    {
        _p = p;
    }
	/**
	 * Sets the value of model property r
	 * @param r from OpenSCENARIO class model specification: [The roll angle of the object, defining a mathematically positive 
	 * rotation about the x-axis (see ISO 8855:2011).]
	 * 
	*/
    void WorldPositionImpl::SetR(double& r )
    {
        _r = r;
    }

    void WorldPositionImpl::ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue)
    {
        if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__X)
        {
            // Simple type
            _x = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__Y)
        {
            // Simple type
            _y = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__Z)
        {
            // Simple type
            _z = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__H)
        {
            // Simple type
            _h = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__P)
        {
            // Simple type
            _p = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
        else if (attributeKey == OSC_CONSTANTS::ATTRIBUTE__R)
        {
            // Simple type
            _r = ParserHelper::ParseDouble(logger, parameterLiteralValue, *GetTextmarker(attributeKey));
            RemoveResolvedParameter(attributeKey);
        }
    }

    std::string WorldPositionImpl::GetTypeFromAttributeName(std::string& attributeKey)
    {
        const auto kIt = _propertyToType.find(attributeKey);
        if (kIt != _propertyToType.end())
            return kIt->second;
        return "";
    }


    /**
    * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
    * method for any child.
    * @return a list with all children (as BaseImpl)
    */
    std::vector<std::shared_ptr<BaseImpl>> WorldPositionImpl::GetChildren()
    {
        std::vector<std::shared_ptr<BaseImpl>> result;

        return result;
    }

    /**
    * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
    * @return a deep copy of the object.
    */
    WorldPositionImpl WorldPositionImpl::Clone()
    {
        WorldPositionImpl clonedObject;
        CloneStartMarker(clonedObject);
        CloneEndMarker(clonedObject);
        CloneAttributeKeyToStartMarker(clonedObject);
        CloneAttributeKeyToEndMarker(clonedObject);
        CloneAttributeKeyToParameterNameMap(clonedObject);

        // clone attributes;
        // Simple type
        clonedObject.SetX(_x);
        // Simple type
        clonedObject.SetY(_y);
        // Simple type
        clonedObject.SetZ(_z);
        // Simple type
        clonedObject.SetH(_h);
        // Simple type
        clonedObject.SetP(_p);
        // Simple type
        clonedObject.SetR(_r);
        // clone children
        return clonedObject;
    }




}
