
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
            CloudState::CloudState()
            {
                _literal = kCloudStateEnumString[0];
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            CloudState::CloudState(CloudStateEnum& cloudState)
            {
                _literal = kCloudStateEnumString[cloudState+1];
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            CloudState::CloudState(const CloudStateEnum cloudState)
            {
                _literal = kCloudStateEnumString[cloudState+1];
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            CloudState::CloudState(std::string& literal_):_literal(literal_) 
            {
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            
            std::string CloudState::GetLiteral() const 
            { 
            	return _literal;
            }

            CloudState& CloudState::operator= (const CloudStateEnum &rhs)
            {
                _cloudStateEnum = rhs;
                _literal = kCloudStateEnumString[_cloudStateEnum+1];
                return *this;
            }

            CloudState& CloudState::operator= (const CloudState &rhs ) 
            { 
                _literal = rhs._literal;
                _cloudStateEnum = rhs._cloudStateEnum;
                return *this;
            }

            bool CloudState::operator== (const CloudStateEnum &rhs) const
            {
                return _cloudStateEnum == rhs;
            }

            CloudState::CloudStateEnum CloudState::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, ConditionEdge::ConditionEdgeEnum> ConditionEdge::_stringToEnum = 
	        {
	            {"falling", FALLING},
	            {"none", NONE},
	            {"rising", RISING},
	            {"risingOrFalling", RISING_OR_FALLING},
	        };
            ConditionEdge::ConditionEdge()
            {
                _literal = kConditionEdgeEnumString[0];
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            ConditionEdge::ConditionEdge(ConditionEdgeEnum& conditionEdge)
            {
                _literal = kConditionEdgeEnumString[conditionEdge+1];
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            ConditionEdge::ConditionEdge(const ConditionEdgeEnum conditionEdge)
            {
                _literal = kConditionEdgeEnumString[conditionEdge+1];
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            ConditionEdge::ConditionEdge(std::string& literal_):_literal(literal_) 
            {
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            
            std::string ConditionEdge::GetLiteral() const 
            { 
            	return _literal;
            }

            ConditionEdge& ConditionEdge::operator= (const ConditionEdgeEnum &rhs)
            {
                _conditionEdgeEnum = rhs;
                _literal = kConditionEdgeEnumString[_conditionEdgeEnum+1];
                return *this;
            }

            ConditionEdge& ConditionEdge::operator= (const ConditionEdge &rhs ) 
            { 
                _literal = rhs._literal;
                _conditionEdgeEnum = rhs._conditionEdgeEnum;
                return *this;
            }

            bool ConditionEdge::operator== (const ConditionEdgeEnum &rhs) const
            {
                return _conditionEdgeEnum == rhs;
            }

            ConditionEdge::ConditionEdgeEnum ConditionEdge::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, DynamicsDimension::DynamicsDimensionEnum> DynamicsDimension::_stringToEnum = 
	        {
	            {"distance", DISTANCE},
	            {"rate", RATE},
	            {"time", TIME},
	        };
            DynamicsDimension::DynamicsDimension()
            {
                _literal = kDynamicsDimensionEnumString[0];
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            DynamicsDimension::DynamicsDimension(DynamicsDimensionEnum& dynamicsDimension)
            {
                _literal = kDynamicsDimensionEnumString[dynamicsDimension+1];
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            DynamicsDimension::DynamicsDimension(const DynamicsDimensionEnum dynamicsDimension)
            {
                _literal = kDynamicsDimensionEnumString[dynamicsDimension+1];
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            DynamicsDimension::DynamicsDimension(std::string& literal_):_literal(literal_) 
            {
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            
            std::string DynamicsDimension::GetLiteral() const 
            { 
            	return _literal;
            }

            DynamicsDimension& DynamicsDimension::operator= (const DynamicsDimensionEnum &rhs)
            {
                _dynamicsDimensionEnum = rhs;
                _literal = kDynamicsDimensionEnumString[_dynamicsDimensionEnum+1];
                return *this;
            }

            DynamicsDimension& DynamicsDimension::operator= (const DynamicsDimension &rhs ) 
            { 
                _literal = rhs._literal;
                _dynamicsDimensionEnum = rhs._dynamicsDimensionEnum;
                return *this;
            }

            bool DynamicsDimension::operator== (const DynamicsDimensionEnum &rhs) const
            {
                return _dynamicsDimensionEnum == rhs;
            }

            DynamicsDimension::DynamicsDimensionEnum DynamicsDimension::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, DynamicsShape::DynamicsShapeEnum> DynamicsShape::_stringToEnum = 
	        {
	            {"cubic", CUBIC},
	            {"linear", LINEAR},
	            {"sinusoidal", SINUSOIDAL},
	            {"step", STEP},
	        };
            DynamicsShape::DynamicsShape()
            {
                _literal = kDynamicsShapeEnumString[0];
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            DynamicsShape::DynamicsShape(DynamicsShapeEnum& dynamicsShape)
            {
                _literal = kDynamicsShapeEnumString[dynamicsShape+1];
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            DynamicsShape::DynamicsShape(const DynamicsShapeEnum dynamicsShape)
            {
                _literal = kDynamicsShapeEnumString[dynamicsShape+1];
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            DynamicsShape::DynamicsShape(std::string& literal_):_literal(literal_) 
            {
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            
            std::string DynamicsShape::GetLiteral() const 
            { 
            	return _literal;
            }

            DynamicsShape& DynamicsShape::operator= (const DynamicsShapeEnum &rhs)
            {
                _dynamicsShapeEnum = rhs;
                _literal = kDynamicsShapeEnumString[_dynamicsShapeEnum+1];
                return *this;
            }

            DynamicsShape& DynamicsShape::operator= (const DynamicsShape &rhs ) 
            { 
                _literal = rhs._literal;
                _dynamicsShapeEnum = rhs._dynamicsShapeEnum;
                return *this;
            }

            bool DynamicsShape::operator== (const DynamicsShapeEnum &rhs) const
            {
                return _dynamicsShapeEnum == rhs;
            }

            DynamicsShape::DynamicsShapeEnum DynamicsShape::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, FollowingMode::FollowingModeEnum> FollowingMode::_stringToEnum = 
	        {
	            {"follow", FOLLOW},
	            {"position", POSITION},
	        };
            FollowingMode::FollowingMode()
            {
                _literal = kFollowingModeEnumString[0];
                _followingModeEnum = GetFromLiteral(_literal);
            }

            FollowingMode::FollowingMode(FollowingModeEnum& followingMode)
            {
                _literal = kFollowingModeEnumString[followingMode+1];
                _followingModeEnum = GetFromLiteral(_literal);
            }

            FollowingMode::FollowingMode(const FollowingModeEnum followingMode)
            {
                _literal = kFollowingModeEnumString[followingMode+1];
                _followingModeEnum = GetFromLiteral(_literal);
            }

            FollowingMode::FollowingMode(std::string& literal_):_literal(literal_) 
            {
                _followingModeEnum = GetFromLiteral(_literal);
            }

            
            std::string FollowingMode::GetLiteral() const 
            { 
            	return _literal;
            }

            FollowingMode& FollowingMode::operator= (const FollowingModeEnum &rhs)
            {
                _followingModeEnum = rhs;
                _literal = kFollowingModeEnumString[_followingModeEnum+1];
                return *this;
            }

            FollowingMode& FollowingMode::operator= (const FollowingMode &rhs ) 
            { 
                _literal = rhs._literal;
                _followingModeEnum = rhs._followingModeEnum;
                return *this;
            }

            bool FollowingMode::operator== (const FollowingModeEnum &rhs) const
            {
                return _followingModeEnum == rhs;
            }

            FollowingMode::FollowingModeEnum FollowingMode::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

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
            MiscObjectCategory::MiscObjectCategory()
            {
                _literal = kMiscObjectCategoryEnumString[0];
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            MiscObjectCategory::MiscObjectCategory(MiscObjectCategoryEnum& miscObjectCategory)
            {
                _literal = kMiscObjectCategoryEnumString[miscObjectCategory+1];
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            MiscObjectCategory::MiscObjectCategory(const MiscObjectCategoryEnum miscObjectCategory)
            {
                _literal = kMiscObjectCategoryEnumString[miscObjectCategory+1];
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            MiscObjectCategory::MiscObjectCategory(std::string& literal_):_literal(literal_) 
            {
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            
            std::string MiscObjectCategory::GetLiteral() const 
            { 
            	return _literal;
            }

            MiscObjectCategory& MiscObjectCategory::operator= (const MiscObjectCategoryEnum &rhs)
            {
                _miscObjectCategoryEnum = rhs;
                _literal = kMiscObjectCategoryEnumString[_miscObjectCategoryEnum+1];
                return *this;
            }

            MiscObjectCategory& MiscObjectCategory::operator= (const MiscObjectCategory &rhs ) 
            { 
                _literal = rhs._literal;
                _miscObjectCategoryEnum = rhs._miscObjectCategoryEnum;
                return *this;
            }

            bool MiscObjectCategory::operator== (const MiscObjectCategoryEnum &rhs) const
            {
                return _miscObjectCategoryEnum == rhs;
            }

            MiscObjectCategory::MiscObjectCategoryEnum MiscObjectCategory::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, ObjectType::ObjectTypeEnum> ObjectType::_stringToEnum = 
	        {
	            {"miscellaneous", MISCELLANEOUS},
	            {"pedestrian", PEDESTRIAN},
	            {"vehicle", VEHICLE},
	        };
            ObjectType::ObjectType()
            {
                _literal = kObjectTypeEnumString[0];
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            ObjectType::ObjectType(ObjectTypeEnum& objectType)
            {
                _literal = kObjectTypeEnumString[objectType+1];
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            ObjectType::ObjectType(const ObjectTypeEnum objectType)
            {
                _literal = kObjectTypeEnumString[objectType+1];
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            ObjectType::ObjectType(std::string& literal_):_literal(literal_) 
            {
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            
            std::string ObjectType::GetLiteral() const 
            { 
            	return _literal;
            }

            ObjectType& ObjectType::operator= (const ObjectTypeEnum &rhs)
            {
                _objectTypeEnum = rhs;
                _literal = kObjectTypeEnumString[_objectTypeEnum+1];
                return *this;
            }

            ObjectType& ObjectType::operator= (const ObjectType &rhs ) 
            { 
                _literal = rhs._literal;
                _objectTypeEnum = rhs._objectTypeEnum;
                return *this;
            }

            bool ObjectType::operator== (const ObjectTypeEnum &rhs) const
            {
                return _objectTypeEnum == rhs;
            }

            ObjectType::ObjectTypeEnum ObjectType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

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
            ParameterType::ParameterType()
            {
                _literal = kParameterTypeEnumString[0];
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            ParameterType::ParameterType(ParameterTypeEnum& parameterType)
            {
                _literal = kParameterTypeEnumString[parameterType+1];
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            ParameterType::ParameterType(const ParameterTypeEnum parameterType)
            {
                _literal = kParameterTypeEnumString[parameterType+1];
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            ParameterType::ParameterType(std::string& literal_):_literal(literal_) 
            {
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            
            std::string ParameterType::GetLiteral() const 
            { 
            	return _literal;
            }

            ParameterType& ParameterType::operator= (const ParameterTypeEnum &rhs)
            {
                _parameterTypeEnum = rhs;
                _literal = kParameterTypeEnumString[_parameterTypeEnum+1];
                return *this;
            }

            ParameterType& ParameterType::operator= (const ParameterType &rhs ) 
            { 
                _literal = rhs._literal;
                _parameterTypeEnum = rhs._parameterTypeEnum;
                return *this;
            }

            bool ParameterType::operator== (const ParameterTypeEnum &rhs) const
            {
                return _parameterTypeEnum == rhs;
            }

            ParameterType::ParameterTypeEnum ParameterType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, PedestrianCategory::PedestrianCategoryEnum> PedestrianCategory::_stringToEnum = 
	        {
	            {"animal", ANIMAL},
	            {"pedestrian", PEDESTRIAN},
	            {"wheelchair", WHEELCHAIR},
	        };
            PedestrianCategory::PedestrianCategory()
            {
                _literal = kPedestrianCategoryEnumString[0];
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            PedestrianCategory::PedestrianCategory(PedestrianCategoryEnum& pedestrianCategory)
            {
                _literal = kPedestrianCategoryEnumString[pedestrianCategory+1];
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            PedestrianCategory::PedestrianCategory(const PedestrianCategoryEnum pedestrianCategory)
            {
                _literal = kPedestrianCategoryEnumString[pedestrianCategory+1];
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            PedestrianCategory::PedestrianCategory(std::string& literal_):_literal(literal_) 
            {
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            
            std::string PedestrianCategory::GetLiteral() const 
            { 
            	return _literal;
            }

            PedestrianCategory& PedestrianCategory::operator= (const PedestrianCategoryEnum &rhs)
            {
                _pedestrianCategoryEnum = rhs;
                _literal = kPedestrianCategoryEnumString[_pedestrianCategoryEnum+1];
                return *this;
            }

            PedestrianCategory& PedestrianCategory::operator= (const PedestrianCategory &rhs ) 
            { 
                _literal = rhs._literal;
                _pedestrianCategoryEnum = rhs._pedestrianCategoryEnum;
                return *this;
            }

            bool PedestrianCategory::operator== (const PedestrianCategoryEnum &rhs) const
            {
                return _pedestrianCategoryEnum == rhs;
            }

            PedestrianCategory::PedestrianCategoryEnum PedestrianCategory::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, PrecipitationType::PrecipitationTypeEnum> PrecipitationType::_stringToEnum = 
	        {
	            {"dry", DRY},
	            {"rain", RAIN},
	            {"snow", SNOW},
	        };
            PrecipitationType::PrecipitationType()
            {
                _literal = kPrecipitationTypeEnumString[0];
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            PrecipitationType::PrecipitationType(PrecipitationTypeEnum& precipitationType)
            {
                _literal = kPrecipitationTypeEnumString[precipitationType+1];
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            PrecipitationType::PrecipitationType(const PrecipitationTypeEnum precipitationType)
            {
                _literal = kPrecipitationTypeEnumString[precipitationType+1];
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            PrecipitationType::PrecipitationType(std::string& literal_):_literal(literal_) 
            {
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            
            std::string PrecipitationType::GetLiteral() const 
            { 
            	return _literal;
            }

            PrecipitationType& PrecipitationType::operator= (const PrecipitationTypeEnum &rhs)
            {
                _precipitationTypeEnum = rhs;
                _literal = kPrecipitationTypeEnumString[_precipitationTypeEnum+1];
                return *this;
            }

            PrecipitationType& PrecipitationType::operator= (const PrecipitationType &rhs ) 
            { 
                _literal = rhs._literal;
                _precipitationTypeEnum = rhs._precipitationTypeEnum;
                return *this;
            }

            bool PrecipitationType::operator== (const PrecipitationTypeEnum &rhs) const
            {
                return _precipitationTypeEnum == rhs;
            }

            PrecipitationType::PrecipitationTypeEnum PrecipitationType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, Priority::PriorityEnum> Priority::_stringToEnum = 
	        {
	            {"overwrite", OVERWRITE},
	            {"parallel", PARALLEL},
	            {"skip", SKIP},
	        };
            Priority::Priority()
            {
                _literal = kPriorityEnumString[0];
                _priorityEnum = GetFromLiteral(_literal);
            }

            Priority::Priority(PriorityEnum& priority)
            {
                _literal = kPriorityEnumString[priority+1];
                _priorityEnum = GetFromLiteral(_literal);
            }

            Priority::Priority(const PriorityEnum priority)
            {
                _literal = kPriorityEnumString[priority+1];
                _priorityEnum = GetFromLiteral(_literal);
            }

            Priority::Priority(std::string& literal_):_literal(literal_) 
            {
                _priorityEnum = GetFromLiteral(_literal);
            }

            
            std::string Priority::GetLiteral() const 
            { 
            	return _literal;
            }

            Priority& Priority::operator= (const PriorityEnum &rhs)
            {
                _priorityEnum = rhs;
                _literal = kPriorityEnumString[_priorityEnum+1];
                return *this;
            }

            Priority& Priority::operator= (const Priority &rhs ) 
            { 
                _literal = rhs._literal;
                _priorityEnum = rhs._priorityEnum;
                return *this;
            }

            bool Priority::operator== (const PriorityEnum &rhs) const
            {
                return _priorityEnum == rhs;
            }

            Priority::PriorityEnum Priority::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, ReferenceContext::ReferenceContextEnum> ReferenceContext::_stringToEnum = 
	        {
	            {"absolute", ABSOLUTE},
	            {"relative", RELATIVE},
	        };
            ReferenceContext::ReferenceContext()
            {
                _literal = kReferenceContextEnumString[0];
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            ReferenceContext::ReferenceContext(ReferenceContextEnum& referenceContext)
            {
                _literal = kReferenceContextEnumString[referenceContext+1];
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            ReferenceContext::ReferenceContext(const ReferenceContextEnum referenceContext)
            {
                _literal = kReferenceContextEnumString[referenceContext+1];
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            ReferenceContext::ReferenceContext(std::string& literal_):_literal(literal_) 
            {
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            
            std::string ReferenceContext::GetLiteral() const 
            { 
            	return _literal;
            }

            ReferenceContext& ReferenceContext::operator= (const ReferenceContextEnum &rhs)
            {
                _referenceContextEnum = rhs;
                _literal = kReferenceContextEnumString[_referenceContextEnum+1];
                return *this;
            }

            ReferenceContext& ReferenceContext::operator= (const ReferenceContext &rhs ) 
            { 
                _literal = rhs._literal;
                _referenceContextEnum = rhs._referenceContextEnum;
                return *this;
            }

            bool ReferenceContext::operator== (const ReferenceContextEnum &rhs) const
            {
                return _referenceContextEnum == rhs;
            }

            ReferenceContext::ReferenceContextEnum ReferenceContext::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, RelativeDistanceType::RelativeDistanceTypeEnum> RelativeDistanceType::_stringToEnum = 
	        {
	            {"cartesianDistance", CARTESIAN_DISTANCE},
	            {"lateral", LATERAL},
	            {"longitudinal", LONGITUDINAL},
	        };
            RelativeDistanceType::RelativeDistanceType()
            {
                _literal = kRelativeDistanceTypeEnumString[0];
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            RelativeDistanceType::RelativeDistanceType(RelativeDistanceTypeEnum& relativeDistanceType)
            {
                _literal = kRelativeDistanceTypeEnumString[relativeDistanceType+1];
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            RelativeDistanceType::RelativeDistanceType(const RelativeDistanceTypeEnum relativeDistanceType)
            {
                _literal = kRelativeDistanceTypeEnumString[relativeDistanceType+1];
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            RelativeDistanceType::RelativeDistanceType(std::string& literal_):_literal(literal_) 
            {
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            
            std::string RelativeDistanceType::GetLiteral() const 
            { 
            	return _literal;
            }

            RelativeDistanceType& RelativeDistanceType::operator= (const RelativeDistanceTypeEnum &rhs)
            {
                _relativeDistanceTypeEnum = rhs;
                _literal = kRelativeDistanceTypeEnumString[_relativeDistanceTypeEnum+1];
                return *this;
            }

            RelativeDistanceType& RelativeDistanceType::operator= (const RelativeDistanceType &rhs ) 
            { 
                _literal = rhs._literal;
                _relativeDistanceTypeEnum = rhs._relativeDistanceTypeEnum;
                return *this;
            }

            bool RelativeDistanceType::operator== (const RelativeDistanceTypeEnum &rhs) const
            {
                return _relativeDistanceTypeEnum == rhs;
            }

            RelativeDistanceType::RelativeDistanceTypeEnum RelativeDistanceType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, RouteStrategy::RouteStrategyEnum> RouteStrategy::_stringToEnum = 
	        {
	            {"fastest", FASTEST},
	            {"leastIntersections", LEAST_INTERSECTIONS},
	            {"random", RANDOM},
	            {"shortest", SHORTEST},
	        };
            RouteStrategy::RouteStrategy()
            {
                _literal = kRouteStrategyEnumString[0];
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            RouteStrategy::RouteStrategy(RouteStrategyEnum& routeStrategy)
            {
                _literal = kRouteStrategyEnumString[routeStrategy+1];
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            RouteStrategy::RouteStrategy(const RouteStrategyEnum routeStrategy)
            {
                _literal = kRouteStrategyEnumString[routeStrategy+1];
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            RouteStrategy::RouteStrategy(std::string& literal_):_literal(literal_) 
            {
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            
            std::string RouteStrategy::GetLiteral() const 
            { 
            	return _literal;
            }

            RouteStrategy& RouteStrategy::operator= (const RouteStrategyEnum &rhs)
            {
                _routeStrategyEnum = rhs;
                _literal = kRouteStrategyEnumString[_routeStrategyEnum+1];
                return *this;
            }

            RouteStrategy& RouteStrategy::operator= (const RouteStrategy &rhs ) 
            { 
                _literal = rhs._literal;
                _routeStrategyEnum = rhs._routeStrategyEnum;
                return *this;
            }

            bool RouteStrategy::operator== (const RouteStrategyEnum &rhs) const
            {
                return _routeStrategyEnum == rhs;
            }

            RouteStrategy::RouteStrategyEnum RouteStrategy::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, Rule::RuleEnum> Rule::_stringToEnum = 
	        {
	            {"equalTo", EQUAL_TO},
	            {"greaterThan", GREATER_THAN},
	            {"lessThan", LESS_THAN},
	        };
            Rule::Rule()
            {
                _literal = kRuleEnumString[0];
                _ruleEnum = GetFromLiteral(_literal);
            }

            Rule::Rule(RuleEnum& rule)
            {
                _literal = kRuleEnumString[rule+1];
                _ruleEnum = GetFromLiteral(_literal);
            }

            Rule::Rule(const RuleEnum rule)
            {
                _literal = kRuleEnumString[rule+1];
                _ruleEnum = GetFromLiteral(_literal);
            }

            Rule::Rule(std::string& literal_):_literal(literal_) 
            {
                _ruleEnum = GetFromLiteral(_literal);
            }

            
            std::string Rule::GetLiteral() const 
            { 
            	return _literal;
            }

            Rule& Rule::operator= (const RuleEnum &rhs)
            {
                _ruleEnum = rhs;
                _literal = kRuleEnumString[_ruleEnum+1];
                return *this;
            }

            Rule& Rule::operator= (const Rule &rhs ) 
            { 
                _literal = rhs._literal;
                _ruleEnum = rhs._ruleEnum;
                return *this;
            }

            bool Rule::operator== (const RuleEnum &rhs) const
            {
                return _ruleEnum == rhs;
            }

            Rule::RuleEnum Rule::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, SpeedTargetValueType::SpeedTargetValueTypeEnum> SpeedTargetValueType::_stringToEnum = 
	        {
	            {"delta", DELTA},
	            {"factor", FACTOR},
	        };
            SpeedTargetValueType::SpeedTargetValueType()
            {
                _literal = kSpeedTargetValueTypeEnumString[0];
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            SpeedTargetValueType::SpeedTargetValueType(SpeedTargetValueTypeEnum& speedTargetValueType)
            {
                _literal = kSpeedTargetValueTypeEnumString[speedTargetValueType+1];
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            SpeedTargetValueType::SpeedTargetValueType(const SpeedTargetValueTypeEnum speedTargetValueType)
            {
                _literal = kSpeedTargetValueTypeEnumString[speedTargetValueType+1];
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            SpeedTargetValueType::SpeedTargetValueType(std::string& literal_):_literal(literal_) 
            {
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            
            std::string SpeedTargetValueType::GetLiteral() const 
            { 
            	return _literal;
            }

            SpeedTargetValueType& SpeedTargetValueType::operator= (const SpeedTargetValueTypeEnum &rhs)
            {
                _speedTargetValueTypeEnum = rhs;
                _literal = kSpeedTargetValueTypeEnumString[_speedTargetValueTypeEnum+1];
                return *this;
            }

            SpeedTargetValueType& SpeedTargetValueType::operator= (const SpeedTargetValueType &rhs ) 
            { 
                _literal = rhs._literal;
                _speedTargetValueTypeEnum = rhs._speedTargetValueTypeEnum;
                return *this;
            }

            bool SpeedTargetValueType::operator== (const SpeedTargetValueTypeEnum &rhs) const
            {
                return _speedTargetValueTypeEnum == rhs;
            }

            SpeedTargetValueType::SpeedTargetValueTypeEnum SpeedTargetValueType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

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
            StoryboardElementState::StoryboardElementState()
            {
                _literal = kStoryboardElementStateEnumString[0];
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            StoryboardElementState::StoryboardElementState(StoryboardElementStateEnum& storyboardElementState)
            {
                _literal = kStoryboardElementStateEnumString[storyboardElementState+1];
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            StoryboardElementState::StoryboardElementState(const StoryboardElementStateEnum storyboardElementState)
            {
                _literal = kStoryboardElementStateEnumString[storyboardElementState+1];
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            StoryboardElementState::StoryboardElementState(std::string& literal_):_literal(literal_) 
            {
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            
            std::string StoryboardElementState::GetLiteral() const 
            { 
            	return _literal;
            }

            StoryboardElementState& StoryboardElementState::operator= (const StoryboardElementStateEnum &rhs)
            {
                _storyboardElementStateEnum = rhs;
                _literal = kStoryboardElementStateEnumString[_storyboardElementStateEnum+1];
                return *this;
            }

            StoryboardElementState& StoryboardElementState::operator= (const StoryboardElementState &rhs ) 
            { 
                _literal = rhs._literal;
                _storyboardElementStateEnum = rhs._storyboardElementStateEnum;
                return *this;
            }

            bool StoryboardElementState::operator== (const StoryboardElementStateEnum &rhs) const
            {
                return _storyboardElementStateEnum == rhs;
            }

            StoryboardElementState::StoryboardElementStateEnum StoryboardElementState::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, StoryboardElementType::StoryboardElementTypeEnum> StoryboardElementType::_stringToEnum = 
	        {
	            {"act", ACT},
	            {"action", ACTION},
	            {"event", EVENT},
	            {"maneuver", MANEUVER},
	            {"maneuverGroup", MANEUVER_GROUP},
	            {"story", STORY},
	        };
            StoryboardElementType::StoryboardElementType()
            {
                _literal = kStoryboardElementTypeEnumString[0];
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            StoryboardElementType::StoryboardElementType(StoryboardElementTypeEnum& storyboardElementType)
            {
                _literal = kStoryboardElementTypeEnumString[storyboardElementType+1];
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            StoryboardElementType::StoryboardElementType(const StoryboardElementTypeEnum storyboardElementType)
            {
                _literal = kStoryboardElementTypeEnumString[storyboardElementType+1];
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            StoryboardElementType::StoryboardElementType(std::string& literal_):_literal(literal_) 
            {
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            
            std::string StoryboardElementType::GetLiteral() const 
            { 
            	return _literal;
            }

            StoryboardElementType& StoryboardElementType::operator= (const StoryboardElementTypeEnum &rhs)
            {
                _storyboardElementTypeEnum = rhs;
                _literal = kStoryboardElementTypeEnumString[_storyboardElementTypeEnum+1];
                return *this;
            }

            StoryboardElementType& StoryboardElementType::operator= (const StoryboardElementType &rhs ) 
            { 
                _literal = rhs._literal;
                _storyboardElementTypeEnum = rhs._storyboardElementTypeEnum;
                return *this;
            }

            bool StoryboardElementType::operator== (const StoryboardElementTypeEnum &rhs) const
            {
                return _storyboardElementTypeEnum == rhs;
            }

            StoryboardElementType::StoryboardElementTypeEnum StoryboardElementType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, TriggeringEntitiesRule::TriggeringEntitiesRuleEnum> TriggeringEntitiesRule::_stringToEnum = 
	        {
	            {"all", ALL},
	            {"any", ANY},
	        };
            TriggeringEntitiesRule::TriggeringEntitiesRule()
            {
                _literal = kTriggeringEntitiesRuleEnumString[0];
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            TriggeringEntitiesRule::TriggeringEntitiesRule(TriggeringEntitiesRuleEnum& triggeringEntitiesRule)
            {
                _literal = kTriggeringEntitiesRuleEnumString[triggeringEntitiesRule+1];
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            TriggeringEntitiesRule::TriggeringEntitiesRule(const TriggeringEntitiesRuleEnum triggeringEntitiesRule)
            {
                _literal = kTriggeringEntitiesRuleEnumString[triggeringEntitiesRule+1];
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            TriggeringEntitiesRule::TriggeringEntitiesRule(std::string& literal_):_literal(literal_) 
            {
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            
            std::string TriggeringEntitiesRule::GetLiteral() const 
            { 
            	return _literal;
            }

            TriggeringEntitiesRule& TriggeringEntitiesRule::operator= (const TriggeringEntitiesRuleEnum &rhs)
            {
                _triggeringEntitiesRuleEnum = rhs;
                _literal = kTriggeringEntitiesRuleEnumString[_triggeringEntitiesRuleEnum+1];
                return *this;
            }

            TriggeringEntitiesRule& TriggeringEntitiesRule::operator= (const TriggeringEntitiesRule &rhs ) 
            { 
                _literal = rhs._literal;
                _triggeringEntitiesRuleEnum = rhs._triggeringEntitiesRuleEnum;
                return *this;
            }

            bool TriggeringEntitiesRule::operator== (const TriggeringEntitiesRuleEnum &rhs) const
            {
                return _triggeringEntitiesRuleEnum == rhs;
            }

            TriggeringEntitiesRule::TriggeringEntitiesRuleEnum TriggeringEntitiesRule::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

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
            VehicleCategory::VehicleCategory()
            {
                _literal = kVehicleCategoryEnumString[0];
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            VehicleCategory::VehicleCategory(VehicleCategoryEnum& vehicleCategory)
            {
                _literal = kVehicleCategoryEnumString[vehicleCategory+1];
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            VehicleCategory::VehicleCategory(const VehicleCategoryEnum vehicleCategory)
            {
                _literal = kVehicleCategoryEnumString[vehicleCategory+1];
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            VehicleCategory::VehicleCategory(std::string& literal_):_literal(literal_) 
            {
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            
            std::string VehicleCategory::GetLiteral() const 
            { 
            	return _literal;
            }

            VehicleCategory& VehicleCategory::operator= (const VehicleCategoryEnum &rhs)
            {
                _vehicleCategoryEnum = rhs;
                _literal = kVehicleCategoryEnumString[_vehicleCategoryEnum+1];
                return *this;
            }

            VehicleCategory& VehicleCategory::operator= (const VehicleCategory &rhs ) 
            { 
                _literal = rhs._literal;
                _vehicleCategoryEnum = rhs._vehicleCategoryEnum;
                return *this;
            }

            bool VehicleCategory::operator== (const VehicleCategoryEnum &rhs) const
            {
                return _vehicleCategoryEnum == rhs;
            }

            VehicleCategory::VehicleCategoryEnum VehicleCategory::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

    }
}
