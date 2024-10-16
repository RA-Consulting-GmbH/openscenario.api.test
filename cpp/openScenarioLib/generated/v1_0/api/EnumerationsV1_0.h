
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

#ifdef ABSOLUTE
    #define ABSOLUTE_WAS_SET ABSOLUTE
    #undef ABSOLUTE
#endif

#ifdef RELATIVE
    #define RELATIVE_WAS_SET RELATIVE
    #undef RELATIVE
#endif

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
            OPENSCENARIOLIB_EXP CloudState();

            OPENSCENARIOLIB_EXP CloudState(CloudStateEnum& cloudState);

            OPENSCENARIOLIB_EXP CloudState(const CloudStateEnum cloudState);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP CloudState(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP CloudState& operator= (const CloudStateEnum &rhs);

            OPENSCENARIOLIB_EXP CloudState& operator= (const CloudState &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const CloudStateEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static CloudStateEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP ConditionEdge();

            OPENSCENARIOLIB_EXP ConditionEdge(ConditionEdgeEnum& conditionEdge);

            OPENSCENARIOLIB_EXP ConditionEdge(const ConditionEdgeEnum conditionEdge);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP ConditionEdge(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP ConditionEdge& operator= (const ConditionEdgeEnum &rhs);

            OPENSCENARIOLIB_EXP ConditionEdge& operator= (const ConditionEdge &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const ConditionEdgeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static ConditionEdgeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP DynamicsDimension();

            OPENSCENARIOLIB_EXP DynamicsDimension(DynamicsDimensionEnum& dynamicsDimension);

            OPENSCENARIOLIB_EXP DynamicsDimension(const DynamicsDimensionEnum dynamicsDimension);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP DynamicsDimension(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP DynamicsDimension& operator= (const DynamicsDimensionEnum &rhs);

            OPENSCENARIOLIB_EXP DynamicsDimension& operator= (const DynamicsDimension &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const DynamicsDimensionEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static DynamicsDimensionEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP DynamicsShape();

            OPENSCENARIOLIB_EXP DynamicsShape(DynamicsShapeEnum& dynamicsShape);

            OPENSCENARIOLIB_EXP DynamicsShape(const DynamicsShapeEnum dynamicsShape);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP DynamicsShape(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP DynamicsShape& operator= (const DynamicsShapeEnum &rhs);

            OPENSCENARIOLIB_EXP DynamicsShape& operator= (const DynamicsShape &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const DynamicsShapeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static DynamicsShapeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP FollowingMode();

            OPENSCENARIOLIB_EXP FollowingMode(FollowingModeEnum& followingMode);

            OPENSCENARIOLIB_EXP FollowingMode(const FollowingModeEnum followingMode);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP FollowingMode(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP FollowingMode& operator= (const FollowingModeEnum &rhs);

            OPENSCENARIOLIB_EXP FollowingMode& operator= (const FollowingMode &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const FollowingModeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static FollowingModeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP MiscObjectCategory();

            OPENSCENARIOLIB_EXP MiscObjectCategory(MiscObjectCategoryEnum& miscObjectCategory);

            OPENSCENARIOLIB_EXP MiscObjectCategory(const MiscObjectCategoryEnum miscObjectCategory);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP MiscObjectCategory(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP MiscObjectCategory& operator= (const MiscObjectCategoryEnum &rhs);

            OPENSCENARIOLIB_EXP MiscObjectCategory& operator= (const MiscObjectCategory &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const MiscObjectCategoryEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static MiscObjectCategoryEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP ObjectType();

            OPENSCENARIOLIB_EXP ObjectType(ObjectTypeEnum& objectType);

            OPENSCENARIOLIB_EXP ObjectType(const ObjectTypeEnum objectType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP ObjectType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP ObjectType& operator= (const ObjectTypeEnum &rhs);

            OPENSCENARIOLIB_EXP ObjectType& operator= (const ObjectType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const ObjectTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static ObjectTypeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP ParameterType();

            OPENSCENARIOLIB_EXP ParameterType(ParameterTypeEnum& parameterType);

            OPENSCENARIOLIB_EXP ParameterType(const ParameterTypeEnum parameterType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP ParameterType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP ParameterType& operator= (const ParameterTypeEnum &rhs);

            OPENSCENARIOLIB_EXP ParameterType& operator= (const ParameterType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const ParameterTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static ParameterTypeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP PedestrianCategory();

            OPENSCENARIOLIB_EXP PedestrianCategory(PedestrianCategoryEnum& pedestrianCategory);

            OPENSCENARIOLIB_EXP PedestrianCategory(const PedestrianCategoryEnum pedestrianCategory);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP PedestrianCategory(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP PedestrianCategory& operator= (const PedestrianCategoryEnum &rhs);

            OPENSCENARIOLIB_EXP PedestrianCategory& operator= (const PedestrianCategory &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const PedestrianCategoryEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static PedestrianCategoryEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP PrecipitationType();

            OPENSCENARIOLIB_EXP PrecipitationType(PrecipitationTypeEnum& precipitationType);

            OPENSCENARIOLIB_EXP PrecipitationType(const PrecipitationTypeEnum precipitationType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP PrecipitationType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP PrecipitationType& operator= (const PrecipitationTypeEnum &rhs);

            OPENSCENARIOLIB_EXP PrecipitationType& operator= (const PrecipitationType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const PrecipitationTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static PrecipitationTypeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP Priority();

            OPENSCENARIOLIB_EXP Priority(PriorityEnum& priority);

            OPENSCENARIOLIB_EXP Priority(const PriorityEnum priority);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP Priority(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP Priority& operator= (const PriorityEnum &rhs);

            OPENSCENARIOLIB_EXP Priority& operator= (const Priority &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const PriorityEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static PriorityEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP ReferenceContext();

            OPENSCENARIOLIB_EXP ReferenceContext(ReferenceContextEnum& referenceContext);

            OPENSCENARIOLIB_EXP ReferenceContext(const ReferenceContextEnum referenceContext);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP ReferenceContext(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP ReferenceContext& operator= (const ReferenceContextEnum &rhs);

            OPENSCENARIOLIB_EXP ReferenceContext& operator= (const ReferenceContext &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const ReferenceContextEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static ReferenceContextEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP RelativeDistanceType();

            OPENSCENARIOLIB_EXP RelativeDistanceType(RelativeDistanceTypeEnum& relativeDistanceType);

            OPENSCENARIOLIB_EXP RelativeDistanceType(const RelativeDistanceTypeEnum relativeDistanceType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP RelativeDistanceType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP RelativeDistanceType& operator= (const RelativeDistanceTypeEnum &rhs);

            OPENSCENARIOLIB_EXP RelativeDistanceType& operator= (const RelativeDistanceType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const RelativeDistanceTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static RelativeDistanceTypeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP RouteStrategy();

            OPENSCENARIOLIB_EXP RouteStrategy(RouteStrategyEnum& routeStrategy);

            OPENSCENARIOLIB_EXP RouteStrategy(const RouteStrategyEnum routeStrategy);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP RouteStrategy(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP RouteStrategy& operator= (const RouteStrategyEnum &rhs);

            OPENSCENARIOLIB_EXP RouteStrategy& operator= (const RouteStrategy &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const RouteStrategyEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static RouteStrategyEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP Rule();

            OPENSCENARIOLIB_EXP Rule(RuleEnum& rule);

            OPENSCENARIOLIB_EXP Rule(const RuleEnum rule);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP Rule(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP Rule& operator= (const RuleEnum &rhs);

            OPENSCENARIOLIB_EXP Rule& operator= (const Rule &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const RuleEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static RuleEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP SpeedTargetValueType();

            OPENSCENARIOLIB_EXP SpeedTargetValueType(SpeedTargetValueTypeEnum& speedTargetValueType);

            OPENSCENARIOLIB_EXP SpeedTargetValueType(const SpeedTargetValueTypeEnum speedTargetValueType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP SpeedTargetValueType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP SpeedTargetValueType& operator= (const SpeedTargetValueTypeEnum &rhs);

            OPENSCENARIOLIB_EXP SpeedTargetValueType& operator= (const SpeedTargetValueType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const SpeedTargetValueTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static SpeedTargetValueTypeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP StoryboardElementState();

            OPENSCENARIOLIB_EXP StoryboardElementState(StoryboardElementStateEnum& storyboardElementState);

            OPENSCENARIOLIB_EXP StoryboardElementState(const StoryboardElementStateEnum storyboardElementState);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP StoryboardElementState(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP StoryboardElementState& operator= (const StoryboardElementStateEnum &rhs);

            OPENSCENARIOLIB_EXP StoryboardElementState& operator= (const StoryboardElementState &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const StoryboardElementStateEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static StoryboardElementStateEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP StoryboardElementType();

            OPENSCENARIOLIB_EXP StoryboardElementType(StoryboardElementTypeEnum& storyboardElementType);

            OPENSCENARIOLIB_EXP StoryboardElementType(const StoryboardElementTypeEnum storyboardElementType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP StoryboardElementType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP StoryboardElementType& operator= (const StoryboardElementTypeEnum &rhs);

            OPENSCENARIOLIB_EXP StoryboardElementType& operator= (const StoryboardElementType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const StoryboardElementTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static StoryboardElementTypeEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP TriggeringEntitiesRule();

            OPENSCENARIOLIB_EXP TriggeringEntitiesRule(TriggeringEntitiesRuleEnum& triggeringEntitiesRule);

            OPENSCENARIOLIB_EXP TriggeringEntitiesRule(const TriggeringEntitiesRuleEnum triggeringEntitiesRule);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP TriggeringEntitiesRule(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP TriggeringEntitiesRule& operator= (const TriggeringEntitiesRuleEnum &rhs);

            OPENSCENARIOLIB_EXP TriggeringEntitiesRule& operator= (const TriggeringEntitiesRule &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const TriggeringEntitiesRuleEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static TriggeringEntitiesRuleEnum GetFromLiteral(const std::string literal_);

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
            OPENSCENARIOLIB_EXP VehicleCategory();

            OPENSCENARIOLIB_EXP VehicleCategory(VehicleCategoryEnum& vehicleCategory);

            OPENSCENARIOLIB_EXP VehicleCategory(const VehicleCategoryEnum vehicleCategory);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP VehicleCategory(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP VehicleCategory& operator= (const VehicleCategoryEnum &rhs);

            OPENSCENARIOLIB_EXP VehicleCategory& operator= (const VehicleCategory &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const VehicleCategoryEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static VehicleCategoryEnum GetFromLiteral(const std::string literal_);

        };


    }
}

#ifdef ABSOLUTE_WAS_SET
    #define ABSOLUTE ABSOLUTE_WAS_SET
    #undef ABSOLUTE_WAS_SET
#endif

#ifdef RELATIVE_WAS_SET
    #define RELATIVE RELATIVE_WAS_SET
    #undef RELATIVE_WAS_SET
#endif
