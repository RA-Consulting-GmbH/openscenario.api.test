
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
 
#include "EnumerationsV1_2.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
	    	std::map<std::string, AutomaticGearType::AutomaticGearTypeEnum> AutomaticGearType::_stringToEnum = 
	        {
	            {"d", D},
	            {"n", N},
	            {"p", P},
	            {"r", R},
	        };
	        
	        
            AutomaticGearType::AutomaticGearType()
            {
                _literal = kAutomaticGearTypeEnumString[0];
                _automaticGearTypeEnum = GetFromLiteral(_literal);
            }

            AutomaticGearType::AutomaticGearType(AutomaticGearTypeEnum& automaticGearType)
            {
                _literal = kAutomaticGearTypeEnumString[automaticGearType+1];
                _automaticGearTypeEnum = GetFromLiteral(_literal);
            }

            AutomaticGearType::AutomaticGearType(const AutomaticGearTypeEnum automaticGearType)
            {
                _literal = kAutomaticGearTypeEnumString[automaticGearType+1];
                _automaticGearTypeEnum = GetFromLiteral(_literal);
            }

            AutomaticGearType::AutomaticGearType(std::string& literal_):_literal(literal_) 
            {
                _automaticGearTypeEnum = GetFromLiteral(_literal);
            }

            bool AutomaticGearType::IsDeprecated(const AutomaticGearTypeEnum automaticGearType)
            { 
            	return false;
            }
			
			std::string AutomaticGearType::GetDeprecatedVersion(const AutomaticGearTypeEnum automaticGearType)
			{
            	return "";
			}

			std::string AutomaticGearType::GetDeprecatedComment(const AutomaticGearTypeEnum automaticGearType)
			{
            	return "";
		}
            
            std::string AutomaticGearType::GetLiteral() const 
            { 
            	return _literal;
            }

            AutomaticGearType& AutomaticGearType::operator= (const AutomaticGearTypeEnum &rhs)
            {
                _automaticGearTypeEnum = rhs;
                _literal = kAutomaticGearTypeEnumString[_automaticGearTypeEnum+1];
                return *this;
            }

            AutomaticGearType& AutomaticGearType::operator= (const AutomaticGearType &rhs ) 
            { 
                _literal = rhs._literal;
                _automaticGearTypeEnum = rhs._automaticGearTypeEnum;
                return *this;
            }

            bool AutomaticGearType::operator== (const AutomaticGearTypeEnum &rhs) const
            {
                return _automaticGearTypeEnum == rhs;
            }

            AutomaticGearType::AutomaticGearTypeEnum AutomaticGearType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

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

            bool CloudState::IsDeprecated(const CloudStateEnum cloudState)
            { 
            	return false;
            }
			
			std::string CloudState::GetDeprecatedVersion(const CloudStateEnum cloudState)
			{
            	return "";
			}

			std::string CloudState::GetDeprecatedComment(const CloudStateEnum cloudState)
			{
            	return "";
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

	    	std::map<std::string, ColorType::ColorTypeEnum> ColorType::_stringToEnum = 
	        {
	            {"black", BLACK},
	            {"blue", BLUE},
	            {"brown", BROWN},
	            {"green", GREEN},
	            {"grey", GREY},
	            {"orange", ORANGE},
	            {"other", OTHER},
	            {"red", RED},
	            {"violet", VIOLET},
	            {"white", WHITE},
	            {"yellow", YELLOW},
	        };
	        
	        
            ColorType::ColorType()
            {
                _literal = kColorTypeEnumString[0];
                _colorTypeEnum = GetFromLiteral(_literal);
            }

            ColorType::ColorType(ColorTypeEnum& colorType)
            {
                _literal = kColorTypeEnumString[colorType+1];
                _colorTypeEnum = GetFromLiteral(_literal);
            }

            ColorType::ColorType(const ColorTypeEnum colorType)
            {
                _literal = kColorTypeEnumString[colorType+1];
                _colorTypeEnum = GetFromLiteral(_literal);
            }

            ColorType::ColorType(std::string& literal_):_literal(literal_) 
            {
                _colorTypeEnum = GetFromLiteral(_literal);
            }

            bool ColorType::IsDeprecated(const ColorTypeEnum colorType)
            { 
            	return false;
            }
			
			std::string ColorType::GetDeprecatedVersion(const ColorTypeEnum colorType)
			{
            	return "";
			}

			std::string ColorType::GetDeprecatedComment(const ColorTypeEnum colorType)
			{
            	return "";
		}
            
            std::string ColorType::GetLiteral() const 
            { 
            	return _literal;
            }

            ColorType& ColorType::operator= (const ColorTypeEnum &rhs)
            {
                _colorTypeEnum = rhs;
                _literal = kColorTypeEnumString[_colorTypeEnum+1];
                return *this;
            }

            ColorType& ColorType::operator= (const ColorType &rhs ) 
            { 
                _literal = rhs._literal;
                _colorTypeEnum = rhs._colorTypeEnum;
                return *this;
            }

            bool ColorType::operator== (const ColorTypeEnum &rhs) const
            {
                return _colorTypeEnum == rhs;
            }

            ColorType::ColorTypeEnum ColorType::GetFromLiteral(const std::string literal_)
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

            bool ConditionEdge::IsDeprecated(const ConditionEdgeEnum conditionEdge)
            { 
            	return false;
            }
			
			std::string ConditionEdge::GetDeprecatedVersion(const ConditionEdgeEnum conditionEdge)
			{
            	return "";
			}

			std::string ConditionEdge::GetDeprecatedComment(const ConditionEdgeEnum conditionEdge)
			{
            	return "";
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

	    	std::map<std::string, ControllerType::ControllerTypeEnum> ControllerType::_stringToEnum = 
	        {
	            {"all", ALL},
	            {"animation", ANIMATION},
	            {"appearance", APPEARANCE},
	            {"lateral", LATERAL},
	            {"lighting", LIGHTING},
	            {"longitudinal", LONGITUDINAL},
	            {"movement", MOVEMENT},
	        };
	        
	        
            ControllerType::ControllerType()
            {
                _literal = kControllerTypeEnumString[0];
                _controllerTypeEnum = GetFromLiteral(_literal);
            }

            ControllerType::ControllerType(ControllerTypeEnum& controllerType)
            {
                _literal = kControllerTypeEnumString[controllerType+1];
                _controllerTypeEnum = GetFromLiteral(_literal);
            }

            ControllerType::ControllerType(const ControllerTypeEnum controllerType)
            {
                _literal = kControllerTypeEnumString[controllerType+1];
                _controllerTypeEnum = GetFromLiteral(_literal);
            }

            ControllerType::ControllerType(std::string& literal_):_literal(literal_) 
            {
                _controllerTypeEnum = GetFromLiteral(_literal);
            }

            bool ControllerType::IsDeprecated(const ControllerTypeEnum controllerType)
            { 
            	return false;
            }
			
			std::string ControllerType::GetDeprecatedVersion(const ControllerTypeEnum controllerType)
			{
            	return "";
			}

			std::string ControllerType::GetDeprecatedComment(const ControllerTypeEnum controllerType)
			{
            	return "";
		}
            
            std::string ControllerType::GetLiteral() const 
            { 
            	return _literal;
            }

            ControllerType& ControllerType::operator= (const ControllerTypeEnum &rhs)
            {
                _controllerTypeEnum = rhs;
                _literal = kControllerTypeEnumString[_controllerTypeEnum+1];
                return *this;
            }

            ControllerType& ControllerType::operator= (const ControllerType &rhs ) 
            { 
                _literal = rhs._literal;
                _controllerTypeEnum = rhs._controllerTypeEnum;
                return *this;
            }

            bool ControllerType::operator== (const ControllerTypeEnum &rhs) const
            {
                return _controllerTypeEnum == rhs;
            }

            ControllerType::ControllerTypeEnum ControllerType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, CoordinateSystem::CoordinateSystemEnum> CoordinateSystem::_stringToEnum = 
	        {
	            {"entity", ENTITY},
	            {"lane", LANE},
	            {"road", ROAD},
	            {"trajectory", TRAJECTORY},
	        };
	        
	        
            CoordinateSystem::CoordinateSystem()
            {
                _literal = kCoordinateSystemEnumString[0];
                _coordinateSystemEnum = GetFromLiteral(_literal);
            }

            CoordinateSystem::CoordinateSystem(CoordinateSystemEnum& coordinateSystem)
            {
                _literal = kCoordinateSystemEnumString[coordinateSystem+1];
                _coordinateSystemEnum = GetFromLiteral(_literal);
            }

            CoordinateSystem::CoordinateSystem(const CoordinateSystemEnum coordinateSystem)
            {
                _literal = kCoordinateSystemEnumString[coordinateSystem+1];
                _coordinateSystemEnum = GetFromLiteral(_literal);
            }

            CoordinateSystem::CoordinateSystem(std::string& literal_):_literal(literal_) 
            {
                _coordinateSystemEnum = GetFromLiteral(_literal);
            }

            bool CoordinateSystem::IsDeprecated(const CoordinateSystemEnum coordinateSystem)
            { 
            	return false;
            }
			
			std::string CoordinateSystem::GetDeprecatedVersion(const CoordinateSystemEnum coordinateSystem)
			{
            	return "";
			}

			std::string CoordinateSystem::GetDeprecatedComment(const CoordinateSystemEnum coordinateSystem)
			{
            	return "";
		}
            
            std::string CoordinateSystem::GetLiteral() const 
            { 
            	return _literal;
            }

            CoordinateSystem& CoordinateSystem::operator= (const CoordinateSystemEnum &rhs)
            {
                _coordinateSystemEnum = rhs;
                _literal = kCoordinateSystemEnumString[_coordinateSystemEnum+1];
                return *this;
            }

            CoordinateSystem& CoordinateSystem::operator= (const CoordinateSystem &rhs ) 
            { 
                _literal = rhs._literal;
                _coordinateSystemEnum = rhs._coordinateSystemEnum;
                return *this;
            }

            bool CoordinateSystem::operator== (const CoordinateSystemEnum &rhs) const
            {
                return _coordinateSystemEnum == rhs;
            }

            CoordinateSystem::CoordinateSystemEnum CoordinateSystem::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, DirectionalDimension::DirectionalDimensionEnum> DirectionalDimension::_stringToEnum = 
	        {
	            {"lateral", LATERAL},
	            {"longitudinal", LONGITUDINAL},
	            {"vertical", VERTICAL},
	        };
	        
	        
            DirectionalDimension::DirectionalDimension()
            {
                _literal = kDirectionalDimensionEnumString[0];
                _directionalDimensionEnum = GetFromLiteral(_literal);
            }

            DirectionalDimension::DirectionalDimension(DirectionalDimensionEnum& directionalDimension)
            {
                _literal = kDirectionalDimensionEnumString[directionalDimension+1];
                _directionalDimensionEnum = GetFromLiteral(_literal);
            }

            DirectionalDimension::DirectionalDimension(const DirectionalDimensionEnum directionalDimension)
            {
                _literal = kDirectionalDimensionEnumString[directionalDimension+1];
                _directionalDimensionEnum = GetFromLiteral(_literal);
            }

            DirectionalDimension::DirectionalDimension(std::string& literal_):_literal(literal_) 
            {
                _directionalDimensionEnum = GetFromLiteral(_literal);
            }

            bool DirectionalDimension::IsDeprecated(const DirectionalDimensionEnum directionalDimension)
            { 
            	return false;
            }
			
			std::string DirectionalDimension::GetDeprecatedVersion(const DirectionalDimensionEnum directionalDimension)
			{
            	return "";
			}

			std::string DirectionalDimension::GetDeprecatedComment(const DirectionalDimensionEnum directionalDimension)
			{
            	return "";
		}
            
            std::string DirectionalDimension::GetLiteral() const 
            { 
            	return _literal;
            }

            DirectionalDimension& DirectionalDimension::operator= (const DirectionalDimensionEnum &rhs)
            {
                _directionalDimensionEnum = rhs;
                _literal = kDirectionalDimensionEnumString[_directionalDimensionEnum+1];
                return *this;
            }

            DirectionalDimension& DirectionalDimension::operator= (const DirectionalDimension &rhs ) 
            { 
                _literal = rhs._literal;
                _directionalDimensionEnum = rhs._directionalDimensionEnum;
                return *this;
            }

            bool DirectionalDimension::operator== (const DirectionalDimensionEnum &rhs) const
            {
                return _directionalDimensionEnum == rhs;
            }

            DirectionalDimension::DirectionalDimensionEnum DirectionalDimension::GetFromLiteral(const std::string literal_)
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

            bool DynamicsDimension::IsDeprecated(const DynamicsDimensionEnum dynamicsDimension)
            { 
            	return false;
            }
			
			std::string DynamicsDimension::GetDeprecatedVersion(const DynamicsDimensionEnum dynamicsDimension)
			{
            	return "";
			}

			std::string DynamicsDimension::GetDeprecatedComment(const DynamicsDimensionEnum dynamicsDimension)
			{
            	return "";
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

            bool DynamicsShape::IsDeprecated(const DynamicsShapeEnum dynamicsShape)
            { 
            	return false;
            }
			
			std::string DynamicsShape::GetDeprecatedVersion(const DynamicsShapeEnum dynamicsShape)
			{
            	return "";
			}

			std::string DynamicsShape::GetDeprecatedComment(const DynamicsShapeEnum dynamicsShape)
			{
            	return "";
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

            bool FollowingMode::IsDeprecated(const FollowingModeEnum followingMode)
            { 
            	return false;
            }
			
			std::string FollowingMode::GetDeprecatedVersion(const FollowingModeEnum followingMode)
			{
            	return "";
			}

			std::string FollowingMode::GetDeprecatedComment(const FollowingModeEnum followingMode)
			{
            	return "";
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

	    	std::map<std::string, FractionalCloudCover::FractionalCloudCoverEnum> FractionalCloudCover::_stringToEnum = 
	        {
	            {"eightOktas", EIGHT_OKTAS},
	            {"fiveOktas", FIVE_OKTAS},
	            {"fourOktas", FOUR_OKTAS},
	            {"nineOktas", NINE_OKTAS},
	            {"oneOktas", ONE_OKTAS},
	            {"sevenOktas", SEVEN_OKTAS},
	            {"sixOktas", SIX_OKTAS},
	            {"threeOktas", THREE_OKTAS},
	            {"twoOktas", TWO_OKTAS},
	            {"zeroOktas", ZERO_OKTAS},
	        };
	        
	        
            FractionalCloudCover::FractionalCloudCover()
            {
                _literal = kFractionalCloudCoverEnumString[0];
                _fractionalCloudCoverEnum = GetFromLiteral(_literal);
            }

            FractionalCloudCover::FractionalCloudCover(FractionalCloudCoverEnum& fractionalCloudCover)
            {
                _literal = kFractionalCloudCoverEnumString[fractionalCloudCover+1];
                _fractionalCloudCoverEnum = GetFromLiteral(_literal);
            }

            FractionalCloudCover::FractionalCloudCover(const FractionalCloudCoverEnum fractionalCloudCover)
            {
                _literal = kFractionalCloudCoverEnumString[fractionalCloudCover+1];
                _fractionalCloudCoverEnum = GetFromLiteral(_literal);
            }

            FractionalCloudCover::FractionalCloudCover(std::string& literal_):_literal(literal_) 
            {
                _fractionalCloudCoverEnum = GetFromLiteral(_literal);
            }

            bool FractionalCloudCover::IsDeprecated(const FractionalCloudCoverEnum fractionalCloudCover)
            { 
            	return false;
            }
			
			std::string FractionalCloudCover::GetDeprecatedVersion(const FractionalCloudCoverEnum fractionalCloudCover)
			{
            	return "";
			}

			std::string FractionalCloudCover::GetDeprecatedComment(const FractionalCloudCoverEnum fractionalCloudCover)
			{
            	return "";
		}
            
            std::string FractionalCloudCover::GetLiteral() const 
            { 
            	return _literal;
            }

            FractionalCloudCover& FractionalCloudCover::operator= (const FractionalCloudCoverEnum &rhs)
            {
                _fractionalCloudCoverEnum = rhs;
                _literal = kFractionalCloudCoverEnumString[_fractionalCloudCoverEnum+1];
                return *this;
            }

            FractionalCloudCover& FractionalCloudCover::operator= (const FractionalCloudCover &rhs ) 
            { 
                _literal = rhs._literal;
                _fractionalCloudCoverEnum = rhs._fractionalCloudCoverEnum;
                return *this;
            }

            bool FractionalCloudCover::operator== (const FractionalCloudCoverEnum &rhs) const
            {
                return _fractionalCloudCoverEnum == rhs;
            }

            FractionalCloudCover::FractionalCloudCoverEnum FractionalCloudCover::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, LateralDisplacement::LateralDisplacementEnum> LateralDisplacement::_stringToEnum = 
	        {
	            {"any", ANY},
	            {"leftToReferencedEntity", LEFT_TO_REFERENCED_ENTITY},
	            {"rightToReferencedEntity", RIGHT_TO_REFERENCED_ENTITY},
	        };
	        
	        
            LateralDisplacement::LateralDisplacement()
            {
                _literal = kLateralDisplacementEnumString[0];
                _lateralDisplacementEnum = GetFromLiteral(_literal);
            }

            LateralDisplacement::LateralDisplacement(LateralDisplacementEnum& lateralDisplacement)
            {
                _literal = kLateralDisplacementEnumString[lateralDisplacement+1];
                _lateralDisplacementEnum = GetFromLiteral(_literal);
            }

            LateralDisplacement::LateralDisplacement(const LateralDisplacementEnum lateralDisplacement)
            {
                _literal = kLateralDisplacementEnumString[lateralDisplacement+1];
                _lateralDisplacementEnum = GetFromLiteral(_literal);
            }

            LateralDisplacement::LateralDisplacement(std::string& literal_):_literal(literal_) 
            {
                _lateralDisplacementEnum = GetFromLiteral(_literal);
            }

            bool LateralDisplacement::IsDeprecated(const LateralDisplacementEnum lateralDisplacement)
            { 
            	return false;
            }
			
			std::string LateralDisplacement::GetDeprecatedVersion(const LateralDisplacementEnum lateralDisplacement)
			{
            	return "";
			}

			std::string LateralDisplacement::GetDeprecatedComment(const LateralDisplacementEnum lateralDisplacement)
			{
            	return "";
		}
            
            std::string LateralDisplacement::GetLiteral() const 
            { 
            	return _literal;
            }

            LateralDisplacement& LateralDisplacement::operator= (const LateralDisplacementEnum &rhs)
            {
                _lateralDisplacementEnum = rhs;
                _literal = kLateralDisplacementEnumString[_lateralDisplacementEnum+1];
                return *this;
            }

            LateralDisplacement& LateralDisplacement::operator= (const LateralDisplacement &rhs ) 
            { 
                _literal = rhs._literal;
                _lateralDisplacementEnum = rhs._lateralDisplacementEnum;
                return *this;
            }

            bool LateralDisplacement::operator== (const LateralDisplacementEnum &rhs) const
            {
                return _lateralDisplacementEnum == rhs;
            }

            LateralDisplacement::LateralDisplacementEnum LateralDisplacement::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, LightMode::LightModeEnum> LightMode::_stringToEnum = 
	        {
	            {"flashing", FLASHING},
	            {"off", OFF},
	            {"on", ON},
	        };
	        
	        
            LightMode::LightMode()
            {
                _literal = kLightModeEnumString[0];
                _lightModeEnum = GetFromLiteral(_literal);
            }

            LightMode::LightMode(LightModeEnum& lightMode)
            {
                _literal = kLightModeEnumString[lightMode+1];
                _lightModeEnum = GetFromLiteral(_literal);
            }

            LightMode::LightMode(const LightModeEnum lightMode)
            {
                _literal = kLightModeEnumString[lightMode+1];
                _lightModeEnum = GetFromLiteral(_literal);
            }

            LightMode::LightMode(std::string& literal_):_literal(literal_) 
            {
                _lightModeEnum = GetFromLiteral(_literal);
            }

            bool LightMode::IsDeprecated(const LightModeEnum lightMode)
            { 
            	return false;
            }
			
			std::string LightMode::GetDeprecatedVersion(const LightModeEnum lightMode)
			{
            	return "";
			}

			std::string LightMode::GetDeprecatedComment(const LightModeEnum lightMode)
			{
            	return "";
		}
            
            std::string LightMode::GetLiteral() const 
            { 
            	return _literal;
            }

            LightMode& LightMode::operator= (const LightModeEnum &rhs)
            {
                _lightModeEnum = rhs;
                _literal = kLightModeEnumString[_lightModeEnum+1];
                return *this;
            }

            LightMode& LightMode::operator= (const LightMode &rhs ) 
            { 
                _literal = rhs._literal;
                _lightModeEnum = rhs._lightModeEnum;
                return *this;
            }

            bool LightMode::operator== (const LightModeEnum &rhs) const
            {
                return _lightModeEnum == rhs;
            }

            LightMode::LightModeEnum LightMode::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, LongitudinalDisplacement::LongitudinalDisplacementEnum> LongitudinalDisplacement::_stringToEnum = 
	        {
	            {"any", ANY},
	            {"leadingReferencedEntity", LEADING_REFERENCED_ENTITY},
	            {"trailingReferencedEntity", TRAILING_REFERENCED_ENTITY},
	        };
	        
	        
            LongitudinalDisplacement::LongitudinalDisplacement()
            {
                _literal = kLongitudinalDisplacementEnumString[0];
                _longitudinalDisplacementEnum = GetFromLiteral(_literal);
            }

            LongitudinalDisplacement::LongitudinalDisplacement(LongitudinalDisplacementEnum& longitudinalDisplacement)
            {
                _literal = kLongitudinalDisplacementEnumString[longitudinalDisplacement+1];
                _longitudinalDisplacementEnum = GetFromLiteral(_literal);
            }

            LongitudinalDisplacement::LongitudinalDisplacement(const LongitudinalDisplacementEnum longitudinalDisplacement)
            {
                _literal = kLongitudinalDisplacementEnumString[longitudinalDisplacement+1];
                _longitudinalDisplacementEnum = GetFromLiteral(_literal);
            }

            LongitudinalDisplacement::LongitudinalDisplacement(std::string& literal_):_literal(literal_) 
            {
                _longitudinalDisplacementEnum = GetFromLiteral(_literal);
            }

            bool LongitudinalDisplacement::IsDeprecated(const LongitudinalDisplacementEnum longitudinalDisplacement)
            { 
            	return false;
            }
			
			std::string LongitudinalDisplacement::GetDeprecatedVersion(const LongitudinalDisplacementEnum longitudinalDisplacement)
			{
            	return "";
			}

			std::string LongitudinalDisplacement::GetDeprecatedComment(const LongitudinalDisplacementEnum longitudinalDisplacement)
			{
            	return "";
		}
            
            std::string LongitudinalDisplacement::GetLiteral() const 
            { 
            	return _literal;
            }

            LongitudinalDisplacement& LongitudinalDisplacement::operator= (const LongitudinalDisplacementEnum &rhs)
            {
                _longitudinalDisplacementEnum = rhs;
                _literal = kLongitudinalDisplacementEnumString[_longitudinalDisplacementEnum+1];
                return *this;
            }

            LongitudinalDisplacement& LongitudinalDisplacement::operator= (const LongitudinalDisplacement &rhs ) 
            { 
                _literal = rhs._literal;
                _longitudinalDisplacementEnum = rhs._longitudinalDisplacementEnum;
                return *this;
            }

            bool LongitudinalDisplacement::operator== (const LongitudinalDisplacementEnum &rhs) const
            {
                return _longitudinalDisplacementEnum == rhs;
            }

            LongitudinalDisplacement::LongitudinalDisplacementEnum LongitudinalDisplacement::GetFromLiteral(const std::string literal_)
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
	        
            std::map<MiscObjectCategory::MiscObjectCategoryEnum, bool> MiscObjectCategory::_enumToDeprecated =
            {
	            {MiscObjectCategory::BARRIER, false},
	            {MiscObjectCategory::BUILDING, false},
	            {MiscObjectCategory::CROSSWALK, false},
	            {MiscObjectCategory::GANTRY, false},
	            {MiscObjectCategory::NONE, false},
	            {MiscObjectCategory::OBSTACLE, false},
	            {MiscObjectCategory::PARKING_SPACE, false},
	            {MiscObjectCategory::PATCH, false},
	            {MiscObjectCategory::POLE, false},
	            {MiscObjectCategory::RAILING, false},
	            {MiscObjectCategory::ROAD_MARK, false},
	            {MiscObjectCategory::SOUND_BARRIER, false},
	            {MiscObjectCategory::STREET_LAMP, false},
	            {MiscObjectCategory::TRAFFIC_ISLAND, false},
	            {MiscObjectCategory::TREE, false},
	            {MiscObjectCategory::VEGETATION, false},
	            {MiscObjectCategory::WIND, true},
            };
            std::map<MiscObjectCategory::MiscObjectCategoryEnum, std::string> MiscObjectCategory::_enumToDeprecatedVersion
            {
	            {MiscObjectCategory::BARRIER, ""},
	            {MiscObjectCategory::BUILDING, ""},
	            {MiscObjectCategory::CROSSWALK, ""},
	            {MiscObjectCategory::GANTRY, ""},
	            {MiscObjectCategory::NONE, ""},
	            {MiscObjectCategory::OBSTACLE, ""},
	            {MiscObjectCategory::PARKING_SPACE, ""},
	            {MiscObjectCategory::PATCH, ""},
	            {MiscObjectCategory::POLE, ""},
	            {MiscObjectCategory::RAILING, ""},
	            {MiscObjectCategory::ROAD_MARK, ""},
	            {MiscObjectCategory::SOUND_BARRIER, ""},
	            {MiscObjectCategory::STREET_LAMP, ""},
	            {MiscObjectCategory::TRAFFIC_ISLAND, ""},
	            {MiscObjectCategory::TREE, ""},
	            {MiscObjectCategory::VEGETATION, ""},
	            {MiscObjectCategory::WIND, "1.1"},
            };
            std::map<MiscObjectCategory::MiscObjectCategoryEnum, std::string> MiscObjectCategory::_enumToDeprecatedComment
            {
	            {MiscObjectCategory::BARRIER, ""},
	            {MiscObjectCategory::BUILDING, ""},
	            {MiscObjectCategory::CROSSWALK, ""},
	            {MiscObjectCategory::GANTRY, ""},
	            {MiscObjectCategory::NONE, ""},
	            {MiscObjectCategory::OBSTACLE, ""},
	            {MiscObjectCategory::PARKING_SPACE, ""},
	            {MiscObjectCategory::PATCH, ""},
	            {MiscObjectCategory::POLE, ""},
	            {MiscObjectCategory::RAILING, ""},
	            {MiscObjectCategory::ROAD_MARK, ""},
	            {MiscObjectCategory::SOUND_BARRIER, ""},
	            {MiscObjectCategory::STREET_LAMP, ""},
	            {MiscObjectCategory::TRAFFIC_ISLAND, ""},
	            {MiscObjectCategory::TREE, ""},
	            {MiscObjectCategory::VEGETATION, ""},
	            {MiscObjectCategory::WIND, "Use instead XSDcomplexeType \"Wind\" in \"Weather\"."},
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

            bool MiscObjectCategory::IsDeprecated(const MiscObjectCategoryEnum miscObjectCategory)
            { 
              	return _enumToDeprecated[miscObjectCategory];
            }
			
			std::string MiscObjectCategory::GetDeprecatedVersion(const MiscObjectCategoryEnum miscObjectCategory)
			{
              	return _enumToDeprecatedVersion[miscObjectCategory];
			}

			std::string MiscObjectCategory::GetDeprecatedComment(const MiscObjectCategoryEnum miscObjectCategory)
			{
              	return _enumToDeprecatedComment[miscObjectCategory];
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
	            {"external", EXTERNAL},
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

            bool ObjectType::IsDeprecated(const ObjectTypeEnum objectType)
            { 
            	return false;
            }
			
			std::string ObjectType::GetDeprecatedVersion(const ObjectTypeEnum objectType)
			{
            	return "";
			}

			std::string ObjectType::GetDeprecatedComment(const ObjectTypeEnum objectType)
			{
            	return "";
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
	            {"int", INT},
	            {"integer", INTEGER},
	            {"string", STRING},
	            {"unsignedInt", UNSIGNED_INT},
	            {"unsignedShort", UNSIGNED_SHORT},
	        };
	        
            std::map<ParameterType::ParameterTypeEnum, bool> ParameterType::_enumToDeprecated =
            {
	            {ParameterType::BOOLEAN, false},
	            {ParameterType::DATE_TIME, false},
	            {ParameterType::DOUBLE, false},
	            {ParameterType::INT, false},
	            {ParameterType::INTEGER, true},
	            {ParameterType::STRING, false},
	            {ParameterType::UNSIGNED_INT, false},
	            {ParameterType::UNSIGNED_SHORT, false},
            };
            std::map<ParameterType::ParameterTypeEnum, std::string> ParameterType::_enumToDeprecatedVersion
            {
	            {ParameterType::BOOLEAN, ""},
	            {ParameterType::DATE_TIME, ""},
	            {ParameterType::DOUBLE, ""},
	            {ParameterType::INT, ""},
	            {ParameterType::INTEGER, "1.2"},
	            {ParameterType::STRING, ""},
	            {ParameterType::UNSIGNED_INT, ""},
	            {ParameterType::UNSIGNED_SHORT, ""},
            };
            std::map<ParameterType::ParameterTypeEnum, std::string> ParameterType::_enumToDeprecatedComment
            {
	            {ParameterType::BOOLEAN, ""},
	            {ParameterType::DATE_TIME, ""},
	            {ParameterType::DOUBLE, ""},
	            {ParameterType::INT, ""},
	            {ParameterType::INTEGER, "Deprecated for consistency with xsd type. Use int instead."},
	            {ParameterType::STRING, ""},
	            {ParameterType::UNSIGNED_INT, ""},
	            {ParameterType::UNSIGNED_SHORT, ""},
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

            bool ParameterType::IsDeprecated(const ParameterTypeEnum parameterType)
            { 
              	return _enumToDeprecated[parameterType];
            }
			
			std::string ParameterType::GetDeprecatedVersion(const ParameterTypeEnum parameterType)
			{
              	return _enumToDeprecatedVersion[parameterType];
			}

			std::string ParameterType::GetDeprecatedComment(const ParameterTypeEnum parameterType)
			{
              	return _enumToDeprecatedComment[parameterType];
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

            bool PedestrianCategory::IsDeprecated(const PedestrianCategoryEnum pedestrianCategory)
            { 
            	return false;
            }
			
			std::string PedestrianCategory::GetDeprecatedVersion(const PedestrianCategoryEnum pedestrianCategory)
			{
            	return "";
			}

			std::string PedestrianCategory::GetDeprecatedComment(const PedestrianCategoryEnum pedestrianCategory)
			{
            	return "";
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

	    	std::map<std::string, PedestrianGestureType::PedestrianGestureTypeEnum> PedestrianGestureType::_stringToEnum = 
	        {
	            {"coffeeLeftHand", COFFEE_LEFT_HAND},
	            {"coffeeRightHand", COFFEE_RIGHT_HAND},
	            {"crossArms", CROSS_ARMS},
	            {"phoneCallLeftHand", PHONE_CALL_LEFT_HAND},
	            {"phoneCallRightHand", PHONE_CALL_RIGHT_HAND},
	            {"phoneTextLeftHand", PHONE_TEXT_LEFT_HAND},
	            {"phoneTextRightHand", PHONE_TEXT_RIGHT_HAND},
	            {"sandwichLeftHand", SANDWICH_LEFT_HAND},
	            {"sandwichRightHand", SANDWICH_RIGHT_HAND},
	            {"umbrellaLeftHand", UMBRELLA_LEFT_HAND},
	            {"umbrellaRightHand", UMBRELLA_RIGHT_HAND},
	            {"wavingLeftArm", WAVING_LEFT_ARM},
	            {"wavingRightArm", WAVING_RIGHT_ARM},
	        };
	        
	        
            PedestrianGestureType::PedestrianGestureType()
            {
                _literal = kPedestrianGestureTypeEnumString[0];
                _pedestrianGestureTypeEnum = GetFromLiteral(_literal);
            }

            PedestrianGestureType::PedestrianGestureType(PedestrianGestureTypeEnum& pedestrianGestureType)
            {
                _literal = kPedestrianGestureTypeEnumString[pedestrianGestureType+1];
                _pedestrianGestureTypeEnum = GetFromLiteral(_literal);
            }

            PedestrianGestureType::PedestrianGestureType(const PedestrianGestureTypeEnum pedestrianGestureType)
            {
                _literal = kPedestrianGestureTypeEnumString[pedestrianGestureType+1];
                _pedestrianGestureTypeEnum = GetFromLiteral(_literal);
            }

            PedestrianGestureType::PedestrianGestureType(std::string& literal_):_literal(literal_) 
            {
                _pedestrianGestureTypeEnum = GetFromLiteral(_literal);
            }

            bool PedestrianGestureType::IsDeprecated(const PedestrianGestureTypeEnum pedestrianGestureType)
            { 
            	return false;
            }
			
			std::string PedestrianGestureType::GetDeprecatedVersion(const PedestrianGestureTypeEnum pedestrianGestureType)
			{
            	return "";
			}

			std::string PedestrianGestureType::GetDeprecatedComment(const PedestrianGestureTypeEnum pedestrianGestureType)
			{
            	return "";
		}
            
            std::string PedestrianGestureType::GetLiteral() const 
            { 
            	return _literal;
            }

            PedestrianGestureType& PedestrianGestureType::operator= (const PedestrianGestureTypeEnum &rhs)
            {
                _pedestrianGestureTypeEnum = rhs;
                _literal = kPedestrianGestureTypeEnumString[_pedestrianGestureTypeEnum+1];
                return *this;
            }

            PedestrianGestureType& PedestrianGestureType::operator= (const PedestrianGestureType &rhs ) 
            { 
                _literal = rhs._literal;
                _pedestrianGestureTypeEnum = rhs._pedestrianGestureTypeEnum;
                return *this;
            }

            bool PedestrianGestureType::operator== (const PedestrianGestureTypeEnum &rhs) const
            {
                return _pedestrianGestureTypeEnum == rhs;
            }

            PedestrianGestureType::PedestrianGestureTypeEnum PedestrianGestureType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, PedestrianMotionType::PedestrianMotionTypeEnum> PedestrianMotionType::_stringToEnum = 
	        {
	            {"bendingDown", BENDING_DOWN},
	            {"crawling", CRAWLING},
	            {"cycling", CYCLING},
	            {"ducking", DUCKING},
	            {"jumping", JUMPING},
	            {"lying", LYING},
	            {"reeling", REELING},
	            {"running", RUNNING},
	            {"sitting", SITTING},
	            {"squatting", SQUATTING},
	            {"standing", STANDING},
	            {"walking", WALKING},
	        };
	        
	        
            PedestrianMotionType::PedestrianMotionType()
            {
                _literal = kPedestrianMotionTypeEnumString[0];
                _pedestrianMotionTypeEnum = GetFromLiteral(_literal);
            }

            PedestrianMotionType::PedestrianMotionType(PedestrianMotionTypeEnum& pedestrianMotionType)
            {
                _literal = kPedestrianMotionTypeEnumString[pedestrianMotionType+1];
                _pedestrianMotionTypeEnum = GetFromLiteral(_literal);
            }

            PedestrianMotionType::PedestrianMotionType(const PedestrianMotionTypeEnum pedestrianMotionType)
            {
                _literal = kPedestrianMotionTypeEnumString[pedestrianMotionType+1];
                _pedestrianMotionTypeEnum = GetFromLiteral(_literal);
            }

            PedestrianMotionType::PedestrianMotionType(std::string& literal_):_literal(literal_) 
            {
                _pedestrianMotionTypeEnum = GetFromLiteral(_literal);
            }

            bool PedestrianMotionType::IsDeprecated(const PedestrianMotionTypeEnum pedestrianMotionType)
            { 
            	return false;
            }
			
			std::string PedestrianMotionType::GetDeprecatedVersion(const PedestrianMotionTypeEnum pedestrianMotionType)
			{
            	return "";
			}

			std::string PedestrianMotionType::GetDeprecatedComment(const PedestrianMotionTypeEnum pedestrianMotionType)
			{
            	return "";
		}
            
            std::string PedestrianMotionType::GetLiteral() const 
            { 
            	return _literal;
            }

            PedestrianMotionType& PedestrianMotionType::operator= (const PedestrianMotionTypeEnum &rhs)
            {
                _pedestrianMotionTypeEnum = rhs;
                _literal = kPedestrianMotionTypeEnumString[_pedestrianMotionTypeEnum+1];
                return *this;
            }

            PedestrianMotionType& PedestrianMotionType::operator= (const PedestrianMotionType &rhs ) 
            { 
                _literal = rhs._literal;
                _pedestrianMotionTypeEnum = rhs._pedestrianMotionTypeEnum;
                return *this;
            }

            bool PedestrianMotionType::operator== (const PedestrianMotionTypeEnum &rhs) const
            {
                return _pedestrianMotionTypeEnum == rhs;
            }

            PedestrianMotionType::PedestrianMotionTypeEnum PedestrianMotionType::GetFromLiteral(const std::string literal_)
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

            bool PrecipitationType::IsDeprecated(const PrecipitationTypeEnum precipitationType)
            { 
            	return false;
            }
			
			std::string PrecipitationType::GetDeprecatedVersion(const PrecipitationTypeEnum precipitationType)
			{
            	return "";
			}

			std::string PrecipitationType::GetDeprecatedComment(const PrecipitationTypeEnum precipitationType)
			{
            	return "";
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
	            {"override", OVERRIDE},
	            {"overwrite", OVERWRITE},
	            {"parallel", PARALLEL},
	            {"skip", SKIP},
	        };
	        
            std::map<Priority::PriorityEnum, bool> Priority::_enumToDeprecated =
            {
	            {Priority::OVERRIDE, false},
	            {Priority::OVERWRITE, true},
	            {Priority::PARALLEL, false},
	            {Priority::SKIP, false},
            };
            std::map<Priority::PriorityEnum, std::string> Priority::_enumToDeprecatedVersion
            {
	            {Priority::OVERRIDE, ""},
	            {Priority::OVERWRITE, "1.2"},
	            {Priority::PARALLEL, ""},
	            {Priority::SKIP, ""},
            };
            std::map<Priority::PriorityEnum, std::string> Priority::_enumToDeprecatedComment
            {
	            {Priority::OVERRIDE, ""},
	            {Priority::OVERWRITE, "Deprecated for consistency. Use override instead"},
	            {Priority::PARALLEL, ""},
	            {Priority::SKIP, ""},
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

            bool Priority::IsDeprecated(const PriorityEnum priority)
            { 
              	return _enumToDeprecated[priority];
            }
			
			std::string Priority::GetDeprecatedVersion(const PriorityEnum priority)
			{
              	return _enumToDeprecatedVersion[priority];
			}

			std::string Priority::GetDeprecatedComment(const PriorityEnum priority)
			{
              	return _enumToDeprecatedComment[priority];
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

            bool ReferenceContext::IsDeprecated(const ReferenceContextEnum referenceContext)
            { 
            	return false;
            }
			
			std::string ReferenceContext::GetDeprecatedVersion(const ReferenceContextEnum referenceContext)
			{
            	return "";
			}

			std::string ReferenceContext::GetDeprecatedComment(const ReferenceContextEnum referenceContext)
			{
            	return "";
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
	            {"euclidianDistance", EUCLIDIAN_DISTANCE},
	            {"lateral", LATERAL},
	            {"longitudinal", LONGITUDINAL},
	        };
	        
            std::map<RelativeDistanceType::RelativeDistanceTypeEnum, bool> RelativeDistanceType::_enumToDeprecated =
            {
	            {RelativeDistanceType::CARTESIAN_DISTANCE, true},
	            {RelativeDistanceType::EUCLIDIAN_DISTANCE, false},
	            {RelativeDistanceType::LATERAL, false},
	            {RelativeDistanceType::LONGITUDINAL, false},
            };
            std::map<RelativeDistanceType::RelativeDistanceTypeEnum, std::string> RelativeDistanceType::_enumToDeprecatedVersion
            {
	            {RelativeDistanceType::CARTESIAN_DISTANCE, "1.1"},
	            {RelativeDistanceType::EUCLIDIAN_DISTANCE, ""},
	            {RelativeDistanceType::LATERAL, ""},
	            {RelativeDistanceType::LONGITUDINAL, ""},
            };
            std::map<RelativeDistanceType::RelativeDistanceTypeEnum, std::string> RelativeDistanceType::_enumToDeprecatedComment
            {
	            {RelativeDistanceType::CARTESIAN_DISTANCE, "Use euclideanDistance"},
	            {RelativeDistanceType::EUCLIDIAN_DISTANCE, ""},
	            {RelativeDistanceType::LATERAL, ""},
	            {RelativeDistanceType::LONGITUDINAL, ""},
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

            bool RelativeDistanceType::IsDeprecated(const RelativeDistanceTypeEnum relativeDistanceType)
            { 
              	return _enumToDeprecated[relativeDistanceType];
            }
			
			std::string RelativeDistanceType::GetDeprecatedVersion(const RelativeDistanceTypeEnum relativeDistanceType)
			{
              	return _enumToDeprecatedVersion[relativeDistanceType];
			}

			std::string RelativeDistanceType::GetDeprecatedComment(const RelativeDistanceTypeEnum relativeDistanceType)
			{
              	return _enumToDeprecatedComment[relativeDistanceType];
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

	    	std::map<std::string, Role::RoleEnum> Role::_stringToEnum = 
	        {
	            {"ambulance", AMBULANCE},
	            {"civil", CIVIL},
	            {"fire", FIRE},
	            {"military", MILITARY},
	            {"none", NONE},
	            {"police", POLICE},
	            {"publicTransport", PUBLIC_TRANSPORT},
	            {"roadAssistance", ROAD_ASSISTANCE},
	        };
	        
	        
            Role::Role()
            {
                _literal = kRoleEnumString[0];
                _roleEnum = GetFromLiteral(_literal);
            }

            Role::Role(RoleEnum& role)
            {
                _literal = kRoleEnumString[role+1];
                _roleEnum = GetFromLiteral(_literal);
            }

            Role::Role(const RoleEnum role)
            {
                _literal = kRoleEnumString[role+1];
                _roleEnum = GetFromLiteral(_literal);
            }

            Role::Role(std::string& literal_):_literal(literal_) 
            {
                _roleEnum = GetFromLiteral(_literal);
            }

            bool Role::IsDeprecated(const RoleEnum role)
            { 
            	return false;
            }
			
			std::string Role::GetDeprecatedVersion(const RoleEnum role)
			{
            	return "";
			}

			std::string Role::GetDeprecatedComment(const RoleEnum role)
			{
            	return "";
		}
            
            std::string Role::GetLiteral() const 
            { 
            	return _literal;
            }

            Role& Role::operator= (const RoleEnum &rhs)
            {
                _roleEnum = rhs;
                _literal = kRoleEnumString[_roleEnum+1];
                return *this;
            }

            Role& Role::operator= (const Role &rhs ) 
            { 
                _literal = rhs._literal;
                _roleEnum = rhs._roleEnum;
                return *this;
            }

            bool Role::operator== (const RoleEnum &rhs) const
            {
                return _roleEnum == rhs;
            }

            Role::RoleEnum Role::GetFromLiteral(const std::string literal_)
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

            bool RouteStrategy::IsDeprecated(const RouteStrategyEnum routeStrategy)
            { 
            	return false;
            }
			
			std::string RouteStrategy::GetDeprecatedVersion(const RouteStrategyEnum routeStrategy)
			{
            	return "";
			}

			std::string RouteStrategy::GetDeprecatedComment(const RouteStrategyEnum routeStrategy)
			{
            	return "";
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

	    	std::map<std::string, RoutingAlgorithm::RoutingAlgorithmEnum> RoutingAlgorithm::_stringToEnum = 
	        {
	            {"assignedRoute", ASSIGNED_ROUTE},
	            {"fastest", FASTEST},
	            {"leastIntersections", LEAST_INTERSECTIONS},
	            {"shortest", SHORTEST},
	            {"undefined", UNDEFINED},
	        };
	        
	        
            RoutingAlgorithm::RoutingAlgorithm()
            {
                _literal = kRoutingAlgorithmEnumString[0];
                _routingAlgorithmEnum = GetFromLiteral(_literal);
            }

            RoutingAlgorithm::RoutingAlgorithm(RoutingAlgorithmEnum& routingAlgorithm)
            {
                _literal = kRoutingAlgorithmEnumString[routingAlgorithm+1];
                _routingAlgorithmEnum = GetFromLiteral(_literal);
            }

            RoutingAlgorithm::RoutingAlgorithm(const RoutingAlgorithmEnum routingAlgorithm)
            {
                _literal = kRoutingAlgorithmEnumString[routingAlgorithm+1];
                _routingAlgorithmEnum = GetFromLiteral(_literal);
            }

            RoutingAlgorithm::RoutingAlgorithm(std::string& literal_):_literal(literal_) 
            {
                _routingAlgorithmEnum = GetFromLiteral(_literal);
            }

            bool RoutingAlgorithm::IsDeprecated(const RoutingAlgorithmEnum routingAlgorithm)
            { 
            	return false;
            }
			
			std::string RoutingAlgorithm::GetDeprecatedVersion(const RoutingAlgorithmEnum routingAlgorithm)
			{
            	return "";
			}

			std::string RoutingAlgorithm::GetDeprecatedComment(const RoutingAlgorithmEnum routingAlgorithm)
			{
            	return "";
		}
            
            std::string RoutingAlgorithm::GetLiteral() const 
            { 
            	return _literal;
            }

            RoutingAlgorithm& RoutingAlgorithm::operator= (const RoutingAlgorithmEnum &rhs)
            {
                _routingAlgorithmEnum = rhs;
                _literal = kRoutingAlgorithmEnumString[_routingAlgorithmEnum+1];
                return *this;
            }

            RoutingAlgorithm& RoutingAlgorithm::operator= (const RoutingAlgorithm &rhs ) 
            { 
                _literal = rhs._literal;
                _routingAlgorithmEnum = rhs._routingAlgorithmEnum;
                return *this;
            }

            bool RoutingAlgorithm::operator== (const RoutingAlgorithmEnum &rhs) const
            {
                return _routingAlgorithmEnum == rhs;
            }

            RoutingAlgorithm::RoutingAlgorithmEnum RoutingAlgorithm::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, Rule::RuleEnum> Rule::_stringToEnum = 
	        {
	            {"equalTo", EQUAL_TO},
	            {"greaterOrEqual", GREATER_OR_EQUAL},
	            {"greaterThan", GREATER_THAN},
	            {"lessOrEqual", LESS_OR_EQUAL},
	            {"lessThan", LESS_THAN},
	            {"notEqualTo", NOT_EQUAL_TO},
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

            bool Rule::IsDeprecated(const RuleEnum rule)
            { 
            	return false;
            }
			
			std::string Rule::GetDeprecatedVersion(const RuleEnum rule)
			{
            	return "";
			}

			std::string Rule::GetDeprecatedComment(const RuleEnum rule)
			{
            	return "";
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

            bool SpeedTargetValueType::IsDeprecated(const SpeedTargetValueTypeEnum speedTargetValueType)
            { 
            	return false;
            }
			
			std::string SpeedTargetValueType::GetDeprecatedVersion(const SpeedTargetValueTypeEnum speedTargetValueType)
			{
            	return "";
			}

			std::string SpeedTargetValueType::GetDeprecatedComment(const SpeedTargetValueTypeEnum speedTargetValueType)
			{
            	return "";
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

            bool StoryboardElementState::IsDeprecated(const StoryboardElementStateEnum storyboardElementState)
            { 
            	return false;
            }
			
			std::string StoryboardElementState::GetDeprecatedVersion(const StoryboardElementStateEnum storyboardElementState)
			{
            	return "";
			}

			std::string StoryboardElementState::GetDeprecatedComment(const StoryboardElementStateEnum storyboardElementState)
			{
            	return "";
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

            bool StoryboardElementType::IsDeprecated(const StoryboardElementTypeEnum storyboardElementType)
            { 
            	return false;
            }
			
			std::string StoryboardElementType::GetDeprecatedVersion(const StoryboardElementTypeEnum storyboardElementType)
			{
            	return "";
			}

			std::string StoryboardElementType::GetDeprecatedComment(const StoryboardElementTypeEnum storyboardElementType)
			{
            	return "";
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

            bool TriggeringEntitiesRule::IsDeprecated(const TriggeringEntitiesRuleEnum triggeringEntitiesRule)
            { 
            	return false;
            }
			
			std::string TriggeringEntitiesRule::GetDeprecatedVersion(const TriggeringEntitiesRuleEnum triggeringEntitiesRule)
			{
            	return "";
			}

			std::string TriggeringEntitiesRule::GetDeprecatedComment(const TriggeringEntitiesRuleEnum triggeringEntitiesRule)
			{
            	return "";
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

            bool VehicleCategory::IsDeprecated(const VehicleCategoryEnum vehicleCategory)
            { 
            	return false;
            }
			
			std::string VehicleCategory::GetDeprecatedVersion(const VehicleCategoryEnum vehicleCategory)
			{
            	return "";
			}

			std::string VehicleCategory::GetDeprecatedComment(const VehicleCategoryEnum vehicleCategory)
			{
            	return "";
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

	    	std::map<std::string, VehicleComponentType::VehicleComponentTypeEnum> VehicleComponentType::_stringToEnum = 
	        {
	            {"doorFrontLeft", DOOR_FRONT_LEFT},
	            {"doorFrontRight", DOOR_FRONT_RIGHT},
	            {"doorRearLeft", DOOR_REAR_LEFT},
	            {"doorRearRight", DOOR_REAR_RIGHT},
	            {"hood", HOOD},
	            {"sideMirrorLeft", SIDE_MIRROR_LEFT},
	            {"sideMirrorRight", SIDE_MIRROR_RIGHT},
	            {"sideMirrors", SIDE_MIRRORS},
	            {"trunk", TRUNK},
	            {"windowFrontLeft", WINDOW_FRONT_LEFT},
	            {"windowFrontRight", WINDOW_FRONT_RIGHT},
	            {"windowRearLeft", WINDOW_REAR_LEFT},
	            {"windowRearRight", WINDOW_REAR_RIGHT},
	        };
	        
	        
            VehicleComponentType::VehicleComponentType()
            {
                _literal = kVehicleComponentTypeEnumString[0];
                _vehicleComponentTypeEnum = GetFromLiteral(_literal);
            }

            VehicleComponentType::VehicleComponentType(VehicleComponentTypeEnum& vehicleComponentType)
            {
                _literal = kVehicleComponentTypeEnumString[vehicleComponentType+1];
                _vehicleComponentTypeEnum = GetFromLiteral(_literal);
            }

            VehicleComponentType::VehicleComponentType(const VehicleComponentTypeEnum vehicleComponentType)
            {
                _literal = kVehicleComponentTypeEnumString[vehicleComponentType+1];
                _vehicleComponentTypeEnum = GetFromLiteral(_literal);
            }

            VehicleComponentType::VehicleComponentType(std::string& literal_):_literal(literal_) 
            {
                _vehicleComponentTypeEnum = GetFromLiteral(_literal);
            }

            bool VehicleComponentType::IsDeprecated(const VehicleComponentTypeEnum vehicleComponentType)
            { 
            	return false;
            }
			
			std::string VehicleComponentType::GetDeprecatedVersion(const VehicleComponentTypeEnum vehicleComponentType)
			{
            	return "";
			}

			std::string VehicleComponentType::GetDeprecatedComment(const VehicleComponentTypeEnum vehicleComponentType)
			{
            	return "";
		}
            
            std::string VehicleComponentType::GetLiteral() const 
            { 
            	return _literal;
            }

            VehicleComponentType& VehicleComponentType::operator= (const VehicleComponentTypeEnum &rhs)
            {
                _vehicleComponentTypeEnum = rhs;
                _literal = kVehicleComponentTypeEnumString[_vehicleComponentTypeEnum+1];
                return *this;
            }

            VehicleComponentType& VehicleComponentType::operator= (const VehicleComponentType &rhs ) 
            { 
                _literal = rhs._literal;
                _vehicleComponentTypeEnum = rhs._vehicleComponentTypeEnum;
                return *this;
            }

            bool VehicleComponentType::operator== (const VehicleComponentTypeEnum &rhs) const
            {
                return _vehicleComponentTypeEnum == rhs;
            }

            VehicleComponentType::VehicleComponentTypeEnum VehicleComponentType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, VehicleLightType::VehicleLightTypeEnum> VehicleLightType::_stringToEnum = 
	        {
	            {"brakeLights", BRAKE_LIGHTS},
	            {"daytimeRunningLights", DAYTIME_RUNNING_LIGHTS},
	            {"fogLights", FOG_LIGHTS},
	            {"fogLightsFront", FOG_LIGHTS_FRONT},
	            {"fogLightsRear", FOG_LIGHTS_REAR},
	            {"highBeam", HIGH_BEAM},
	            {"indicatorLeft", INDICATOR_LEFT},
	            {"indicatorRight", INDICATOR_RIGHT},
	            {"licensePlateIllumination", LICENSE_PLATE_ILLUMINATION},
	            {"lowBeam", LOW_BEAM},
	            {"reversingLights", REVERSING_LIGHTS},
	            {"specialPurposeLights", SPECIAL_PURPOSE_LIGHTS},
	            {"warningLights", WARNING_LIGHTS},
	        };
	        
	        
            VehicleLightType::VehicleLightType()
            {
                _literal = kVehicleLightTypeEnumString[0];
                _vehicleLightTypeEnum = GetFromLiteral(_literal);
            }

            VehicleLightType::VehicleLightType(VehicleLightTypeEnum& vehicleLightType)
            {
                _literal = kVehicleLightTypeEnumString[vehicleLightType+1];
                _vehicleLightTypeEnum = GetFromLiteral(_literal);
            }

            VehicleLightType::VehicleLightType(const VehicleLightTypeEnum vehicleLightType)
            {
                _literal = kVehicleLightTypeEnumString[vehicleLightType+1];
                _vehicleLightTypeEnum = GetFromLiteral(_literal);
            }

            VehicleLightType::VehicleLightType(std::string& literal_):_literal(literal_) 
            {
                _vehicleLightTypeEnum = GetFromLiteral(_literal);
            }

            bool VehicleLightType::IsDeprecated(const VehicleLightTypeEnum vehicleLightType)
            { 
            	return false;
            }
			
			std::string VehicleLightType::GetDeprecatedVersion(const VehicleLightTypeEnum vehicleLightType)
			{
            	return "";
			}

			std::string VehicleLightType::GetDeprecatedComment(const VehicleLightTypeEnum vehicleLightType)
			{
            	return "";
		}
            
            std::string VehicleLightType::GetLiteral() const 
            { 
            	return _literal;
            }

            VehicleLightType& VehicleLightType::operator= (const VehicleLightTypeEnum &rhs)
            {
                _vehicleLightTypeEnum = rhs;
                _literal = kVehicleLightTypeEnumString[_vehicleLightTypeEnum+1];
                return *this;
            }

            VehicleLightType& VehicleLightType::operator= (const VehicleLightType &rhs ) 
            { 
                _literal = rhs._literal;
                _vehicleLightTypeEnum = rhs._vehicleLightTypeEnum;
                return *this;
            }

            bool VehicleLightType::operator== (const VehicleLightTypeEnum &rhs) const
            {
                return _vehicleLightTypeEnum == rhs;
            }

            VehicleLightType::VehicleLightTypeEnum VehicleLightType::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

	    	std::map<std::string, Wetness::WetnessEnum> Wetness::_stringToEnum = 
	        {
	            {"dry", DRY},
	            {"highFlooded", HIGH_FLOODED},
	            {"lowFlooded", LOW_FLOODED},
	            {"moist", MOIST},
	            {"wetWithPuddles", WET_WITH_PUDDLES},
	        };
	        
	        
            Wetness::Wetness()
            {
                _literal = kWetnessEnumString[0];
                _wetnessEnum = GetFromLiteral(_literal);
            }

            Wetness::Wetness(WetnessEnum& wetness)
            {
                _literal = kWetnessEnumString[wetness+1];
                _wetnessEnum = GetFromLiteral(_literal);
            }

            Wetness::Wetness(const WetnessEnum wetness)
            {
                _literal = kWetnessEnumString[wetness+1];
                _wetnessEnum = GetFromLiteral(_literal);
            }

            Wetness::Wetness(std::string& literal_):_literal(literal_) 
            {
                _wetnessEnum = GetFromLiteral(_literal);
            }

            bool Wetness::IsDeprecated(const WetnessEnum wetness)
            { 
            	return false;
            }
			
			std::string Wetness::GetDeprecatedVersion(const WetnessEnum wetness)
			{
            	return "";
			}

			std::string Wetness::GetDeprecatedComment(const WetnessEnum wetness)
			{
            	return "";
		}
            
            std::string Wetness::GetLiteral() const 
            { 
            	return _literal;
            }

            Wetness& Wetness::operator= (const WetnessEnum &rhs)
            {
                _wetnessEnum = rhs;
                _literal = kWetnessEnumString[_wetnessEnum+1];
                return *this;
            }

            Wetness& Wetness::operator= (const Wetness &rhs ) 
            { 
                _literal = rhs._literal;
                _wetnessEnum = rhs._wetnessEnum;
                return *this;
            }

            bool Wetness::operator== (const WetnessEnum &rhs) const
            {
                return _wetnessEnum == rhs;
            }

            Wetness::WetnessEnum Wetness::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

    }
}
