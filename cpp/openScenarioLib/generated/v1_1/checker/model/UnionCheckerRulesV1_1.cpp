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

#include "UnionCheckerRulesV1_1.h"
#include "OscConstantsV1_1.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {

        std::vector<std::string> ActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetGlobalAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION);
            }
            if (object->GetUserDefinedAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION);
            }
            if (object->GetPrivateAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION);
            }
            return propertyNamesNotNull;
        }


        ActionUnionCheckerRule::ActionUnionCheckerRule() = default;

        void ActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> AssignControllerActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IAssignControllerAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetController())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CONTROLLER);
            }
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            return propertyNamesNotNull;
        }


        AssignControllerActionUnionCheckerRule::AssignControllerActionUnionCheckerRule() = default;

        void AssignControllerActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IAssignControllerAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void AssignControllerActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IAssignControllerAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> AssignRouteActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IAssignRouteAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetRoute())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ROUTE);
            }
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            return propertyNamesNotNull;
        }


        AssignRouteActionUnionCheckerRule::AssignRouteActionUnionCheckerRule() = default;

        void AssignRouteActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IAssignRouteAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void AssignRouteActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IAssignRouteAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ByValueConditionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IByValueCondition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetParameterCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION);
            }
            if (object->GetTimeOfDayCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION);
            }
            if (object->GetSimulationTimeCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION);
            }
            if (object->GetStoryboardElementStateCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION);
            }
            if (object->GetUserDefinedValueCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION);
            }
            if (object->GetTrafficSignalCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION);
            }
            if (object->GetTrafficSignalControllerCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION);
            }
            return propertyNamesNotNull;
        }


        ByValueConditionUnionCheckerRule::ByValueConditionUnionCheckerRule() = default;

        void ByValueConditionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IByValueCondition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ByValueConditionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IByValueCondition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> CollisionConditionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ICollisionCondition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetEntityRef())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ENTITY_REF);
            }
            if (object->GetByType())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__BY_TYPE);
            }
            return propertyNamesNotNull;
        }


        CollisionConditionUnionCheckerRule::CollisionConditionUnionCheckerRule() = default;

        void CollisionConditionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ICollisionCondition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void CollisionConditionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ICollisionCondition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ConditionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ICondition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetByEntityCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION);
            }
            if (object->GetByValueCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION);
            }
            return propertyNamesNotNull;
        }


        ConditionUnionCheckerRule::ConditionUnionCheckerRule() = default;

        void ConditionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ICondition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ConditionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ICondition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ControllerDistributionEntryUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IControllerDistributionEntry> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetController())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CONTROLLER);
            }
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            return propertyNamesNotNull;
        }


        ControllerDistributionEntryUnionCheckerRule::ControllerDistributionEntryUnionCheckerRule() = default;

        void ControllerDistributionEntryUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IControllerDistributionEntry>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ControllerDistributionEntryUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IControllerDistributionEntry>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> DeterministicParameterDistributionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IDeterministicParameterDistribution> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetDeterministicMultiParameterDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_MULTI_PARAMETER_DISTRIBUTION);
            }
            if (object->GetDeterministicSingleParameterDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_SINGLE_PARAMETER_DISTRIBUTION);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> DeterministicParameterDistributionUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_MULTI_PARAMETER_DISTRIBUTION);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_SINGLE_PARAMETER_DISTRIBUTION);
            return propertyNamesNotNull;
        }

        DeterministicParameterDistributionUnionCheckerRule::DeterministicParameterDistributionUnionCheckerRule() = default;

        void DeterministicParameterDistributionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IDeterministicParameterDistribution>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicParameterDistributionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IDeterministicParameterDistribution>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> DeterministicSingleParameterDistributionTypeUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IDeterministicSingleParameterDistributionType> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetDistributionSet())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_SET);
            }
            if (object->GetDistributionRange())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_RANGE);
            }
            if (object->GetUserDefinedDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> DeterministicSingleParameterDistributionTypeUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_SET);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_RANGE);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION);
            return propertyNamesNotNull;
        }

        DeterministicSingleParameterDistributionTypeUnionCheckerRule::DeterministicSingleParameterDistributionTypeUnionCheckerRule() = default;

        void DeterministicSingleParameterDistributionTypeUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IDeterministicSingleParameterDistributionType>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicSingleParameterDistributionTypeUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IDeterministicSingleParameterDistributionType>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> DistributionDefinitionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IDistributionDefinition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetDeterministic())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DETERMINISTIC);
            }
            if (object->GetStochastic())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__STOCHASTIC);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> DistributionDefinitionUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DETERMINISTIC);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__STOCHASTIC);
            return propertyNamesNotNull;
        }

        DistributionDefinitionUnionCheckerRule::DistributionDefinitionUnionCheckerRule() = default;

        void DistributionDefinitionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IDistributionDefinition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void DistributionDefinitionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IDistributionDefinition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> EntityActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IEntityAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetAddEntityAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION);
            }
            if (object->GetDeleteEntityAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION);
            }
            return propertyNamesNotNull;
        }


        EntityActionUnionCheckerRule::EntityActionUnionCheckerRule() = default;

        void EntityActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IEntityAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IEntityAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> EntityConditionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IEntityCondition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetEndOfRoadCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION);
            }
            if (object->GetCollisionCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION);
            }
            if (object->GetOffroadCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION);
            }
            if (object->GetTimeHeadwayCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION);
            }
            if (object->GetTimeToCollisionCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION);
            }
            if (object->GetAccelerationCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION);
            }
            if (object->GetStandStillCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION);
            }
            if (object->GetSpeedCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SPEED_CONDITION);
            }
            if (object->GetRelativeSpeedCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION);
            }
            if (object->GetTraveledDistanceCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION);
            }
            if (object->GetReachPositionCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION);
            }
            if (object->GetDistanceCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION);
            }
            if (object->GetRelativeDistanceCondition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION);
            }
            return propertyNamesNotNull;
        }


        EntityConditionUnionCheckerRule::EntityConditionUnionCheckerRule() = default;

        void EntityConditionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IEntityCondition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityConditionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IEntityCondition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> EntityObjectUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IEntityObject> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            if (object->GetVehicle())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__VEHICLE);
            }
            if (object->GetPedestrian())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PEDESTRIAN);
            }
            if (object->GetMiscObject())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__MISC_OBJECT);
            }
            if (object->GetExternalObjectReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__EXTERNAL_OBJECT_REFERENCE);
            }
            return propertyNamesNotNull;
        }


        EntityObjectUnionCheckerRule::EntityObjectUnionCheckerRule() = default;

        void EntityObjectUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IEntityObject>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityObjectUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IEntityObject>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> EnvironmentActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IEnvironmentAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetEnvironment())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ENVIRONMENT);
            }
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            return propertyNamesNotNull;
        }


        EnvironmentActionUnionCheckerRule::EnvironmentActionUnionCheckerRule() = default;

        void EnvironmentActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IEnvironmentAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void EnvironmentActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IEnvironmentAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> FinalSpeedUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IFinalSpeed> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetAbsoluteSpeed())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED);
            }
            if (object->GetRelativeSpeedToMaster())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER);
            }
            return propertyNamesNotNull;
        }


        FinalSpeedUnionCheckerRule::FinalSpeedUnionCheckerRule() = default;

        void FinalSpeedUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IFinalSpeed>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void FinalSpeedUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IFinalSpeed>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> GlobalActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IGlobalAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetEnvironmentAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION);
            }
            if (object->GetEntityAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ENTITY_ACTION);
            }
            if (object->GetParameterAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION);
            }
            if (object->GetInfrastructureAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION);
            }
            if (object->GetTrafficAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION);
            }
            return propertyNamesNotNull;
        }


        GlobalActionUnionCheckerRule::GlobalActionUnionCheckerRule() = default;

        void GlobalActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IGlobalAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void GlobalActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IGlobalAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> InRoutePositionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IInRoutePosition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetFromCurrentEntity())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY);
            }
            if (object->GetFromRoadCoordinates())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES);
            }
            if (object->GetFromLaneCoordinates())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES);
            }
            return propertyNamesNotNull;
        }


        InRoutePositionUnionCheckerRule::InRoutePositionUnionCheckerRule() = default;

        void InRoutePositionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IInRoutePosition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void InRoutePositionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IInRoutePosition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> LaneChangeTargetUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ILaneChangeTarget> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetRelativeTargetLane())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE);
            }
            if (object->GetAbsoluteTargetLane())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE);
            }
            return propertyNamesNotNull;
        }


        LaneChangeTargetUnionCheckerRule::LaneChangeTargetUnionCheckerRule() = default;

        void LaneChangeTargetUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ILaneChangeTarget>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneChangeTargetUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ILaneChangeTarget>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> LaneOffsetTargetUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ILaneOffsetTarget> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetRelativeTargetLaneOffset())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET);
            }
            if (object->GetAbsoluteTargetLaneOffset())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET);
            }
            return propertyNamesNotNull;
        }


        LaneOffsetTargetUnionCheckerRule::LaneOffsetTargetUnionCheckerRule() = default;

        void LaneOffsetTargetUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ILaneOffsetTarget>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneOffsetTargetUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ILaneOffsetTarget>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> LateralActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ILateralAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetLaneChangeAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION);
            }
            if (object->GetLaneOffsetAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION);
            }
            if (object->GetLateralDistanceAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION);
            }
            return propertyNamesNotNull;
        }


        LateralActionUnionCheckerRule::LateralActionUnionCheckerRule() = default;

        void LateralActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ILateralAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void LateralActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ILateralAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> LongitudinalActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ILongitudinalAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetSpeedAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SPEED_ACTION);
            }
            if (object->GetLongitudinalDistanceAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION);
            }
            return propertyNamesNotNull;
        }


        LongitudinalActionUnionCheckerRule::LongitudinalActionUnionCheckerRule() = default;

        void LongitudinalActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ILongitudinalAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void LongitudinalActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ILongitudinalAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ModifyRuleUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IModifyRule> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetAddValue())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ADD_VALUE);
            }
            if (object->GetMultiplyByValue())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE);
            }
            return propertyNamesNotNull;
        }


        ModifyRuleUnionCheckerRule::ModifyRuleUnionCheckerRule() = default;

        void ModifyRuleUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IModifyRule>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ModifyRuleUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IModifyRule>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ObjectControllerUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IObjectController> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            if (object->GetController())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CONTROLLER);
            }
            return propertyNamesNotNull;
        }


        ObjectControllerUnionCheckerRule::ObjectControllerUnionCheckerRule() = default;

        void ObjectControllerUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IObjectController>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ObjectControllerUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IObjectController>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> OpenScenarioCategoryUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IOpenScenarioCategory> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetScenarioDefinition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SCENARIO_DEFINITION);
            }
            if (object->GetCatalogDefinition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_DEFINITION);
            }
            if (object->GetParameterValueDistributionDefinition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION_DEFINITION);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> OpenScenarioCategoryUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SCENARIO_DEFINITION);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_DEFINITION);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION_DEFINITION);
            return propertyNamesNotNull;
        }

        OpenScenarioCategoryUnionCheckerRule::OpenScenarioCategoryUnionCheckerRule() = default;

        void OpenScenarioCategoryUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IOpenScenarioCategory>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void OpenScenarioCategoryUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IOpenScenarioCategory>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ParameterActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IParameterAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetSetAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SET_ACTION);
            }
            if (object->GetModifyAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__MODIFY_ACTION);
            }
            return propertyNamesNotNull;
        }


        ParameterActionUnionCheckerRule::ParameterActionUnionCheckerRule() = default;

        void ParameterActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IParameterAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IParameterAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> PositionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IPosition> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetWorldPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__WORLD_POSITION);
            }
            if (object->GetRelativeWorldPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION);
            }
            if (object->GetRelativeObjectPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION);
            }
            if (object->GetRoadPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ROAD_POSITION);
            }
            if (object->GetRelativeRoadPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION);
            }
            if (object->GetLanePosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LANE_POSITION);
            }
            if (object->GetRelativeLanePosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION);
            }
            if (object->GetRoutePosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ROUTE_POSITION);
            }
            if (object->GetGeoPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__GEO_POSITION);
            }
            if (object->GetTrajectoryPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAJECTORY_POSITION);
            }
            return propertyNamesNotNull;
        }


        PositionUnionCheckerRule::PositionUnionCheckerRule() = default;

        void PositionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IPosition>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void PositionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IPosition>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> PrivateActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IPrivateAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetLongitudinalAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION);
            }
            if (object->GetLateralAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__LATERAL_ACTION);
            }
            if (object->GetVisibilityAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION);
            }
            if (object->GetSynchronizeAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION);
            }
            if (object->GetActivateControllerAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION);
            }
            if (object->GetControllerAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION);
            }
            if (object->GetTeleportAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION);
            }
            if (object->GetRoutingAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ROUTING_ACTION);
            }
            return propertyNamesNotNull;
        }


        PrivateActionUnionCheckerRule::PrivateActionUnionCheckerRule() = default;

        void PrivateActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IPrivateAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void PrivateActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IPrivateAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> RouteRefUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IRouteRef> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetRoute())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ROUTE);
            }
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            return propertyNamesNotNull;
        }


        RouteRefUnionCheckerRule::RouteRefUnionCheckerRule() = default;

        void RouteRefUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IRouteRef>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void RouteRefUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IRouteRef>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> RoutingActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IRoutingAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetAssignRouteAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION);
            }
            if (object->GetFollowTrajectoryAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION);
            }
            if (object->GetAcquirePositionAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION);
            }
            return propertyNamesNotNull;
        }


        RoutingActionUnionCheckerRule::RoutingActionUnionCheckerRule() = default;

        void RoutingActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IRoutingAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void RoutingActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IRoutingAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> SelectedEntitiesUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ISelectedEntities> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetEntityRefSize() != 0)
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ENTITY_REF);
            }
            if (object->GetByTypeSize() != 0)
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__BY_TYPE);
            }
            return propertyNamesNotNull;
        }


        SelectedEntitiesUnionCheckerRule::SelectedEntitiesUnionCheckerRule() = default;

        void SelectedEntitiesUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ISelectedEntities>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void SelectedEntitiesUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ISelectedEntities>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> ShapeUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IShape> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetPolyline())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__POLYLINE);
            }
            if (object->GetClothoid())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CLOTHOID);
            }
            if (object->GetNurbs())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__NURBS);
            }
            return propertyNamesNotNull;
        }


        ShapeUnionCheckerRule::ShapeUnionCheckerRule() = default;

        void ShapeUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IShape>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void ShapeUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IShape>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> SpeedActionTargetUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ISpeedActionTarget> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetRelativeTargetSpeed())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED);
            }
            if (object->GetAbsoluteTargetSpeed())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED);
            }
            return propertyNamesNotNull;
        }


        SpeedActionTargetUnionCheckerRule::SpeedActionTargetUnionCheckerRule() = default;

        void SpeedActionTargetUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ISpeedActionTarget>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void SpeedActionTargetUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ISpeedActionTarget>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> SteadyStateUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ISteadyState> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetTargetDistanceSteadyState())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE);
            }
            if (object->GetTargetTimeSteadyState())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> SteadyStateUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE);
            return propertyNamesNotNull;
        }

        SteadyStateUnionCheckerRule::SteadyStateUnionCheckerRule() = default;

        void SteadyStateUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ISteadyState>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void SteadyStateUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ISteadyState>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> StochasticDistributionTypeUnionCheckerRule::GetNotNullChildren(std::shared_ptr<IStochasticDistributionType> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetProbabilityDistributionSet())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET);
            }
            if (object->GetNormalDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION);
            }
            if (object->GetUniformDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION);
            }
            if (object->GetPoissonDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION);
            }
            if (object->GetHistogram())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__HISTOGRAM);
            }
            if (object->GetUserDefinedDistribution())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> StochasticDistributionTypeUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__HISTOGRAM);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION);
            return propertyNamesNotNull;
        }

        StochasticDistributionTypeUnionCheckerRule::StochasticDistributionTypeUnionCheckerRule() = default;

        void StochasticDistributionTypeUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<IStochasticDistributionType>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void StochasticDistributionTypeUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<IStochasticDistributionType>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> TimeReferenceUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ITimeReference> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetNone())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__NONE);
            }
            if (object->GetTiming())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TIMING);
            }
            return propertyNamesNotNull;
        }


        TimeReferenceUnionCheckerRule::TimeReferenceUnionCheckerRule() = default;

        void TimeReferenceUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ITimeReference>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeReferenceUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ITimeReference>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> TimeToCollisionConditionTargetUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ITimeToCollisionConditionTarget> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetPosition())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__POSITION);
            }
            if (object->GetEntityRef())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__ENTITY_REF);
            }
            return propertyNamesNotNull;
        }


        TimeToCollisionConditionTargetUnionCheckerRule::TimeToCollisionConditionTargetUnionCheckerRule() = default;

        void TimeToCollisionConditionTargetUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ITimeToCollisionConditionTarget>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeToCollisionConditionTargetUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ITimeToCollisionConditionTarget>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> TrafficActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ITrafficAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetTrafficSourceAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION);
            }
            if (object->GetTrafficSinkAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION);
            }
            if (object->GetTrafficSwarmAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION);
            }
            if (object->GetTrafficStopAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_STOP_ACTION);
            }
            return propertyNamesNotNull;
        }


        TrafficActionUnionCheckerRule::TrafficActionUnionCheckerRule() = default;

        void TrafficActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ITrafficAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ITrafficAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> TrafficSignalActionUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ITrafficSignalAction> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetTrafficSignalControllerAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION);
            }
            if (object->GetTrafficSignalStateAction())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION);
            }
            return propertyNamesNotNull;
        }


        TrafficSignalActionUnionCheckerRule::TrafficSignalActionUnionCheckerRule() = default;

        void TrafficSignalActionUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ITrafficSignalAction>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalActionUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ITrafficSignalAction>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
        }
        std::vector<std::string> TrajectoryRefUnionCheckerRule::GetNotNullChildren(std::shared_ptr<ITrajectoryRef> object)
        {
            std::vector<std::string> propertyNamesNotNull;
            if (object->GetTrajectory())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAJECTORY);
            }
            if (object->GetCatalogReference())
            {
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            }
            return propertyNamesNotNull;
        }

        std::vector<std::string> TrajectoryRefUnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__TRAJECTORY);
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE);
            return propertyNamesNotNull;
        }

        TrajectoryRefUnionCheckerRule::TrajectoryRefUnionCheckerRule() = default;

        void TrajectoryRefUnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
        	auto typedObject = std::dynamic_pointer_cast<ITrajectoryRef>(object);
               
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
            auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(typedObject));
                messageLogger->LogMessage(msg);
            }
        }

        void TrajectoryRefUnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto typedObject = std::dynamic_pointer_cast<ITrajectoryRef>(object);
            auto propertyNamesNotNull = GetNotNullChildren(typedObject);
            if (propertyNamesNotNull.size() > 1)
            {
                auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, propertyNamesNotNull));
                messageLogger->LogMessage(msg);
            }
            // There must be one item set
            if (propertyNamesNotNull.size() == 0)
            {
                auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(typedObject, GetAllChildren()));
                messageLogger->LogMessage(msg);
            }
        }
    }
}


