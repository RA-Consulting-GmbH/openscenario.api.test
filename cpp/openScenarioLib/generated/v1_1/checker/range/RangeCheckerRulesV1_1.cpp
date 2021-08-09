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
        void AbsoluteSpeedRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AbsoluteSpeedRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAbsoluteSpeed> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AbsoluteSpeedRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IAbsoluteSpeed> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void AxleRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IAxle> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AxleRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IAxle> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AxleRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IAxle> object) const
        {
            if (object)
            {
                const auto kMaxSteering = object->GetMaxSteering();
                if (!(kMaxSteering <= M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING,std::to_string(object->GetMaxSteering()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING,std::to_string(object->GetMaxSteering()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    }
                }
                if (!(kMaxSteering >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING , std::to_string(object->GetMaxSteering()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING , std::to_string(object->GetMaxSteering()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                    }
                }
            }
            if (object)
            {
                const auto kPositionX = object->GetPositionX();
                if (!(kPositionX >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_X , std::to_string(object->GetPositionX()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_X);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_X , std::to_string(object->GetPositionX()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_X);
                    }
                }
            }
            if (object)
            {
                const auto kPositionZ = object->GetPositionZ();
                if (!(kPositionZ >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_Z , std::to_string(object->GetPositionZ()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_Z);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_Z , std::to_string(object->GetPositionZ()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_Z);
                    }
                }
            }
            if (object)
            {
                const auto kTrackWidth = object->GetTrackWidth();
                if (!(kTrackWidth >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH , std::to_string(object->GetTrackWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH , std::to_string(object->GetTrackWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH);
                    }
                }
            }
            if (object)
            {
                const auto kWheelDiameter = object->GetWheelDiameter();
                if (!(kWheelDiameter > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER , std::to_string(object->GetWheelDiameter()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER , std::to_string(object->GetWheelDiameter()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER);
                    }
                }
            }
        }

        void ClothoidRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IClothoid> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ClothoidRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IClothoid> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ClothoidRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IClothoid> object) const
        {
            if (object)
            {
                const auto kCurvatureDot = object->GetCurvatureDot();
                if (!(kCurvatureDot >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT , std::to_string(object->GetCurvatureDot()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT , std::to_string(object->GetCurvatureDot()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT);
                    }
                }
            }
            if (object)
            {
                const auto kStartTime = object->GetStartTime();
                if (!(kStartTime >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__START_TIME , std::to_string(object->GetStartTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__START_TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__START_TIME , std::to_string(object->GetStartTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__START_TIME);
                    }
                }
            }
            if (object)
            {
                const auto kStopTime = object->GetStopTime();
                if (!(kStopTime > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__STOP_TIME , std::to_string(object->GetStopTime()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__STOP_TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__STOP_TIME , std::to_string(object->GetStopTime()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__STOP_TIME);
                    }
                }
            }
        }

        void ConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ICondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ICondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ICondition> object) const
        {
            if (object)
            {
                const auto kDelay = object->GetDelay();
                if (!(kDelay >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(object->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(object->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    }
                }
            }
        }

        void ControlPointRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ControlPointRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControlPoint> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ControlPointRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IControlPoint> object) const
        {
            if (object)
            {
                const auto kTime = object->GetTime();
                if (!(kTime >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME , std::to_string(object->GetTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME , std::to_string(object->GetTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME);
                    }
                }
            }
        }

        void ControllerDistributionEntryRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ControllerDistributionEntryRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IControllerDistributionEntry> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ControllerDistributionEntryRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IControllerDistributionEntry> object) const
        {
            if (object)
            {
                const auto kWeight = object->GetWeight();
                if (!(kWeight > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(object->GetWeight()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(object->GetWeight()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    }
                }
            }
        }

        void DimensionsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDimensions> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DimensionsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDimensions> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DimensionsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IDimensions> object) const
        {
            if (object)
            {
                const auto kHeight = object->GetHeight();
                if (!(kHeight >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__HEIGHT , std::to_string(object->GetHeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__HEIGHT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__HEIGHT , std::to_string(object->GetHeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__HEIGHT);
                    }
                }
            }
            if (object)
            {
                const auto kLength = object->GetLength();
                if (!(kLength >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LENGTH , std::to_string(object->GetLength()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LENGTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LENGTH , std::to_string(object->GetLength()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LENGTH);
                    }
                }
            }
            if (object)
            {
                const auto kWidth = object->GetWidth();
                if (!(kWidth >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WIDTH , std::to_string(object->GetWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WIDTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WIDTH , std::to_string(object->GetWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WIDTH);
                    }
                }
            }
        }

        void DistanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DistanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDistanceCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DistanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IDistanceCondition> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void DynamicConstraintsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IDynamicConstraints> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DynamicConstraintsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IDynamicConstraints> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DynamicConstraintsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IDynamicConstraints> object) const
        {
            if (object)
            {
                const auto kMaxAcceleration = object->GetMaxAcceleration();
                if (!(kMaxAcceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(object->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(object->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    }
                }
            }
            if (object)
            {
                const auto kMaxDeceleration = object->GetMaxDeceleration();
                if (!(kMaxDeceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(object->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(object->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    }
                }
            }
            if (object)
            {
                const auto kMaxSpeed = object->GetMaxSpeed();
                if (!(kMaxSpeed >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED , std::to_string(object->GetMaxSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED , std::to_string(object->GetMaxSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED);
                    }
                }
            }
        }

        void EndOfRoadConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void EndOfRoadConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEndOfRoadCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void EndOfRoadConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IEndOfRoadCondition> object) const
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void EventRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IEvent> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void EventRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IEvent> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void EventRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IEvent> object) const
        {
            if (object)
            {
                const auto kMaximumExecutionCount = object->GetMaximumExecutionCount();
                if (!(kMaximumExecutionCount >= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(object->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(object->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    }
                }
            }
        }

        void FogRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFog> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void FogRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFog> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void FogRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IFog> object) const
        {
            if (object)
            {
                const auto kVisualRange = object->GetVisualRange();
                if (!(kVisualRange >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE , std::to_string(object->GetVisualRange()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE , std::to_string(object->GetVisualRange()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE);
                    }
                }
            }
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object) const
        {
            if (object)
            {
                const auto kMaxLateralAcc = object->GetMaxLateralAcc();
                if (!(kMaxLateralAcc >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC , std::to_string(object->GetMaxLateralAcc()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC , std::to_string(object->GetMaxLateralAcc()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC);
                    }
                }
            }
        }

        void LanePositionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LanePositionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILanePosition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LanePositionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILanePosition> object) const
        {
            if (object)
            {
                const auto kS = object->GetS();
                if (!(kS >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__S , std::to_string(object->GetS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__S);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__S , std::to_string(object->GetS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__S);
                    }
                }
            }
        }

        void LateralDistanceActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LateralDistanceActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILateralDistanceAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LateralDistanceActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILateralDistanceAction> object) const
        {
            if (object)
            {
                const auto kDistance = object->GetDistance();
                if (!(kDistance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(object->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(object->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    }
                }
            }
        }

        void LongitudinalDistanceActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LongitudinalDistanceActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LongitudinalDistanceActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ILongitudinalDistanceAction> object) const
        {
            if (object)
            {
                const auto kDistance = object->GetDistance();
                if (!(kDistance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(object->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(object->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                    }
                }
            }
            if (object)
            {
                const auto kTimeGap = object->GetTimeGap();
                if (!(kTimeGap >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_GAP , std::to_string(object->GetTimeGap()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_GAP);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_GAP , std::to_string(object->GetTimeGap()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_GAP);
                    }
                }
            }
        }

        void ManeuverGroupRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ManeuverGroupRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IManeuverGroup> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ManeuverGroupRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IManeuverGroup> object) const
        {
            if (object)
            {
                const auto kMaximumExecutionCount = object->GetMaximumExecutionCount();
                if (!(kMaximumExecutionCount >= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(object->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(object->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                    }
                }
            }
        }

        void MiscObjectRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void MiscObjectRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IMiscObject> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void MiscObjectRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IMiscObject> object) const
        {
            if (object)
            {
                const auto kMass = object->GetMass();
                if (!(kMass >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MASS , std::to_string(object->GetMass()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MASS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MASS , std::to_string(object->GetMass()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MASS);
                    }
                }
            }
        }

        void NurbsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<INurbs> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void NurbsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<INurbs> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void NurbsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<INurbs> object) const
        {
            if (object)
            {
                const auto kOrder = object->GetOrder();
                if (!(kOrder >= 2))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ORDER , std::to_string(object->GetOrder()), ">=", "2", OSC_CONSTANTS::ATTRIBUTE__ORDER);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ORDER , std::to_string(object->GetOrder()), ">=", "2", OSC_CONSTANTS::ATTRIBUTE__ORDER);
                    }
                }
            }
        }

        void OffroadConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OffroadConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOffroadCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OffroadConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOffroadCondition> object) const
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void OverrideBrakeActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideBrakeActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideBrakeAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideBrakeActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideBrakeAction> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void OverrideClutchActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideClutchActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideClutchAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideClutchActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideClutchAction> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void OverrideParkingBrakeActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideParkingBrakeActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideParkingBrakeActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void OverrideThrottleActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideThrottleActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOverrideThrottleAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideThrottleActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOverrideThrottleAction> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE,std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void PerformanceRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPerformance> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PerformanceRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPerformance> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PerformanceRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPerformance> object) const
        {
            if (object)
            {
                const auto kMaxAcceleration = object->GetMaxAcceleration();
                if (!(kMaxAcceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(object->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(object->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                    }
                }
            }
            if (object)
            {
                const auto kMaxDeceleration = object->GetMaxDeceleration();
                if (!(kMaxDeceleration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(object->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(object->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                    }
                }
            }
        }

        void PhaseRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPhase> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PhaseRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPhase> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PhaseRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPhase> object) const
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void PositionInLaneCoordinatesRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PositionInLaneCoordinatesRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PositionInLaneCoordinatesRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPositionInLaneCoordinates> object) const
        {
            if (object)
            {
                const auto kPathS = object->GetPathS();
                if (!(kPathS >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__PATH_S , std::to_string(object->GetPathS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__PATH_S);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__PATH_S , std::to_string(object->GetPathS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__PATH_S);
                    }
                }
            }
        }

        void PrecipitationRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void PrecipitationRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IPrecipitation> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void PrecipitationRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IPrecipitation> object) const
        {
            if (object)
            {
                const auto kIntensity = object->GetIntensity();
                if (!(kIntensity <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__INTENSITY,std::to_string(object->GetIntensity()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__INTENSITY,std::to_string(object->GetIntensity()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    }
                }
                if (!(kIntensity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(object->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(object->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    }
                }
            }
        }

        void ReachPositionConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ReachPositionConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IReachPositionCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ReachPositionConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IReachPositionCondition> object) const
        {
            if (object)
            {
                const auto kTolerance = object->GetTolerance();
                if (!(kTolerance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TOLERANCE , std::to_string(object->GetTolerance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TOLERANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TOLERANCE , std::to_string(object->GetTolerance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TOLERANCE);
                    }
                }
            }
        }

        void RelativeDistanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void RelativeDistanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRelativeDistanceCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void RelativeDistanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IRelativeDistanceCondition> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void RoadConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void RoadConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IRoadCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void RoadConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IRoadCondition> object) const
        {
            if (object)
            {
                const auto kFrictionScaleFactor = object->GetFrictionScaleFactor();
                if (!(kFrictionScaleFactor >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR , std::to_string(object->GetFrictionScaleFactor()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR , std::to_string(object->GetFrictionScaleFactor()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR);
                    }
                }
            }
        }

        void StandStillConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void StandStillConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IStandStillCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void StandStillConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IStandStillCondition> object) const
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                    }
                }
            }
        }

        void SunRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ISun> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void SunRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ISun> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void SunRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ISun> object) const
        {
            if (object)
            {
                const auto kAzimuth = object->GetAzimuth();
                if (!(kAzimuth <= (2* M_PI)))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH,std::to_string(object->GetAzimuth()), "<=", "2PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH,std::to_string(object->GetAzimuth()), "<=", "2PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    }
                }
                if (!(kAzimuth >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH , std::to_string(object->GetAzimuth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH , std::to_string(object->GetAzimuth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                    }
                }
            }
            if (object)
            {
                const auto kElevation = object->GetElevation();
                if (!(kElevation <= M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__ELEVATION,std::to_string(object->GetElevation()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__ELEVATION,std::to_string(object->GetElevation()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    }
                }
                if (!(kElevation >= (- M_PI)))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ELEVATION , std::to_string(object->GetElevation()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ELEVATION , std::to_string(object->GetElevation()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                    }
                }
            }
            if (object)
            {
                const auto kIntensity = object->GetIntensity();
                if (!(kIntensity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(object->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(object->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                    }
                }
            }
        }

        void TimeHeadwayConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TimeHeadwayConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeHeadwayCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TimeHeadwayConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITimeHeadwayCondition> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void TimeToCollisionConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TimeToCollisionConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITimeToCollisionCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TimeToCollisionConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITimeToCollisionCondition> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void TimingRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITiming> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TimingRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITiming> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TimingRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITiming> object) const
        {
            if (object)
            {
                const auto kScale = object->GetScale();
                if (!(kScale > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SCALE , std::to_string(object->GetScale()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__SCALE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SCALE , std::to_string(object->GetScale()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__SCALE);
                    }
                }
            }
        }

        void TrafficSignalControllerRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSignalControllerRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSignalController> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSignalControllerRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSignalController> object) const
        {
            if (object)
            {
                const auto kDelay = object->GetDelay();
                if (!(kDelay >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(object->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(object->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                    }
                }
            }
        }

        void TrafficSinkActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSinkActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSinkAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSinkActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSinkAction> object) const
        {
            if (object)
            {
                const auto kRadius = object->GetRadius();
                if (!(kRadius >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(object->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(object->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    }
                }
            }
            if (object)
            {
                const auto kRate = object->GetRate();
                if (!(kRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(object->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(object->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    }
                }
            }
        }

        void TrafficSourceActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSourceActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSourceAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSourceActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSourceAction> object) const
        {
            if (object)
            {
                const auto kRadius = object->GetRadius();
                if (!(kRadius >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(object->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(object->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                    }
                }
            }
            if (object)
            {
                const auto kRate = object->GetRate();
                if (!(kRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(object->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(object->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                    }
                }
            }
            if (object)
            {
                const auto kVelocity = object->GetVelocity();
                if (!(kVelocity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(object->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(object->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    }
                }
            }
        }

        void TrafficSwarmActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TrafficSwarmActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITrafficSwarmAction> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TrafficSwarmActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITrafficSwarmAction> object) const
        {
            if (object)
            {
                const auto kInnerRadius = object->GetInnerRadius();
                if (!(kInnerRadius >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS , std::to_string(object->GetInnerRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS , std::to_string(object->GetInnerRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS);
                    }
                }
            }
            if (object)
            {
                const auto kSemiMajorAxis = object->GetSemiMajorAxis();
                if (!(kSemiMajorAxis >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS , std::to_string(object->GetSemiMajorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS , std::to_string(object->GetSemiMajorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS);
                    }
                }
            }
            if (object)
            {
                const auto kSemiMinorAxis = object->GetSemiMinorAxis();
                if (!(kSemiMinorAxis >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS , std::to_string(object->GetSemiMinorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS , std::to_string(object->GetSemiMinorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS);
                    }
                }
            }
            if (object)
            {
                const auto kVelocity = object->GetVelocity();
                if (!(kVelocity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(object->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(object->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                    }
                }
            }
        }

        void TransitionDynamicsRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TransitionDynamicsRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITransitionDynamics> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TransitionDynamicsRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITransitionDynamics> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void TraveledDistanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void TraveledDistanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<ITraveledDistanceCondition> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void TraveledDistanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<ITraveledDistanceCondition> object) const
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                    }
                }
            }
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object) const
        {
            if (object)
            {
                const auto kWeight = object->GetWeight();
                if (!(kWeight >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(object->GetWeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(object->GetWeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                    }
                }
            }
        }

    }
}
