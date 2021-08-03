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
#include "CardinalityCheckerRule.h"
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "OscConstantsV1_0.h"
#include "ErrorLevel.h"
#include "ApiClassInterfacesV1_0.h"
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
         * A cardinality checker rule class for the type IAbsoluteSpeed according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteSpeedCardinalityCheckerRule: public CardinalityCheckerRule<IAbsoluteSpeed>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteSpeed> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AbsoluteSpeedCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAbsoluteTargetLane according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneCardinalityCheckerRule: public CardinalityCheckerRule<IAbsoluteTargetLane>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteTargetLane> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AbsoluteTargetLaneCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLane> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLane> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAbsoluteTargetLaneOffset according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetLaneOffsetCardinalityCheckerRule: public CardinalityCheckerRule<IAbsoluteTargetLaneOffset>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteTargetLaneOffset> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AbsoluteTargetLaneOffsetCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLaneOffset> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetLaneOffset> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAbsoluteTargetSpeed according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AbsoluteTargetSpeedCardinalityCheckerRule: public CardinalityCheckerRule<IAbsoluteTargetSpeed>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAbsoluteTargetSpeed> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AbsoluteTargetSpeedCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetSpeed> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteTargetSpeed> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAccelerationCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AccelerationConditionCardinalityCheckerRule: public CardinalityCheckerRule<IAccelerationCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAccelerationCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AccelerationConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAccelerationCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAccelerationCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAcquirePositionAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AcquirePositionActionCardinalityCheckerRule: public CardinalityCheckerRule<IAcquirePositionAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAcquirePositionAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AcquirePositionActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAcquirePositionAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAcquirePositionAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAct according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActCardinalityCheckerRule: public CardinalityCheckerRule<IAct>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAct> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kManeuverGroupsSize = object->GetManeuverGroupsSize();
                // Check too few elements
                if (kManeuverGroupsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__MANEUVER_GROUP, 1, kManeuverGroupsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                // Check violation
                // Check required
                if (object->GetStartTrigger() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__START_TRIGGER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ActCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAct> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAct> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActionCardinalityCheckerRule: public CardinalityCheckerRule<IAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IActors according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ActorsCardinalityCheckerRule: public CardinalityCheckerRule<IActors>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IActors> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetSelectTriggeringEntities() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ActorsCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IActors> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IActors> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAddEntityAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AddEntityActionCardinalityCheckerRule: public CardinalityCheckerRule<IAddEntityAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAddEntityAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AddEntityActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAddEntityAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAddEntityAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAxle according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxleCardinalityCheckerRule: public CardinalityCheckerRule<IAxle>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAxle> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetMaxSteering() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPositionX() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPositionZ() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrackWidth() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetWheelDiameter() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AxleCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAxle> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAxle> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IAxles according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AxlesCardinalityCheckerRule: public CardinalityCheckerRule<IAxles>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IAxles> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetFrontAxle() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__FRONT_AXLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRearAxle() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__REAR_AXLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             AxlesCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAxles> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAxles> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IBoundingBox according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class BoundingBoxCardinalityCheckerRule: public CardinalityCheckerRule<IBoundingBox>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IBoundingBox> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCenter() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CENTER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDimensions() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIMENSIONS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             BoundingBoxCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IBoundingBox> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IBoundingBox> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IByEntityCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByEntityConditionCardinalityCheckerRule: public CardinalityCheckerRule<IByEntityCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IByEntityCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetTriggeringEntities() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityCondition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ByEntityConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByEntityCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByEntityCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IByObjectType according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByObjectTypeCardinalityCheckerRule: public CardinalityCheckerRule<IByObjectType>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IByObjectType> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetType() == ObjectType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ByObjectTypeCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByObjectType> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByObjectType> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IByType according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ByTypeCardinalityCheckerRule: public CardinalityCheckerRule<IByType>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IByType> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetObjectType() == ObjectType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ByTypeCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IByType> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IByType> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ICatalogDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogDefinitionCardinalityCheckerRule: public CardinalityCheckerRule<ICatalogDefinition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICatalogDefinition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCatalog() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CATALOG, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             CatalogDefinitionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICatalogDefinition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICatalogDefinition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ICatalogReference according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CatalogReferenceCardinalityCheckerRule: public CardinalityCheckerRule<ICatalogReference>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICatalogReference> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCatalogName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntryName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             CatalogReferenceCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICatalogReference> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICatalogReference> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ICenter according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CenterCardinalityCheckerRule: public CardinalityCheckerRule<ICenter>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICenter> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetX() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__X, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetY() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__Y, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetZ() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__Z, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             CenterCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICenter> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICenter> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ICentralSwarmObject according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CentralSwarmObjectCardinalityCheckerRule: public CardinalityCheckerRule<ICentralSwarmObject>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICentralSwarmObject> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             CentralSwarmObjectCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICentralSwarmObject> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICentralSwarmObject> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IClothoid according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ClothoidCardinalityCheckerRule: public CardinalityCheckerRule<IClothoid>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IClothoid> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCurvature() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetCurvatureDot() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetLength() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LENGTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ClothoidCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IClothoid> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IClothoid> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ICondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionCardinalityCheckerRule: public CardinalityCheckerRule<ICondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetConditionEdge() == ConditionEdge::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDelay() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DELAY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IConditionGroup according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionGroupCardinalityCheckerRule: public CardinalityCheckerRule<IConditionGroup>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IConditionGroup> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                const auto kConditionsSize = object->GetConditionsSize();
                // Check too few elements
                if (kConditionsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONDITION, 1, kConditionsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             ConditionGroupCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IConditionGroup> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IConditionGroup> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IControlPoint according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControlPointCardinalityCheckerRule: public CardinalityCheckerRule<IControlPoint>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControlPoint> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ControlPointCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IController according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerCardinalityCheckerRule: public CardinalityCheckerRule<IController>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IController> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetProperties() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PROPERTIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ControllerCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IController> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IController> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IControllerAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerActionCardinalityCheckerRule: public CardinalityCheckerRule<IControllerAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAssignControllerAction() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetOverrideControllerValueAction() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ControllerActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IControllerCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IControllerCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ControllerCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IControllerDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionCardinalityCheckerRule: public CardinalityCheckerRule<IControllerDistribution>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerDistribution> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                const auto kControllerDistributionEntriesSize = object->GetControllerDistributionEntriesSize();
                // Check too few elements
                if (kControllerDistributionEntriesSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY, 1, kControllerDistributionEntriesSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             ControllerDistributionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistribution> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistribution> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerDistributionEntryCardinalityCheckerRule: public CardinalityCheckerRule<IControllerDistributionEntry>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IControllerDistributionEntry> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetWeight() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ControllerDistributionEntryCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ICustomCommandAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CustomCommandActionCardinalityCheckerRule: public CardinalityCheckerRule<ICustomCommandAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ICustomCommandAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetContent().empty())
                {
                    violations.push_back( CardinalityViolation("", 0, 1, VIOLATION_TYPE::REQUIRED_SIMPLE_CONTENT) );
                }
                // Check violation
                // Check required
                if (object->GetType().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             CustomCommandActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICustomCommandAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICustomCommandAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IDimensions according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DimensionsCardinalityCheckerRule: public CardinalityCheckerRule<IDimensions>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDimensions> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetHeight() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetLength() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LENGTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetWidth() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WIDTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             DimensionsCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDimensions> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDimensions> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IDirectory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectoryCardinalityCheckerRule: public CardinalityCheckerRule<IDirectory>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDirectory> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPath().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PATH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             DirectoryCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDirectory> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDirectory> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IDistanceCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DistanceConditionCardinalityCheckerRule: public CardinalityCheckerRule<IDistanceCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IDistanceCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAlongRoute() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFreespace() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             DistanceConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEndOfRoadCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EndOfRoadConditionCardinalityCheckerRule: public CardinalityCheckerRule<IEndOfRoadCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEndOfRoadCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDuration() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EndOfRoadConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEntityAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityActionCardinalityCheckerRule: public CardinalityCheckerRule<IEntityAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEntityAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EntityActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEntityRef according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntityRefCardinalityCheckerRule: public CardinalityCheckerRule<IEntityRef>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEntityRef> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EntityRefCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntityRef> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntityRef> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEntitySelection according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EntitySelectionCardinalityCheckerRule: public CardinalityCheckerRule<IEntitySelection>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEntitySelection> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetMembers() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__MEMBERS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EntitySelectionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEntitySelection> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEntitySelection> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEnvironment according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentCardinalityCheckerRule: public CardinalityCheckerRule<IEnvironment>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEnvironment> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTimeOfDay() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TIME_OF_DAY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetWeather() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__WEATHER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRoadCondition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ROAD_CONDITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EnvironmentCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEnvironment> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEnvironment> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEnvironmentCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EnvironmentCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IEnvironmentCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEnvironmentCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EnvironmentCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEnvironmentCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEnvironmentCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IEvent according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class EventCardinalityCheckerRule: public CardinalityCheckerRule<IEvent>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IEvent> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPriority() == Priority::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PRIORITY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kActionsSize = object->GetActionsSize();
                // Check too few elements
                if (kActionsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ACTION, 1, kActionsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                // Check violation
                // Check required
                if (object->GetStartTrigger() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__START_TRIGGER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             EventCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEvent> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEvent> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IFile according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileCardinalityCheckerRule: public CardinalityCheckerRule<IFile>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFile> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetFilepath().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             FileCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFile> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFile> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IFileHeader according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FileHeaderCardinalityCheckerRule: public CardinalityCheckerRule<IFileHeader>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFileHeader> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAuthor().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDate() == DateTime())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDescription().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRevMajor() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRevMinor() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             FileHeaderCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IFog according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FogCardinalityCheckerRule: public CardinalityCheckerRule<IFog>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFog> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetVisualRange() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             FogCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFog> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFog> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IFollowTrajectoryAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FollowTrajectoryActionCardinalityCheckerRule: public CardinalityCheckerRule<IFollowTrajectoryAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IFollowTrajectoryAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetTimeReference() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TIME_REFERENCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrajectoryFollowingMode() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             FollowTrajectoryActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFollowTrajectoryAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFollowTrajectoryAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IInfrastructureAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InfrastructureActionCardinalityCheckerRule: public CardinalityCheckerRule<IInfrastructureAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IInfrastructureAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetTrafficSignalAction() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             InfrastructureActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IInfrastructureAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IInfrastructureAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IInit according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class InitCardinalityCheckerRule: public CardinalityCheckerRule<IInit>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IInit> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActions() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ACTIONS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             InitCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IInit> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IInit> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IKnot according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class KnotCardinalityCheckerRule: public CardinalityCheckerRule<IKnot>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IKnot> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             KnotCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IKnot> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IKnot> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ILaneChangeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneChangeActionCardinalityCheckerRule: public CardinalityCheckerRule<ILaneChangeAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILaneChangeAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetLaneChangeActionDynamics() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetLaneChangeTarget() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             LaneChangeActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneChangeAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneChangeAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ILaneOffsetAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionCardinalityCheckerRule: public CardinalityCheckerRule<ILaneOffsetAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILaneOffsetAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetContinuous() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetLaneOffsetActionDynamics() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetLaneOffsetTarget() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             LaneOffsetActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ILaneOffsetActionDynamics according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LaneOffsetActionDynamicsCardinalityCheckerRule: public CardinalityCheckerRule<ILaneOffsetActionDynamics>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILaneOffsetActionDynamics> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDynamicsShape() == DynamicsShape::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             LaneOffsetActionDynamicsCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ILanePosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LanePositionCardinalityCheckerRule: public CardinalityCheckerRule<ILanePosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILanePosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetLaneId().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRoadId().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetS() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__S, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             LanePositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ILateralDistanceAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDistanceActionCardinalityCheckerRule: public CardinalityCheckerRule<ILateralDistanceAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILateralDistanceAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetContinuous() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFreespace() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             LateralDistanceActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDistanceActionCardinalityCheckerRule: public CardinalityCheckerRule<ILongitudinalDistanceAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ILongitudinalDistanceAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetContinuous() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFreespace() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             LongitudinalDistanceActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IManeuver according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverCardinalityCheckerRule: public CardinalityCheckerRule<IManeuver>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IManeuver> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kEventsSize = object->GetEventsSize();
                // Check too few elements
                if (kEventsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__EVENT, 1, kEventsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             ManeuverCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuver> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuver> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IManeuverCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IManeuverCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IManeuverCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ManeuverCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuverCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuverCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IManeuverGroup according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ManeuverGroupCardinalityCheckerRule: public CardinalityCheckerRule<IManeuverGroup>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IManeuverGroup> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetMaximumExecutionCount() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetActors() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ACTORS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ManeuverGroupCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IMiscObject according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCardinalityCheckerRule: public CardinalityCheckerRule<IMiscObject>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IMiscObject> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetMass() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MASS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetMiscObjectCategory() == MiscObjectCategory::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetBoundingBox() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetProperties() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PROPERTIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             MiscObjectCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IMiscObjectCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IMiscObjectCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IMiscObjectCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             MiscObjectCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IMiscObjectCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IMiscObjectCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type INurbs according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class NurbsCardinalityCheckerRule: public CardinalityCheckerRule<INurbs>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<INurbs> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetOrder() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ORDER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kControlPointsSize = object->GetControlPointsSize();
                // Check too few elements
                if (kControlPointsSize < 2)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONTROL_POINT, 2, kControlPointsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                // Check violation
                const auto kKnotsSize = object->GetKnotsSize();
                // Check too few elements
                if (kKnotsSize < 2)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__KNOT, 2, kKnotsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             NurbsCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<INurbs> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<INurbs> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOffroadCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OffroadConditionCardinalityCheckerRule: public CardinalityCheckerRule<IOffroadCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOffroadCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDuration() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OffroadConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOpenScenario according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCardinalityCheckerRule: public CardinalityCheckerRule<IOpenScenario>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOpenScenario> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetFileHeader() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__FILE_HEADER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetOpenScenarioCategory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__OPEN_SCENARIO_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OpenScenarioCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOpenScenarioCategory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OpenScenarioCategoryCardinalityCheckerRule: public CardinalityCheckerRule<IOpenScenarioCategory>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOpenScenarioCategory> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetScenarioDefinition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SCENARIO_DEFINITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetCatalogDefinition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CATALOG_DEFINITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OpenScenarioCategoryCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioCategory> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioCategory> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideBrakeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideBrakeActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideBrakeAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideBrakeAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActive() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideBrakeActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideClutchAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideClutchActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideClutchAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideClutchAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActive() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideClutchActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideControllerValueAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideControllerValueActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideControllerValueAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideControllerValueAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetThrottle() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__THROTTLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetBrake() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BRAKE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetClutch() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CLUTCH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetParkingBrake() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PARKING_BRAKE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSteeringWheel() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STEERING_WHEEL, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetGear() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__GEAR, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideControllerValueActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideControllerValueAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideControllerValueAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideGearAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideGearActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideGearAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideGearAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActive() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetNumber() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NUMBER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideGearActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideGearAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideGearAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideParkingBrakeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideParkingBrakeActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideParkingBrakeAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideParkingBrakeAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActive() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideParkingBrakeActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideSteeringWheelAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideSteeringWheelActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideSteeringWheelAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideSteeringWheelAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActive() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideSteeringWheelActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideSteeringWheelAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideSteeringWheelAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IOverrideThrottleAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class OverrideThrottleActionCardinalityCheckerRule: public CardinalityCheckerRule<IOverrideThrottleAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IOverrideThrottleAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetActive() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             OverrideThrottleActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterActionCardinalityCheckerRule: public CardinalityCheckerRule<IParameterAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetParameterRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterAddValueRule according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAddValueRuleCardinalityCheckerRule: public CardinalityCheckerRule<IParameterAddValueRule>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterAddValueRule> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterAddValueRuleCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAddValueRule> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAddValueRule> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterAssignment according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterAssignmentCardinalityCheckerRule: public CardinalityCheckerRule<IParameterAssignment>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterAssignment> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetParameterRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterAssignmentCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterAssignment> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterAssignment> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterConditionCardinalityCheckerRule: public CardinalityCheckerRule<IParameterCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetParameterRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterDeclaration according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterDeclarationCardinalityCheckerRule: public CardinalityCheckerRule<IParameterDeclaration>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterDeclaration> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetParameterType() == ParameterType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterDeclarationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterDeclaration> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterDeclaration> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterModifyAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterModifyActionCardinalityCheckerRule: public CardinalityCheckerRule<IParameterModifyAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterModifyAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRule() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterModifyActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterModifyAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterModifyAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterMultiplyByValueRule according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterMultiplyByValueRuleCardinalityCheckerRule: public CardinalityCheckerRule<IParameterMultiplyByValueRule>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterMultiplyByValueRule> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterMultiplyByValueRuleCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterMultiplyByValueRule> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterMultiplyByValueRule> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IParameterSetAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterSetActionCardinalityCheckerRule: public CardinalityCheckerRule<IParameterSetAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IParameterSetAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ParameterSetActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IParameterSetAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IParameterSetAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPedestrian according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCardinalityCheckerRule: public CardinalityCheckerRule<IPedestrian>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPedestrian> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetMass() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MASS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetModel().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MODEL, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPedestrianCategory() == PedestrianCategory::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetBoundingBox() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetProperties() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PROPERTIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PedestrianCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPedestrian> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPedestrian> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPedestrianCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IPedestrianCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPedestrianCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PedestrianCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPedestrianCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPedestrianCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPerformance according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PerformanceCardinalityCheckerRule: public CardinalityCheckerRule<IPerformance>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPerformance> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetMaxAcceleration() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetMaxDeceleration() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetMaxSpeed() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PerformanceCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPerformance> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPerformance> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPhase according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PhaseCardinalityCheckerRule: public CardinalityCheckerRule<IPhase>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPhase> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDuration() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PhaseCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPhase> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPhase> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPolyline according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PolylineCardinalityCheckerRule: public CardinalityCheckerRule<IPolyline>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPolyline> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                const auto kVerticesSize = object->GetVerticesSize();
                // Check too few elements
                if (kVerticesSize < 2)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VERTEX, 2, kVerticesSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             PolylineCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPolyline> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPolyline> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPositionInLaneCoordinates according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInLaneCoordinatesCardinalityCheckerRule: public CardinalityCheckerRule<IPositionInLaneCoordinates>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPositionInLaneCoordinates> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetLaneId().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPathS() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PATH_S, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PositionInLaneCoordinatesCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPositionInRoadCoordinates according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionInRoadCoordinatesCardinalityCheckerRule: public CardinalityCheckerRule<IPositionInRoadCoordinates>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPositionInRoadCoordinates> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPathS() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PATH_S, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetT() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__T, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PositionInRoadCoordinatesCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionInRoadCoordinates> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionInRoadCoordinates> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPositionOfCurrentEntity according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PositionOfCurrentEntityCardinalityCheckerRule: public CardinalityCheckerRule<IPositionOfCurrentEntity>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPositionOfCurrentEntity> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PositionOfCurrentEntityCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionOfCurrentEntity> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionOfCurrentEntity> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPrecipitation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationCardinalityCheckerRule: public CardinalityCheckerRule<IPrecipitation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPrecipitation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetIntensity() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPrecipitationType() == PrecipitationType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PrecipitationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IPrivate according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrivateCardinalityCheckerRule: public CardinalityCheckerRule<IPrivate>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IPrivate> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kPrivateActionsSize = object->GetPrivateActionsSize();
                // Check too few elements
                if (kPrivateActionsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION, 1, kPrivateActionsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             PrivateCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrivate> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrivate> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IProperty according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PropertyCardinalityCheckerRule: public CardinalityCheckerRule<IProperty>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IProperty> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             PropertyCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IProperty> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IProperty> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IReachPositionCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReachPositionConditionCardinalityCheckerRule: public CardinalityCheckerRule<IReachPositionCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IReachPositionCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetTolerance() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ReachPositionConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeDistanceCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceConditionCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeDistanceCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeDistanceCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFreespace() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRelativeDistanceType() == RelativeDistanceType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeDistanceConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeLanePosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeLanePositionCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeLanePosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeLanePosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDLane() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__D_LANE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDs() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeLanePositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeLanePosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeLanePosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeObjectPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeObjectPositionCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeObjectPosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeObjectPosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDx() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DX, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDy() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeObjectPositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeObjectPosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeObjectPosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeRoadPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeRoadPositionCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeRoadPosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeRoadPosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDs() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDt() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeRoadPositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeRoadPosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeRoadPosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeSpeedCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedConditionCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeSpeedCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeSpeedCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeSpeedConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeSpeedToMaster according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeSpeedToMasterCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeSpeedToMaster>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeSpeedToMaster> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetSpeedTargetValueType() == SpeedTargetValueType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeSpeedToMasterCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedToMaster> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeSpeedToMaster> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeTargetLane according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeTargetLane>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeTargetLane> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeTargetLaneCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLane> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLane> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeTargetLaneOffset according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetLaneOffsetCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeTargetLaneOffset>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeTargetLaneOffset> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeTargetLaneOffsetCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLaneOffset> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetLaneOffset> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeTargetSpeed according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeTargetSpeedCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeTargetSpeed>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeTargetSpeed> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetContinuous() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSpeedTargetValueType() == SpeedTargetValueType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeTargetSpeedCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetSpeed> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeTargetSpeed> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRelativeWorldPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeWorldPositionCardinalityCheckerRule: public CardinalityCheckerRule<IRelativeWorldPosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRelativeWorldPosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDx() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DX, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDy() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RelativeWorldPositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeWorldPosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeWorldPosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRoadCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadConditionCardinalityCheckerRule: public CardinalityCheckerRule<IRoadCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoadCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetFrictionScaleFactor() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RoadConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRoadPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoadPositionCardinalityCheckerRule: public CardinalityCheckerRule<IRoadPosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoadPosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRoadId().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetS() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__S, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetT() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__T, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RoadPositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoadPosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoadPosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRoute according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteCardinalityCheckerRule: public CardinalityCheckerRule<IRoute>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoute> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetClosed() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CLOSED, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kWaypointsSize = object->GetWaypointsSize();
                // Check too few elements
                if (kWaypointsSize < 2)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__WAYPOINT, 2, kWaypointsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             RouteCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoute> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoute> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRouteCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IRouteCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRouteCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RouteCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRouteCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRouteCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IRoutePosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutePositionCardinalityCheckerRule: public CardinalityCheckerRule<IRoutePosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IRoutePosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRouteRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ROUTE_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetInRoutePosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             RoutePositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoutePosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoutePosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IScenarioDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioDefinitionCardinalityCheckerRule: public CardinalityCheckerRule<IScenarioDefinition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IScenarioDefinition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCatalogLocations() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRoadNetwork() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ROAD_NETWORK, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntities() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetStoryboard() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STORYBOARD, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ScenarioDefinitionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IScenarioDefinition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IScenarioDefinition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IScenarioObject according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ScenarioObjectCardinalityCheckerRule: public CardinalityCheckerRule<IScenarioObject>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IScenarioObject> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityObject() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_OBJECT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             ScenarioObjectCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IScenarioObject> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IScenarioObject> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ISimulationTimeCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SimulationTimeConditionCardinalityCheckerRule: public CardinalityCheckerRule<ISimulationTimeCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISimulationTimeCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             SimulationTimeConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISimulationTimeCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISimulationTimeCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ISpeedAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedActionCardinalityCheckerRule: public CardinalityCheckerRule<ISpeedAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISpeedAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetSpeedActionDynamics() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSpeedActionTarget() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             SpeedActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISpeedAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISpeedAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ISpeedCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedConditionCardinalityCheckerRule: public CardinalityCheckerRule<ISpeedCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISpeedCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             SpeedConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISpeedCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISpeedCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IStandStillCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StandStillConditionCardinalityCheckerRule: public CardinalityCheckerRule<IStandStillCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStandStillCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDuration() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             StandStillConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IStory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryCardinalityCheckerRule: public CardinalityCheckerRule<IStory>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStory> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kActsSize = object->GetActsSize();
                // Check too few elements
                if (kActsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ACT, 1, kActsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             StoryCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStory> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStory> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IStoryboard according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardCardinalityCheckerRule: public CardinalityCheckerRule<IStoryboard>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStoryboard> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetInit() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__INIT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kStoriesSize = object->GetStoriesSize();
                // Check too few elements
                if (kStoriesSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STORY, 1, kStoriesSize, VIOLATION_TYPE::TOO_FEW) );
                }
                // Check violation
                // Check required
                if (object->GetStopTrigger() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STOP_TRIGGER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             StoryboardCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStoryboard> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStoryboard> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IStoryboardElementStateCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardElementStateConditionCardinalityCheckerRule: public CardinalityCheckerRule<IStoryboardElementStateCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IStoryboardElementStateCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetState() == StoryboardElementState::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetStoryboardElementRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetStoryboardElementType() == StoryboardElementType::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             StoryboardElementStateConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStoryboardElementStateCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStoryboardElementStateCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ISun according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SunCardinalityCheckerRule: public CardinalityCheckerRule<ISun>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISun> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAzimuth() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetElevation() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetIntensity() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__INTENSITY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             SunCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISun> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISun> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ISynchronizeAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SynchronizeActionCardinalityCheckerRule: public CardinalityCheckerRule<ISynchronizeAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ISynchronizeAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetMasterEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTargetPositionMaster() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTargetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TARGET_POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             SynchronizeActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISynchronizeAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISynchronizeAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITeleportAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TeleportActionCardinalityCheckerRule: public CardinalityCheckerRule<ITeleportAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITeleportAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TeleportActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITeleportAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITeleportAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITimeHeadwayCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeHeadwayConditionCardinalityCheckerRule: public CardinalityCheckerRule<ITimeHeadwayCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeHeadwayCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAlongRoute() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetEntityRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFreespace() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TimeHeadwayConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITimeOfDay according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayCardinalityCheckerRule: public CardinalityCheckerRule<ITimeOfDay>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeOfDay> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAnimation() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDateTime() == DateTime())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TimeOfDayCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeOfDay> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeOfDay> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITimeOfDayCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeOfDayConditionCardinalityCheckerRule: public CardinalityCheckerRule<ITimeOfDayCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeOfDayCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDateTime() == DateTime())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TimeOfDayConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeOfDayCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeOfDayCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITimeToCollisionCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimeToCollisionConditionCardinalityCheckerRule: public CardinalityCheckerRule<ITimeToCollisionCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITimeToCollisionCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetAlongRoute() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ALONG_ROUTE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFreespace() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTimeToCollisionConditionTarget() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TimeToCollisionConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITiming according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TimingCardinalityCheckerRule: public CardinalityCheckerRule<ITiming>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITiming> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDomainAbsoluteRelative() == ReferenceContext::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetOffset() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OFFSET, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetScale() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SCALE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TimingCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITiming> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITiming> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficDefinition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficDefinitionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficDefinition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficDefinition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetVehicleCategoryDistribution() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetControllerDistribution() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficDefinitionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficDefinition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficDefinition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSignalCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalConditionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSignalCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetState().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSignalConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSignalController according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSignalController>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalController> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSignalControllerCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSignalControllerAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerActionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSignalControllerAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalControllerAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPhase().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PHASE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrafficSignalControllerRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSignalControllerActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSignalControllerCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalControllerConditionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSignalControllerCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalControllerCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetPhase().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PHASE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrafficSignalControllerRef() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSignalControllerConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalControllerCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSignalState according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSignalState>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalState> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetState().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrafficSignalId().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSignalStateCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalState> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalState> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSignalStateAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSignalStateActionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSignalStateAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSignalStateAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetState().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSignalStateActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalStateAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalStateAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSinkAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSinkActionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSinkAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSinkAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRadius() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RADIUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSinkActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSourceAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSourceActionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSourceAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSourceAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRadius() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RADIUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRate() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrafficDefinition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSourceActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrafficSwarmAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrafficSwarmActionCardinalityCheckerRule: public CardinalityCheckerRule<ITrafficSwarmAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrafficSwarmAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetInnerRadius() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetNumberOfVehicles() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetOffset() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OFFSET, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSemiMajorAxis() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSemiMinorAxis() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetCentralObject() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTrafficDefinition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_DEFINITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrafficSwarmActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrajectory according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryCardinalityCheckerRule: public CardinalityCheckerRule<ITrajectory>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectory> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetClosed() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CLOSED, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetShape() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SHAPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrajectoryCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectory> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectory> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrajectoryCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<ITrajectoryCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectoryCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrajectoryCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectoryCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectoryCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITrajectoryFollowingMode according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TrajectoryFollowingModeCardinalityCheckerRule: public CardinalityCheckerRule<ITrajectoryFollowingMode>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITrajectoryFollowingMode> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetFollowingMode() == FollowingMode::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TrajectoryFollowingModeCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrajectoryFollowingMode> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrajectoryFollowingMode> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITransitionDynamics according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TransitionDynamicsCardinalityCheckerRule: public CardinalityCheckerRule<ITransitionDynamics>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITransitionDynamics> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDynamicsDimension() == DynamicsDimension::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetDynamicsShape() == DynamicsShape::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TransitionDynamicsCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITraveledDistanceCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TraveledDistanceConditionCardinalityCheckerRule: public CardinalityCheckerRule<ITraveledDistanceCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITraveledDistanceCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetValue() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             TraveledDistanceConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type ITriggeringEntities according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggeringEntitiesCardinalityCheckerRule: public CardinalityCheckerRule<ITriggeringEntities>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<ITriggeringEntities> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetTriggeringEntitiesRule() == TriggeringEntitiesRule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRIGGERING_ENTITIES_RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                const auto kEntityRefsSize = object->GetEntityRefsSize();
                // Check too few elements
                if (kEntityRefsSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_REF, 1, kEntityRefsSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             TriggeringEntitiesCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITriggeringEntities> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITriggeringEntities> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IUserDefinedAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedActionCardinalityCheckerRule: public CardinalityCheckerRule<IUserDefinedAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUserDefinedAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCustomCommandAction() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             UserDefinedActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUserDefinedAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUserDefinedAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IUserDefinedValueCondition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class UserDefinedValueConditionCardinalityCheckerRule: public CardinalityCheckerRule<IUserDefinedValueCondition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IUserDefinedValueCondition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetRule() == Rule::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetValue().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             UserDefinedValueConditionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IUserDefinedValueCondition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IUserDefinedValueCondition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IVehicle according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCardinalityCheckerRule: public CardinalityCheckerRule<IVehicle>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicle> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetName().empty())
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetVehicleCategory() == VehicleCategory::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetBoundingBox() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPerformance() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PERFORMANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetAxles() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__AXLES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetProperties() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PROPERTIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             VehicleCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicle> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicle> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IVehicleCatalogLocation according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCatalogLocationCardinalityCheckerRule: public CardinalityCheckerRule<IVehicleCatalogLocation>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicleCatalogLocation> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetDirectory() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             VehicleCatalogLocationCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCatalogLocation> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCatalogLocation> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IVehicleCategoryDistribution according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionCardinalityCheckerRule: public CardinalityCheckerRule<IVehicleCategoryDistribution>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicleCategoryDistribution> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                const auto kVehicleCategoryDistributionEntriesSize = object->GetVehicleCategoryDistributionEntriesSize();
                // Check too few elements
                if (kVehicleCategoryDistributionEntriesSize < 1)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY, 1, kVehicleCategoryDistributionEntriesSize, VIOLATION_TYPE::TOO_FEW) );
                }
                 return violations;
            }


        public:
             VehicleCategoryDistributionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistribution> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistribution> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IVehicleCategoryDistributionEntry according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategoryDistributionEntryCardinalityCheckerRule: public CardinalityCheckerRule<IVehicleCategoryDistributionEntry>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVehicleCategoryDistributionEntry> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCategory() == VehicleCategory::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetWeight() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             VehicleCategoryDistributionEntryCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IVertex according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VertexCardinalityCheckerRule: public CardinalityCheckerRule<IVertex>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVertex> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetTime() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TIME, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             VertexCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVertex> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVertex> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IVisibilityAction according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VisibilityActionCardinalityCheckerRule: public CardinalityCheckerRule<IVisibilityAction>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IVisibilityAction> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetGraphics() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSensors() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SENSORS, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetTraffic() == false)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             VisibilityActionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVisibilityAction> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVisibilityAction> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IWaypoint according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WaypointCardinalityCheckerRule: public CardinalityCheckerRule<IWaypoint>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IWaypoint> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetRouteStrategy() == RouteStrategy::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPosition() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             WaypointCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IWaypoint> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IWaypoint> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IWeather according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WeatherCardinalityCheckerRule: public CardinalityCheckerRule<IWeather>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IWeather> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetCloudState() == CloudState::UNKNOWN)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CLOUD_STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetSun() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SUN, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetFog() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__FOG, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetPrecipitation() == nullptr)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PRECIPITATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             WeatherCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IWeather> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IWeather> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * A cardinality checker rule class for the type IWorldPosition according to OpenSCENARIO standard
         * all properties and children are checked if they are not optinal
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class WorldPositionCardinalityCheckerRule: public CardinalityCheckerRule<IWorldPosition>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
            {
                std::string message;
                if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
                {
                    message = GetRequiredMessage(violation.propertyName);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
                {
                    message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
                {
                    message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
                }
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<IWorldPosition> object)
            {
                std::vector<CardinalityViolation> violations;
                // Check violation
                // Check required
                if (object->GetX() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__X, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                // Check violation
                // Check required
                if (object->GetY() == 0)
                {
                    violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__Y, 0, 1, VIOLATION_TYPE::REQUIRED) );
                }
                 return violations;
            }


        public:
             WorldPositionCardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IWorldPosition> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IWorldPosition> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

    }
}
