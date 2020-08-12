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
 
#include "Enumerations.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
        std::map<std::string, CloudState::CloudStateEnum> CloudState::_stringToEnum = 
        {
            {"skyOff", SKY_OFF},
            {"free", FREE},
            {"cloudy", CLOUDY},
            {"overcast", OVERCAST},
            {"rainy", RAINY},
        };

        std::map<std::string, ConditionEdge::ConditionEdgeEnum> ConditionEdge::_stringToEnum = 
        {
            {"rising", RISING},
            {"falling", FALLING},
            {"risingOrFalling", RISING_OR_FALLING},
            {"none", NONE},
        };

        std::map<std::string, DynamicsDimension::DynamicsDimensionEnum> DynamicsDimension::_stringToEnum = 
        {
            {"rate", RATE},
            {"time", TIME},
            {"distance", DISTANCE},
        };

        std::map<std::string, DynamicsShape::DynamicsShapeEnum> DynamicsShape::_stringToEnum = 
        {
            {"linear", LINEAR},
            {"cubic", CUBIC},
            {"sinusoidal", SINUSOIDAL},
            {"step", STEP},
        };

        std::map<std::string, FollowingMode::FollowingModeEnum> FollowingMode::_stringToEnum = 
        {
            {"position", POSITION},
            {"follow", FOLLOW},
        };

        std::map<std::string, MiscObjectCategory::MiscObjectCategoryEnum> MiscObjectCategory::_stringToEnum = 
        {
            {"none", NONE},
            {"obstacle", OBSTACLE},
            {"pole", POLE},
            {"tree", TREE},
            {"vegetation", VEGETATION},
            {"barrier", BARRIER},
            {"building", BUILDING},
            {"parkingSpace", PARKING_SPACE},
            {"patch", PATCH},
            {"railing", RAILING},
            {"trafficIsland", TRAFFIC_ISLAND},
            {"crosswalk", CROSSWALK},
            {"streetLamp", STREET_LAMP},
            {"gantry", GANTRY},
            {"soundBarrier", SOUND_BARRIER},
            {"wind", WIND},
            {"roadMark", ROAD_MARK},
        };

        std::map<std::string, ObjectType::ObjectTypeEnum> ObjectType::_stringToEnum = 
        {
            {"pedestrian", PEDESTRIAN},
            {"vehicle", VEHICLE},
            {"miscellaneous", MISCELLANEOUS},
        };

        std::map<std::string, ParameterType::ParameterTypeEnum> ParameterType::_stringToEnum = 
        {
            {"integer", INTEGER},
            {"double", DOUBLE},
            {"string", STRING},
            {"unsignedInt", UNSIGNED_INT},
            {"unsignedShort", UNSIGNED_SHORT},
            {"boolean", BOOLEAN},
            {"dateTime", DATE_TIME},
        };

        std::map<std::string, PedestrianCategory::PedestrianCategoryEnum> PedestrianCategory::_stringToEnum = 
        {
            {"pedestrian", PEDESTRIAN},
            {"wheelchair", WHEELCHAIR},
            {"animal", ANIMAL},
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
            {"skip", SKIP},
            {"parallel", PARALLEL},
        };

        std::map<std::string, ReferenceContext::ReferenceContextEnum> ReferenceContext::_stringToEnum = 
        {
            {"relative", RELATIVE},
            {"absolute", ABSOLUTE},
        };

        std::map<std::string, RelativeDistanceType::RelativeDistanceTypeEnum> RelativeDistanceType::_stringToEnum = 
        {
            {"longitudinal", LONGITUDINAL},
            {"lateral", LATERAL},
            {"cartesianDistance", CARTESIAN_DISTANCE},
        };

        std::map<std::string, RouteStrategy::RouteStrategyEnum> RouteStrategy::_stringToEnum = 
        {
            {"fastest", FASTEST},
            {"shortest", SHORTEST},
            {"leastIntersections", LEAST_INTERSECTIONS},
            {"random", RANDOM},
        };

        std::map<std::string, Rule::RuleEnum> Rule::_stringToEnum = 
        {
            {"greaterThan", GREATER_THAN},
            {"lessThan", LESS_THAN},
            {"equalTo", EQUAL_TO},
        };

        std::map<std::string, SpeedTargetValueType::SpeedTargetValueTypeEnum> SpeedTargetValueType::_stringToEnum = 
        {
            {"delta", DELTA},
            {"factor", FACTOR},
        };

        std::map<std::string, StoryboardElementState::StoryboardElementStateEnum> StoryboardElementState::_stringToEnum = 
        {
            {"startTransition", START_TRANSITION},
            {"endTransition", END_TRANSITION},
            {"stopTransition", STOP_TRANSITION},
            {"skipTransition", SKIP_TRANSITION},
            {"completeState", COMPLETE_STATE},
            {"runningState", RUNNING_STATE},
            {"standbyState", STANDBY_STATE},
        };

        std::map<std::string, StoryboardElementType::StoryboardElementTypeEnum> StoryboardElementType::_stringToEnum = 
        {
            {"story", STORY},
            {"act", ACT},
            {"maneuver", MANEUVER},
            {"event", EVENT},
            {"action", ACTION},
            {"maneuverGroup", MANEUVER_GROUP},
        };

        std::map<std::string, TriggeringEntitiesRule::TriggeringEntitiesRuleEnum> TriggeringEntitiesRule::_stringToEnum = 
        {
            {"any", ANY},
            {"all", ALL},
        };

        std::map<std::string, VehicleCategory::VehicleCategoryEnum> VehicleCategory::_stringToEnum = 
        {
            {"car", CAR},
            {"van", VAN},
            {"truck", TRUCK},
            {"trailer", TRAILER},
            {"semitrailer", SEMITRAILER},
            {"bus", BUS},
            {"motorbike", MOTORBIKE},
            {"bicycle", BICYCLE},
            {"train", TRAIN},
            {"tram", TRAM},
        };

    }
}
