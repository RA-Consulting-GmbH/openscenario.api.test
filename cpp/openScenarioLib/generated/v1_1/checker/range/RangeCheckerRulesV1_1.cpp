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
 
#define _USE_MATH_DEFINES
#include "RangeCheckerRulesV1_1.h"
#include "OscConstantsV1_1.h"
#include <math.h>

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        void AbsoluteSpeedRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AbsoluteSpeedRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AbsoluteSpeedRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAbsoluteSpeed>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void AxleRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AxleRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AxleRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAxle>(object);
                const auto kMaxSteering = typedObject->GetMaxSteering();
                if (!(kMaxSteering <= M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING,std::to_string(typedObject->GetMaxSteering()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING,std::to_string(typedObject->GetMaxSteering()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    }
                }
                if (!(kMaxSteering >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING , std::to_string(typedObject->GetMaxSteering()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING , std::to_string(typedObject->GetMaxSteering()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAxle>(object);
                const auto kPositionX = typedObject->GetPositionX();
                if (!(kPositionX >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_X , std::to_string(typedObject->GetPositionX()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_X);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_X , std::to_string(typedObject->GetPositionX()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_X);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAxle>(object);
                const auto kPositionZ = typedObject->GetPositionZ();
                if (!(kPositionZ >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_Z , std::to_string(typedObject->GetPositionZ()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_Z);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_Z , std::to_string(typedObject->GetPositionZ()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_Z);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAxle>(object);
                const auto kTrackWidth = typedObject->GetTrackWidth();
                if (!(kTrackWidth >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH , std::to_string(typedObject->GetTrackWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH , std::to_string(typedObject->GetTrackWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAxle>(object);
                const auto kWheelDiameter = typedObject->GetWheelDiameter();
                if (!(kWheelDiameter > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER , std::to_string(typedObject->GetWheelDiameter()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER , std::to_string(typedObject->GetWheelDiameter()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER);
                    }
                }
            }
        }

        void ClothoidRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ClothoidRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ClothoidRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IClothoid>(object);
                const auto kCurvatureDot = typedObject->GetCurvatureDot();
                if (!(kCurvatureDot >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT , std::to_string(typedObject->GetCurvatureDot()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT , std::to_string(typedObject->GetCurvatureDot()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IClothoid>(object);
                const auto kStartTime = typedObject->GetStartTime();
                if (!(kStartTime >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__START_TIME , std::to_string(typedObject->GetStartTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__START_TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__START_TIME , std::to_string(typedObject->GetStartTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__START_TIME);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IClothoid>(object);
                const auto kStopTime = typedObject->GetStopTime();
                if (!(kStopTime > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__STOP_TIME , std::to_string(typedObject->GetStopTime()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__STOP_TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__STOP_TIME , std::to_string(typedObject->GetStopTime()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__STOP_TIME);
                    }
                }
            }
        }

        void ConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ICondition>(object);
                const auto kDelay = typedObject->GetDelay();
                if (!(kDelay >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(typedObject->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(typedObject->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    }
                }
            }
        }

        void ControlPointRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ControlPointRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ControlPointRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IControlPoint>(object);
                const auto kTime = typedObject->GetTime();
                if (!(kTime >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME , std::to_string(typedObject->GetTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME , std::to_string(typedObject->GetTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME);
                    }
                }
            }
        }

        void ControllerDistributionEntryRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ControllerDistributionEntryRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ControllerDistributionEntryRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IControllerDistributionEntry>(object);
                const auto kWeight = typedObject->GetWeight();
                if (!(kWeight > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(typedObject->GetWeight()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(typedObject->GetWeight()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    }
                }
            }
        }

        void DimensionsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DimensionsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DimensionsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDimensions>(object);
                const auto kHeight = typedObject->GetHeight();
                if (!(kHeight >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__HEIGHT , std::to_string(typedObject->GetHeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__HEIGHT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__HEIGHT , std::to_string(typedObject->GetHeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__HEIGHT);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDimensions>(object);
                const auto kLength = typedObject->GetLength();
                if (!(kLength >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LENGTH , std::to_string(typedObject->GetLength()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LENGTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LENGTH , std::to_string(typedObject->GetLength()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LENGTH);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDimensions>(object);
                const auto kWidth = typedObject->GetWidth();
                if (!(kWidth >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WIDTH , std::to_string(typedObject->GetWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WIDTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WIDTH , std::to_string(typedObject->GetWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WIDTH);
                    }
                }
            }
        }

        void DistanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DistanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DistanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDistanceCondition>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void DynamicConstraintsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DynamicConstraintsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DynamicConstraintsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDynamicConstraints>(object);
                const auto kMaxAcceleration = typedObject->GetMaxAcceleration();
                if (!(kMaxAcceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(typedObject->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(typedObject->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDynamicConstraints>(object);
                const auto kMaxDeceleration = typedObject->GetMaxDeceleration();
                if (!(kMaxDeceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(typedObject->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(typedObject->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDynamicConstraints>(object);
                const auto kMaxSpeed = typedObject->GetMaxSpeed();
                if (!(kMaxSpeed >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED , std::to_string(typedObject->GetMaxSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED , std::to_string(typedObject->GetMaxSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED);
                    }
                }
            }
        }

        void EndOfRoadConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void EndOfRoadConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void EndOfRoadConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IEndOfRoadCondition>(object);
                const auto kDuration = typedObject->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void EventRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void EventRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void EventRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IEvent>(object);
                const auto kMaximumExecutionCount = typedObject->GetMaximumExecutionCount();
                if (!(kMaximumExecutionCount >= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(typedObject->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(typedObject->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    }
                }
            }
        }

        void FogRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void FogRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void FogRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IFog>(object);
                const auto kVisualRange = typedObject->GetVisualRange();
                if (!(kVisualRange >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE , std::to_string(typedObject->GetVisualRange()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE , std::to_string(typedObject->GetVisualRange()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE);
                    }
                }
            }
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILaneOffsetActionDynamics>(object);
                const auto kMaxLateralAcc = typedObject->GetMaxLateralAcc();
                if (!(kMaxLateralAcc >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC , std::to_string(typedObject->GetMaxLateralAcc()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC , std::to_string(typedObject->GetMaxLateralAcc()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC);
                    }
                }
            }
        }

        void LanePositionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LanePositionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LanePositionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILanePosition>(object);
                const auto kS = typedObject->GetS();
                if (!(kS >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__S , std::to_string(typedObject->GetS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__S);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__S , std::to_string(typedObject->GetS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__S);
                    }
                }
            }
        }

        void LateralDistanceActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LateralDistanceActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LateralDistanceActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILateralDistanceAction>(object);
                const auto kDistance = typedObject->GetDistance();
                if (!(kDistance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(typedObject->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(typedObject->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    }
                }
            }
        }

        void LongitudinalDistanceActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LongitudinalDistanceActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LongitudinalDistanceActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILongitudinalDistanceAction>(object);
                const auto kDistance = typedObject->GetDistance();
                if (!(kDistance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(typedObject->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(typedObject->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILongitudinalDistanceAction>(object);
                const auto kTimeGap = typedObject->GetTimeGap();
                if (!(kTimeGap >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_GAP , std::to_string(typedObject->GetTimeGap()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_GAP);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_GAP , std::to_string(typedObject->GetTimeGap()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_GAP);
                    }
                }
            }
        }

        void ManeuverGroupRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ManeuverGroupRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ManeuverGroupRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IManeuverGroup>(object);
                const auto kMaximumExecutionCount = typedObject->GetMaximumExecutionCount();
                if (!(kMaximumExecutionCount >= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(typedObject->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(typedObject->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    }
                }
            }
        }

        void MiscObjectRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void MiscObjectRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void MiscObjectRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IMiscObject>(object);
                const auto kMass = typedObject->GetMass();
                if (!(kMass >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MASS , std::to_string(typedObject->GetMass()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MASS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MASS , std::to_string(typedObject->GetMass()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MASS);
                    }
                }
            }
        }

        void NurbsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void NurbsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void NurbsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<INurbs>(object);
                const auto kOrder = typedObject->GetOrder();
                if (!(kOrder >= 2))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ORDER , std::to_string(typedObject->GetOrder()), ">=", "2", OSC_CONSTANTS::ATTRIBUTE__ORDER);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ORDER , std::to_string(typedObject->GetOrder()), ">=", "2", OSC_CONSTANTS::ATTRIBUTE__ORDER);
                    }
                }
            }
        }

        void OffroadConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OffroadConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OffroadConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOffroadCondition>(object);
                const auto kDuration = typedObject->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void OverrideBrakeActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideBrakeActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideBrakeActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOverrideBrakeAction>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void OverrideClutchActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideClutchActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideClutchActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOverrideClutchAction>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void OverrideParkingBrakeActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideParkingBrakeActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideParkingBrakeActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOverrideParkingBrakeAction>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void OverrideThrottleActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideThrottleActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideThrottleActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOverrideThrottleAction>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(typedObject->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void PerformanceRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PerformanceRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PerformanceRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IPerformance>(object);
                const auto kMaxAcceleration = typedObject->GetMaxAcceleration();
                if (!(kMaxAcceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(typedObject->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(typedObject->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IPerformance>(object);
                const auto kMaxDeceleration = typedObject->GetMaxDeceleration();
                if (!(kMaxDeceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(typedObject->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(typedObject->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    }
                }
            }
        }

        void PhaseRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PhaseRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PhaseRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IPhase>(object);
                const auto kDuration = typedObject->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void PositionInLaneCoordinatesRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PositionInLaneCoordinatesRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PositionInLaneCoordinatesRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IPositionInLaneCoordinates>(object);
                const auto kPathS = typedObject->GetPathS();
                if (!(kPathS >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__PATH_S , std::to_string(typedObject->GetPathS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__PATH_S);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__PATH_S , std::to_string(typedObject->GetPathS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__PATH_S);
                    }
                }
            }
        }

        void PrecipitationRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PrecipitationRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PrecipitationRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IPrecipitation>(object);
                const auto kIntensity = typedObject->GetIntensity();
                if (!(kIntensity <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__INTENSITY,std::to_string(typedObject->GetIntensity()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__INTENSITY,std::to_string(typedObject->GetIntensity()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    }
                }
                if (!(kIntensity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(typedObject->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(typedObject->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    }
                }
            }
        }

        void ReachPositionConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ReachPositionConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ReachPositionConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IReachPositionCondition>(object);
                const auto kTolerance = typedObject->GetTolerance();
                if (!(kTolerance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TOLERANCE , std::to_string(typedObject->GetTolerance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TOLERANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TOLERANCE , std::to_string(typedObject->GetTolerance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TOLERANCE);
                    }
                }
            }
        }

        void RelativeDistanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void RelativeDistanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void RelativeDistanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IRelativeDistanceCondition>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void RoadConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void RoadConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void RoadConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IRoadCondition>(object);
                const auto kFrictionScaleFactor = typedObject->GetFrictionScaleFactor();
                if (!(kFrictionScaleFactor >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR , std::to_string(typedObject->GetFrictionScaleFactor()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR , std::to_string(typedObject->GetFrictionScaleFactor()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR);
                    }
                }
            }
        }

        void StandStillConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void StandStillConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void StandStillConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IStandStillCondition>(object);
                const auto kDuration = typedObject->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(typedObject->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void SunRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void SunRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void SunRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ISun>(object);
                const auto kAzimuth = typedObject->GetAzimuth();
                if (!(kAzimuth <= (2* M_PI)))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH,std::to_string(typedObject->GetAzimuth()), "<=", "2PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH,std::to_string(typedObject->GetAzimuth()), "<=", "2PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    }
                }
                if (!(kAzimuth >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH , std::to_string(typedObject->GetAzimuth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH , std::to_string(typedObject->GetAzimuth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ISun>(object);
                const auto kElevation = typedObject->GetElevation();
                if (!(kElevation <= M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__ELEVATION,std::to_string(typedObject->GetElevation()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__ELEVATION,std::to_string(typedObject->GetElevation()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    }
                }
                if (!(kElevation >= (- M_PI)))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ELEVATION , std::to_string(typedObject->GetElevation()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ELEVATION , std::to_string(typedObject->GetElevation()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ISun>(object);
                const auto kIntensity = typedObject->GetIntensity();
                if (!(kIntensity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(typedObject->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(typedObject->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    }
                }
            }
        }

        void TimeHeadwayConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TimeHeadwayConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TimeHeadwayConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITimeHeadwayCondition>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void TimeToCollisionConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TimeToCollisionConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TimeToCollisionConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITimeToCollisionCondition>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void TimingRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TimingRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TimingRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITiming>(object);
                const auto kScale = typedObject->GetScale();
                if (!(kScale > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SCALE , std::to_string(typedObject->GetScale()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__SCALE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SCALE , std::to_string(typedObject->GetScale()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__SCALE);
                    }
                }
            }
        }

        void TrafficSignalControllerRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSignalControllerRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSignalControllerRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSignalController>(object);
                const auto kDelay = typedObject->GetDelay();
                if (!(kDelay >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(typedObject->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(typedObject->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    }
                }
            }
        }

        void TrafficSinkActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSinkActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSinkActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSinkAction>(object);
                const auto kRadius = typedObject->GetRadius();
                if (!(kRadius >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(typedObject->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(typedObject->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSinkAction>(object);
                const auto kRate = typedObject->GetRate();
                if (!(kRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(typedObject->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(typedObject->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    }
                }
            }
        }

        void TrafficSourceActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSourceActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSourceActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSourceAction>(object);
                const auto kRadius = typedObject->GetRadius();
                if (!(kRadius >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(typedObject->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(typedObject->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSourceAction>(object);
                const auto kRate = typedObject->GetRate();
                if (!(kRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(typedObject->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(typedObject->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSourceAction>(object);
                const auto kVelocity = typedObject->GetVelocity();
                if (!(kVelocity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(typedObject->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(typedObject->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    }
                }
            }
        }

        void TrafficSwarmActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSwarmActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSwarmActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSwarmAction>(object);
                const auto kInnerRadius = typedObject->GetInnerRadius();
                if (!(kInnerRadius >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS , std::to_string(typedObject->GetInnerRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS , std::to_string(typedObject->GetInnerRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSwarmAction>(object);
                const auto kSemiMajorAxis = typedObject->GetSemiMajorAxis();
                if (!(kSemiMajorAxis >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS , std::to_string(typedObject->GetSemiMajorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS , std::to_string(typedObject->GetSemiMajorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSwarmAction>(object);
                const auto kSemiMinorAxis = typedObject->GetSemiMinorAxis();
                if (!(kSemiMinorAxis >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS , std::to_string(typedObject->GetSemiMinorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS , std::to_string(typedObject->GetSemiMinorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITrafficSwarmAction>(object);
                const auto kVelocity = typedObject->GetVelocity();
                if (!(kVelocity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(typedObject->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(typedObject->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    }
                }
            }
        }

        void TransitionDynamicsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TransitionDynamicsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TransitionDynamicsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITransitionDynamics>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void TraveledDistanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TraveledDistanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TraveledDistanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ITraveledDistanceCondition>(object);
                const auto kValue = typedObject->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(typedObject->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IVehicleCategoryDistributionEntry>(object);
                const auto kWeight = typedObject->GetWeight();
                if (!(kWeight >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(typedObject->GetWeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(typedObject->GetWeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    }
                }
            }
        }

    }
}
