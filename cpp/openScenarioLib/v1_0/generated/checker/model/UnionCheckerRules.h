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
#include "UnionCheckerRule.h"
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "OscConstants.h"
#include "ErrorLevel.h"
#include "ApiClassInterfaces.h"
#include "FileContentMessage.h"
#include "TreeContentMessage.h"
#include "PropertyTreeContext.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActionUnionCheckerRule: public UnionCheckerRule<IAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IAction> object)
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


        public:
            ActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IAssignControllerAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignControllerActionUnionCheckerRule: public UnionCheckerRule<IAssignControllerAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IAssignControllerAction> object)
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


        public:
            AssignControllerActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAssignControllerAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAssignControllerAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IAssignRouteAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AssignRouteActionUnionCheckerRule: public UnionCheckerRule<IAssignRouteAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IAssignRouteAction> object)
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


        public:
            AssignRouteActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAssignRouteAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAssignRouteAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IByValueCondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByValueConditionUnionCheckerRule: public UnionCheckerRule<IByValueCondition>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IByValueCondition> object)
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


        public:
            ByValueConditionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByValueCondition> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByValueCondition> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ICollisionCondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CollisionConditionUnionCheckerRule: public UnionCheckerRule<ICollisionCondition>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ICollisionCondition> object)
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


        public:
            CollisionConditionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICollisionCondition> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICollisionCondition> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ICondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionUnionCheckerRule: public UnionCheckerRule<ICondition>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ICondition> object)
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


        public:
            ConditionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICondition> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICondition> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryUnionCheckerRule: public UnionCheckerRule<IControllerDistributionEntry>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IControllerDistributionEntry> object)
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


        public:
            ControllerDistributionEntryUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEntityAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityActionUnionCheckerRule: public UnionCheckerRule<IEntityAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEntityAction> object)
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


        public:
            EntityActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEntityCondition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityConditionUnionCheckerRule: public UnionCheckerRule<IEntityCondition>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEntityCondition> object)
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


        public:
            EntityConditionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityCondition> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityCondition> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEntityObject according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityObjectUnionCheckerRule: public UnionCheckerRule<IEntityObject>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEntityObject> object)
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
                return propertyNamesNotNull;
            }


        public:
            EntityObjectUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityObject> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityObject> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IEnvironmentAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentActionUnionCheckerRule: public UnionCheckerRule<IEnvironmentAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IEnvironmentAction> object)
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


        public:
            EnvironmentActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEnvironmentAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEnvironmentAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IFinalSpeed according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FinalSpeedUnionCheckerRule: public UnionCheckerRule<IFinalSpeed>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IFinalSpeed> object)
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


        public:
            FinalSpeedUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFinalSpeed> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFinalSpeed> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IGlobalAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class GlobalActionUnionCheckerRule: public UnionCheckerRule<IGlobalAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IGlobalAction> object)
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


        public:
            GlobalActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IGlobalAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IGlobalAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IInRoutePosition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InRoutePositionUnionCheckerRule: public UnionCheckerRule<IInRoutePosition>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IInRoutePosition> object)
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


        public:
            InRoutePositionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IInRoutePosition> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IInRoutePosition> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILaneChangeTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeTargetUnionCheckerRule: public UnionCheckerRule<ILaneChangeTarget>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILaneChangeTarget> object)
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


        public:
            LaneChangeTargetUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneChangeTarget> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneChangeTarget> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILaneOffsetTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetTargetUnionCheckerRule: public UnionCheckerRule<ILaneOffsetTarget>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILaneOffsetTarget> object)
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


        public:
            LaneOffsetTargetUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetTarget> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetTarget> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILateralAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralActionUnionCheckerRule: public UnionCheckerRule<ILateralAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILateralAction> object)
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


        public:
            LateralActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILateralAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILateralAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ILongitudinalAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalActionUnionCheckerRule: public UnionCheckerRule<ILongitudinalAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ILongitudinalAction> object)
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


        public:
            LongitudinalActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILongitudinalAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILongitudinalAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IModifyRule according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ModifyRuleUnionCheckerRule: public UnionCheckerRule<IModifyRule>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IModifyRule> object)
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


        public:
            ModifyRuleUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IModifyRule> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IModifyRule> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IObjectController according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ObjectControllerUnionCheckerRule: public UnionCheckerRule<IObjectController>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IObjectController> object)
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


        public:
            ObjectControllerUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IObjectController> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IObjectController> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IOpenScenarioCategory according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCategoryUnionCheckerRule: public UnionCheckerRule<IOpenScenarioCategory>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IOpenScenarioCategory> object)
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
                return propertyNamesNotNull;
            }

            std::vector<std::string> GetAllChildren()
            {
                std::vector<std::string> propertyNamesNotNull;
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__SCENARIO_DEFINITION);
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__CATALOG_DEFINITION);
                return propertyNamesNotNull;
            }

        public:
            OpenScenarioCategoryUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioCategory> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
                // There must be one item set
                if (propertyNamesNotNull.size() == 0)
                {
                auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioCategory> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
                // There must be one item set
                if (propertyNamesNotNull.size() == 0)
                {
                    auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, GetAllChildren()));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IParameterAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterActionUnionCheckerRule: public UnionCheckerRule<IParameterAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IParameterAction> object)
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


        public:
            ParameterActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IPosition according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionUnionCheckerRule: public UnionCheckerRule<IPosition>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IPosition> object)
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
                return propertyNamesNotNull;
            }


        public:
            PositionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPosition> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPosition> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IPrivateAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateActionUnionCheckerRule: public UnionCheckerRule<IPrivateAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IPrivateAction> object)
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


        public:
            PrivateActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrivateAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrivateAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IRouteRef according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteRefUnionCheckerRule: public UnionCheckerRule<IRouteRef>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IRouteRef> object)
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


        public:
            RouteRefUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRouteRef> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRouteRef> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IRoutingAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutingActionUnionCheckerRule: public UnionCheckerRule<IRoutingAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IRoutingAction> object)
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


        public:
            RoutingActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoutingAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoutingAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ISelectedEntities according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SelectedEntitiesUnionCheckerRule: public UnionCheckerRule<ISelectedEntities>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ISelectedEntities> object)
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


        public:
            SelectedEntitiesUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISelectedEntities> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISelectedEntities> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type IShape according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ShapeUnionCheckerRule: public UnionCheckerRule<IShape>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<IShape> object)
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


        public:
            ShapeUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IShape> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IShape> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ISpeedActionTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionTargetUnionCheckerRule: public UnionCheckerRule<ISpeedActionTarget>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ISpeedActionTarget> object)
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


        public:
            SpeedActionTargetUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISpeedActionTarget> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISpeedActionTarget> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITimeReference according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeReferenceUnionCheckerRule: public UnionCheckerRule<ITimeReference>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITimeReference> object)
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


        public:
            TimeReferenceUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeReference> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeReference> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITimeToCollisionConditionTarget according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionTargetUnionCheckerRule: public UnionCheckerRule<ITimeToCollisionConditionTarget>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITimeToCollisionConditionTarget> object)
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


        public:
            TimeToCollisionConditionTargetUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionConditionTarget> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionConditionTarget> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITrafficAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficActionUnionCheckerRule: public UnionCheckerRule<ITrafficAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITrafficAction> object)
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
                return propertyNamesNotNull;
            }


        public:
            TrafficActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A union checker rule class for the type ITrafficSignalAction according to OpenSCENARIO standard
         * all xor elements are checked
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalActionUnionCheckerRule: public UnionCheckerRule<ITrafficSignalAction>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<ITrafficSignalAction> object)
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


        public:
            TrafficSignalActionUnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalAction> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalAction> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
            }
        };
    }
}


