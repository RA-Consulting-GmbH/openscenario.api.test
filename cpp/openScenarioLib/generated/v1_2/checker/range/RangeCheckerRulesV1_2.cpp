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
#include "RangeCheckerRulesV1_2.h"
#include "OscConstantsV1_2.h"
#include <math.h>

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
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

        void AnimationActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AnimationActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AnimationActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAnimationAction>(object);
                const auto kAnimationDuration = typedObject->GetAnimationDuration();
                if (!(kAnimationDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ANIMATION_DURATION , std::to_string(typedObject->GetAnimationDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__ANIMATION_DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ANIMATION_DURATION , std::to_string(typedObject->GetAnimationDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__ANIMATION_DURATION);
                    }
                }
            }
        }

        void AnimationFileRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AnimationFileRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AnimationFileRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAnimationFile>(object);
                const auto kTimeOffset = typedObject->GetTimeOffset();
                if (!(kTimeOffset >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_OFFSET , std::to_string(typedObject->GetTimeOffset()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_OFFSET);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_OFFSET , std::to_string(typedObject->GetTimeOffset()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_OFFSET);
                    }
                }
            }
        }

        void AnimationStateRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void AnimationStateRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void AnimationStateRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IAnimationState>(object);
                const auto kState = typedObject->GetState();
                if (!(kState <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__STATE,std::to_string(typedObject->GetState()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__STATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__STATE,std::to_string(typedObject->GetState()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__STATE);
                    }
                }
                if (!(kState >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__STATE , std::to_string(typedObject->GetState()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__STATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__STATE , std::to_string(typedObject->GetState()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__STATE);
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

        void ColorCmykRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ColorCmykRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ColorCmykRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorCmyk>(object);
                const auto kCyan = typedObject->GetCyan();
                if (!(kCyan <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__CYAN,std::to_string(typedObject->GetCyan()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__CYAN);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__CYAN,std::to_string(typedObject->GetCyan()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__CYAN);
                    }
                }
                if (!(kCyan >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__CYAN , std::to_string(typedObject->GetCyan()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CYAN);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__CYAN , std::to_string(typedObject->GetCyan()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CYAN);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorCmyk>(object);
                const auto kKey = typedObject->GetKey();
                if (!(kKey <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__KEY,std::to_string(typedObject->GetKey()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__KEY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__KEY,std::to_string(typedObject->GetKey()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__KEY);
                    }
                }
                if (!(kKey >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__KEY , std::to_string(typedObject->GetKey()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__KEY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__KEY , std::to_string(typedObject->GetKey()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__KEY);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorCmyk>(object);
                const auto kMagenta = typedObject->GetMagenta();
                if (!(kMagenta <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAGENTA,std::to_string(typedObject->GetMagenta()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__MAGENTA);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAGENTA,std::to_string(typedObject->GetMagenta()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__MAGENTA);
                    }
                }
                if (!(kMagenta >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAGENTA , std::to_string(typedObject->GetMagenta()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAGENTA);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAGENTA , std::to_string(typedObject->GetMagenta()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAGENTA);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorCmyk>(object);
                const auto kYellow = typedObject->GetYellow();
                if (!(kYellow <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__YELLOW,std::to_string(typedObject->GetYellow()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__YELLOW);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__YELLOW,std::to_string(typedObject->GetYellow()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__YELLOW);
                    }
                }
                if (!(kYellow >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__YELLOW , std::to_string(typedObject->GetYellow()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__YELLOW);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__YELLOW , std::to_string(typedObject->GetYellow()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__YELLOW);
                    }
                }
            }
        }

        void ColorRgbRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void ColorRgbRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void ColorRgbRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorRgb>(object);
                const auto kBlue = typedObject->GetBlue();
                if (!(kBlue <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__BLUE,std::to_string(typedObject->GetBlue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__BLUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__BLUE,std::to_string(typedObject->GetBlue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__BLUE);
                    }
                }
                if (!(kBlue >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__BLUE , std::to_string(typedObject->GetBlue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__BLUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__BLUE , std::to_string(typedObject->GetBlue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__BLUE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorRgb>(object);
                const auto kGreen = typedObject->GetGreen();
                if (!(kGreen <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__GREEN,std::to_string(typedObject->GetGreen()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__GREEN);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__GREEN,std::to_string(typedObject->GetGreen()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__GREEN);
                    }
                }
                if (!(kGreen >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__GREEN , std::to_string(typedObject->GetGreen()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__GREEN);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__GREEN , std::to_string(typedObject->GetGreen()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__GREEN);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IColorRgb>(object);
                const auto kRed = typedObject->GetRed();
                if (!(kRed <= 1))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__RED,std::to_string(typedObject->GetRed()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__RED);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__RED,std::to_string(typedObject->GetRed()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__RED);
                    }
                }
                if (!(kRed >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RED , std::to_string(typedObject->GetRed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RED);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__RED , std::to_string(typedObject->GetRed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RED);
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

        void DirectionOfTravelDistributionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DirectionOfTravelDistributionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DirectionOfTravelDistributionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDirectionOfTravelDistribution>(object);
                const auto kOpposite = typedObject->GetOpposite();
                if (!(kOpposite >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__OPPOSITE , std::to_string(typedObject->GetOpposite()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__OPPOSITE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__OPPOSITE , std::to_string(typedObject->GetOpposite()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__OPPOSITE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDirectionOfTravelDistribution>(object);
                const auto kSame = typedObject->GetSame();
                if (!(kSame >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SAME , std::to_string(typedObject->GetSame()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SAME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SAME , std::to_string(typedObject->GetSame()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SAME);
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

        void DomeImageRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void DomeImageRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void DomeImageRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IDomeImage>(object);
                const auto kAzimuthOffset = typedObject->GetAzimuthOffset();
                if (!(kAzimuthOffset <= M_PI *2))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET,std::to_string(typedObject->GetAzimuthOffset()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET,std::to_string(typedObject->GetAzimuthOffset()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET);
                    }
                }
                if (!(kAzimuthOffset >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET , std::to_string(typedObject->GetAzimuthOffset()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET , std::to_string(typedObject->GetAzimuthOffset()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH_OFFSET);
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
                const auto kMaxAccelerationRate = typedObject->GetMaxAccelerationRate();
                if (!(kMaxAccelerationRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE , std::to_string(typedObject->GetMaxAccelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE , std::to_string(typedObject->GetMaxAccelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE);
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
                const auto kMaxDecelerationRate = typedObject->GetMaxDecelerationRate();
                if (!(kMaxDecelerationRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE , std::to_string(typedObject->GetMaxDecelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE , std::to_string(typedObject->GetMaxDecelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE);
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

        void GeoPositionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void GeoPositionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void GeoPositionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IGeoPosition>(object);
                const auto kAltitude = typedObject->GetAltitude();
                if (!(kAltitude >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ALTITUDE , std::to_string(typedObject->GetAltitude()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__ALTITUDE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ALTITUDE , std::to_string(typedObject->GetAltitude()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__ALTITUDE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IGeoPosition>(object);
                const auto kLatitude = typedObject->GetLatitude();
                if (!(kLatitude <= M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LATITUDE,std::to_string(typedObject->GetLatitude()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__LATITUDE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LATITUDE,std::to_string(typedObject->GetLatitude()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__LATITUDE);
                    }
                }
                if (!(kLatitude >= (M_PI * -1)))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LATITUDE , std::to_string(typedObject->GetLatitude()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__LATITUDE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LATITUDE , std::to_string(typedObject->GetLatitude()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__LATITUDE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IGeoPosition>(object);
                const auto kLatitudeDeg = typedObject->GetLatitudeDeg();
                if (!(kLatitudeDeg <= 90))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG,std::to_string(typedObject->GetLatitudeDeg()), "<=", "90", OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG,std::to_string(typedObject->GetLatitudeDeg()), "<=", "90", OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG);
                    }
                }
                if (!(kLatitudeDeg >= -90))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG , std::to_string(typedObject->GetLatitudeDeg()), ">=", "-90", OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG , std::to_string(typedObject->GetLatitudeDeg()), ">=", "-90", OSC_CONSTANTS::ATTRIBUTE__LATITUDE_DEG);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IGeoPosition>(object);
                const auto kLongitude = typedObject->GetLongitude();
                if (!(kLongitude <= M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LONGITUDE,std::to_string(typedObject->GetLongitude()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LONGITUDE,std::to_string(typedObject->GetLongitude()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE);
                    }
                }
                if (!(kLongitude >= (M_PI * -1)))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LONGITUDE , std::to_string(typedObject->GetLongitude()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LONGITUDE , std::to_string(typedObject->GetLongitude()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IGeoPosition>(object);
                const auto kLongitudeDeg = typedObject->GetLongitudeDeg();
                if (!(kLongitudeDeg <= 90))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG,std::to_string(typedObject->GetLongitudeDeg()), "<=", "90", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG,std::to_string(typedObject->GetLongitudeDeg()), "<=", "90", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG);
                    }
                }
                if (!(kLongitudeDeg >= -90))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG , std::to_string(typedObject->GetLongitudeDeg()), ">=", "-90", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG , std::to_string(typedObject->GetLongitudeDeg()), ">=", "-90", OSC_CONSTANTS::ATTRIBUTE__LONGITUDE_DEG);
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

        void LightStateRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LightStateRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LightStateRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILightState>(object);
                const auto kFlashingOffDuration = typedObject->GetFlashingOffDuration();
                if (!(kFlashingOffDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FLASHING_OFF_DURATION , std::to_string(typedObject->GetFlashingOffDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FLASHING_OFF_DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FLASHING_OFF_DURATION , std::to_string(typedObject->GetFlashingOffDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FLASHING_OFF_DURATION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILightState>(object);
                const auto kFlashingOnDuration = typedObject->GetFlashingOnDuration();
                if (!(kFlashingOnDuration >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FLASHING_ON_DURATION , std::to_string(typedObject->GetFlashingOnDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FLASHING_ON_DURATION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__FLASHING_ON_DURATION , std::to_string(typedObject->GetFlashingOnDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FLASHING_ON_DURATION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILightState>(object);
                const auto kLuminousIntensity = typedObject->GetLuminousIntensity();
                if (!(kLuminousIntensity >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LUMINOUS_INTENSITY , std::to_string(typedObject->GetLuminousIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LUMINOUS_INTENSITY);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__LUMINOUS_INTENSITY , std::to_string(typedObject->GetLuminousIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LUMINOUS_INTENSITY);
                    }
                }
            }
        }

        void LightStateActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void LightStateActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void LightStateActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ILightStateAction>(object);
                const auto kTransitionTime = typedObject->GetTransitionTime();
                if (!(kTransitionTime >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRANSITION_TIME , std::to_string(typedObject->GetTransitionTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRANSITION_TIME);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRANSITION_TIME , std::to_string(typedObject->GetTransitionTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRANSITION_TIME);
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
                const auto kMaxRate = typedObject->GetMaxRate();
                if (!(kMaxRate <= 100))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_RATE,std::to_string(typedObject->GetMaxRate()), "<=", "100", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_RATE,std::to_string(typedObject->GetMaxRate()), "<=", "100", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    }
                }
                if (!(kMaxRate > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_RATE , std::to_string(typedObject->GetMaxRate()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_RATE , std::to_string(typedObject->GetMaxRate()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    }
                }
            }
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

        void OverrideSteeringWheelActionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void OverrideSteeringWheelActionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void OverrideSteeringWheelActionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOverrideSteeringWheelAction>(object);
                const auto kMaxRate = typedObject->GetMaxRate();
                if (!(kMaxRate <= 100))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_RATE,std::to_string(typedObject->GetMaxRate()), "<=", "100", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_RATE,std::to_string(typedObject->GetMaxRate()), "<=", "100", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    }
                }
                if (!(kMaxRate > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_RATE , std::to_string(typedObject->GetMaxRate()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_RATE , std::to_string(typedObject->GetMaxRate()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_RATE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IOverrideSteeringWheelAction>(object);
                const auto kMaxTorque = typedObject->GetMaxTorque();
                if (!(kMaxTorque > 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_TORQUE , std::to_string(typedObject->GetMaxTorque()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_TORQUE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_TORQUE , std::to_string(typedObject->GetMaxTorque()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_TORQUE);
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
                const auto kMaxAccelerationRate = typedObject->GetMaxAccelerationRate();
                if (!(kMaxAccelerationRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE , std::to_string(typedObject->GetMaxAccelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE , std::to_string(typedObject->GetMaxAccelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION_RATE);
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
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IPerformance>(object);
                const auto kMaxDecelerationRate = typedObject->GetMaxDecelerationRate();
                if (!(kMaxDecelerationRate >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE , std::to_string(typedObject->GetMaxDecelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE , std::to_string(typedObject->GetMaxDecelerationRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION_RATE);
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

        void RelativeClearanceConditionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void RelativeClearanceConditionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void RelativeClearanceConditionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IRelativeClearanceCondition>(object);
                const auto kDistanceBackward = typedObject->GetDistanceBackward();
                if (!(kDistanceBackward >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD , std::to_string(typedObject->GetDistanceBackward()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD , std::to_string(typedObject->GetDistanceBackward()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE_BACKWARD);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IRelativeClearanceCondition>(object);
                const auto kDistanceForward = typedObject->GetDistanceForward();
                if (!(kDistanceForward >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD , std::to_string(typedObject->GetDistanceForward()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD , std::to_string(typedObject->GetDistanceForward()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE_FORWARD);
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

        void RoadPositionRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void RoadPositionRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void RoadPositionRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IRoadPosition>(object);
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

        void SpeedProfileEntryRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void SpeedProfileEntryRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void SpeedProfileEntryRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<ISpeedProfileEntry>(object);
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
                const auto kIlluminance = typedObject->GetIlluminance();
                if (!(kIlluminance >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE , std::to_string(typedObject->GetIlluminance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE , std::to_string(typedObject->GetIlluminance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__ILLUMINANCE);
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

        void VehicleRoleDistributionEntryRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void VehicleRoleDistributionEntryRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void VehicleRoleDistributionEntryRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IVehicleRoleDistributionEntry>(object);
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

        void WeatherRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void WeatherRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void WeatherRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IWeather>(object);
                const auto kAtmosphericPressure = typedObject->GetAtmosphericPressure();
                if (!(kAtmosphericPressure <= 120000))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE,std::to_string(typedObject->GetAtmosphericPressure()), "<=", "120000", OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE,std::to_string(typedObject->GetAtmosphericPressure()), "<=", "120000", OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE);
                    }
                }
                if (!(kAtmosphericPressure >= 80000))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE , std::to_string(typedObject->GetAtmosphericPressure()), ">=", "80000", OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE , std::to_string(typedObject->GetAtmosphericPressure()), ">=", "80000", OSC_CONSTANTS::ATTRIBUTE__ATMOSPHERIC_PRESSURE);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IWeather>(object);
                const auto kTemperature = typedObject->GetTemperature();
                if (!(kTemperature <= 340))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE,std::to_string(typedObject->GetTemperature()), "<=", "340", OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE,std::to_string(typedObject->GetTemperature()), "<=", "340", OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE);
                    }
                }
                if (!(kTemperature >= 170))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE , std::to_string(typedObject->GetTemperature()), ">=", "170", OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE , std::to_string(typedObject->GetTemperature()), ">=", "170", OSC_CONSTANTS::ATTRIBUTE__TEMPERATURE);
                    }
                }
            }
        }

        void WindRangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void WindRangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void WindRangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<IOpenScenarioModelElement> object) const
        {
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IWind>(object);
                const auto kDirection = typedObject->GetDirection();
                if (!(kDirection < 2 * M_PI))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__DIRECTION,std::to_string(typedObject->GetDirection()), "<", "2PI", OSC_CONSTANTS::ATTRIBUTE__DIRECTION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__DIRECTION,std::to_string(typedObject->GetDirection()), "<", "2PI", OSC_CONSTANTS::ATTRIBUTE__DIRECTION);
                    }
                }
                if (!(kDirection >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DIRECTION , std::to_string(typedObject->GetDirection()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DIRECTION);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__DIRECTION , std::to_string(typedObject->GetDirection()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DIRECTION);
                    }
                }
            }
            if (object)
            {
            	auto typedObject = std::dynamic_pointer_cast<IWind>(object);
                const auto kSpeed = typedObject->GetSpeed();
                if (!(kSpeed >= 0))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(typedObject,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SPEED , std::to_string(typedObject->GetSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SPEED);
                    } 
                    else 
                    {
                        LogTreeContentMessage(typedObject,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__SPEED , std::to_string(typedObject->GetSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SPEED);
                    }
                }
            }
        }

    }
}
