
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
#include <map>
#include <vector>
#include "DateTime.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of cloud states.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Cloudy. There are more clouds than sunshine.
         * <li>Cloud free conditions.
         * <li>Overcast sky. Dull and gray looking.
         * <li>Rain clouds.
         * <li>Turns off the sky visualization.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CloudState 
        {
        public:
            enum CloudStateEnum
            {
                UNKNOWN = -1,
                CLOUDY,
                FREE,
                OVERCAST,
                RAINY,
                SKY_OFF,
            };

        private:
            std::string _literal;
            CloudStateEnum _cloudStateEnum;
            static std::map<std::string, CloudStateEnum> _stringToEnum;

        public:
            const std::vector<std::string> kCloudStateEnumString 
            {
                "UNKNOWN",
                "cloudy",
                "free",
                "overcast",
                "rainy",
                "skyOff",
            };

            /**
             * Default Constructor
             */
            CloudState()
            {
                _literal = kCloudStateEnumString[0];
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            CloudState(CloudStateEnum& cloudState)
            {
                _literal = kCloudStateEnumString[cloudState+1];
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            CloudState(std::string& literal_):_literal(literal_) 
            {
                _cloudStateEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            CloudState& operator= (const CloudStateEnum &rhs)
            {
                _cloudStateEnum = rhs;
                if (_cloudStateEnum > -1)
                    _literal = kCloudStateEnumString[_cloudStateEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            CloudState& operator= (const CloudState &rhs ) 
            { 
                 _literal = rhs._literal;
                _cloudStateEnum = rhs._cloudStateEnum;
                return *this;
            }

            bool operator== (const CloudStateEnum &rhs) const
            {
                return _cloudStateEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static CloudStateEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Edge types that can be used for conditions.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>A condition defined with a falling edge shall return true at discrete time t if its logical expression is false at 
         * discrete time t and its logical expression was true at discrete time t-ts, where ts is the simulation sampling time.
         * <li>A condition defined with a 'none' edge shall return true at discrete time t if its logical expression is true at 
         * discrete time t.
         * <li>A condition defined with a rising edge shall return true at discrete time t if its logical expression is true at 
         * discrete time t and its logical expression was false at discrete time t-ts, where ts is the simulation sampling time.
         * <li>A condition defined with a 'risingOrFalling' edge shall return true at discrete time t if its logical expression is 
         * true at discrete time t and its logical expression was false at discrete time t-ts OR if its logical expression is false
         * at discrete time t and its logical expression was true at discrete time t-ts. ts is the simulation sampling time.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ConditionEdge 
        {
        public:
            enum ConditionEdgeEnum
            {
                UNKNOWN = -1,
                FALLING,
                NONE,
                RISING,
                RISING_OR_FALLING,
            };

        private:
            std::string _literal;
            ConditionEdgeEnum _conditionEdgeEnum;
            static std::map<std::string, ConditionEdgeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kConditionEdgeEnumString 
            {
                "UNKNOWN",
                "falling",
                "none",
                "rising",
                "risingOrFalling",
            };

            /**
             * Default Constructor
             */
            ConditionEdge()
            {
                _literal = kConditionEdgeEnumString[0];
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            ConditionEdge(ConditionEdgeEnum& conditionEdge)
            {
                _literal = kConditionEdgeEnumString[conditionEdge+1];
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            ConditionEdge(std::string& literal_):_literal(literal_) 
            {
                _conditionEdgeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            ConditionEdge& operator= (const ConditionEdgeEnum &rhs)
            {
                _conditionEdgeEnum = rhs;
                if (_conditionEdgeEnum > -1)
                    _literal = kConditionEdgeEnumString[_conditionEdgeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            ConditionEdge& operator= (const ConditionEdge &rhs ) 
            { 
                 _literal = rhs._literal;
                _conditionEdgeEnum = rhs._conditionEdgeEnum;
                return *this;
            }

            bool operator== (const ConditionEdgeEnum &rhs) const
            {
                return _conditionEdgeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static ConditionEdgeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines how a target value will be acquired (with a constant rate, in a defined distance, within a defined time).
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>A predefined distance used to acquire the target value.
         * <li>A predefined constant rate is used to acquire the target value.
         * <li>A predefined time (duration) is used to acquire the target value.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DynamicsDimension 
        {
        public:
            enum DynamicsDimensionEnum
            {
                UNKNOWN = -1,
                DISTANCE,
                RATE,
                TIME,
            };

        private:
            std::string _literal;
            DynamicsDimensionEnum _dynamicsDimensionEnum;
            static std::map<std::string, DynamicsDimensionEnum> _stringToEnum;

        public:
            const std::vector<std::string> kDynamicsDimensionEnumString 
            {
                "UNKNOWN",
                "distance",
                "rate",
                "time",
            };

            /**
             * Default Constructor
             */
            DynamicsDimension()
            {
                _literal = kDynamicsDimensionEnumString[0];
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            DynamicsDimension(DynamicsDimensionEnum& dynamicsDimension)
            {
                _literal = kDynamicsDimensionEnumString[dynamicsDimension+1];
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            DynamicsDimension(std::string& literal_):_literal(literal_) 
            {
                _dynamicsDimensionEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            DynamicsDimension& operator= (const DynamicsDimensionEnum &rhs)
            {
                _dynamicsDimensionEnum = rhs;
                if (_dynamicsDimensionEnum > -1)
                    _literal = kDynamicsDimensionEnumString[_dynamicsDimensionEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            DynamicsDimension& operator= (const DynamicsDimension &rhs ) 
            { 
                 _literal = rhs._literal;
                _dynamicsDimensionEnum = rhs._dynamicsDimensionEnum;
                return *this;
            }

            bool operator== (const DynamicsDimensionEnum &rhs) const
            {
                return _dynamicsDimensionEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static DynamicsDimensionEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Function type used to represent the change of a given variable over time or distance.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Cubical transition f(x)=A*x^3+B*x^2+C*x+D with the constraint that the gradient must be zero at start and end.
         * <li>Value changes in a linear function: f(x) = f_0 + rate * x.
         * <li>Sinusoidal transition f(x)=A*sin(x)+B with the constraint that the gradient must be zero at start and end.
         * <li>Step transition.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DynamicsShape 
        {
        public:
            enum DynamicsShapeEnum
            {
                UNKNOWN = -1,
                CUBIC,
                LINEAR,
                SINUSOIDAL,
                STEP,
            };

        private:
            std::string _literal;
            DynamicsShapeEnum _dynamicsShapeEnum;
            static std::map<std::string, DynamicsShapeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kDynamicsShapeEnumString 
            {
                "UNKNOWN",
                "cubic",
                "linear",
                "sinusoidal",
                "step",
            };

            /**
             * Default Constructor
             */
            DynamicsShape()
            {
                _literal = kDynamicsShapeEnumString[0];
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            DynamicsShape(DynamicsShapeEnum& dynamicsShape)
            {
                _literal = kDynamicsShapeEnumString[dynamicsShape+1];
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            DynamicsShape(std::string& literal_):_literal(literal_) 
            {
                _dynamicsShapeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            DynamicsShape& operator= (const DynamicsShapeEnum &rhs)
            {
                _dynamicsShapeEnum = rhs;
                if (_dynamicsShapeEnum > -1)
                    _literal = kDynamicsShapeEnumString[_dynamicsShapeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            DynamicsShape& operator= (const DynamicsShape &rhs ) 
            { 
                 _literal = rhs._literal;
                _dynamicsShapeEnum = rhs._dynamicsShapeEnum;
                return *this;
            }

            bool operator== (const DynamicsShapeEnum &rhs) const
            {
                return _dynamicsShapeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static DynamicsShapeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Type of lateral control actuation when following a trajectory.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Follow of the steering target (e.g. for a driver model).
         * <li>Explicit definition of the lateral position of an entity.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FollowingMode 
        {
        public:
            enum FollowingModeEnum
            {
                UNKNOWN = -1,
                FOLLOW,
                POSITION,
            };

        private:
            std::string _literal;
            FollowingModeEnum _followingModeEnum;
            static std::map<std::string, FollowingModeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kFollowingModeEnumString 
            {
                "UNKNOWN",
                "follow",
                "position",
            };

            /**
             * Default Constructor
             */
            FollowingMode()
            {
                _literal = kFollowingModeEnumString[0];
                _followingModeEnum = GetFromLiteral(_literal);
            }

            FollowingMode(FollowingModeEnum& followingMode)
            {
                _literal = kFollowingModeEnumString[followingMode+1];
                _followingModeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            FollowingMode(std::string& literal_):_literal(literal_) 
            {
                _followingModeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            FollowingMode& operator= (const FollowingModeEnum &rhs)
            {
                _followingModeEnum = rhs;
                if (_followingModeEnum > -1)
                    _literal = kFollowingModeEnumString[_followingModeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            FollowingMode& operator= (const FollowingMode &rhs ) 
            { 
                 _literal = rhs._literal;
                _followingModeEnum = rhs._followingModeEnum;
                return *this;
            }

            bool operator== (const FollowingModeEnum &rhs) const
            {
                return _followingModeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static FollowingModeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Categories for entity objects which are not pedestrians or vehicles.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>A barrier.
         * <li>A building.
         * <li>A crosswalk.
         * <li>A gantry.
         * <li>None, other
         * <li>Not further defined obstacle
         * <li>A parking space.
         * <li>A patch.
         * <li>A pole
         * <li>A railing or guard rail.
         * <li>Not further defined road mark.
         * <li>A sound barrier.
         * <li>A street lamp.
         * <li>A traffic island.
         * <li>A tree
         * <li>Not further defined vegetation.
         * <li>Wind.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class MiscObjectCategory 
        {
        public:
            enum MiscObjectCategoryEnum
            {
                UNKNOWN = -1,
                BARRIER,
                BUILDING,
                CROSSWALK,
                GANTRY,
                NONE,
                OBSTACLE,
                PARKING_SPACE,
                PATCH,
                POLE,
                RAILING,
                ROAD_MARK,
                SOUND_BARRIER,
                STREET_LAMP,
                TRAFFIC_ISLAND,
                TREE,
                VEGETATION,
                WIND,
            };

        private:
            std::string _literal;
            MiscObjectCategoryEnum _miscObjectCategoryEnum;
            static std::map<std::string, MiscObjectCategoryEnum> _stringToEnum;

        public:
            const std::vector<std::string> kMiscObjectCategoryEnumString 
            {
                "UNKNOWN",
                "barrier",
                "building",
                "crosswalk",
                "gantry",
                "none",
                "obstacle",
                "parkingSpace",
                "patch",
                "pole",
                "railing",
                "roadMark",
                "soundBarrier",
                "streetLamp",
                "trafficIsland",
                "tree",
                "vegetation",
                "wind",
            };

            /**
             * Default Constructor
             */
            MiscObjectCategory()
            {
                _literal = kMiscObjectCategoryEnumString[0];
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            MiscObjectCategory(MiscObjectCategoryEnum& miscObjectCategory)
            {
                _literal = kMiscObjectCategoryEnumString[miscObjectCategory+1];
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            MiscObjectCategory(std::string& literal_):_literal(literal_) 
            {
                _miscObjectCategoryEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            MiscObjectCategory& operator= (const MiscObjectCategoryEnum &rhs)
            {
                _miscObjectCategoryEnum = rhs;
                if (_miscObjectCategoryEnum > -1)
                    _literal = kMiscObjectCategoryEnumString[_miscObjectCategoryEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            MiscObjectCategory& operator= (const MiscObjectCategory &rhs ) 
            { 
                 _literal = rhs._literal;
                _miscObjectCategoryEnum = rhs._miscObjectCategoryEnum;
                return *this;
            }

            bool operator== (const MiscObjectCategoryEnum &rhs) const
            {
                return _miscObjectCategoryEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static MiscObjectCategoryEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Types of entity objects available in a scenario.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Miscellaneous object.
         * <li>A Pedestrian.
         * <li>Ac Vehicle.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ObjectType 
        {
        public:
            enum ObjectTypeEnum
            {
                UNKNOWN = -1,
                MISCELLANEOUS,
                PEDESTRIAN,
                VEHICLE,
            };

        private:
            std::string _literal;
            ObjectTypeEnum _objectTypeEnum;
            static std::map<std::string, ObjectTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kObjectTypeEnumString 
            {
                "UNKNOWN",
                "miscellaneous",
                "pedestrian",
                "vehicle",
            };

            /**
             * Default Constructor
             */
            ObjectType()
            {
                _literal = kObjectTypeEnumString[0];
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            ObjectType(ObjectTypeEnum& objectType)
            {
                _literal = kObjectTypeEnumString[objectType+1];
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            ObjectType(std::string& literal_):_literal(literal_) 
            {
                _objectTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            ObjectType& operator= (const ObjectTypeEnum &rhs)
            {
                _objectTypeEnum = rhs;
                if (_objectTypeEnum > -1)
                    _literal = kObjectTypeEnumString[_objectTypeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            ObjectType& operator= (const ObjectType &rhs ) 
            { 
                 _literal = rhs._literal;
                _objectTypeEnum = rhs._objectTypeEnum;
                return *this;
            }

            bool operator== (const ObjectTypeEnum &rhs) const
            {
                return _objectTypeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static ObjectTypeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Allowed data types for parameters defined in a parameter declaration.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Boolean.
         * <li>DateTime.
         * <li>Double.
         * <li>Integer.
         * <li>String.
         * <li>UnsignedInt.
         * <li>UnsignedShort.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ParameterType 
        {
        public:
            enum ParameterTypeEnum
            {
                UNKNOWN = -1,
                BOOLEAN,
                DATE_TIME,
                DOUBLE,
                INTEGER,
                STRING,
                UNSIGNED_INT,
                UNSIGNED_SHORT,
            };

        private:
            std::string _literal;
            ParameterTypeEnum _parameterTypeEnum;
            static std::map<std::string, ParameterTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kParameterTypeEnumString 
            {
                "UNKNOWN",
                "boolean",
                "dateTime",
                "double",
                "integer",
                "string",
                "unsignedInt",
                "unsignedShort",
            };

            /**
             * Default Constructor
             */
            ParameterType()
            {
                _literal = kParameterTypeEnumString[0];
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            ParameterType(ParameterTypeEnum& parameterType)
            {
                _literal = kParameterTypeEnumString[parameterType+1];
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            ParameterType(std::string& literal_):_literal(literal_) 
            {
                _parameterTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            ParameterType& operator= (const ParameterTypeEnum &rhs)
            {
                _parameterTypeEnum = rhs;
                if (_parameterTypeEnum > -1)
                    _literal = kParameterTypeEnumString[_parameterTypeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            ParameterType& operator= (const ParameterType &rhs ) 
            { 
                 _literal = rhs._literal;
                _parameterTypeEnum = rhs._parameterTypeEnum;
                return *this;
            }

            bool operator== (const ParameterTypeEnum &rhs) const
            {
                return _parameterTypeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static ParameterTypeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Categories for entity objects of type pedestrian.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>An animal.
         * <li>A pedestrian.
         * <li>A wheelchair.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianCategory 
        {
        public:
            enum PedestrianCategoryEnum
            {
                UNKNOWN = -1,
                ANIMAL,
                PEDESTRIAN,
                WHEELCHAIR,
            };

        private:
            std::string _literal;
            PedestrianCategoryEnum _pedestrianCategoryEnum;
            static std::map<std::string, PedestrianCategoryEnum> _stringToEnum;

        public:
            const std::vector<std::string> kPedestrianCategoryEnumString 
            {
                "UNKNOWN",
                "animal",
                "pedestrian",
                "wheelchair",
            };

            /**
             * Default Constructor
             */
            PedestrianCategory()
            {
                _literal = kPedestrianCategoryEnumString[0];
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            PedestrianCategory(PedestrianCategoryEnum& pedestrianCategory)
            {
                _literal = kPedestrianCategoryEnumString[pedestrianCategory+1];
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            PedestrianCategory(std::string& literal_):_literal(literal_) 
            {
                _pedestrianCategoryEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            PedestrianCategory& operator= (const PedestrianCategoryEnum &rhs)
            {
                _pedestrianCategoryEnum = rhs;
                if (_pedestrianCategoryEnum > -1)
                    _literal = kPedestrianCategoryEnumString[_pedestrianCategoryEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            PedestrianCategory& operator= (const PedestrianCategory &rhs ) 
            { 
                 _literal = rhs._literal;
                _pedestrianCategoryEnum = rhs._pedestrianCategoryEnum;
                return *this;
            }

            bool operator== (const PedestrianCategoryEnum &rhs) const
            {
                return _pedestrianCategoryEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static PedestrianCategoryEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Types of precipitation.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>No precipitation.
         * <li>Rain.
         * <li>Snow.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PrecipitationType 
        {
        public:
            enum PrecipitationTypeEnum
            {
                UNKNOWN = -1,
                DRY,
                RAIN,
                SNOW,
            };

        private:
            std::string _literal;
            PrecipitationTypeEnum _precipitationTypeEnum;
            static std::map<std::string, PrecipitationTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kPrecipitationTypeEnumString 
            {
                "UNKNOWN",
                "dry",
                "rain",
                "snow",
            };

            /**
             * Default Constructor
             */
            PrecipitationType()
            {
                _literal = kPrecipitationTypeEnumString[0];
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            PrecipitationType(PrecipitationTypeEnum& precipitationType)
            {
                _literal = kPrecipitationTypeEnumString[precipitationType+1];
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            PrecipitationType(std::string& literal_):_literal(literal_) 
            {
                _precipitationTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            PrecipitationType& operator= (const PrecipitationTypeEnum &rhs)
            {
                _precipitationTypeEnum = rhs;
                if (_precipitationTypeEnum > -1)
                    _literal = kPrecipitationTypeEnumString[_precipitationTypeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            PrecipitationType& operator= (const PrecipitationType &rhs ) 
            { 
                 _literal = rhs._literal;
                _precipitationTypeEnum = rhs._precipitationTypeEnum;
                return *this;
            }

            bool operator== (const PrecipitationTypeEnum &rhs) const
            {
                return _precipitationTypeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static PrecipitationTypeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Rules that govern interaction between events that belong to the same maneuver.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>If a starting event has priority Overwrite, all events in running state, within the same scope (maneuver) as the 
         * starting event, should be issued a stop command (stop transition).
         * <li>Execute in parallel to other events.
         * <li>If a starting event has priority Skip, then it will not be ran if there is any other event in the same scope 
         * (maneuver) in the running state.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class Priority 
        {
        public:
            enum PriorityEnum
            {
                UNKNOWN = -1,
                OVERWRITE,
                PARALLEL,
                SKIP,
            };

        private:
            std::string _literal;
            PriorityEnum _priorityEnum;
            static std::map<std::string, PriorityEnum> _stringToEnum;

        public:
            const std::vector<std::string> kPriorityEnumString 
            {
                "UNKNOWN",
                "overwrite",
                "parallel",
                "skip",
            };

            /**
             * Default Constructor
             */
            Priority()
            {
                _literal = kPriorityEnumString[0];
                _priorityEnum = GetFromLiteral(_literal);
            }

            Priority(PriorityEnum& priority)
            {
                _literal = kPriorityEnumString[priority+1];
                _priorityEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            Priority(std::string& literal_):_literal(literal_) 
            {
                _priorityEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            Priority& operator= (const PriorityEnum &rhs)
            {
                _priorityEnum = rhs;
                if (_priorityEnum > -1)
                    _literal = kPriorityEnumString[_priorityEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            Priority& operator= (const Priority &rhs ) 
            { 
                 _literal = rhs._literal;
                _priorityEnum = rhs._priorityEnum;
                return *this;
            }

            bool operator== (const PriorityEnum &rhs) const
            {
                return _priorityEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static PriorityEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the nature for a given signal, or variable, in terms of absolute or relative.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Absolute reference.
         * <li>Relative reference.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ReferenceContext 
        {
        public:
            enum ReferenceContextEnum
            {
                UNKNOWN = -1,
                ABSOLUTE,
                RELATIVE,
            };

        private:
            std::string _literal;
            ReferenceContextEnum _referenceContextEnum;
            static std::map<std::string, ReferenceContextEnum> _stringToEnum;

        public:
            const std::vector<std::string> kReferenceContextEnumString 
            {
                "UNKNOWN",
                "absolute",
                "relative",
            };

            /**
             * Default Constructor
             */
            ReferenceContext()
            {
                _literal = kReferenceContextEnumString[0];
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            ReferenceContext(ReferenceContextEnum& referenceContext)
            {
                _literal = kReferenceContextEnumString[referenceContext+1];
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            ReferenceContext(std::string& literal_):_literal(literal_) 
            {
                _referenceContextEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            ReferenceContext& operator= (const ReferenceContextEnum &rhs)
            {
                _referenceContextEnum = rhs;
                if (_referenceContextEnum > -1)
                    _literal = kReferenceContextEnumString[_referenceContextEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            ReferenceContext& operator= (const ReferenceContext &rhs ) 
            { 
                 _literal = rhs._literal;
                _referenceContextEnum = rhs._referenceContextEnum;
                return *this;
            }

            bool operator== (const ReferenceContextEnum &rhs) const
            {
                return _referenceContextEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static ReferenceContextEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Alternative ways in which to calculate the distance in a RelativeDistanceCondition.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Cartesian distance offset.
         * <li>Lateral distance offset.
         * <li>Longitudinal distance offset.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RelativeDistanceType 
        {
        public:
            enum RelativeDistanceTypeEnum
            {
                UNKNOWN = -1,
                CARTESIAN_DISTANCE,
                LATERAL,
                LONGITUDINAL,
            };

        private:
            std::string _literal;
            RelativeDistanceTypeEnum _relativeDistanceTypeEnum;
            static std::map<std::string, RelativeDistanceTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kRelativeDistanceTypeEnumString 
            {
                "UNKNOWN",
                "cartesianDistance",
                "lateral",
                "longitudinal",
            };

            /**
             * Default Constructor
             */
            RelativeDistanceType()
            {
                _literal = kRelativeDistanceTypeEnumString[0];
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            RelativeDistanceType(RelativeDistanceTypeEnum& relativeDistanceType)
            {
                _literal = kRelativeDistanceTypeEnumString[relativeDistanceType+1];
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            RelativeDistanceType(std::string& literal_):_literal(literal_) 
            {
                _relativeDistanceTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            RelativeDistanceType& operator= (const RelativeDistanceTypeEnum &rhs)
            {
                _relativeDistanceTypeEnum = rhs;
                if (_relativeDistanceTypeEnum > -1)
                    _literal = kRelativeDistanceTypeEnumString[_relativeDistanceTypeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            RelativeDistanceType& operator= (const RelativeDistanceType &rhs ) 
            { 
                 _literal = rhs._literal;
                _relativeDistanceTypeEnum = rhs._relativeDistanceTypeEnum;
                return *this;
            }

            bool operator== (const RelativeDistanceTypeEnum &rhs) const
            {
                return _relativeDistanceTypeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static RelativeDistanceTypeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Strategy for path selection between waypoints in a route.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Fastest route.
         * <li>Route with least number of intersections.
         * <li>Random route.
         * <li>Shortest route.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RouteStrategy 
        {
        public:
            enum RouteStrategyEnum
            {
                UNKNOWN = -1,
                FASTEST,
                LEAST_INTERSECTIONS,
                RANDOM,
                SHORTEST,
            };

        private:
            std::string _literal;
            RouteStrategyEnum _routeStrategyEnum;
            static std::map<std::string, RouteStrategyEnum> _stringToEnum;

        public:
            const std::vector<std::string> kRouteStrategyEnumString 
            {
                "UNKNOWN",
                "fastest",
                "leastIntersections",
                "random",
                "shortest",
            };

            /**
             * Default Constructor
             */
            RouteStrategy()
            {
                _literal = kRouteStrategyEnumString[0];
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            RouteStrategy(RouteStrategyEnum& routeStrategy)
            {
                _literal = kRouteStrategyEnumString[routeStrategy+1];
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            RouteStrategy(std::string& literal_):_literal(literal_) 
            {
                _routeStrategyEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            RouteStrategy& operator= (const RouteStrategyEnum &rhs)
            {
                _routeStrategyEnum = rhs;
                if (_routeStrategyEnum > -1)
                    _literal = kRouteStrategyEnumString[_routeStrategyEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            RouteStrategy& operator= (const RouteStrategy &rhs ) 
            { 
                 _literal = rhs._literal;
                _routeStrategyEnum = rhs._routeStrategyEnum;
                return *this;
            }

            bool operator== (const RouteStrategyEnum &rhs) const
            {
                return _routeStrategyEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static RouteStrategyEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Rules (operators) used to compare quantitative variables or signals.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>'Equal to' operator.
         * <li>'Greater than' operator.
         * <li>'Less than' operator.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class Rule 
        {
        public:
            enum RuleEnum
            {
                UNKNOWN = -1,
                EQUAL_TO,
                GREATER_THAN,
                LESS_THAN,
            };

        private:
            std::string _literal;
            RuleEnum _ruleEnum;
            static std::map<std::string, RuleEnum> _stringToEnum;

        public:
            const std::vector<std::string> kRuleEnumString 
            {
                "UNKNOWN",
                "equalTo",
                "greaterThan",
                "lessThan",
            };

            /**
             * Default Constructor
             */
            Rule()
            {
                _literal = kRuleEnumString[0];
                _ruleEnum = GetFromLiteral(_literal);
            }

            Rule(RuleEnum& rule)
            {
                _literal = kRuleEnumString[rule+1];
                _ruleEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            Rule(std::string& literal_):_literal(literal_) 
            {
                _ruleEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            Rule& operator= (const RuleEnum &rhs)
            {
                _ruleEnum = rhs;
                if (_ruleEnum > -1)
                    _literal = kRuleEnumString[_ruleEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            Rule& operator= (const Rule &rhs ) 
            { 
                 _literal = rhs._literal;
                _ruleEnum = rhs._ruleEnum;
                return *this;
            }

            bool operator== (const RuleEnum &rhs) const
            {
                return _ruleEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static RuleEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Type definition that relates a speed value relative to another one.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>The relative value is interpreted as a difference to a referenced value. Unit: m/s. As an example, a speed value of 
         * 10 equals a speed that's 10m/s faster than the reference speed.
         * <li>The relative value is interpreted as a factor to a referenced value. No unit. As an example, a speed value of 1.1 
         * equals a speed that's 10% faster than the reference speed.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class SpeedTargetValueType 
        {
        public:
            enum SpeedTargetValueTypeEnum
            {
                UNKNOWN = -1,
                DELTA,
                FACTOR,
            };

        private:
            std::string _literal;
            SpeedTargetValueTypeEnum _speedTargetValueTypeEnum;
            static std::map<std::string, SpeedTargetValueTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kSpeedTargetValueTypeEnumString 
            {
                "UNKNOWN",
                "delta",
                "factor",
            };

            /**
             * Default Constructor
             */
            SpeedTargetValueType()
            {
                _literal = kSpeedTargetValueTypeEnumString[0];
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            SpeedTargetValueType(SpeedTargetValueTypeEnum& speedTargetValueType)
            {
                _literal = kSpeedTargetValueTypeEnumString[speedTargetValueType+1];
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            SpeedTargetValueType(std::string& literal_):_literal(literal_) 
            {
                _speedTargetValueTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            SpeedTargetValueType& operator= (const SpeedTargetValueTypeEnum &rhs)
            {
                _speedTargetValueTypeEnum = rhs;
                if (_speedTargetValueTypeEnum > -1)
                    _literal = kSpeedTargetValueTypeEnumString[_speedTargetValueTypeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            SpeedTargetValueType& operator= (const SpeedTargetValueType &rhs ) 
            { 
                 _literal = rhs._literal;
                _speedTargetValueTypeEnum = rhs._speedTargetValueTypeEnum;
                return *this;
            }

            bool operator== (const SpeedTargetValueTypeEnum &rhs) const
            {
                return _speedTargetValueTypeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static SpeedTargetValueTypeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * The states and the transitions that can be used to define a StoryboardElementStateCondition.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>State from which the Storyboard element cannot return to the running state without external interference (forced by 
         * a parent element).
         * <li>Transition between the running state and the standby state. The moment the referenced StoryboardElement terminates 
         * its execution by completing its goal.
         * <li>State in which the storyboard element is executing its actions.
         * <li>Transition marking the moment an element is asked to move to the running state but is instead skipped so it remains 
         * in the standby state (Only for Event instances).
         * <li>State in which the storyboard element could move to the running state given a start trigger.
         * <li>Transition between the standby and running state. The moment the referenced StoryboardElement instance starts its 
         * execution.
         * <li>Transition between the running or standby states to the complete state. Occurs when the execution of the referenced 
         * StoryboardElement instance is stopped via a stop trigger or overriding.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardElementState 
        {
        public:
            enum StoryboardElementStateEnum
            {
                UNKNOWN = -1,
                COMPLETE_STATE,
                END_TRANSITION,
                RUNNING_STATE,
                SKIP_TRANSITION,
                STANDBY_STATE,
                START_TRANSITION,
                STOP_TRANSITION,
            };

        private:
            std::string _literal;
            StoryboardElementStateEnum _storyboardElementStateEnum;
            static std::map<std::string, StoryboardElementStateEnum> _stringToEnum;

        public:
            const std::vector<std::string> kStoryboardElementStateEnumString 
            {
                "UNKNOWN",
                "completeState",
                "endTransition",
                "runningState",
                "skipTransition",
                "standbyState",
                "startTransition",
                "stopTransition",
            };

            /**
             * Default Constructor
             */
            StoryboardElementState()
            {
                _literal = kStoryboardElementStateEnumString[0];
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            StoryboardElementState(StoryboardElementStateEnum& storyboardElementState)
            {
                _literal = kStoryboardElementStateEnumString[storyboardElementState+1];
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            StoryboardElementState(std::string& literal_):_literal(literal_) 
            {
                _storyboardElementStateEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            StoryboardElementState& operator= (const StoryboardElementStateEnum &rhs)
            {
                _storyboardElementStateEnum = rhs;
                if (_storyboardElementStateEnum > -1)
                    _literal = kStoryboardElementStateEnumString[_storyboardElementStateEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            StoryboardElementState& operator= (const StoryboardElementState &rhs ) 
            { 
                 _literal = rhs._literal;
                _storyboardElementStateEnum = rhs._storyboardElementStateEnum;
                return *this;
            }

            bool operator== (const StoryboardElementStateEnum &rhs) const
            {
                return _storyboardElementStateEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static StoryboardElementStateEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Types of storyboard elements in a scenario.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>The referenced StoryboardElement instance is an Act.
         * <li>The referenced StoryboardElement instance is an Action.
         * <li>The referenced StoryboardElement instance is an Event.
         * <li>The referenced StoryboardElement instance is a Maneuver.
         * <li>The referenced StoryboardElement instance is a ManeuverGroup.
         * <li>The referenced StoryboardElement instance is a Story.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class StoryboardElementType 
        {
        public:
            enum StoryboardElementTypeEnum
            {
                UNKNOWN = -1,
                ACT,
                ACTION,
                EVENT,
                MANEUVER,
                MANEUVER_GROUP,
                STORY,
            };

        private:
            std::string _literal;
            StoryboardElementTypeEnum _storyboardElementTypeEnum;
            static std::map<std::string, StoryboardElementTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kStoryboardElementTypeEnumString 
            {
                "UNKNOWN",
                "act",
                "action",
                "event",
                "maneuver",
                "maneuverGroup",
                "story",
            };

            /**
             * Default Constructor
             */
            StoryboardElementType()
            {
                _literal = kStoryboardElementTypeEnumString[0];
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            StoryboardElementType(StoryboardElementTypeEnum& storyboardElementType)
            {
                _literal = kStoryboardElementTypeEnumString[storyboardElementType+1];
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            StoryboardElementType(std::string& literal_):_literal(literal_) 
            {
                _storyboardElementTypeEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            StoryboardElementType& operator= (const StoryboardElementTypeEnum &rhs)
            {
                _storyboardElementTypeEnum = rhs;
                if (_storyboardElementTypeEnum > -1)
                    _literal = kStoryboardElementTypeEnumString[_storyboardElementTypeEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            StoryboardElementType& operator= (const StoryboardElementType &rhs ) 
            { 
                 _literal = rhs._literal;
                _storyboardElementTypeEnum = rhs._storyboardElementTypeEnum;
                return *this;
            }

            bool operator== (const StoryboardElementTypeEnum &rhs) const
            {
                return _storyboardElementTypeEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static StoryboardElementTypeEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Rules which determine how triggering entities are used to verify a given condition.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>All listed triggering entities must reach the specifies position in order to start the lane change.
         * <li>One of the triggering entities reaching the position is enough to trigger the lane change.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class TriggeringEntitiesRule 
        {
        public:
            enum TriggeringEntitiesRuleEnum
            {
                UNKNOWN = -1,
                ALL,
                ANY,
            };

        private:
            std::string _literal;
            TriggeringEntitiesRuleEnum _triggeringEntitiesRuleEnum;
            static std::map<std::string, TriggeringEntitiesRuleEnum> _stringToEnum;

        public:
            const std::vector<std::string> kTriggeringEntitiesRuleEnumString 
            {
                "UNKNOWN",
                "all",
                "any",
            };

            /**
             * Default Constructor
             */
            TriggeringEntitiesRule()
            {
                _literal = kTriggeringEntitiesRuleEnumString[0];
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            TriggeringEntitiesRule(TriggeringEntitiesRuleEnum& triggeringEntitiesRule)
            {
                _literal = kTriggeringEntitiesRuleEnumString[triggeringEntitiesRule+1];
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            TriggeringEntitiesRule(std::string& literal_):_literal(literal_) 
            {
                _triggeringEntitiesRuleEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            TriggeringEntitiesRule& operator= (const TriggeringEntitiesRuleEnum &rhs)
            {
                _triggeringEntitiesRuleEnum = rhs;
                if (_triggeringEntitiesRuleEnum > -1)
                    _literal = kTriggeringEntitiesRuleEnumString[_triggeringEntitiesRuleEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            TriggeringEntitiesRule& operator= (const TriggeringEntitiesRule &rhs ) 
            { 
                 _literal = rhs._literal;
                _triggeringEntitiesRuleEnum = rhs._triggeringEntitiesRuleEnum;
                return *this;
            }

            bool operator== (const TriggeringEntitiesRuleEnum &rhs) const
            {
                return _triggeringEntitiesRuleEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static TriggeringEntitiesRuleEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
         * <p>
         * From OpenSCENARIO class model specification:
         * Categories for entity objects of type vehicle.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>The vehicle is a bicycle.
         * <li>The vehicle is a bus.
         * <li>The vehicle is a car.
         * <li>The vehicle is a motor bike.
         * <li>The vehicle is a semi trailer.
         * <li>The vehicle is a trailer.
         * <li>The vehicle is a train.
         * <li>The vehicle is a tram.
         * <li>The vehicle is a truck.
         * <li>The vehicle is a van.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleCategory 
        {
        public:
            enum VehicleCategoryEnum
            {
                UNKNOWN = -1,
                BICYCLE,
                BUS,
                CAR,
                MOTORBIKE,
                SEMITRAILER,
                TRAILER,
                TRAIN,
                TRAM,
                TRUCK,
                VAN,
            };

        private:
            std::string _literal;
            VehicleCategoryEnum _vehicleCategoryEnum;
            static std::map<std::string, VehicleCategoryEnum> _stringToEnum;

        public:
            const std::vector<std::string> kVehicleCategoryEnumString 
            {
                "UNKNOWN",
                "bicycle",
                "bus",
                "car",
                "motorbike",
                "semitrailer",
                "trailer",
                "train",
                "tram",
                "truck",
                "van",
            };

            /**
             * Default Constructor
             */
            VehicleCategory()
            {
                _literal = kVehicleCategoryEnumString[0];
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            VehicleCategory(VehicleCategoryEnum& vehicleCategory)
            {
                _literal = kVehicleCategoryEnumString[vehicleCategory+1];
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            VehicleCategory(std::string& literal_):_literal(literal_) 
            {
                _vehicleCategoryEnum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            VehicleCategory& operator= (const VehicleCategoryEnum &rhs)
            {
                _vehicleCategoryEnum = rhs;
                if (_vehicleCategoryEnum > -1)
                    _literal = kVehicleCategoryEnumString[_vehicleCategoryEnum+1];
                else
                    _literal = "unknown";
                return *this;
            }

            VehicleCategory& operator= (const VehicleCategory &rhs ) 
            { 
                 _literal = rhs._literal;
                _vehicleCategoryEnum = rhs._vehicleCategoryEnum;
                return *this;
            }

            bool operator== (const VehicleCategoryEnum &rhs) const
            {
                return _vehicleCategoryEnum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static VehicleCategoryEnum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


    }
}
