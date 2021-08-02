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
 
#include "EnumerationsV1_0.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        std::map<std::string, CloudState::CloudStateEnum> CloudState::_stringToEnum = 
        {
            {"cloudy", CLOUDY},
            {"free", FREE},
            {"overcast", OVERCAST},
            {"rainy", RAINY},
            {"skyOff", SKY_OFF},
        };

        std::map<std::string, ConditionEdge::ConditionEdgeEnum> ConditionEdge::_stringToEnum = 
        {
            {"falling", FALLING},
            {"none", NONE},
            {"rising", RISING},
            {"risingOrFalling", RISING_OR_FALLING},
        };

        std::map<std::string, DynamicsDimension::DynamicsDimensionEnum> DynamicsDimension::_stringToEnum = 
        {
            {"distance", DISTANCE},
            {"rate", RATE},
            {"time", TIME},
        };

        std::map<std::string, DynamicsShape::DynamicsShapeEnum> DynamicsShape::_stringToEnum = 
        {
            {"cubic", CUBIC},
            {"linear", LINEAR},
            {"sinusoidal", SINUSOIDAL},
            {"step", STEP},
        };

        std::map<std::string, FollowingMode::FollowingModeEnum> FollowingMode::_stringToEnum = 
        {
            {"follow", FOLLOW},
            {"position", POSITION},
        };

        std::map<std::string, MiscObjectCategory::MiscObjectCategoryEnum> MiscObjectCategory::_stringToEnum = 
        {
            {"barrier", BARRIER},
            {"building", BUILDING},
            {"crosswalk", CROSSWALK},
            {"gantry", GANTRY},
            {"none", NONE},
            {"obstacle", OBSTACLE},
            {"parkingSpace", PARKING_SPACE},
            {"patch", PATCH},
            {"pole", POLE},
            {"railing", RAILING},
            {"roadMark", ROAD_MARK},
            {"soundBarrier", SOUND_BARRIER},
            {"streetLamp", STREET_LAMP},
            {"trafficIsland", TRAFFIC_ISLAND},
            {"tree", TREE},
            {"vegetation", VEGETATION},
            {"wind", WIND},
        };

        std::map<std::string, ObjectType::ObjectTypeEnum> ObjectType::_stringToEnum = 
        {
            {"miscellaneous", MISCELLANEOUS},
            {"pedestrian", PEDESTRIAN},
            {"vehicle", VEHICLE},
        };

        std::map<std::string, ParameterType::ParameterTypeEnum> ParameterType::_stringToEnum = 
        {
            {"boolean", BOOLEAN},
            {"dateTime", DATE_TIME},
            {"double", DOUBLE},
            {"integer", INTEGER},
            {"string", STRING},
            {"unsignedInt", UNSIGNED_INT},
            {"unsignedShort", UNSIGNED_SHORT},
        };

        std::map<std::string, PedestrianCategory::PedestrianCategoryEnum> PedestrianCategory::_stringToEnum = 
        {
            {"animal", ANIMAL},
            {"pedestrian", PEDESTRIAN},
            {"wheelchair", WHEELCHAIR},
        };

        std::map<std::string, PrecipitationType::PrecipitationTypeEnum> PrecipitationType::_stringToEnum = 
        {
            {"dry", DRY},
            {"rain", RAIN},
            {"snow", SNOW},
        };

        std::map<std::string, Priority::PriorityEnum> Priority::_stringToEnum = 
        {
            {"overwrite", OVERWRITE},
            {"parallel", PARALLEL},
            {"skip", SKIP},
        };

        std::map<std::string, ReferenceContext::ReferenceContextEnum> ReferenceContext::_stringToEnum = 
        {
            {"absolute", ABSOLUTE},
            {"relative", RELATIVE},
        };

        std::map<std::string, RelativeDistanceType::RelativeDistanceTypeEnum> RelativeDistanceType::_stringToEnum = 
        {
            {"cartesianDistance", CARTESIAN_DISTANCE},
            {"lateral", LATERAL},
            {"longitudinal", LONGITUDINAL},
        };

        std::map<std::string, RouteStrategy::RouteStrategyEnum> RouteStrategy::_stringToEnum = 
        {
            {"fastest", FASTEST},
            {"leastIntersections", LEAST_INTERSECTIONS},
            {"random", RANDOM},
            {"shortest", SHORTEST},
        };

        std::map<std::string, Rule::RuleEnum> Rule::_stringToEnum = 
        {
            {"equalTo", EQUAL_TO},
            {"greaterThan", GREATER_THAN},
            {"lessThan", LESS_THAN},
        };

        std::map<std::string, SpeedTargetValueType::SpeedTargetValueTypeEnum> SpeedTargetValueType::_stringToEnum = 
        {
            {"delta", DELTA},
            {"factor", FACTOR},
        };

        std::map<std::string, StoryboardElementState::StoryboardElementStateEnum> StoryboardElementState::_stringToEnum = 
        {
            {"completeState", COMPLETE_STATE},
            {"endTransition", END_TRANSITION},
            {"runningState", RUNNING_STATE},
            {"skipTransition", SKIP_TRANSITION},
            {"standbyState", STANDBY_STATE},
            {"startTransition", START_TRANSITION},
            {"stopTransition", STOP_TRANSITION},
        };

        std::map<std::string, StoryboardElementType::StoryboardElementTypeEnum> StoryboardElementType::_stringToEnum = 
        {
            {"act", ACT},
            {"action", ACTION},
            {"event", EVENT},
            {"maneuver", MANEUVER},
            {"maneuverGroup", MANEUVER_GROUP},
            {"story", STORY},
        };

        std::map<std::string, TriggeringEntitiesRule::TriggeringEntitiesRuleEnum> TriggeringEntitiesRule::_stringToEnum = 
        {
            {"all", ALL},
            {"any", ANY},
        };

        std::map<std::string, VehicleCategory::VehicleCategoryEnum> VehicleCategory::_stringToEnum = 
        {
            {"bicycle", BICYCLE},
            {"bus", BUS},
            {"car", CAR},
            {"motorbike", MOTORBIKE},
            {"semitrailer", SEMITRAILER},
            {"trailer", TRAILER},
            {"train", TRAIN},
            {"tram", TRAM},
            {"truck", TRUCK},
            {"van", VAN},
        };

    }
}
