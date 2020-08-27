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
#include "RangeCheckerRules.h"
#include "OscConstants.h"
#include <math.h>

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        void AbsoluteSpeedRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAbsoluteSpeed> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void AxleRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IAxle> object)
        {
            if (object)
            {
                const auto kMaxSteering = object->GetMaxSteering();
                if (!(kMaxSteering <= M_PI))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING, std::to_string(object->GetMaxSteering()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);

                }
                if (!(kMaxSteering >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING , std::to_string(object->GetMaxSteering()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_STEERING);
                }
            }
            if (object)
            {
                const auto kWheelDiameter = object->GetWheelDiameter();
                if (!(kWheelDiameter > 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER , std::to_string(object->GetWheelDiameter()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WHEEL_DIAMETER);
                }
            }
            if (object)
            {
                const auto kTrackWidth = object->GetTrackWidth();
                if (!(kTrackWidth >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH , std::to_string(object->GetTrackWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TRACK_WIDTH);
                }
            }
            if (object)
            {
                const auto kPositionX = object->GetPositionX();
                if (!(kPositionX >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_X , std::to_string(object->GetPositionX()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_X);
                }
            }
            if (object)
            {
                const auto kPositionZ = object->GetPositionZ();
                if (!(kPositionZ >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__POSITION_Z , std::to_string(object->GetPositionZ()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__POSITION_Z);
                }
            }
        }

        void ClothoidRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IClothoid> object)
        {
            if (object)
            {
                const auto kCurvatureDot = object->GetCurvatureDot();
                if (!(kCurvatureDot >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT , std::to_string(object->GetCurvatureDot()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__CURVATURE_DOT);
                }
            }
            if (object)
            {
                const auto kStartTime = object->GetStartTime();
                if (!(kStartTime >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__START_TIME , std::to_string(object->GetStartTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__START_TIME);
                }
            }
            if (object)
            {
                const auto kStopTime = object->GetStopTime();
                if (!(kStopTime > 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__STOP_TIME , std::to_string(object->GetStopTime()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__STOP_TIME);
                }
            }
        }

        void ConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ICondition> object)
        {
            if (object)
            {
                const auto kDelay = object->GetDelay();
                if (!(kDelay >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(object->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                }
            }
        }

        void ControlPointRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControlPoint> object)
        {
            if (object)
            {
                const auto kTime = object->GetTime();
                if (!(kTime >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME , std::to_string(object->GetTime()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME);
                }
            }
        }

        void ControllerDistributionEntryRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IControllerDistributionEntry> object)
        {
            if (object)
            {
                const auto kWeight = object->GetWeight();
                if (!(kWeight > 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(object->GetWeight()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                }
            }
        }

        void DimensionsRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDimensions> object)
        {
            if (object)
            {
                const auto kWidth = object->GetWidth();
                if (!(kWidth >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__WIDTH , std::to_string(object->GetWidth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WIDTH);
                }
            }
            if (object)
            {
                const auto kLength = object->GetLength();
                if (!(kLength >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__LENGTH , std::to_string(object->GetLength()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__LENGTH);
                }
            }
            if (object)
            {
                const auto kHeight = object->GetHeight();
                if (!(kHeight >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__HEIGHT , std::to_string(object->GetHeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__HEIGHT);
                }
            }
        }

        void DistanceConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDistanceCondition> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void DynamicConstraintsRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IDynamicConstraints> object)
        {
            if (object)
            {
                const auto kMaxAcceleration = object->GetMaxAcceleration();
                if (!(kMaxAcceleration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(object->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                }
            }
            if (object)
            {
                const auto kMaxDeceleration = object->GetMaxDeceleration();
                if (!(kMaxDeceleration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(object->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                }
            }
            if (object)
            {
                const auto kMaxSpeed = object->GetMaxSpeed();
                if (!(kMaxSpeed >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED , std::to_string(object->GetMaxSpeed()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_SPEED);
                }
            }
        }

        void EndOfRoadConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEndOfRoadCondition> object)
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                }
            }
        }

        void EventRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IEvent> object)
        {
            if (object)
            {
                const auto kMaximumExecutionCount = object->GetMaximumExecutionCount();
                if (!(kMaximumExecutionCount >= 1))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(object->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                }
            }
        }

        void FogRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFog> object)
        {
            if (object)
            {
                const auto kVisualRange = object->GetVisualRange();
                if (!(kVisualRange >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE , std::to_string(object->GetVisualRange()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VISUAL_RANGE);
                }
            }
        }

        void LaneOffsetActionDynamicsRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILaneOffsetActionDynamics> object)
        {
            if (object)
            {
                const auto kMaxLateralAcc = object->GetMaxLateralAcc();
                if (!(kMaxLateralAcc >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC , std::to_string(object->GetMaxLateralAcc()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_LATERAL_ACC);
                }
            }
        }

        void LanePositionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILanePosition> object)
        {
            if (object)
            {
                const auto kS = object->GetS();
                if (!(kS >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__S , std::to_string(object->GetS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__S);
                }
            }
        }

        void LateralDistanceActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILateralDistanceAction> object)
        {
            if (object)
            {
                const auto kDistance = object->GetDistance();
                if (!(kDistance >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(object->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                }
            }
        }

        void LongitudinalDistanceActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ILongitudinalDistanceAction> object)
        {
            if (object)
            {
                const auto kDistance = object->GetDistance();
                if (!(kDistance >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DISTANCE , std::to_string(object->GetDistance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DISTANCE);
                }
            }
            if (object)
            {
                const auto kTimeGap = object->GetTimeGap();
                if (!(kTimeGap >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__TIME_GAP , std::to_string(object->GetTimeGap()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TIME_GAP);
                }
            }
        }

        void ManeuverGroupRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IManeuverGroup> object)
        {
            if (object)
            {
                const auto kMaximumExecutionCount = object->GetMaximumExecutionCount();
                if (!(kMaximumExecutionCount >= 1))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , std::to_string(object->GetMaximumExecutionCount()), ">=", "1", OSC_CONSTANTS::ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
                }
            }
        }

        void MiscObjectRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IMiscObject> object)
        {
            if (object)
            {
                const auto kMass = object->GetMass();
                if (!(kMass >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MASS , std::to_string(object->GetMass()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MASS);
                }
            }
        }

        void NurbsRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<INurbs> object)
        {
            if (object)
            {
                const auto kOrder = object->GetOrder();
                if (!(kOrder >= 2))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__ORDER , std::to_string(object->GetOrder()), ">=", "2", OSC_CONSTANTS::ATTRIBUTE__ORDER);
                }
            }
        }

        void OffroadConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOffroadCondition> object)
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                }
            }
        }

        void OverrideBrakeActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideBrakeAction> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE, std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);

                }
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void OverrideClutchActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideClutchAction> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE, std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);

                }
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void OverrideParkingBrakeActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideParkingBrakeAction> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE, std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);

                }
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void OverrideThrottleActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IOverrideThrottleAction> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue <= 1))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__VALUE, std::to_string(object->GetValue()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__VALUE);

                }
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void PerformanceRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPerformance> object)
        {
            if (object)
            {
                const auto kMaxAcceleration = object->GetMaxAcceleration();
                if (!(kMaxAcceleration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION , std::to_string(object->GetMaxAcceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_ACCELERATION);
                }
            }
            if (object)
            {
                const auto kMaxDeceleration = object->GetMaxDeceleration();
                if (!(kMaxDeceleration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION , std::to_string(object->GetMaxDeceleration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__MAX_DECELERATION);
                }
            }
        }

        void PhaseRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPhase> object)
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                }
            }
        }

        void PositionInLaneCoordinatesRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPositionInLaneCoordinates> object)
        {
            if (object)
            {
                const auto kPathS = object->GetPathS();
                if (!(kPathS >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__PATH_S , std::to_string(object->GetPathS()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__PATH_S);
                }
            }
        }

        void PrecipitationRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IPrecipitation> object)
        {
            if (object)
            {
                const auto kIntensity = object->GetIntensity();
                if (!(kIntensity <= 1))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__INTENSITY, std::to_string(object->GetIntensity()), "<=", "1", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);

                }
                if (!(kIntensity >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(object->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                }
            }
        }

        void ReachPositionConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IReachPositionCondition> object)
        {
            if (object)
            {
                const auto kTolerance = object->GetTolerance();
                if (!(kTolerance >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__TOLERANCE , std::to_string(object->GetTolerance()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__TOLERANCE);
                }
            }
        }

        void RelativeDistanceConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRelativeDistanceCondition> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void RoadConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IRoadCondition> object)
        {
            if (object)
            {
                const auto kFrictionScaleFactor = object->GetFrictionScaleFactor();
                if (!(kFrictionScaleFactor >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR , std::to_string(object->GetFrictionScaleFactor()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__FRICTION_SCALE_FACTOR);
                }
            }
        }

        void StandStillConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IStandStillCondition> object)
        {
            if (object)
            {
                const auto kDuration = object->GetDuration();
                if (!(kDuration >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DURATION , std::to_string(object->GetDuration()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DURATION);
                }
            }
        }

        void SunRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ISun> object)
        {
            if (object)
            {
                const auto kIntensity = object->GetIntensity();
                if (!(kIntensity >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__INTENSITY , std::to_string(object->GetIntensity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INTENSITY);
                }
            }
            if (object)
            {
                const auto kAzimuth = object->GetAzimuth();
                if (!(kAzimuth <= (2* M_PI)))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__AZIMUTH, std::to_string(object->GetAzimuth()), "<=", "2PI", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);

                }
                if (!(kAzimuth >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__AZIMUTH , std::to_string(object->GetAzimuth()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__AZIMUTH);
                }
            }
            if (object)
            {
                const auto kElevation = object->GetElevation();
                if (!(kElevation <= M_PI))
                {
                    LogMessage(object, messageLogger, OSC_CONSTANTS::ATTRIBUTE__ELEVATION, std::to_string(object->GetElevation()), "<=", "PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);

                }
                if (!(kElevation >= (- M_PI)))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__ELEVATION , std::to_string(object->GetElevation()), ">=", "-PI", OSC_CONSTANTS::ATTRIBUTE__ELEVATION);
                }
            }
        }

        void TimeHeadwayConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeHeadwayCondition> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void TimeToCollisionConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITimeToCollisionCondition> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void TimingRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITiming> object)
        {
            if (object)
            {
                const auto kScale = object->GetScale();
                if (!(kScale > 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__SCALE , std::to_string(object->GetScale()), ">", "0", OSC_CONSTANTS::ATTRIBUTE__SCALE);
                }
            }
        }

        void TrafficSignalControllerRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSignalController> object)
        {
            if (object)
            {
                const auto kDelay = object->GetDelay();
                if (!(kDelay >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__DELAY , std::to_string(object->GetDelay()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__DELAY);
                }
            }
        }

        void TrafficSinkActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSinkAction> object)
        {
            if (object)
            {
                const auto kRate = object->GetRate();
                if (!(kRate >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(object->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                }
            }
            if (object)
            {
                const auto kRadius = object->GetRadius();
                if (!(kRadius >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(object->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                }
            }
        }

        void TrafficSourceActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSourceAction> object)
        {
            if (object)
            {
                const auto kRate = object->GetRate();
                if (!(kRate >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__RATE , std::to_string(object->GetRate()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RATE);
                }
            }
            if (object)
            {
                const auto kRadius = object->GetRadius();
                if (!(kRadius >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__RADIUS , std::to_string(object->GetRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__RADIUS);
                }
            }
            if (object)
            {
                const auto kVelocity = object->GetVelocity();
                if (!(kVelocity >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(object->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                }
            }
        }

        void TrafficSwarmActionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITrafficSwarmAction> object)
        {
            if (object)
            {
                const auto kSemiMajorAxis = object->GetSemiMajorAxis();
                if (!(kSemiMajorAxis >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS , std::to_string(object->GetSemiMajorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MAJOR_AXIS);
                }
            }
            if (object)
            {
                const auto kSemiMinorAxis = object->GetSemiMinorAxis();
                if (!(kSemiMinorAxis >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS , std::to_string(object->GetSemiMinorAxis()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__SEMI_MINOR_AXIS);
                }
            }
            if (object)
            {
                const auto kInnerRadius = object->GetInnerRadius();
                if (!(kInnerRadius >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS , std::to_string(object->GetInnerRadius()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__INNER_RADIUS);
                }
            }
            if (object)
            {
                const auto kVelocity = object->GetVelocity();
                if (!(kVelocity >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VELOCITY , std::to_string(object->GetVelocity()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VELOCITY);
                }
            }
        }

        void TransitionDynamicsRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITransitionDynamics> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void TraveledDistanceConditionRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<ITraveledDistanceCondition> object)
        {
            if (object)
            {
                const auto kValue = object->GetValue();
                if (!(kValue >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__VALUE , std::to_string(object->GetValue()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__VALUE);
                }
            }
        }

        void VehicleCategoryDistributionEntryRangeCheckerRule::ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IVehicleCategoryDistributionEntry> object)
        {
            if (object)
            {
                const auto kWeight = object->GetWeight();
                if (!(kWeight >= 0))
                {
                    LogMessage(object,  messageLogger,  OSC_CONSTANTS::ATTRIBUTE__WEIGHT , std::to_string(object->GetWeight()), ">=", "0", OSC_CONSTANTS::ATTRIBUTE__WEIGHT);
                }
            }
        }

    }
}
