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


#include "CardinalityCheckerRulesV1_3.h"
#include "OscConstantsV1_3.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {

        std::string AbsoluteSpeedCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AbsoluteSpeedCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAbsoluteSpeed> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AbsoluteSpeedCardinalityCheckerRule::AbsoluteSpeedCardinalityCheckerRule() = default;

        void AbsoluteSpeedCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AbsoluteSpeedCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AbsoluteTargetLaneCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AbsoluteTargetLaneCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAbsoluteTargetLane> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AbsoluteTargetLaneCardinalityCheckerRule::AbsoluteTargetLaneCardinalityCheckerRule() = default;

        void AbsoluteTargetLaneCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteTargetLane>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AbsoluteTargetLaneCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteTargetLane>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AbsoluteTargetLaneOffsetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AbsoluteTargetLaneOffsetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAbsoluteTargetLaneOffset> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AbsoluteTargetLaneOffsetCardinalityCheckerRule::AbsoluteTargetLaneOffsetCardinalityCheckerRule() = default;

        void AbsoluteTargetLaneOffsetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteTargetLaneOffset>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AbsoluteTargetLaneOffsetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteTargetLaneOffset>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AbsoluteTargetSpeedCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AbsoluteTargetSpeedCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAbsoluteTargetSpeed> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AbsoluteTargetSpeedCardinalityCheckerRule::AbsoluteTargetSpeedCardinalityCheckerRule() = default;

        void AbsoluteTargetSpeedCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteTargetSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AbsoluteTargetSpeedCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAbsoluteTargetSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AccelerationConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AccelerationConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAccelerationCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AccelerationConditionCardinalityCheckerRule::AccelerationConditionCardinalityCheckerRule() = default;

        void AccelerationConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAccelerationCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AccelerationConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAccelerationCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AcquirePositionActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AcquirePositionActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAcquirePositionAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AcquirePositionActionCardinalityCheckerRule::AcquirePositionActionCardinalityCheckerRule() = default;

        void AcquirePositionActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAcquirePositionAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AcquirePositionActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAcquirePositionAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ActCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ActCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAct> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
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

            //Xor elements check

            return violations;
        }


        ActCardinalityCheckerRule::ActCardinalityCheckerRule() = default;

        void ActCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAct>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ActCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAct>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetGlobalAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__GLOBAL_ACTION );
            elementsDefined += object->IsSetUserDefinedAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_ACTION );
            elementsDefined += object->IsSetPrivateAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PRIVATE_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ActionCardinalityCheckerRule::ActionCardinalityCheckerRule() = default;

        void ActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ActorsCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ActorsCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IActors> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetSelectTriggeringEntities())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ActorsCardinalityCheckerRule::ActorsCardinalityCheckerRule() = default;

        void ActorsCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IActors>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ActorsCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IActors>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AddEntityActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AddEntityActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAddEntityAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AddEntityActionCardinalityCheckerRule::AddEntityActionCardinalityCheckerRule() = default;

        void AddEntityActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAddEntityAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AddEntityActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAddEntityAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AngleConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AngleConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAngleCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetAngle())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANGLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetAngleTolerance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANGLE_TOLERANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetAngleType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANGLE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AngleConditionCardinalityCheckerRule::AngleConditionCardinalityCheckerRule() = default;

        void AngleConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAngleCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AngleConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAngleCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AnimationActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AnimationActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAnimationAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetAnimationType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ANIMATION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AnimationActionCardinalityCheckerRule::AnimationActionCardinalityCheckerRule() = default;

        void AnimationActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AnimationActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AnimationFileCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AnimationFileCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAnimationFile> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFile())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__FILE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AnimationFileCardinalityCheckerRule::AnimationFileCardinalityCheckerRule() = default;

        void AnimationFileCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationFile>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AnimationFileCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationFile>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AnimationStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AnimationStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAnimationState> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AnimationStateCardinalityCheckerRule::AnimationStateCardinalityCheckerRule() = default;

        void AnimationStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AnimationStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AnimationTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AnimationTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAnimationType> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetComponentAnimation()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__COMPONENT_ANIMATION );
            elementsDefined += object->IsSetPedestrianAnimation()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PEDESTRIAN_ANIMATION );
            elementsDefined += object->IsSetAnimationFile()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ANIMATION_FILE );
            elementsDefined += object->IsSetUserDefinedAnimation()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_ANIMATION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        AnimationTypeCardinalityCheckerRule::AnimationTypeCardinalityCheckerRule() = default;

        void AnimationTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AnimationTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAnimationType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AppearanceActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AppearanceActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAppearanceAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetLightStateAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LIGHT_STATE_ACTION );
            elementsDefined += object->IsSetAnimationAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ANIMATION_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        AppearanceActionCardinalityCheckerRule::AppearanceActionCardinalityCheckerRule() = default;

        void AppearanceActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAppearanceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AppearanceActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAppearanceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AssignRouteActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AssignRouteActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAssignRouteAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetRoute()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ROUTE );
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        AssignRouteActionCardinalityCheckerRule::AssignRouteActionCardinalityCheckerRule() = default;

        void AssignRouteActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAssignRouteAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AssignRouteActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAssignRouteAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AutomaticGearCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AutomaticGearCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAutomaticGear> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetGear())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__GEAR, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AutomaticGearCardinalityCheckerRule::AutomaticGearCardinalityCheckerRule() = default;

        void AutomaticGearCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAutomaticGear>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AutomaticGearCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAutomaticGear>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AxleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AxleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAxle> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMaxSteering())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPositionX())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__POSITION_X, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPositionZ())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__POSITION_Z, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrackWidth())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetWheelDiameter())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AxleCardinalityCheckerRule::AxleCardinalityCheckerRule() = default;

        void AxleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAxle>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AxleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAxle>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string AxlesCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> AxlesCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IAxles> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRearAxle())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__REAR_AXLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        AxlesCardinalityCheckerRule::AxlesCardinalityCheckerRule() = default;

        void AxlesCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IAxles>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void AxlesCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IAxles>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string BoundingBoxCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> BoundingBoxCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IBoundingBox> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCenter())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CENTER, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDimensions())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIMENSIONS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        BoundingBoxCardinalityCheckerRule::BoundingBoxCardinalityCheckerRule() = default;

        void BoundingBoxCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IBoundingBox>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void BoundingBoxCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IBoundingBox>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string BrakeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> BrakeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IBrake> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        BrakeCardinalityCheckerRule::BrakeCardinalityCheckerRule() = default;

        void BrakeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IBrake>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void BrakeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IBrake>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string BrakeInputCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> BrakeInputCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IBrakeInput> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetBrakePercent()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__BRAKE_PERCENT );
            elementsDefined += object->IsSetBrakeForce()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__BRAKE_FORCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        BrakeInputCardinalityCheckerRule::BrakeInputCardinalityCheckerRule() = default;

        void BrakeInputCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IBrakeInput>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void BrakeInputCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IBrakeInput>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ByEntityConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ByEntityConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IByEntityCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTriggeringEntities())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRIGGERING_ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityCondition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_CONDITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ByEntityConditionCardinalityCheckerRule::ByEntityConditionCardinalityCheckerRule() = default;

        void ByEntityConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IByEntityCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ByEntityConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IByEntityCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ByObjectTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ByObjectTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IByObjectType> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ByObjectTypeCardinalityCheckerRule::ByObjectTypeCardinalityCheckerRule() = default;

        void ByObjectTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IByObjectType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ByObjectTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IByObjectType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ByTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ByTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IByType> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetObjectType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OBJECT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ByTypeCardinalityCheckerRule::ByTypeCardinalityCheckerRule() = default;

        void ByTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IByType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ByTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IByType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ByValueConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ByValueConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IByValueCondition> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetParameterCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PARAMETER_CONDITION );
            elementsDefined += object->IsSetTimeOfDayCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TIME_OF_DAY_CONDITION );
            elementsDefined += object->IsSetSimulationTimeCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SIMULATION_TIME_CONDITION );
            elementsDefined += object->IsSetStoryboardElementStateCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION );
            elementsDefined += object->IsSetUserDefinedValueCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_VALUE_CONDITION );
            elementsDefined += object->IsSetTrafficSignalCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONDITION );
            elementsDefined += object->IsSetTrafficSignalControllerCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION );
            elementsDefined += object->IsSetVariableCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__VARIABLE_CONDITION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ByValueConditionCardinalityCheckerRule::ByValueConditionCardinalityCheckerRule() = default;

        void ByValueConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IByValueCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ByValueConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IByValueCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CatalogCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CatalogCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICatalog> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        CatalogCardinalityCheckerRule::CatalogCardinalityCheckerRule() = default;

        void CatalogCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICatalog>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CatalogCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICatalog>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CatalogDefinitionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CatalogDefinitionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICatalogDefinition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCatalog())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CATALOG, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        CatalogDefinitionCardinalityCheckerRule::CatalogDefinitionCardinalityCheckerRule() = default;

        void CatalogDefinitionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICatalogDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CatalogDefinitionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICatalogDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CatalogReferenceCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CatalogReferenceCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICatalogReference> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCatalogName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CATALOG_NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntryName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTRY_NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        CatalogReferenceCardinalityCheckerRule::CatalogReferenceCardinalityCheckerRule() = default;

        void CatalogReferenceCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICatalogReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CatalogReferenceCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICatalogReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CenterCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CenterCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICenter> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetX())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__X, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetY())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__Y, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetZ())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__Z, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        CenterCardinalityCheckerRule::CenterCardinalityCheckerRule() = default;

        void CenterCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICenter>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CenterCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICenter>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CentralSwarmObjectCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CentralSwarmObjectCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICentralSwarmObject> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        CentralSwarmObjectCardinalityCheckerRule::CentralSwarmObjectCardinalityCheckerRule() = default;

        void CentralSwarmObjectCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICentralSwarmObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CentralSwarmObjectCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICentralSwarmObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ClothoidCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ClothoidCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IClothoid> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCurvature())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CURVATURE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLength())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LENGTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ClothoidCardinalityCheckerRule::ClothoidCardinalityCheckerRule() = default;

        void ClothoidCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IClothoid>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ClothoidCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IClothoid>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ClothoidSplineCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ClothoidSplineCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IClothoidSpline> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kSegmentsSize = object->GetSegmentsSize();
            // Check too few elements
            if (kSegmentsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CLOTHOID_SPLINE_SEGMENT, 1, kSegmentsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ClothoidSplineCardinalityCheckerRule::ClothoidSplineCardinalityCheckerRule() = default;

        void ClothoidSplineCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IClothoidSpline>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ClothoidSplineCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IClothoidSpline>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ClothoidSplineSegmentCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ClothoidSplineSegmentCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IClothoidSplineSegment> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCurvatureEnd())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_END, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetCurvatureStart())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CURVATURE_START, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLength())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LENGTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ClothoidSplineSegmentCardinalityCheckerRule::ClothoidSplineSegmentCardinalityCheckerRule() = default;

        void ClothoidSplineSegmentCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IClothoidSplineSegment>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ClothoidSplineSegmentCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IClothoidSplineSegment>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CollisionConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CollisionConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICollisionCondition> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetEntityRef()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ENTITY_REF );
            elementsDefined += object->IsSetByType()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__BY_TYPE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        CollisionConditionCardinalityCheckerRule::CollisionConditionCardinalityCheckerRule() = default;

        void CollisionConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICollisionCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CollisionConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICollisionCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ColorCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ColorCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IColor> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetColorType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__COLOR_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetColorRgb()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__COLOR_RGB );
            elementsDefined += object->IsSetColorCmyk()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__COLOR_CMYK );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ColorCardinalityCheckerRule::ColorCardinalityCheckerRule() = default;

        void ColorCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IColor>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ColorCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IColor>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ColorCmykCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ColorCmykCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IColorCmyk> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCyan())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CYAN, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetKey())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__KEY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetMagenta())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAGENTA, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetYellow())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__YELLOW, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ColorCmykCardinalityCheckerRule::ColorCmykCardinalityCheckerRule() = default;

        void ColorCmykCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IColorCmyk>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ColorCmykCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IColorCmyk>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ColorRgbCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ColorRgbCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IColorRgb> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetBlue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__BLUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetGreen())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__GREEN, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRed())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RED, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ColorRgbCardinalityCheckerRule::ColorRgbCardinalityCheckerRule() = default;

        void ColorRgbCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IColorRgb>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ColorRgbCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IColorRgb>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ComponentAnimationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ComponentAnimationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IComponentAnimation> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetVehicleComponent()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__VEHICLE_COMPONENT );
            elementsDefined += object->IsSetUserDefinedComponent()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_COMPONENT );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ComponentAnimationCardinalityCheckerRule::ComponentAnimationCardinalityCheckerRule() = default;

        void ComponentAnimationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IComponentAnimation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ComponentAnimationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IComponentAnimation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetConditionEdge())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONDITION_EDGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDelay())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DELAY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetByEntityCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__BY_ENTITY_CONDITION );
            elementsDefined += object->IsSetByValueCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__BY_VALUE_CONDITION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ConditionCardinalityCheckerRule::ConditionCardinalityCheckerRule() = default;

        void ConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ConditionGroupCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ConditionGroupCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IConditionGroup> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kConditionsSize = object->GetConditionsSize();
            // Check too few elements
            if (kConditionsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONDITION, 1, kConditionsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ConditionGroupCardinalityCheckerRule::ConditionGroupCardinalityCheckerRule() = default;

        void ConditionGroupCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IConditionGroup>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ConditionGroupCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IConditionGroup>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ConnectTrailerActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ConnectTrailerActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IConnectTrailerAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTrailerRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAILER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ConnectTrailerActionCardinalityCheckerRule::ConnectTrailerActionCardinalityCheckerRule() = default;

        void ConnectTrailerActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IConnectTrailerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ConnectTrailerActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IConnectTrailerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ControlPointCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ControlPointCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IControlPoint> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ControlPointCardinalityCheckerRule::ControlPointCardinalityCheckerRule() = default;

        void ControlPointCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IControlPoint>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ControlPointCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IControlPoint>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ControllerCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ControllerCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IController> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ControllerCardinalityCheckerRule::ControllerCardinalityCheckerRule() = default;

        void ControllerCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IController>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ControllerCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IController>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ControllerActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ControllerActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IControllerAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetAssignControllerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ASSIGN_CONTROLLER_ACTION );
            elementsDefined += object->IsSetOverrideControllerValueAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION );
            elementsDefined += object->IsSetActivateControllerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ControllerActionCardinalityCheckerRule::ControllerActionCardinalityCheckerRule() = default;

        void ControllerActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IControllerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ControllerActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IControllerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ControllerCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ControllerCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IControllerCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ControllerCatalogLocationCardinalityCheckerRule::ControllerCatalogLocationCardinalityCheckerRule() = default;

        void ControllerCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IControllerCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ControllerCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IControllerCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ControllerDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ControllerDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IControllerDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kControllerDistributionEntriesSize = object->GetControllerDistributionEntriesSize();
            // Check too few elements
            if (kControllerDistributionEntriesSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION_ENTRY, 1, kControllerDistributionEntriesSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ControllerDistributionCardinalityCheckerRule::ControllerDistributionCardinalityCheckerRule() = default;

        void ControllerDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IControllerDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ControllerDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IControllerDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ControllerDistributionEntryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ControllerDistributionEntryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IControllerDistributionEntry> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetController()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CONTROLLER );
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ControllerDistributionEntryCardinalityCheckerRule::ControllerDistributionEntryCardinalityCheckerRule() = default;

        void ControllerDistributionEntryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IControllerDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ControllerDistributionEntryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IControllerDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CustomCommandActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CustomCommandActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICustomCommandAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContent())
            {
                violations.push_back( CardinalityViolation("", 0, 1, VIOLATION_TYPE::REQUIRED_SIMPLE_CONTENT) );
            }
            // Check violation
            // Check required
            if (!object->IsSetType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        CustomCommandActionCardinalityCheckerRule::CustomCommandActionCardinalityCheckerRule() = default;

        void CustomCommandActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICustomCommandAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CustomCommandActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICustomCommandAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string CustomContentCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> CustomContentCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ICustomContent> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContent())
            {
                violations.push_back( CardinalityViolation("", 0, 1, VIOLATION_TYPE::REQUIRED_SIMPLE_CONTENT) );
            }

            //Xor elements check

            return violations;
        }


        CustomContentCardinalityCheckerRule::CustomContentCardinalityCheckerRule() = default;

        void CustomContentCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ICustomContent>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void CustomContentCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ICustomContent>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DeterministicMultiParameterDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DeterministicMultiParameterDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDeterministicMultiParameterDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDeterministicMultiParameterDistributionType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_MULTI_PARAMETER_DISTRIBUTION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DeterministicMultiParameterDistributionCardinalityCheckerRule::DeterministicMultiParameterDistributionCardinalityCheckerRule() = default;

        void DeterministicMultiParameterDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicMultiParameterDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicMultiParameterDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicMultiParameterDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DeterministicMultiParameterDistributionTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DeterministicMultiParameterDistributionTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDeterministicMultiParameterDistributionType> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValueSetDistribution())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VALUE_SET_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DeterministicMultiParameterDistributionTypeCardinalityCheckerRule::DeterministicMultiParameterDistributionTypeCardinalityCheckerRule() = default;

        void DeterministicMultiParameterDistributionTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicMultiParameterDistributionType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicMultiParameterDistributionTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicMultiParameterDistributionType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DeterministicParameterDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DeterministicParameterDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDeterministicParameterDistribution> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetDeterministicMultiParameterDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DETERMINISTIC_MULTI_PARAMETER_DISTRIBUTION );
            elementsDefined += object->IsSetDeterministicSingleParameterDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DETERMINISTIC_SINGLE_PARAMETER_DISTRIBUTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        DeterministicParameterDistributionCardinalityCheckerRule::DeterministicParameterDistributionCardinalityCheckerRule() = default;

        void DeterministicParameterDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicParameterDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicParameterDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicParameterDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DeterministicSingleParameterDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DeterministicSingleParameterDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDeterministicSingleParameterDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetParameterName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDeterministicSingleParameterDistributionType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DETERMINISTIC_SINGLE_PARAMETER_DISTRIBUTION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DeterministicSingleParameterDistributionCardinalityCheckerRule::DeterministicSingleParameterDistributionCardinalityCheckerRule() = default;

        void DeterministicSingleParameterDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicSingleParameterDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicSingleParameterDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicSingleParameterDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DeterministicSingleParameterDistributionTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DeterministicSingleParameterDistributionTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDeterministicSingleParameterDistributionType> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetDistributionSet()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DISTRIBUTION_SET );
            elementsDefined += object->IsSetDistributionRange()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DISTRIBUTION_RANGE );
            elementsDefined += object->IsSetUserDefinedDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        DeterministicSingleParameterDistributionTypeCardinalityCheckerRule::DeterministicSingleParameterDistributionTypeCardinalityCheckerRule() = default;

        void DeterministicSingleParameterDistributionTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicSingleParameterDistributionType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DeterministicSingleParameterDistributionTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDeterministicSingleParameterDistributionType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DimensionsCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DimensionsCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDimensions> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetHeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__HEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLength())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LENGTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetWidth())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WIDTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DimensionsCardinalityCheckerRule::DimensionsCardinalityCheckerRule() = default;

        void DimensionsCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDimensions>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DimensionsCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDimensions>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DirectionOfTravelDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DirectionOfTravelDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDirectionOfTravelDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetOpposite())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSame())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DirectionOfTravelDistributionCardinalityCheckerRule::DirectionOfTravelDistributionCardinalityCheckerRule() = default;

        void DirectionOfTravelDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDirectionOfTravelDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DirectionOfTravelDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDirectionOfTravelDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DirectoryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DirectoryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDirectory> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPath())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PATH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DirectoryCardinalityCheckerRule::DirectoryCardinalityCheckerRule() = default;

        void DirectoryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDirectory>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DirectoryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDirectory>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DistanceConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DistanceConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDistanceCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFreespace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DistanceConditionCardinalityCheckerRule::DistanceConditionCardinalityCheckerRule() = default;

        void DistanceConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDistanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DistanceConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDistanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DistributionDefinitionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DistributionDefinitionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDistributionDefinition> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetDeterministic()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DETERMINISTIC );
            elementsDefined += object->IsSetStochastic()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__STOCHASTIC );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        DistributionDefinitionCardinalityCheckerRule::DistributionDefinitionCardinalityCheckerRule() = default;

        void DistributionDefinitionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DistributionDefinitionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DistributionRangeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DistributionRangeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDistributionRange> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetStepWidth())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STEP_WIDTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRange())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__RANGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DistributionRangeCardinalityCheckerRule::DistributionRangeCardinalityCheckerRule() = default;

        void DistributionRangeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionRange>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DistributionRangeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionRange>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DistributionSetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DistributionSetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDistributionSet> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kElementsSize = object->GetElementsSize();
            // Check too few elements
            if (kElementsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ELEMENT, 1, kElementsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        DistributionSetCardinalityCheckerRule::DistributionSetCardinalityCheckerRule() = default;

        void DistributionSetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DistributionSetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DistributionSetElementCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DistributionSetElementCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDistributionSetElement> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DistributionSetElementCardinalityCheckerRule::DistributionSetElementCardinalityCheckerRule() = default;

        void DistributionSetElementCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionSetElement>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DistributionSetElementCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDistributionSetElement>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string DomeImageCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> DomeImageCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IDomeImage> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDomeFile())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DOME_FILE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        DomeImageCardinalityCheckerRule::DomeImageCardinalityCheckerRule() = default;

        void DomeImageCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IDomeImage>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void DomeImageCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IDomeImage>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EndOfRoadConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EndOfRoadConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEndOfRoadCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDuration())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        EndOfRoadConditionCardinalityCheckerRule::EndOfRoadConditionCardinalityCheckerRule() = default;

        void EndOfRoadConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEndOfRoadCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EndOfRoadConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEndOfRoadCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntityActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntityActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntityAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetAddEntityAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ADD_ENTITY_ACTION );
            elementsDefined += object->IsSetDeleteEntityAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DELETE_ENTITY_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        EntityActionCardinalityCheckerRule::EntityActionCardinalityCheckerRule() = default;

        void EntityActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntityAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntityAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntityConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntityConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntityCondition> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetEndOfRoadCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__END_OF_ROAD_CONDITION );
            elementsDefined += object->IsSetCollisionCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__COLLISION_CONDITION );
            elementsDefined += object->IsSetOffroadCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__OFFROAD_CONDITION );
            elementsDefined += object->IsSetTimeHeadwayCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TIME_HEADWAY_CONDITION );
            elementsDefined += object->IsSetTimeToCollisionCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION );
            elementsDefined += object->IsSetAccelerationCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ACCELERATION_CONDITION );
            elementsDefined += object->IsSetStandStillCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__STAND_STILL_CONDITION );
            elementsDefined += object->IsSetSpeedCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SPEED_CONDITION );
            elementsDefined += object->IsSetRelativeSpeedCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_CONDITION );
            elementsDefined += object->IsSetTraveledDistanceCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAVELED_DISTANCE_CONDITION );
            elementsDefined += object->IsSetReachPositionCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__REACH_POSITION_CONDITION );
            elementsDefined += object->IsSetDistanceCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DISTANCE_CONDITION );
            elementsDefined += object->IsSetRelativeDistanceCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_DISTANCE_CONDITION );
            elementsDefined += object->IsSetRelativeClearanceCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_CLEARANCE_CONDITION );
            elementsDefined += object->IsSetAngleCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ANGLE_CONDITION );
            elementsDefined += object->IsSetRelativeAngleCondition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_ANGLE_CONDITION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        EntityConditionCardinalityCheckerRule::EntityConditionCardinalityCheckerRule() = default;

        void EntityConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntityCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntityCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntityDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntityDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntityDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kEntityDistributionEntrySize = object->GetEntityDistributionEntrySize();
            // Check too few elements
            if (kEntityDistributionEntrySize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_DISTRIBUTION_ENTRY, 1, kEntityDistributionEntrySize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        EntityDistributionCardinalityCheckerRule::EntityDistributionCardinalityCheckerRule() = default;

        void EntityDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntityDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntityDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntityDistributionEntryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntityDistributionEntryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntityDistributionEntry> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetScenarioObjectTemplate())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SCENARIO_OBJECT_TEMPLATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        EntityDistributionEntryCardinalityCheckerRule::EntityDistributionEntryCardinalityCheckerRule() = default;

        void EntityDistributionEntryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntityDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityDistributionEntryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntityDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntityObjectCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntityObjectCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntityObject> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );
            elementsDefined += object->IsSetVehicle()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__VEHICLE );
            elementsDefined += object->IsSetPedestrian()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PEDESTRIAN );
            elementsDefined += object->IsSetMiscObject()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__MISC_OBJECT );
            elementsDefined += object->IsSetExternalObjectReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__EXTERNAL_OBJECT_REFERENCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        EntityObjectCardinalityCheckerRule::EntityObjectCardinalityCheckerRule() = default;

        void EntityObjectCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntityObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityObjectCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntityObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntityRefCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntityRefCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntityRef> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        EntityRefCardinalityCheckerRule::EntityRefCardinalityCheckerRule() = default;

        void EntityRefCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntityRef>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntityRefCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntityRef>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EntitySelectionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EntitySelectionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEntitySelection> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetMembers())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__MEMBERS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        EntitySelectionCardinalityCheckerRule::EntitySelectionCardinalityCheckerRule() = default;

        void EntitySelectionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEntitySelection>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EntitySelectionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEntitySelection>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EnvironmentCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EnvironmentCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEnvironment> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        EnvironmentCardinalityCheckerRule::EnvironmentCardinalityCheckerRule() = default;

        void EnvironmentCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEnvironment>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EnvironmentCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEnvironment>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EnvironmentActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EnvironmentActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEnvironmentAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetEnvironment()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ENVIRONMENT );
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        EnvironmentActionCardinalityCheckerRule::EnvironmentActionCardinalityCheckerRule() = default;

        void EnvironmentActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEnvironmentAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EnvironmentActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEnvironmentAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EnvironmentCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EnvironmentCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEnvironmentCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        EnvironmentCatalogLocationCardinalityCheckerRule::EnvironmentCatalogLocationCardinalityCheckerRule() = default;

        void EnvironmentCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEnvironmentCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EnvironmentCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEnvironmentCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string EventCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> EventCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IEvent> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPriority())
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

            //Xor elements check

            return violations;
        }


        EventCardinalityCheckerRule::EventCardinalityCheckerRule() = default;

        void EventCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IEvent>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void EventCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IEvent>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ExternalObjectReferenceCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ExternalObjectReferenceCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IExternalObjectReference> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ExternalObjectReferenceCardinalityCheckerRule::ExternalObjectReferenceCardinalityCheckerRule() = default;

        void ExternalObjectReferenceCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IExternalObjectReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ExternalObjectReferenceCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IExternalObjectReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string FileCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> FileCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IFile> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFilepath())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FILEPATH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        FileCardinalityCheckerRule::FileCardinalityCheckerRule() = default;

        void FileCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IFile>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void FileCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IFile>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string FileHeaderCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> FileHeaderCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IFileHeader> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetAuthor())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__AUTHOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDate())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDescription())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DESCRIPTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRevMajor())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRevMinor())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        FileHeaderCardinalityCheckerRule::FileHeaderCardinalityCheckerRule() = default;

        void FileHeaderCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IFileHeader>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void FileHeaderCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IFileHeader>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string FinalSpeedCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> FinalSpeedCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IFinalSpeed> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetAbsoluteSpeed()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ABSOLUTE_SPEED );
            elementsDefined += object->IsSetRelativeSpeedToMaster()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_SPEED_TO_MASTER );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        FinalSpeedCardinalityCheckerRule::FinalSpeedCardinalityCheckerRule() = default;

        void FinalSpeedCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IFinalSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void FinalSpeedCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IFinalSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string FogCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> FogCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IFog> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetVisualRange())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        FogCardinalityCheckerRule::FogCardinalityCheckerRule() = default;

        void FogCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IFog>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void FogCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IFog>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string FollowTrajectoryActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> FollowTrajectoryActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IFollowTrajectoryAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTimeReference())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TIME_REFERENCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrajectoryFollowingMode())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAJECTORY_FOLLOWING_MODE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        FollowTrajectoryActionCardinalityCheckerRule::FollowTrajectoryActionCardinalityCheckerRule() = default;

        void FollowTrajectoryActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IFollowTrajectoryAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void FollowTrajectoryActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IFollowTrajectoryAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string GearCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> GearCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IGear> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetManualGear()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__MANUAL_GEAR );
            elementsDefined += object->IsSetAutomaticGear()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__AUTOMATIC_GEAR );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        GearCardinalityCheckerRule::GearCardinalityCheckerRule() = default;

        void GearCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IGear>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void GearCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IGear>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string GlobalActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> GlobalActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IGlobalAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetEnvironmentAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ENVIRONMENT_ACTION );
            elementsDefined += object->IsSetEntityAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ENTITY_ACTION );
            elementsDefined += object->IsSetInfrastructureAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__INFRASTRUCTURE_ACTION );
            elementsDefined += object->IsSetSetMonitorAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SET_MONITOR_ACTION );
            elementsDefined += object->IsSetParameterAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PARAMETER_ACTION );
            elementsDefined += object->IsSetTrafficAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_ACTION );
            elementsDefined += object->IsSetVariableAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__VARIABLE_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        GlobalActionCardinalityCheckerRule::GlobalActionCardinalityCheckerRule() = default;

        void GlobalActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IGlobalAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void GlobalActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IGlobalAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string HistogramCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> HistogramCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IHistogram> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kBinsSize = object->GetBinsSize();
            // Check too few elements
            if (kBinsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BIN, 1, kBinsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        HistogramCardinalityCheckerRule::HistogramCardinalityCheckerRule() = default;

        void HistogramCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IHistogram>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void HistogramCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IHistogram>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string HistogramBinCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> HistogramBinCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IHistogramBin> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRange())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__RANGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        HistogramBinCardinalityCheckerRule::HistogramBinCardinalityCheckerRule() = default;

        void HistogramBinCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IHistogramBin>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void HistogramBinCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IHistogramBin>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string InRoutePositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> InRoutePositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IInRoutePosition> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetFromCurrentEntity()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__FROM_CURRENT_ENTITY );
            elementsDefined += object->IsSetFromRoadCoordinates()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__FROM_ROAD_COORDINATES );
            elementsDefined += object->IsSetFromLaneCoordinates()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__FROM_LANE_COORDINATES );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        InRoutePositionCardinalityCheckerRule::InRoutePositionCardinalityCheckerRule() = default;

        void InRoutePositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IInRoutePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void InRoutePositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IInRoutePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string InfrastructureActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> InfrastructureActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IInfrastructureAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTrafficSignalAction())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_ACTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        InfrastructureActionCardinalityCheckerRule::InfrastructureActionCardinalityCheckerRule() = default;

        void InfrastructureActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IInfrastructureAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void InfrastructureActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IInfrastructureAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string InitCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> InitCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IInit> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActions())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ACTIONS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        InitCardinalityCheckerRule::InitCardinalityCheckerRule() = default;

        void InitCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IInit>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void InitCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IInit>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string KnotCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> KnotCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IKnot> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        KnotCardinalityCheckerRule::KnotCardinalityCheckerRule() = default;

        void KnotCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IKnot>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void KnotCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IKnot>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LaneCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LaneCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILane> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LaneCardinalityCheckerRule::LaneCardinalityCheckerRule() = default;

        void LaneCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILane>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILane>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LaneChangeActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LaneChangeActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILaneChangeAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetLaneChangeActionDynamics())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION_DYNAMICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLaneChangeTarget())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_CHANGE_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LaneChangeActionCardinalityCheckerRule::LaneChangeActionCardinalityCheckerRule() = default;

        void LaneChangeActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILaneChangeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneChangeActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILaneChangeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LaneChangeTargetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LaneChangeTargetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILaneChangeTarget> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetRelativeTargetLane()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE );
            elementsDefined += object->IsSetAbsoluteTargetLane()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        LaneChangeTargetCardinalityCheckerRule::LaneChangeTargetCardinalityCheckerRule() = default;

        void LaneChangeTargetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILaneChangeTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneChangeTargetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILaneChangeTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LaneOffsetActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LaneOffsetActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILaneOffsetAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContinuous())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLaneOffsetActionDynamics())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION_DYNAMICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLaneOffsetTarget())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LANE_OFFSET_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LaneOffsetActionCardinalityCheckerRule::LaneOffsetActionCardinalityCheckerRule() = default;

        void LaneOffsetActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILaneOffsetAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneOffsetActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILaneOffsetAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LaneOffsetActionDynamicsCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LaneOffsetActionDynamicsCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILaneOffsetActionDynamics> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDynamicsShape())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LaneOffsetActionDynamicsCardinalityCheckerRule::LaneOffsetActionDynamicsCardinalityCheckerRule() = default;

        void LaneOffsetActionDynamicsCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILaneOffsetActionDynamics>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneOffsetActionDynamicsCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILaneOffsetActionDynamics>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LaneOffsetTargetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LaneOffsetTargetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILaneOffsetTarget> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetRelativeTargetLaneOffset()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_LANE_OFFSET );
            elementsDefined += object->IsSetAbsoluteTargetLaneOffset()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        LaneOffsetTargetCardinalityCheckerRule::LaneOffsetTargetCardinalityCheckerRule() = default;

        void LaneOffsetTargetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILaneOffsetTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LaneOffsetTargetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILaneOffsetTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LanePositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LanePositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILanePosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetLaneId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRoadId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetS())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__S, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LanePositionCardinalityCheckerRule::LanePositionCardinalityCheckerRule() = default;

        void LanePositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILanePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LanePositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILanePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LateralActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LateralActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILateralAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetLaneChangeAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LANE_CHANGE_ACTION );
            elementsDefined += object->IsSetLaneOffsetAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LANE_OFFSET_ACTION );
            elementsDefined += object->IsSetLateralDistanceAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LATERAL_DISTANCE_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        LateralActionCardinalityCheckerRule::LateralActionCardinalityCheckerRule() = default;

        void LateralActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILateralAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LateralActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILateralAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LateralDistanceActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LateralDistanceActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILateralDistanceAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContinuous())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetFreespace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LateralDistanceActionCardinalityCheckerRule::LateralDistanceActionCardinalityCheckerRule() = default;

        void LateralDistanceActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILateralDistanceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LateralDistanceActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILateralDistanceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LicenseCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LicenseCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILicense> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LicenseCardinalityCheckerRule::LicenseCardinalityCheckerRule() = default;

        void LicenseCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILicense>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LicenseCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILicense>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LightStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LightStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILightState> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMode())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MODE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LightStateCardinalityCheckerRule::LightStateCardinalityCheckerRule() = default;

        void LightStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILightState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LightStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILightState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LightStateActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LightStateActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILightStateAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetLightType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LIGHT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetLightState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__LIGHT_STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LightStateActionCardinalityCheckerRule::LightStateActionCardinalityCheckerRule() = default;

        void LightStateActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILightStateAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LightStateActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILightStateAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LightTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LightTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILightType> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetVehicleLight()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__VEHICLE_LIGHT );
            elementsDefined += object->IsSetUserDefinedLight()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_LIGHT );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        LightTypeCardinalityCheckerRule::LightTypeCardinalityCheckerRule() = default;

        void LightTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILightType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LightTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILightType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LogNormalDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LogNormalDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILogNormalDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetExpectedValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetVariance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VARIANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LogNormalDistributionCardinalityCheckerRule::LogNormalDistributionCardinalityCheckerRule() = default;

        void LogNormalDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILogNormalDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LogNormalDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILogNormalDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LongitudinalActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LongitudinalActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILongitudinalAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetSpeedAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SPEED_ACTION );
            elementsDefined += object->IsSetLongitudinalDistanceAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LONGITUDINAL_DISTANCE_ACTION );
            elementsDefined += object->IsSetSpeedProfileAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SPEED_PROFILE_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        LongitudinalActionCardinalityCheckerRule::LongitudinalActionCardinalityCheckerRule() = default;

        void LongitudinalActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILongitudinalAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LongitudinalActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILongitudinalAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string LongitudinalDistanceActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> LongitudinalDistanceActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ILongitudinalDistanceAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContinuous())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetFreespace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        LongitudinalDistanceActionCardinalityCheckerRule::LongitudinalDistanceActionCardinalityCheckerRule() = default;

        void LongitudinalDistanceActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ILongitudinalDistanceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void LongitudinalDistanceActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ILongitudinalDistanceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ManeuverCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ManeuverCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IManeuver> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
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

            //Xor elements check

            return violations;
        }


        ManeuverCardinalityCheckerRule::ManeuverCardinalityCheckerRule() = default;

        void ManeuverCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IManeuver>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ManeuverCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IManeuver>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ManeuverCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ManeuverCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IManeuverCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ManeuverCatalogLocationCardinalityCheckerRule::ManeuverCatalogLocationCardinalityCheckerRule() = default;

        void ManeuverCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IManeuverCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ManeuverCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IManeuverCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ManeuverGroupCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ManeuverGroupCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IManeuverGroup> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMaximumExecutionCount())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetActors())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ACTORS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ManeuverGroupCardinalityCheckerRule::ManeuverGroupCardinalityCheckerRule() = default;

        void ManeuverGroupCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IManeuverGroup>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ManeuverGroupCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IManeuverGroup>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ManualGearCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ManualGearCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IManualGear> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetNumber())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NUMBER, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ManualGearCardinalityCheckerRule::ManualGearCardinalityCheckerRule() = default;

        void ManualGearCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IManualGear>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ManualGearCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IManualGear>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string MiscObjectCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> MiscObjectCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IMiscObject> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMass())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MASS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetMiscObjectCategory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MISC_OBJECT_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetBoundingBox())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        MiscObjectCardinalityCheckerRule::MiscObjectCardinalityCheckerRule() = default;

        void MiscObjectCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IMiscObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void MiscObjectCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IMiscObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string MiscObjectCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> MiscObjectCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IMiscObjectCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        MiscObjectCatalogLocationCardinalityCheckerRule::MiscObjectCatalogLocationCardinalityCheckerRule() = default;

        void MiscObjectCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IMiscObjectCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void MiscObjectCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IMiscObjectCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ModifyRuleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ModifyRuleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IModifyRule> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetAddValue()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ADD_VALUE );
            elementsDefined += object->IsSetMultiplyByValue()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ModifyRuleCardinalityCheckerRule::ModifyRuleCardinalityCheckerRule() = default;

        void ModifyRuleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IModifyRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ModifyRuleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IModifyRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string MonitorDeclarationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> MonitorDeclarationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IMonitorDeclaration> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        MonitorDeclarationCardinalityCheckerRule::MonitorDeclarationCardinalityCheckerRule() = default;

        void MonitorDeclarationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IMonitorDeclaration>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void MonitorDeclarationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IMonitorDeclaration>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string NormalDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> NormalDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<INormalDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetExpectedValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetVariance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VARIANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        NormalDistributionCardinalityCheckerRule::NormalDistributionCardinalityCheckerRule() = default;

        void NormalDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<INormalDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void NormalDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<INormalDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string NurbsCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> NurbsCardinalityCheckerRule::GetAllViolations(std::shared_ptr<INurbs> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetOrder())
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

            //Xor elements check

            return violations;
        }


        NurbsCardinalityCheckerRule::NurbsCardinalityCheckerRule() = default;

        void NurbsCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<INurbs>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void NurbsCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<INurbs>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ObjectControllerCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ObjectControllerCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IObjectController> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );
            elementsDefined += object->IsSetController()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CONTROLLER );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ObjectControllerCardinalityCheckerRule::ObjectControllerCardinalityCheckerRule() = default;

        void ObjectControllerCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IObjectController>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ObjectControllerCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IObjectController>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OffroadConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OffroadConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOffroadCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDuration())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OffroadConditionCardinalityCheckerRule::OffroadConditionCardinalityCheckerRule() = default;

        void OffroadConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOffroadCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OffroadConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOffroadCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OpenScenarioCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OpenScenarioCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOpenScenario> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFileHeader())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__FILE_HEADER, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetOpenScenarioCategory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__OPEN_SCENARIO_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OpenScenarioCardinalityCheckerRule::OpenScenarioCardinalityCheckerRule() = default;

        void OpenScenarioCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOpenScenario>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OpenScenarioCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOpenScenario>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OpenScenarioCategoryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OpenScenarioCategoryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOpenScenarioCategory> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetScenarioDefinition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SCENARIO_DEFINITION );
            elementsDefined += object->IsSetCatalogDefinition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_DEFINITION );
            elementsDefined += object->IsSetParameterValueDistributionDefinition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION_DEFINITION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        OpenScenarioCategoryCardinalityCheckerRule::OpenScenarioCategoryCardinalityCheckerRule() = default;

        void OpenScenarioCategoryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOpenScenarioCategory>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OpenScenarioCategoryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOpenScenarioCategory>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OverrideBrakeActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OverrideBrakeActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOverrideBrakeAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActive())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OverrideBrakeActionCardinalityCheckerRule::OverrideBrakeActionCardinalityCheckerRule() = default;

        void OverrideBrakeActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideBrakeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OverrideBrakeActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideBrakeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OverrideClutchActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OverrideClutchActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOverrideClutchAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActive())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OverrideClutchActionCardinalityCheckerRule::OverrideClutchActionCardinalityCheckerRule() = default;

        void OverrideClutchActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideClutchAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OverrideClutchActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideClutchAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OverrideGearActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OverrideGearActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOverrideGearAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActive())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OverrideGearActionCardinalityCheckerRule::OverrideGearActionCardinalityCheckerRule() = default;

        void OverrideGearActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideGearAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OverrideGearActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideGearAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OverrideParkingBrakeActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OverrideParkingBrakeActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOverrideParkingBrakeAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActive())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OverrideParkingBrakeActionCardinalityCheckerRule::OverrideParkingBrakeActionCardinalityCheckerRule() = default;

        void OverrideParkingBrakeActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideParkingBrakeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OverrideParkingBrakeActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideParkingBrakeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OverrideSteeringWheelActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OverrideSteeringWheelActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOverrideSteeringWheelAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActive())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OverrideSteeringWheelActionCardinalityCheckerRule::OverrideSteeringWheelActionCardinalityCheckerRule() = default;

        void OverrideSteeringWheelActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideSteeringWheelAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OverrideSteeringWheelActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideSteeringWheelAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string OverrideThrottleActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> OverrideThrottleActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IOverrideThrottleAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetActive())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ACTIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        OverrideThrottleActionCardinalityCheckerRule::OverrideThrottleActionCardinalityCheckerRule() = default;

        void OverrideThrottleActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideThrottleAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void OverrideThrottleActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IOverrideThrottleAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetParameterRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetSetAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SET_ACTION );
            elementsDefined += object->IsSetModifyAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__MODIFY_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ParameterActionCardinalityCheckerRule::ParameterActionCardinalityCheckerRule() = default;

        void ParameterActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterAddValueRuleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterAddValueRuleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterAddValueRule> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterAddValueRuleCardinalityCheckerRule::ParameterAddValueRuleCardinalityCheckerRule() = default;

        void ParameterAddValueRuleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterAddValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterAddValueRuleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterAddValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterAssignmentCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterAssignmentCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterAssignment> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetParameterRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterAssignmentCardinalityCheckerRule::ParameterAssignmentCardinalityCheckerRule() = default;

        void ParameterAssignmentCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterAssignment>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterAssignmentCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterAssignment>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetParameterRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterConditionCardinalityCheckerRule::ParameterConditionCardinalityCheckerRule() = default;

        void ParameterConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterDeclarationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterDeclarationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterDeclaration> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetParameterType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterDeclarationCardinalityCheckerRule::ParameterDeclarationCardinalityCheckerRule() = default;

        void ParameterDeclarationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterDeclaration>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterDeclarationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterDeclaration>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterModifyActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterModifyActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterModifyAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterModifyActionCardinalityCheckerRule::ParameterModifyActionCardinalityCheckerRule() = default;

        void ParameterModifyActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterModifyAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterModifyActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterModifyAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterMultiplyByValueRuleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterMultiplyByValueRuleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterMultiplyByValueRule> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterMultiplyByValueRuleCardinalityCheckerRule::ParameterMultiplyByValueRuleCardinalityCheckerRule() = default;

        void ParameterMultiplyByValueRuleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterMultiplyByValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterMultiplyByValueRuleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterMultiplyByValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterSetActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterSetActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterSetAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterSetActionCardinalityCheckerRule::ParameterSetActionCardinalityCheckerRule() = default;

        void ParameterSetActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterSetAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterSetActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterSetAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterValueDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterValueDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterValueDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetScenarioFile())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SCENARIO_FILE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDistributionDefinition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DISTRIBUTION_DEFINITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterValueDistributionCardinalityCheckerRule::ParameterValueDistributionCardinalityCheckerRule() = default;

        void ParameterValueDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterValueDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterValueDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterValueDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterValueDistributionDefinitionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterValueDistributionDefinitionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterValueDistributionDefinition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetParameterValueDistribution())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ParameterValueDistributionDefinitionCardinalityCheckerRule::ParameterValueDistributionDefinitionCardinalityCheckerRule() = default;

        void ParameterValueDistributionDefinitionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterValueDistributionDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterValueDistributionDefinitionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterValueDistributionDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ParameterValueSetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ParameterValueSetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IParameterValueSet> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kParameterAssignmentsSize = object->GetParameterAssignmentsSize();
            // Check too few elements
            if (kParameterAssignmentsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PARAMETER_ASSIGNMENT, 1, kParameterAssignmentsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ParameterValueSetCardinalityCheckerRule::ParameterValueSetCardinalityCheckerRule() = default;

        void ParameterValueSetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IParameterValueSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ParameterValueSetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IParameterValueSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PedestrianCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PedestrianCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPedestrian> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMass())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MASS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPedestrianCategory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PEDESTRIAN_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetBoundingBox())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PedestrianCardinalityCheckerRule::PedestrianCardinalityCheckerRule() = default;

        void PedestrianCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPedestrian>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PedestrianCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPedestrian>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PedestrianCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PedestrianCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPedestrianCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PedestrianCatalogLocationCardinalityCheckerRule::PedestrianCatalogLocationCardinalityCheckerRule() = default;

        void PedestrianCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPedestrianCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PedestrianCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPedestrianCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PedestrianGestureCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PedestrianGestureCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPedestrianGesture> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetGesture())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__GESTURE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PedestrianGestureCardinalityCheckerRule::PedestrianGestureCardinalityCheckerRule() = default;

        void PedestrianGestureCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPedestrianGesture>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PedestrianGestureCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPedestrianGesture>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PerformanceCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PerformanceCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPerformance> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMaxAcceleration())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetMaxDeceleration())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetMaxSpeed())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PerformanceCardinalityCheckerRule::PerformanceCardinalityCheckerRule() = default;

        void PerformanceCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPerformance>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PerformanceCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPerformance>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PhaseCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PhaseCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPhase> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDuration())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PhaseCardinalityCheckerRule::PhaseCardinalityCheckerRule() = default;

        void PhaseCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPhase>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PhaseCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPhase>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PoissonDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PoissonDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPoissonDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetExpectedValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__EXPECTED_VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PoissonDistributionCardinalityCheckerRule::PoissonDistributionCardinalityCheckerRule() = default;

        void PoissonDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPoissonDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PoissonDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPoissonDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PolygonCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PolygonCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPolygon> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kPositionsSize = object->GetPositionsSize();
            // Check too few elements
            if (kPositionsSize < 3)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 3, kPositionsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        PolygonCardinalityCheckerRule::PolygonCardinalityCheckerRule() = default;

        void PolygonCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPolygon>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PolygonCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPolygon>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PolylineCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PolylineCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPolyline> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kVerticesSize = object->GetVerticesSize();
            // Check too few elements
            if (kVerticesSize < 2)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VERTEX, 2, kVerticesSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        PolylineCardinalityCheckerRule::PolylineCardinalityCheckerRule() = default;

        void PolylineCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPolyline>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PolylineCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPolyline>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPosition> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetWorldPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__WORLD_POSITION );
            elementsDefined += object->IsSetRelativeWorldPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_WORLD_POSITION );
            elementsDefined += object->IsSetRelativeObjectPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_OBJECT_POSITION );
            elementsDefined += object->IsSetRoadPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ROAD_POSITION );
            elementsDefined += object->IsSetRelativeRoadPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_ROAD_POSITION );
            elementsDefined += object->IsSetLanePosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LANE_POSITION );
            elementsDefined += object->IsSetRelativeLanePosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_LANE_POSITION );
            elementsDefined += object->IsSetRoutePosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ROUTE_POSITION );
            elementsDefined += object->IsSetGeoPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__GEO_POSITION );
            elementsDefined += object->IsSetTrajectoryPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAJECTORY_POSITION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        PositionCardinalityCheckerRule::PositionCardinalityCheckerRule() = default;

        void PositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PositionInLaneCoordinatesCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PositionInLaneCoordinatesCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPositionInLaneCoordinates> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetLaneId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LANE_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPathS())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PATH_S, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PositionInLaneCoordinatesCardinalityCheckerRule::PositionInLaneCoordinatesCardinalityCheckerRule() = default;

        void PositionInLaneCoordinatesCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPositionInLaneCoordinates>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PositionInLaneCoordinatesCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPositionInLaneCoordinates>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PositionInRoadCoordinatesCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PositionInRoadCoordinatesCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPositionInRoadCoordinates> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPathS())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PATH_S, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetT())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__T, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PositionInRoadCoordinatesCardinalityCheckerRule::PositionInRoadCoordinatesCardinalityCheckerRule() = default;

        void PositionInRoadCoordinatesCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPositionInRoadCoordinates>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PositionInRoadCoordinatesCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPositionInRoadCoordinates>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PositionOfCurrentEntityCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PositionOfCurrentEntityCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPositionOfCurrentEntity> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PositionOfCurrentEntityCardinalityCheckerRule::PositionOfCurrentEntityCardinalityCheckerRule() = default;

        void PositionOfCurrentEntityCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPositionOfCurrentEntity>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PositionOfCurrentEntityCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPositionOfCurrentEntity>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PrecipitationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PrecipitationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPrecipitation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPrecipitationType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PRECIPITATION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PrecipitationCardinalityCheckerRule::PrecipitationCardinalityCheckerRule() = default;

        void PrecipitationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPrecipitation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PrecipitationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPrecipitation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PrivateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PrivateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPrivate> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
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

            //Xor elements check

            return violations;
        }


        PrivateCardinalityCheckerRule::PrivateCardinalityCheckerRule() = default;

        void PrivateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPrivate>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PrivateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPrivate>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PrivateActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PrivateActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IPrivateAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetLongitudinalAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LONGITUDINAL_ACTION );
            elementsDefined += object->IsSetLateralAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LATERAL_ACTION );
            elementsDefined += object->IsSetVisibilityAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__VISIBILITY_ACTION );
            elementsDefined += object->IsSetSynchronizeAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SYNCHRONIZE_ACTION );
            elementsDefined += object->IsSetActivateControllerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ACTIVATE_CONTROLLER_ACTION );
            elementsDefined += object->IsSetControllerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CONTROLLER_ACTION );
            elementsDefined += object->IsSetTeleportAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TELEPORT_ACTION );
            elementsDefined += object->IsSetRoutingAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ROUTING_ACTION );
            elementsDefined += object->IsSetAppearanceAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__APPEARANCE_ACTION );
            elementsDefined += object->IsSetTrailerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAILER_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        PrivateActionCardinalityCheckerRule::PrivateActionCardinalityCheckerRule() = default;

        void PrivateActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IPrivateAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PrivateActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IPrivateAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ProbabilityDistributionSetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ProbabilityDistributionSetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IProbabilityDistributionSet> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kElementsSize = object->GetElementsSize();
            // Check too few elements
            if (kElementsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ELEMENT, 1, kElementsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ProbabilityDistributionSetCardinalityCheckerRule::ProbabilityDistributionSetCardinalityCheckerRule() = default;

        void ProbabilityDistributionSetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IProbabilityDistributionSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ProbabilityDistributionSetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IProbabilityDistributionSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ProbabilityDistributionSetElementCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ProbabilityDistributionSetElementCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IProbabilityDistributionSetElement> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ProbabilityDistributionSetElementCardinalityCheckerRule::ProbabilityDistributionSetElementCardinalityCheckerRule() = default;

        void ProbabilityDistributionSetElementCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IProbabilityDistributionSetElement>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ProbabilityDistributionSetElementCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IProbabilityDistributionSetElement>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string PropertyCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> PropertyCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IProperty> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        PropertyCardinalityCheckerRule::PropertyCardinalityCheckerRule() = default;

        void PropertyCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IProperty>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void PropertyCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IProperty>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RangeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RangeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRange> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetLowerLimit())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__LOWER_LIMIT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetUpperLimit())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__UPPER_LIMIT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RangeCardinalityCheckerRule::RangeCardinalityCheckerRule() = default;

        void RangeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRange>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RangeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRange>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ReachPositionConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ReachPositionConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IReachPositionCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTolerance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TOLERANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ReachPositionConditionCardinalityCheckerRule::ReachPositionConditionCardinalityCheckerRule() = default;

        void ReachPositionConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IReachPositionCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ReachPositionConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IReachPositionCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeAngleConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeAngleConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeAngleCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetAngle())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANGLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetAngleTolerance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANGLE_TOLERANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetAngleType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANGLE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeAngleConditionCardinalityCheckerRule::RelativeAngleConditionCardinalityCheckerRule() = default;

        void RelativeAngleConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeAngleCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeAngleConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeAngleCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeClearanceConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeClearanceConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeClearanceCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFreeSpace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREE_SPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetOppositeLanes())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OPPOSITE_LANES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeClearanceConditionCardinalityCheckerRule::RelativeClearanceConditionCardinalityCheckerRule() = default;

        void RelativeClearanceConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeClearanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeClearanceConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeClearanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeDistanceConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeDistanceConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeDistanceCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetFreespace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRelativeDistanceType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RELATIVE_DISTANCE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeDistanceConditionCardinalityCheckerRule::RelativeDistanceConditionCardinalityCheckerRule() = default;

        void RelativeDistanceConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeDistanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeDistanceConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeDistanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeLanePositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeLanePositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeLanePosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDLane())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__D_LANE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeLanePositionCardinalityCheckerRule::RelativeLanePositionCardinalityCheckerRule() = default;

        void RelativeLanePositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeLanePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeLanePositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeLanePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeObjectPositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeObjectPositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeObjectPosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDx())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDy())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeObjectPositionCardinalityCheckerRule::RelativeObjectPositionCardinalityCheckerRule() = default;

        void RelativeObjectPositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeObjectPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeObjectPositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeObjectPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeRoadPositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeRoadPositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeRoadPosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDs())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDt())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeRoadPositionCardinalityCheckerRule::RelativeRoadPositionCardinalityCheckerRule() = default;

        void RelativeRoadPositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeRoadPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeRoadPositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeRoadPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeSpeedConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeSpeedConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeSpeedCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeSpeedConditionCardinalityCheckerRule::RelativeSpeedConditionCardinalityCheckerRule() = default;

        void RelativeSpeedConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeSpeedCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeSpeedConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeSpeedCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeSpeedToMasterCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeSpeedToMasterCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeSpeedToMaster> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetSpeedTargetValueType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeSpeedToMasterCardinalityCheckerRule::RelativeSpeedToMasterCardinalityCheckerRule() = default;

        void RelativeSpeedToMasterCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeSpeedToMaster>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeSpeedToMasterCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeSpeedToMaster>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeTargetLaneCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeTargetLaneCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeTargetLane> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeTargetLaneCardinalityCheckerRule::RelativeTargetLaneCardinalityCheckerRule() = default;

        void RelativeTargetLaneCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeTargetLane>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeTargetLaneCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeTargetLane>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeTargetLaneOffsetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeTargetLaneOffsetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeTargetLaneOffset> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeTargetLaneOffsetCardinalityCheckerRule::RelativeTargetLaneOffsetCardinalityCheckerRule() = default;

        void RelativeTargetLaneOffsetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeTargetLaneOffset>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeTargetLaneOffsetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeTargetLaneOffset>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeTargetSpeedCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeTargetSpeedCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeTargetSpeed> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContinuous())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSpeedTargetValueType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeTargetSpeedCardinalityCheckerRule::RelativeTargetSpeedCardinalityCheckerRule() = default;

        void RelativeTargetSpeedCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeTargetSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeTargetSpeedCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeTargetSpeed>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RelativeWorldPositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RelativeWorldPositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRelativeWorldPosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDx())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDy())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RelativeWorldPositionCardinalityCheckerRule::RelativeWorldPositionCardinalityCheckerRule() = default;

        void RelativeWorldPositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeWorldPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RelativeWorldPositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRelativeWorldPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RoadConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RoadConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoadCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFrictionScaleFactor())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RoadConditionCardinalityCheckerRule::RoadConditionCardinalityCheckerRule() = default;

        void RoadConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoadCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RoadConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoadCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RoadCursorCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RoadCursorCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoadCursor> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRoadId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RoadCursorCardinalityCheckerRule::RoadCursorCardinalityCheckerRule() = default;

        void RoadCursorCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoadCursor>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RoadCursorCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoadCursor>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RoadPositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RoadPositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoadPosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRoadId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROAD_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetS())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__S, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetT())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__T, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RoadPositionCardinalityCheckerRule::RoadPositionCardinalityCheckerRule() = default;

        void RoadPositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoadPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RoadPositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoadPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RoadRangeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RoadRangeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoadRange> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kRoadCursorSize = object->GetRoadCursorSize();
            // Check too few elements
            if (kRoadCursorSize < 2)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ROAD_CURSOR, 2, kRoadCursorSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        RoadRangeCardinalityCheckerRule::RoadRangeCardinalityCheckerRule() = default;

        void RoadRangeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoadRange>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RoadRangeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoadRange>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RouteCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RouteCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoute> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetClosed())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CLOSED, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
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

            //Xor elements check

            return violations;
        }


        RouteCardinalityCheckerRule::RouteCardinalityCheckerRule() = default;

        void RouteCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoute>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RouteCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoute>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RouteCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RouteCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRouteCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RouteCatalogLocationCardinalityCheckerRule::RouteCatalogLocationCardinalityCheckerRule() = default;

        void RouteCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRouteCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RouteCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRouteCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RoutePositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RoutePositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoutePosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRouteRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ROUTE_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetInRoutePosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__IN_ROUTE_POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        RoutePositionCardinalityCheckerRule::RoutePositionCardinalityCheckerRule() = default;

        void RoutePositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoutePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RoutePositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoutePosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RouteRefCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RouteRefCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRouteRef> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetRoute()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ROUTE );
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        RouteRefCardinalityCheckerRule::RouteRefCardinalityCheckerRule() = default;

        void RouteRefCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRouteRef>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RouteRefCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRouteRef>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string RoutingActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> RoutingActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IRoutingAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetAssignRouteAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ASSIGN_ROUTE_ACTION );
            elementsDefined += object->IsSetFollowTrajectoryAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__FOLLOW_TRAJECTORY_ACTION );
            elementsDefined += object->IsSetAcquirePositionAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ACQUIRE_POSITION_ACTION );
            elementsDefined += object->IsSetRandomRouteAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RANDOM_ROUTE_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        RoutingActionCardinalityCheckerRule::RoutingActionCardinalityCheckerRule() = default;

        void RoutingActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IRoutingAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void RoutingActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IRoutingAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ScenarioDefinitionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ScenarioDefinitionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IScenarioDefinition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCatalogLocations())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CATALOG_LOCATIONS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRoadNetwork())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ROAD_NETWORK, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntities())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetStoryboard())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STORYBOARD, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ScenarioDefinitionCardinalityCheckerRule::ScenarioDefinitionCardinalityCheckerRule() = default;

        void ScenarioDefinitionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IScenarioDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ScenarioDefinitionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IScenarioDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ScenarioObjectCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ScenarioObjectCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IScenarioObject> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityObject())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_OBJECT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ScenarioObjectCardinalityCheckerRule::ScenarioObjectCardinalityCheckerRule() = default;

        void ScenarioObjectCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IScenarioObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ScenarioObjectCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IScenarioObject>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ScenarioObjectTemplateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ScenarioObjectTemplateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IScenarioObjectTemplate> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntitiyObject())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITIY_OBJECT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ScenarioObjectTemplateCardinalityCheckerRule::ScenarioObjectTemplateCardinalityCheckerRule() = default;

        void ScenarioObjectTemplateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IScenarioObjectTemplate>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ScenarioObjectTemplateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IScenarioObjectTemplate>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SelectedEntitiesCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SelectedEntitiesCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISelectedEntities> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetEntityRef()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ENTITY_REF );
            elementsDefined += object->IsSetByType()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__BY_TYPE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        SelectedEntitiesCardinalityCheckerRule::SelectedEntitiesCardinalityCheckerRule() = default;

        void SelectedEntitiesCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISelectedEntities>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SelectedEntitiesCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISelectedEntities>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SensorReferenceCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SensorReferenceCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISensorReference> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SensorReferenceCardinalityCheckerRule::SensorReferenceCardinalityCheckerRule() = default;

        void SensorReferenceCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISensorReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SensorReferenceCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISensorReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SensorReferenceSetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SensorReferenceSetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISensorReferenceSet> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kSensorReferencesSize = object->GetSensorReferencesSize();
            // Check too few elements
            if (kSensorReferencesSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SENSOR_REFERENCE, 1, kSensorReferencesSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        SensorReferenceSetCardinalityCheckerRule::SensorReferenceSetCardinalityCheckerRule() = default;

        void SensorReferenceSetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISensorReferenceSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SensorReferenceSetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISensorReferenceSet>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SetMonitorActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SetMonitorActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISetMonitorAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMonitorRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MONITOR_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SetMonitorActionCardinalityCheckerRule::SetMonitorActionCardinalityCheckerRule() = default;

        void SetMonitorActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISetMonitorAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SetMonitorActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISetMonitorAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ShapeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ShapeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IShape> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetPolyline()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__POLYLINE );
            elementsDefined += object->IsSetClothoid()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CLOTHOID );
            elementsDefined += object->IsSetClothoidSpline()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CLOTHOID_SPLINE );
            elementsDefined += object->IsSetNurbs()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__NURBS );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        ShapeCardinalityCheckerRule::ShapeCardinalityCheckerRule() = default;

        void ShapeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IShape>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ShapeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IShape>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SimulationTimeConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SimulationTimeConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISimulationTimeCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SimulationTimeConditionCardinalityCheckerRule::SimulationTimeConditionCardinalityCheckerRule() = default;

        void SimulationTimeConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISimulationTimeCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SimulationTimeConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISimulationTimeCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SpeedActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SpeedActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISpeedAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetSpeedActionDynamics())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SPEED_ACTION_DYNAMICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSpeedActionTarget())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SPEED_ACTION_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SpeedActionCardinalityCheckerRule::SpeedActionCardinalityCheckerRule() = default;

        void SpeedActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SpeedActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SpeedActionTargetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SpeedActionTargetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISpeedActionTarget> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetRelativeTargetSpeed()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__RELATIVE_TARGET_SPEED );
            elementsDefined += object->IsSetAbsoluteTargetSpeed()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ABSOLUTE_TARGET_SPEED );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        SpeedActionTargetCardinalityCheckerRule::SpeedActionTargetCardinalityCheckerRule() = default;

        void SpeedActionTargetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedActionTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SpeedActionTargetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedActionTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SpeedConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SpeedConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISpeedCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SpeedConditionCardinalityCheckerRule::SpeedConditionCardinalityCheckerRule() = default;

        void SpeedConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SpeedConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SpeedProfileActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SpeedProfileActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISpeedProfileAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFollowingMode())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            const auto kSpeedProfileEntrySize = object->GetSpeedProfileEntrySize();
            // Check too few elements
            if (kSpeedProfileEntrySize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SPEED_PROFILE_ENTRY, 1, kSpeedProfileEntrySize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        SpeedProfileActionCardinalityCheckerRule::SpeedProfileActionCardinalityCheckerRule() = default;

        void SpeedProfileActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedProfileAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SpeedProfileActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedProfileAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SpeedProfileEntryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SpeedProfileEntryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISpeedProfileEntry> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetSpeed())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SPEED, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SpeedProfileEntryCardinalityCheckerRule::SpeedProfileEntryCardinalityCheckerRule() = default;

        void SpeedProfileEntryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedProfileEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SpeedProfileEntryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISpeedProfileEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StandStillConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StandStillConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStandStillCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDuration())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DURATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        StandStillConditionCardinalityCheckerRule::StandStillConditionCardinalityCheckerRule() = default;

        void StandStillConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStandStillCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StandStillConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStandStillCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SteadyStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SteadyStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISteadyState> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetTargetDistanceSteadyState()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TARGET_DISTANCE_STEADY_STATE );
            elementsDefined += object->IsSetTargetTimeSteadyState()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TARGET_TIME_STEADY_STATE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        SteadyStateCardinalityCheckerRule::SteadyStateCardinalityCheckerRule() = default;

        void SteadyStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISteadyState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SteadyStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISteadyState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StochasticCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StochasticCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStochastic> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetNumberOfTestRuns())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_TEST_RUNS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            const auto kStochasticDistributionsSize = object->GetStochasticDistributionsSize();
            // Check too few elements
            if (kStochasticDistributionsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STOCHASTIC_DISTRIBUTION, 1, kStochasticDistributionsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        StochasticCardinalityCheckerRule::StochasticCardinalityCheckerRule() = default;

        void StochasticCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStochastic>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StochasticCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStochastic>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StochasticDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StochasticDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStochasticDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetParameterName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PARAMETER_NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetStochasticDistributionType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__STOCHASTIC_DISTRIBUTION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        StochasticDistributionCardinalityCheckerRule::StochasticDistributionCardinalityCheckerRule() = default;

        void StochasticDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStochasticDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StochasticDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStochasticDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StochasticDistributionTypeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StochasticDistributionTypeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStochasticDistributionType> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetProbabilityDistributionSet()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__PROBABILITY_DISTRIBUTION_SET );
            elementsDefined += object->IsSetNormalDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__NORMAL_DISTRIBUTION );
            elementsDefined += object->IsSetLogNormalDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__LOG_NORMAL_DISTRIBUTION );
            elementsDefined += object->IsSetUniformDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__UNIFORM_DISTRIBUTION );
            elementsDefined += object->IsSetPoissonDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__POISSON_DISTRIBUTION );
            elementsDefined += object->IsSetHistogram()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__HISTOGRAM );
            elementsDefined += object->IsSetUserDefinedDistribution()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__USER_DEFINED_DISTRIBUTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        StochasticDistributionTypeCardinalityCheckerRule::StochasticDistributionTypeCardinalityCheckerRule() = default;

        void StochasticDistributionTypeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStochasticDistributionType>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StochasticDistributionTypeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStochasticDistributionType>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StoryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StoryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStory> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
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

            //Xor elements check

            return violations;
        }


        StoryCardinalityCheckerRule::StoryCardinalityCheckerRule() = default;

        void StoryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStory>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StoryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStory>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StoryboardCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StoryboardCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStoryboard> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetInit())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__INIT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        StoryboardCardinalityCheckerRule::StoryboardCardinalityCheckerRule() = default;

        void StoryboardCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStoryboard>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StoryboardCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStoryboard>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string StoryboardElementStateConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> StoryboardElementStateConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IStoryboardElementStateCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetStoryboardElementRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetStoryboardElementType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        StoryboardElementStateConditionCardinalityCheckerRule::StoryboardElementStateConditionCardinalityCheckerRule() = default;

        void StoryboardElementStateConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IStoryboardElementStateCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void StoryboardElementStateConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IStoryboardElementStateCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SunCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SunCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISun> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetAzimuth())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetElevation())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ELEVATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SunCardinalityCheckerRule::SunCardinalityCheckerRule() = default;

        void SunCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISun>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SunCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISun>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string SynchronizeActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> SynchronizeActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ISynchronizeAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetMasterEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__MASTER_ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTargetPositionMaster())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TARGET_POSITION_MASTER, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTargetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TARGET_POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        SynchronizeActionCardinalityCheckerRule::SynchronizeActionCardinalityCheckerRule() = default;

        void SynchronizeActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ISynchronizeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void SynchronizeActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ISynchronizeAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TargetDistanceSteadyStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TargetDistanceSteadyStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITargetDistanceSteadyState> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDistance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DISTANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TargetDistanceSteadyStateCardinalityCheckerRule::TargetDistanceSteadyStateCardinalityCheckerRule() = default;

        void TargetDistanceSteadyStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITargetDistanceSteadyState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TargetDistanceSteadyStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITargetDistanceSteadyState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TargetTimeSteadyStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TargetTimeSteadyStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITargetTimeSteadyState> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTime())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TIME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TargetTimeSteadyStateCardinalityCheckerRule::TargetTimeSteadyStateCardinalityCheckerRule() = default;

        void TargetTimeSteadyStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITargetTimeSteadyState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TargetTimeSteadyStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITargetTimeSteadyState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TeleportActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TeleportActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITeleportAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TeleportActionCardinalityCheckerRule::TeleportActionCardinalityCheckerRule() = default;

        void TeleportActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITeleportAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TeleportActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITeleportAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimeHeadwayConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimeHeadwayConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITimeHeadwayCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetEntityRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ENTITY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetFreespace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TimeHeadwayConditionCardinalityCheckerRule::TimeHeadwayConditionCardinalityCheckerRule() = default;

        void TimeHeadwayConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITimeHeadwayCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeHeadwayConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITimeHeadwayCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimeOfDayCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimeOfDayCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITimeOfDay> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetAnimation())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ANIMATION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDateTime())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TimeOfDayCardinalityCheckerRule::TimeOfDayCardinalityCheckerRule() = default;

        void TimeOfDayCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITimeOfDay>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeOfDayCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITimeOfDay>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimeOfDayConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimeOfDayConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITimeOfDayCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDateTime())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DATE_TIME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TimeOfDayConditionCardinalityCheckerRule::TimeOfDayConditionCardinalityCheckerRule() = default;

        void TimeOfDayConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITimeOfDayCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeOfDayConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITimeOfDayCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimeReferenceCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimeReferenceCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITimeReference> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetNone()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__NONE );
            elementsDefined += object->IsSetTiming()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TIMING );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TimeReferenceCardinalityCheckerRule::TimeReferenceCardinalityCheckerRule() = default;

        void TimeReferenceCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITimeReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeReferenceCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITimeReference>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimeToCollisionConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimeToCollisionConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITimeToCollisionCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFreespace())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FREESPACE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTimeToCollisionConditionTarget())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TimeToCollisionConditionCardinalityCheckerRule::TimeToCollisionConditionCardinalityCheckerRule() = default;

        void TimeToCollisionConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITimeToCollisionCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeToCollisionConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITimeToCollisionCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimeToCollisionConditionTargetCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimeToCollisionConditionTargetCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITimeToCollisionConditionTarget> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetPosition()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__POSITION );
            elementsDefined += object->IsSetEntityRef()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ENTITY_REF );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TimeToCollisionConditionTargetCardinalityCheckerRule::TimeToCollisionConditionTargetCardinalityCheckerRule() = default;

        void TimeToCollisionConditionTargetCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITimeToCollisionConditionTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimeToCollisionConditionTargetCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITimeToCollisionConditionTarget>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TimingCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TimingCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITiming> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDomainAbsoluteRelative())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetOffset())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OFFSET, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetScale())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SCALE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TimingCardinalityCheckerRule::TimingCardinalityCheckerRule() = default;

        void TimingCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITiming>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TimingCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITiming>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetTrafficSourceAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SOURCE_ACTION );
            elementsDefined += object->IsSetTrafficSinkAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SINK_ACTION );
            elementsDefined += object->IsSetTrafficSwarmAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SWARM_ACTION );
            elementsDefined += object->IsSetTrafficAreaAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_AREA_ACTION );
            elementsDefined += object->IsSetTrafficStopAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_STOP_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TrafficActionCardinalityCheckerRule::TrafficActionCardinalityCheckerRule() = default;

        void TrafficActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficAreaCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficAreaCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficArea> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetPolygon()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__POLYGON );
            elementsDefined += object->IsSetRoadRange()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ROAD_RANGE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TrafficAreaCardinalityCheckerRule::TrafficAreaCardinalityCheckerRule() = default;

        void TrafficAreaCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficArea>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficAreaCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficArea>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficAreaActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficAreaActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficAreaAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContinuous())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CONTINUOUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetNumberOfEntities())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_ENTITIES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrafficDistribution())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrafficArea())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_AREA, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficAreaActionCardinalityCheckerRule::TrafficAreaActionCardinalityCheckerRule() = default;

        void TrafficAreaActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficAreaAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficAreaActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficAreaAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficDefinitionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficDefinitionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficDefinition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetVehicleCategoryDistribution())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetControllerDistribution())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CONTROLLER_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficDefinitionCardinalityCheckerRule::TrafficDefinitionCardinalityCheckerRule() = default;

        void TrafficDefinitionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficDefinitionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficDefinition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kTrafficDistributionEntrySize = object->GetTrafficDistributionEntrySize();
            // Check too few elements
            if (kTrafficDistributionEntrySize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAFFIC_DISTRIBUTION_ENTRY, 1, kTrafficDistributionEntrySize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        TrafficDistributionCardinalityCheckerRule::TrafficDistributionCardinalityCheckerRule() = default;

        void TrafficDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficDistributionEntryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficDistributionEntryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficDistributionEntry> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetEntityDistribution())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__ENTITY_DISTRIBUTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficDistributionEntryCardinalityCheckerRule::TrafficDistributionEntryCardinalityCheckerRule() = default;

        void TrafficDistributionEntryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficDistributionEntryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetTrafficSignalControllerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION );
            elementsDefined += object->IsSetTrafficSignalStateAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TrafficSignalActionCardinalityCheckerRule::TrafficSignalActionCardinalityCheckerRule() = default;

        void TrafficSignalActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalConditionCardinalityCheckerRule::TrafficSignalConditionCardinalityCheckerRule() = default;

        void TrafficSignalConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalControllerCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalControllerCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalController> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalControllerCardinalityCheckerRule::TrafficSignalControllerCardinalityCheckerRule() = default;

        void TrafficSignalControllerCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalController>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalControllerCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalController>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalControllerActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalControllerActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalControllerAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPhase())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PHASE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrafficSignalControllerRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalControllerActionCardinalityCheckerRule::TrafficSignalControllerActionCardinalityCheckerRule() = default;

        void TrafficSignalControllerActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalControllerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalControllerActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalControllerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalControllerConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalControllerConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalControllerCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPhase())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__PHASE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrafficSignalControllerRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalControllerConditionCardinalityCheckerRule::TrafficSignalControllerConditionCardinalityCheckerRule() = default;

        void TrafficSignalControllerConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalControllerCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalControllerConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalControllerCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalGroupStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalGroupStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalGroupState> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalGroupStateCardinalityCheckerRule::TrafficSignalGroupStateCardinalityCheckerRule() = default;

        void TrafficSignalGroupStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalGroupState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalGroupStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalGroupState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalStateCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalStateCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalState> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrafficSignalId())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC_SIGNAL_ID, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalStateCardinalityCheckerRule::TrafficSignalStateCardinalityCheckerRule() = default;

        void TrafficSignalStateCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalState>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalStateCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalState>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSignalStateActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSignalStateActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSignalStateAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetState())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__STATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSignalStateActionCardinalityCheckerRule::TrafficSignalStateActionCardinalityCheckerRule() = default;

        void TrafficSignalStateActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalStateAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSignalStateActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSignalStateAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSinkActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSinkActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSinkAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRadius())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RADIUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSinkActionCardinalityCheckerRule::TrafficSinkActionCardinalityCheckerRule() = default;

        void TrafficSinkActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSinkAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSinkActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSinkAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSourceActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSourceActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSourceAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRadius())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RADIUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRate())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RATE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSourceActionCardinalityCheckerRule::TrafficSourceActionCardinalityCheckerRule() = default;

        void TrafficSourceActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSourceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSourceActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSourceAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrafficSwarmActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrafficSwarmActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrafficSwarmAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetInnerRadius())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetNumberOfVehicles())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NUMBER_OF_VEHICLES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetOffset())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__OFFSET, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSemiMajorAxis())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSemiMinorAxis())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetCentralObject())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CENTRAL_OBJECT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrafficSwarmActionCardinalityCheckerRule::TrafficSwarmActionCardinalityCheckerRule() = default;

        void TrafficSwarmActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSwarmAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrafficSwarmActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrafficSwarmAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrailerCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrailerCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrailer> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetTrailer()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAILER );
            elementsDefined += object->IsSetTrailerRef()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAILER_REF );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TrailerCardinalityCheckerRule::TrailerCardinalityCheckerRule() = default;

        void TrailerCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrailer>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrailerCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrailer>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrailerActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrailerActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrailerAction> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetConnectTrailerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CONNECT_TRAILER_ACTION );
            elementsDefined += object->IsSetDisconnectTrailerAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__DISCONNECT_TRAILER_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TrailerActionCardinalityCheckerRule::TrailerActionCardinalityCheckerRule() = default;

        void TrailerActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrailerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrailerActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrailerAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrailerCouplerCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrailerCouplerCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrailerCoupler> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDx())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrailerCouplerCardinalityCheckerRule::TrailerCouplerCardinalityCheckerRule() = default;

        void TrailerCouplerCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrailerCoupler>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrailerCouplerCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrailerCoupler>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrailerHitchCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrailerHitchCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrailerHitch> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDx())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrailerHitchCardinalityCheckerRule::TrailerHitchCardinalityCheckerRule() = default;

        void TrailerHitchCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrailerHitch>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrailerHitchCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrailerHitch>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrajectoryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrajectoryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrajectory> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetClosed())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CLOSED, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetShape())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__SHAPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrajectoryCardinalityCheckerRule::TrajectoryCardinalityCheckerRule() = default;

        void TrajectoryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectory>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrajectoryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectory>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrajectoryCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrajectoryCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrajectoryCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrajectoryCatalogLocationCardinalityCheckerRule::TrajectoryCatalogLocationCardinalityCheckerRule() = default;

        void TrajectoryCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrajectoryCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrajectoryFollowingModeCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrajectoryFollowingModeCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrajectoryFollowingMode> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetFollowingMode())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__FOLLOWING_MODE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrajectoryFollowingModeCardinalityCheckerRule::TrajectoryFollowingModeCardinalityCheckerRule() = default;

        void TrajectoryFollowingModeCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryFollowingMode>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrajectoryFollowingModeCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryFollowingMode>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrajectoryPositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrajectoryPositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrajectoryPosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetS())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__S, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTrajectoryRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__TRAJECTORY_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TrajectoryPositionCardinalityCheckerRule::TrajectoryPositionCardinalityCheckerRule() = default;

        void TrajectoryPositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrajectoryPositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TrajectoryRefCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TrajectoryRefCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITrajectoryRef> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetTrajectory()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__TRAJECTORY );
            elementsDefined += object->IsSetCatalogReference()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__CATALOG_REFERENCE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        TrajectoryRefCardinalityCheckerRule::TrajectoryRefCardinalityCheckerRule() = default;

        void TrajectoryRefCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryRef>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TrajectoryRefCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITrajectoryRef>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TransitionDynamicsCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TransitionDynamicsCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITransitionDynamics> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDynamicsDimension())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_DIMENSION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetDynamicsShape())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DYNAMICS_SHAPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TransitionDynamicsCardinalityCheckerRule::TransitionDynamicsCardinalityCheckerRule() = default;

        void TransitionDynamicsCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITransitionDynamics>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TransitionDynamicsCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITransitionDynamics>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TraveledDistanceConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TraveledDistanceConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITraveledDistanceCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        TraveledDistanceConditionCardinalityCheckerRule::TraveledDistanceConditionCardinalityCheckerRule() = default;

        void TraveledDistanceConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITraveledDistanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TraveledDistanceConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITraveledDistanceCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string TriggeringEntitiesCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> TriggeringEntitiesCardinalityCheckerRule::GetAllViolations(std::shared_ptr<ITriggeringEntities> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetTriggeringEntitiesRule())
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

            //Xor elements check

            return violations;
        }


        TriggeringEntitiesCardinalityCheckerRule::TriggeringEntitiesCardinalityCheckerRule() = default;

        void TriggeringEntitiesCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<ITriggeringEntities>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void TriggeringEntitiesCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<ITriggeringEntities>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UniformDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UniformDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUniformDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRange())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__RANGE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UniformDistributionCardinalityCheckerRule::UniformDistributionCardinalityCheckerRule() = default;

        void UniformDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUniformDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UniformDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUniformDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UsedAreaCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UsedAreaCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUsedArea> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kPositionsSize = object->GetPositionsSize();
            // Check too few elements
            if (kPositionsSize < 2)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 2, kPositionsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        UsedAreaCardinalityCheckerRule::UsedAreaCardinalityCheckerRule() = default;

        void UsedAreaCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUsedArea>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UsedAreaCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUsedArea>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UserDefinedActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UserDefinedActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUserDefinedAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCustomCommandAction())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__CUSTOM_COMMAND_ACTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UserDefinedActionCardinalityCheckerRule::UserDefinedActionCardinalityCheckerRule() = default;

        void UserDefinedActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UserDefinedActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UserDefinedAnimationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UserDefinedAnimationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUserDefinedAnimation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetUserDefinedAnimationType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_ANIMATION_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UserDefinedAnimationCardinalityCheckerRule::UserDefinedAnimationCardinalityCheckerRule() = default;

        void UserDefinedAnimationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedAnimation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UserDefinedAnimationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedAnimation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UserDefinedComponentCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UserDefinedComponentCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUserDefinedComponent> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetUserDefinedComponentType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_COMPONENT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UserDefinedComponentCardinalityCheckerRule::UserDefinedComponentCardinalityCheckerRule() = default;

        void UserDefinedComponentCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedComponent>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UserDefinedComponentCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedComponent>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UserDefinedDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UserDefinedDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUserDefinedDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetContent())
            {
                violations.push_back( CardinalityViolation("", 0, 1, VIOLATION_TYPE::REQUIRED_SIMPLE_CONTENT) );
            }
            // Check violation
            // Check required
            if (!object->IsSetType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UserDefinedDistributionCardinalityCheckerRule::UserDefinedDistributionCardinalityCheckerRule() = default;

        void UserDefinedDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UserDefinedDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UserDefinedLightCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UserDefinedLightCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUserDefinedLight> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetUserDefinedLightType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__USER_DEFINED_LIGHT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UserDefinedLightCardinalityCheckerRule::UserDefinedLightCardinalityCheckerRule() = default;

        void UserDefinedLightCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedLight>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UserDefinedLightCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedLight>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string UserDefinedValueConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> UserDefinedValueConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IUserDefinedValueCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        UserDefinedValueConditionCardinalityCheckerRule::UserDefinedValueConditionCardinalityCheckerRule() = default;

        void UserDefinedValueConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedValueCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void UserDefinedValueConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IUserDefinedValueCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ValueConstraintCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ValueConstraintCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IValueConstraint> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        ValueConstraintCardinalityCheckerRule::ValueConstraintCardinalityCheckerRule() = default;

        void ValueConstraintCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IValueConstraint>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ValueConstraintCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IValueConstraint>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ValueConstraintGroupCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ValueConstraintGroupCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IValueConstraintGroup> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kConstraintsSize = object->GetConstraintsSize();
            // Check too few elements
            if (kConstraintsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VALUE_CONSTRAINT, 1, kConstraintsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ValueConstraintGroupCardinalityCheckerRule::ValueConstraintGroupCardinalityCheckerRule() = default;

        void ValueConstraintGroupCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IValueConstraintGroup>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ValueConstraintGroupCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IValueConstraintGroup>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string ValueSetDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> ValueSetDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IValueSetDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kParameterValueSetsSize = object->GetParameterValueSetsSize();
            // Check too few elements
            if (kParameterValueSetsSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PARAMETER_VALUE_SET, 1, kParameterValueSetsSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        ValueSetDistributionCardinalityCheckerRule::ValueSetDistributionCardinalityCheckerRule() = default;

        void ValueSetDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IValueSetDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void ValueSetDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IValueSetDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetVariableRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetSetAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__SET_ACTION );
            elementsDefined += object->IsSetModifyAction()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__MODIFY_ACTION );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        VariableActionCardinalityCheckerRule::VariableActionCardinalityCheckerRule() = default;

        void VariableActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableAddValueRuleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableAddValueRuleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableAddValueRule> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VariableAddValueRuleCardinalityCheckerRule::VariableAddValueRuleCardinalityCheckerRule() = default;

        void VariableAddValueRuleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableAddValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableAddValueRuleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableAddValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableConditionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableConditionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableCondition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetVariableRef())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_REF, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VariableConditionCardinalityCheckerRule::VariableConditionCardinalityCheckerRule() = default;

        void VariableConditionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableConditionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableCondition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableDeclarationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableDeclarationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableDeclaration> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetVariableType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VARIABLE_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VariableDeclarationCardinalityCheckerRule::VariableDeclarationCardinalityCheckerRule() = default;

        void VariableDeclarationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableDeclaration>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableDeclarationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableDeclaration>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableModifyActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableModifyActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableModifyAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRule())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__RULE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VariableModifyActionCardinalityCheckerRule::VariableModifyActionCardinalityCheckerRule() = default;

        void VariableModifyActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableModifyAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableModifyActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableModifyAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableModifyRuleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableModifyRuleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableModifyRule> object)
        {
            std::vector<CardinalityViolation> violations;

            //Xor elements check
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            elementsDefined += object->IsSetAddValue()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__ADD_VALUE );
            elementsDefined += object->IsSetMultiplyByValue()?1:0;
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__MULTIPLY_BY_VALUE );

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );

            return violations;
        }


        VariableModifyRuleCardinalityCheckerRule::VariableModifyRuleCardinalityCheckerRule() = default;

        void VariableModifyRuleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableModifyRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableModifyRuleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableModifyRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableMultiplyByValueRuleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableMultiplyByValueRuleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableMultiplyByValueRule> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VariableMultiplyByValueRuleCardinalityCheckerRule::VariableMultiplyByValueRuleCardinalityCheckerRule() = default;

        void VariableMultiplyByValueRuleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableMultiplyByValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableMultiplyByValueRuleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableMultiplyByValueRule>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VariableSetActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VariableSetActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVariableSetAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetValue())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VALUE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VariableSetActionCardinalityCheckerRule::VariableSetActionCardinalityCheckerRule() = default;

        void VariableSetActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVariableSetAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VariableSetActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVariableSetAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicle> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetName())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__NAME, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetVehicleCategory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetBoundingBox())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__BOUNDING_BOX, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPerformance())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__PERFORMANCE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetAxles())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__AXLES, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VehicleCardinalityCheckerRule::VehicleCardinalityCheckerRule() = default;

        void VehicleCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicle>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicle>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleCatalogLocationCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleCatalogLocationCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleCatalogLocation> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirectory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__DIRECTORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VehicleCatalogLocationCardinalityCheckerRule::VehicleCatalogLocationCardinalityCheckerRule() = default;

        void VehicleCatalogLocationCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleCatalogLocationCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleCatalogLocation>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleCategoryDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleCategoryDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleCategoryDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kVehicleCategoryDistributionEntriesSize = object->GetVehicleCategoryDistributionEntriesSize();
            // Check too few elements
            if (kVehicleCategoryDistributionEntriesSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY, 1, kVehicleCategoryDistributionEntriesSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        VehicleCategoryDistributionCardinalityCheckerRule::VehicleCategoryDistributionCardinalityCheckerRule() = default;

        void VehicleCategoryDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleCategoryDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleCategoryDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleCategoryDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleCategoryDistributionEntryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleCategoryDistributionEntryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleCategoryDistributionEntry> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetCategory())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__CATEGORY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VehicleCategoryDistributionEntryCardinalityCheckerRule::VehicleCategoryDistributionEntryCardinalityCheckerRule() = default;

        void VehicleCategoryDistributionEntryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleCategoryDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleCategoryDistributionEntryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleCategoryDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleComponentCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleComponentCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleComponent> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetVehicleComponentType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_COMPONENT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VehicleComponentCardinalityCheckerRule::VehicleComponentCardinalityCheckerRule() = default;

        void VehicleComponentCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleComponent>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleComponentCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleComponent>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleLightCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleLightCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleLight> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetVehicleLightType())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__VEHICLE_LIGHT_TYPE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VehicleLightCardinalityCheckerRule::VehicleLightCardinalityCheckerRule() = default;

        void VehicleLightCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleLight>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleLightCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleLight>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleRoleDistributionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleRoleDistributionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleRoleDistribution> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            const auto kVehicleRoleDistributionEntriesSize = object->GetVehicleRoleDistributionEntriesSize();
            // Check too few elements
            if (kVehicleRoleDistributionEntriesSize < 1)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__VEHICLE_ROLE_DISTRIBUTION_ENTRY, 1, kVehicleRoleDistributionEntriesSize, VIOLATION_TYPE::TOO_FEW) );
            }

            //Xor elements check

            return violations;
        }


        VehicleRoleDistributionCardinalityCheckerRule::VehicleRoleDistributionCardinalityCheckerRule() = default;

        void VehicleRoleDistributionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleRoleDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleRoleDistributionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleRoleDistribution>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VehicleRoleDistributionEntryCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VehicleRoleDistributionEntryCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVehicleRoleDistributionEntry> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRole())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROLE, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetWeight())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__WEIGHT, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VehicleRoleDistributionEntryCardinalityCheckerRule::VehicleRoleDistributionEntryCardinalityCheckerRule() = default;

        void VehicleRoleDistributionEntryCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleRoleDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VehicleRoleDistributionEntryCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVehicleRoleDistributionEntry>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VertexCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VertexCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVertex> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VertexCardinalityCheckerRule::VertexCardinalityCheckerRule() = default;

        void VertexCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVertex>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VertexCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVertex>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string VisibilityActionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> VisibilityActionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IVisibilityAction> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetGraphics())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__GRAPHICS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSensors())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SENSORS, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetTraffic())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__TRAFFIC, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        VisibilityActionCardinalityCheckerRule::VisibilityActionCardinalityCheckerRule() = default;

        void VisibilityActionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IVisibilityAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void VisibilityActionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IVisibilityAction>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string WaypointCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> WaypointCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IWaypoint> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetRouteStrategy())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__ROUTE_STRATEGY, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetPosition())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__POSITION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        WaypointCardinalityCheckerRule::WaypointCardinalityCheckerRule() = default;

        void WaypointCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IWaypoint>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void WaypointCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IWaypoint>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string WindCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> WindCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IWind> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetDirection())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__DIRECTION, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetSpeed())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__SPEED, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        WindCardinalityCheckerRule::WindCardinalityCheckerRule() = default;

        void WindCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IWind>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void WindCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IWind>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

        std::string WorldPositionCardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
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
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> WorldPositionCardinalityCheckerRule::GetAllViolations(std::shared_ptr<IWorldPosition> object)
        {
            std::vector<CardinalityViolation> violations;
            // Check violation
            // Check required
            if (!object->IsSetX())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__X, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }
            // Check violation
            // Check required
            if (!object->IsSetY())
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__Y, 0, 1, VIOLATION_TYPE::REQUIRED) );
            }

            //Xor elements check

            return violations;
        }


        WorldPositionCardinalityCheckerRule::WorldPositionCardinalityCheckerRule() = default;

        void WorldPositionCardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<IWorldPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void WorldPositionCardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<IWorldPosition>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

    }
}
