
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
    namespace v1_2
    {
        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Types for automatic gear description.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Drive position (D).
         * <li>Neutral position (N).
         * <li>Park position (P).
         * <li>Reverse position (R).
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class AutomaticGearType 
        {
        public:
            enum AutomaticGearTypeEnum
            {
                UNKNOWN = -1,
                D,
                N,
                P,
                R,
            };

        private:
            std::string _literal;
            AutomaticGearTypeEnum _automaticGearTypeEnum;
            static std::map<std::string, AutomaticGearTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kAutomaticGearTypeEnumString 
            {
                "UNKNOWN",
                "d",
                "n",
                "p",
                "r",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP AutomaticGearType();

            OPENSCENARIOLIB_EXP AutomaticGearType(AutomaticGearTypeEnum& automaticGearType);

            OPENSCENARIOLIB_EXP AutomaticGearType(const AutomaticGearTypeEnum automaticGearType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const AutomaticGearTypeEnum automaticGearType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const AutomaticGearTypeEnum automaticGearType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const AutomaticGearTypeEnum automaticGearType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP AutomaticGearType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP AutomaticGearType& operator= (const AutomaticGearTypeEnum &rhs);

            OPENSCENARIOLIB_EXP AutomaticGearType& operator= (const AutomaticGearType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const AutomaticGearTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static AutomaticGearTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const CloudStateEnum cloudState);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const CloudStateEnum cloudState);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const CloudStateEnum cloudState);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Semantic value of a color.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Black color.
         * <li>Blue color.
         * <li>Brown color.
         * <li>Green color.
         * <li>Grey color.
         * <li>Orange color.
         * <li>Other (unspecified but known) color.
         * <li>Red color.
         * <li>Violet color.
         * <li>White color.
         * <li>Yellow color.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ColorType 
        {
        public:
            enum ColorTypeEnum
            {
                UNKNOWN = -1,
                BLACK,
                BLUE,
                BROWN,
                GREEN,
                GREY,
                ORANGE,
                OTHER,
                RED,
                VIOLET,
                WHITE,
                YELLOW,
            };

        private:
            std::string _literal;
            ColorTypeEnum _colorTypeEnum;
            static std::map<std::string, ColorTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kColorTypeEnumString 
            {
                "UNKNOWN",
                "black",
                "blue",
                "brown",
                "green",
                "grey",
                "orange",
                "other",
                "red",
                "violet",
                "white",
                "yellow",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP ColorType();

            OPENSCENARIOLIB_EXP ColorType(ColorTypeEnum& colorType);

            OPENSCENARIOLIB_EXP ColorType(const ColorTypeEnum colorType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const ColorTypeEnum colorType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const ColorTypeEnum colorType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const ColorTypeEnum colorType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP ColorType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP ColorType& operator= (const ColorTypeEnum &rhs);

            OPENSCENARIOLIB_EXP ColorType& operator= (const ColorType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const ColorTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static ColorTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const ConditionEdgeEnum conditionEdge);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const ConditionEdgeEnum conditionEdge);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const ConditionEdgeEnum conditionEdge);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Type of operational domains for a Controller
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>The controller can affect all possible domains of the object.
         * <li>The controller can only affect an animation of the object.
         * <li>The controller can affect both the lighting and the animation of the object.
         * <li>The controller can only affect in the lateral movement of the object.
         * <li>The controller can only affect the lighting of the object.
         * <li>The controller can only affect in the longitudinal movement of the object.
         * <li>The controller can affect both the lateral and longitudinal movement of the object (same as version 1.1).
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class ControllerType 
        {
        public:
            enum ControllerTypeEnum
            {
                UNKNOWN = -1,
                ALL,
                ANIMATION,
                APPEARANCE,
                LATERAL,
                LIGHTING,
                LONGITUDINAL,
                MOVEMENT,
            };

        private:
            std::string _literal;
            ControllerTypeEnum _controllerTypeEnum;
            static std::map<std::string, ControllerTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kControllerTypeEnumString 
            {
                "UNKNOWN",
                "all",
                "animation",
                "appearance",
                "lateral",
                "lighting",
                "longitudinal",
                "movement",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP ControllerType();

            OPENSCENARIOLIB_EXP ControllerType(ControllerTypeEnum& controllerType);

            OPENSCENARIOLIB_EXP ControllerType(const ControllerTypeEnum controllerType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const ControllerTypeEnum controllerType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const ControllerTypeEnum controllerType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const ControllerTypeEnum controllerType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP ControllerType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP ControllerType& operator= (const ControllerTypeEnum &rhs);

            OPENSCENARIOLIB_EXP ControllerType& operator= (const ControllerType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const ControllerTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static ControllerTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the coordinate system to be used for calculations. If used in a condition, then the coordinate system
         * relates to the triggering entity. If used in an action, the coordinate system relates to the actor.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Cartesian XYZ coordinate system (origin is the origin of the entity&#180;s local coordinate system.)
         * <li>Road-based s,t coordinate system (s-axis is the lane center line of the lane, on which the entity is located).
         * <li>Road-based s,t coordinate system (s-axis is the road center line of the road, on which the entity is located).
         * <li>
Trajectory-based s,t coordinate system (s-axis is the trajectory-arc, which the entity follows).
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class CoordinateSystem 
        {
        public:
            enum CoordinateSystemEnum
            {
                UNKNOWN = -1,
                ENTITY,
                LANE,
                ROAD,
                TRAJECTORY,
            };

        private:
            std::string _literal;
            CoordinateSystemEnum _coordinateSystemEnum;
            static std::map<std::string, CoordinateSystemEnum> _stringToEnum;

        public:
            const std::vector<std::string> kCoordinateSystemEnumString 
            {
                "UNKNOWN",
                "entity",
                "lane",
                "road",
                "trajectory",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP CoordinateSystem();

            OPENSCENARIOLIB_EXP CoordinateSystem(CoordinateSystemEnum& coordinateSystem);

            OPENSCENARIOLIB_EXP CoordinateSystem(const CoordinateSystemEnum coordinateSystem);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const CoordinateSystemEnum coordinateSystem);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const CoordinateSystemEnum coordinateSystem);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const CoordinateSystemEnum coordinateSystem);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP CoordinateSystem(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP CoordinateSystem& operator= (const CoordinateSystemEnum &rhs);

            OPENSCENARIOLIB_EXP CoordinateSystem& operator= (const CoordinateSystem &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const CoordinateSystemEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static CoordinateSystemEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Defines the directions in the entity coordinate system.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Lateral direction (along the y-axis).
         * <li>Longitudinal direction (along the x-axis).
         * <li>Vertical direction (along the z-axis).
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class DirectionalDimension 
        {
        public:
            enum DirectionalDimensionEnum
            {
                UNKNOWN = -1,
                LATERAL,
                LONGITUDINAL,
                VERTICAL,
            };

        private:
            std::string _literal;
            DirectionalDimensionEnum _directionalDimensionEnum;
            static std::map<std::string, DirectionalDimensionEnum> _stringToEnum;

        public:
            const std::vector<std::string> kDirectionalDimensionEnumString 
            {
                "UNKNOWN",
                "lateral",
                "longitudinal",
                "vertical",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP DirectionalDimension();

            OPENSCENARIOLIB_EXP DirectionalDimension(DirectionalDimensionEnum& directionalDimension);

            OPENSCENARIOLIB_EXP DirectionalDimension(const DirectionalDimensionEnum directionalDimension);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const DirectionalDimensionEnum directionalDimension);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const DirectionalDimensionEnum directionalDimension);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const DirectionalDimensionEnum directionalDimension);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP DirectionalDimension(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP DirectionalDimension& operator= (const DirectionalDimensionEnum &rhs);

            OPENSCENARIOLIB_EXP DirectionalDimension& operator= (const DirectionalDimension &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const DirectionalDimensionEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static DirectionalDimensionEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const DynamicsDimensionEnum dynamicsDimension);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const DynamicsDimensionEnum dynamicsDimension);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const DynamicsDimensionEnum dynamicsDimension);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Function type used to represent the change of a given variable over time or distance.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Cubical transition f(x)=A*x^3+B*x^2+C*x+D with the constraint that the gradient must be zero at start and end.
         * <li>Value changes in a linear function: f(x) = f_0 + rate * x.
         * <li>Sinusoidal transition f(x)=A*sin(x)+B with the constraint that the gradient must be zero at start and end.
         * <li>The target value is set instantaneously. Does not consume simulation time.
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const DynamicsShapeEnum dynamicsShape);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const DynamicsShapeEnum dynamicsShape);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const DynamicsShapeEnum dynamicsShape);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Type of control actuation when following a lateral or longitudinal trajectory, shape or profile.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Follow the lateral and/or longitudinal target value as good as possible by observing the dynamic constraints of the 
         * entity (e.g. for a driver model).
         * <li>Follow the trajectory, shape or profile exactly by ignoring the dynamic constraints of the entity.
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const FollowingModeEnum followingMode);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const FollowingModeEnum followingMode);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const FollowingModeEnum followingMode);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of cloud states using the fractional cloud cover in oktas.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>8/8 of the sky is covered with clouds (equivalent to the deprecated 'overcast' CloudState)
         * <li>5/8 of the sky is covered with clouds
         * <li>4/8 of the sky is covered with clouds (equivalent to the deprecated 'cloudy' CloudState)
         * <li>sky obscured, e.g. in dense fog (equivalent to the deprecated 'skyOff' CloudState)
         * <li>1/8 of the sky is covered with clouds
         * <li>7/8 of the sky is covered with clouds
         * <li>6/8 of the sky is covered with clouds (equivalent to the deprecated 'rainy' CloudState)
         * <li>3/8 of the sky is covered with clouds
         * <li>2/8 of the sky is covered with clouds
         * <li>0/8 of the sky is covered with clouds (equivalent to the deprecated 'free' CloudState)
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class FractionalCloudCover 
        {
        public:
            enum FractionalCloudCoverEnum
            {
                UNKNOWN = -1,
                EIGHT_OKTAS,
                FIVE_OKTAS,
                FOUR_OKTAS,
                NINE_OKTAS,
                ONE_OKTAS,
                SEVEN_OKTAS,
                SIX_OKTAS,
                THREE_OKTAS,
                TWO_OKTAS,
                ZERO_OKTAS,
            };

        private:
            std::string _literal;
            FractionalCloudCoverEnum _fractionalCloudCoverEnum;
            static std::map<std::string, FractionalCloudCoverEnum> _stringToEnum;

        public:
            const std::vector<std::string> kFractionalCloudCoverEnumString 
            {
                "UNKNOWN",
                "eightOktas",
                "fiveOktas",
                "fourOktas",
                "nineOktas",
                "oneOktas",
                "sevenOktas",
                "sixOktas",
                "threeOktas",
                "twoOktas",
                "zeroOktas",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP FractionalCloudCover();

            OPENSCENARIOLIB_EXP FractionalCloudCover(FractionalCloudCoverEnum& fractionalCloudCover);

            OPENSCENARIOLIB_EXP FractionalCloudCover(const FractionalCloudCoverEnum fractionalCloudCover);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const FractionalCloudCoverEnum fractionalCloudCover);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const FractionalCloudCoverEnum fractionalCloudCover);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const FractionalCloudCoverEnum fractionalCloudCover);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP FractionalCloudCover(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP FractionalCloudCover& operator= (const FractionalCloudCoverEnum &rhs);

            OPENSCENARIOLIB_EXP FractionalCloudCover& operator= (const FractionalCloudCover &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const FractionalCloudCoverEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static FractionalCloudCoverEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A displacement relative to an entity along a lateral axis (e.g. the y axis of the entity coordinate system)
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Either left or right to the entity along the lateral dimension.
         * <li>Left to the entity along the lateral dimension.
         * <li>Right to the entity along the lateral dimension.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LateralDisplacement 
        {
        public:
            enum LateralDisplacementEnum
            {
                UNKNOWN = -1,
                ANY,
                LEFT_TO_REFERENCED_ENTITY,
                RIGHT_TO_REFERENCED_ENTITY,
            };

        private:
            std::string _literal;
            LateralDisplacementEnum _lateralDisplacementEnum;
            static std::map<std::string, LateralDisplacementEnum> _stringToEnum;

        public:
            const std::vector<std::string> kLateralDisplacementEnumString 
            {
                "UNKNOWN",
                "any",
                "leftToReferencedEntity",
                "rightToReferencedEntity",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP LateralDisplacement();

            OPENSCENARIOLIB_EXP LateralDisplacement(LateralDisplacementEnum& lateralDisplacement);

            OPENSCENARIOLIB_EXP LateralDisplacement(const LateralDisplacementEnum lateralDisplacement);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const LateralDisplacementEnum lateralDisplacement);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const LateralDisplacementEnum lateralDisplacement);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const LateralDisplacementEnum lateralDisplacement);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP LateralDisplacement(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP LateralDisplacement& operator= (const LateralDisplacementEnum &rhs);

            OPENSCENARIOLIB_EXP LateralDisplacement& operator= (const LateralDisplacement &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const LateralDisplacementEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static LateralDisplacementEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the light mode.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Light is flashing. Therefore, flashingOnDuration and flashingOffDuration have to be set.
         * <li>Light is switched off.
         * <li>Light is switched on.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LightMode 
        {
        public:
            enum LightModeEnum
            {
                UNKNOWN = -1,
                FLASHING,
                OFF,
                ON,
            };

        private:
            std::string _literal;
            LightModeEnum _lightModeEnum;
            static std::map<std::string, LightModeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kLightModeEnumString 
            {
                "UNKNOWN",
                "flashing",
                "off",
                "on",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP LightMode();

            OPENSCENARIOLIB_EXP LightMode(LightModeEnum& lightMode);

            OPENSCENARIOLIB_EXP LightMode(const LightModeEnum lightMode);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const LightModeEnum lightMode);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const LightModeEnum lightMode);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const LightModeEnum lightMode);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP LightMode(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP LightMode& operator= (const LightModeEnum &rhs);

            OPENSCENARIOLIB_EXP LightMode& operator= (const LightMode &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const LightModeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static LightModeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * A displacement relative to an entity along a longitudinal axis (e.g. the x axis of the entity coordinate system)
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Either ahead or behind the entity along the longitudinal dimension.
         * <li>Ahead of the entity along the longitudinal dimension.
         * <li>Behind the entity along the longitudinal dimension.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class LongitudinalDisplacement 
        {
        public:
            enum LongitudinalDisplacementEnum
            {
                UNKNOWN = -1,
                ANY,
                LEADING_REFERENCED_ENTITY,
                TRAILING_REFERENCED_ENTITY,
            };

        private:
            std::string _literal;
            LongitudinalDisplacementEnum _longitudinalDisplacementEnum;
            static std::map<std::string, LongitudinalDisplacementEnum> _stringToEnum;

        public:
            const std::vector<std::string> kLongitudinalDisplacementEnumString 
            {
                "UNKNOWN",
                "any",
                "leadingReferencedEntity",
                "trailingReferencedEntity",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP LongitudinalDisplacement();

            OPENSCENARIOLIB_EXP LongitudinalDisplacement(LongitudinalDisplacementEnum& longitudinalDisplacement);

            OPENSCENARIOLIB_EXP LongitudinalDisplacement(const LongitudinalDisplacementEnum longitudinalDisplacement);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const LongitudinalDisplacementEnum longitudinalDisplacement);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const LongitudinalDisplacementEnum longitudinalDisplacement);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const LongitudinalDisplacementEnum longitudinalDisplacement);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP LongitudinalDisplacement(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP LongitudinalDisplacement& operator= (const LongitudinalDisplacementEnum &rhs);

            OPENSCENARIOLIB_EXP LongitudinalDisplacement& operator= (const LongitudinalDisplacement &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const LongitudinalDisplacementEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static LongitudinalDisplacementEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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
            static std::map<MiscObjectCategoryEnum, bool> _enumToDeprecated;
            static std::map<MiscObjectCategoryEnum, std::string> _enumToDeprecatedVersion;
            static std::map<MiscObjectCategoryEnum, std::string> _enumToDeprecatedComment;          	
            
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const MiscObjectCategoryEnum miscObjectCategory);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const MiscObjectCategoryEnum miscObjectCategory);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const MiscObjectCategoryEnum miscObjectCategory);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Types of entity objects available in a scenario.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>An external object reference.
         * <li>Miscellaneous object.
         * <li>A Pedestrian.
         * <li>A Vehicle.
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
                EXTERNAL,
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
                "external",
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const ObjectTypeEnum objectType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const ObjectTypeEnum objectType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const ObjectTypeEnum objectType);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Allowed data types for parameters defined in a parameter declaration. The types mentioned here match the corresponding
         * datatypes the W3C XML Schema defines.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Boolean - true or false.
         * <li>DateTime - Instant of time (Gregorian calendar).
         * <li>Double - IEEE 64-bit floating-point.
         * <li>Int - 32-bit signed integer.
         * <li>Integer (32-bit signed integer, equivalent to "int").
         * <li>String.
         * <li>UnsignedInt - Unsigned integer of 32 bits.
         * <li>UnsignedShort - Unsigned integer of 16 bits.
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
                INT,
                INTEGER,
                STRING,
                UNSIGNED_INT,
                UNSIGNED_SHORT,
            };

        private:
            std::string _literal;
            ParameterTypeEnum _parameterTypeEnum;
            static std::map<std::string, ParameterTypeEnum> _stringToEnum;
            static std::map<ParameterTypeEnum, bool> _enumToDeprecated;
            static std::map<ParameterTypeEnum, std::string> _enumToDeprecatedVersion;
            static std::map<ParameterTypeEnum, std::string> _enumToDeprecatedComment;          	
            
        public:
            const std::vector<std::string> kParameterTypeEnumString 
            {
                "UNKNOWN",
                "boolean",
                "dateTime",
                "double",
                "int",
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const ParameterTypeEnum parameterType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const ParameterTypeEnum parameterType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const ParameterTypeEnum parameterType);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const PedestrianCategoryEnum pedestrianCategory);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const PedestrianCategoryEnum pedestrianCategory);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const PedestrianCategoryEnum pedestrianCategory);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of a pedestrian's gesture.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Pedestrian is drinking a coffee with left hand.
         * <li>Pedestrian is drinking a coffee with the right hand.
         * <li>Pedestrian is crossing both arms.
         * <li>Pedestrian is holding a phone in the left hand for a call.
         * <li>Pedestrian is holding a phone in the right hand for a call.
         * <li>Pedestrian is holding a phone in the left hand for texting.
         * <li>Pedestrian is holding a phone in the right hand for texting.
         * <li>Pedestrian is holding a sandwich with the left hand.
         * <li>Pedestrian is holding a sandwich with the right hand.
         * <li>Pedestrian is holding a umbrella in the left hand.
         * <li>Pedestrian is holding a umbrella in the right hand.
         * <li>Pedestrian is waving with the left arm.
         * <li>Pedestrian is waving with the right arm.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianGestureType 
        {
        public:
            enum PedestrianGestureTypeEnum
            {
                UNKNOWN = -1,
                COFFEE_LEFT_HAND,
                COFFEE_RIGHT_HAND,
                CROSS_ARMS,
                PHONE_CALL_LEFT_HAND,
                PHONE_CALL_RIGHT_HAND,
                PHONE_TEXT_LEFT_HAND,
                PHONE_TEXT_RIGHT_HAND,
                SANDWICH_LEFT_HAND,
                SANDWICH_RIGHT_HAND,
                UMBRELLA_LEFT_HAND,
                UMBRELLA_RIGHT_HAND,
                WAVING_LEFT_ARM,
                WAVING_RIGHT_ARM,
            };

        private:
            std::string _literal;
            PedestrianGestureTypeEnum _pedestrianGestureTypeEnum;
            static std::map<std::string, PedestrianGestureTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kPedestrianGestureTypeEnumString 
            {
                "UNKNOWN",
                "coffeeLeftHand",
                "coffeeRightHand",
                "crossArms",
                "phoneCallLeftHand",
                "phoneCallRightHand",
                "phoneTextLeftHand",
                "phoneTextRightHand",
                "sandwichLeftHand",
                "sandwichRightHand",
                "umbrellaLeftHand",
                "umbrellaRightHand",
                "wavingLeftArm",
                "wavingRightArm",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP PedestrianGestureType();

            OPENSCENARIOLIB_EXP PedestrianGestureType(PedestrianGestureTypeEnum& pedestrianGestureType);

            OPENSCENARIOLIB_EXP PedestrianGestureType(const PedestrianGestureTypeEnum pedestrianGestureType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const PedestrianGestureTypeEnum pedestrianGestureType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const PedestrianGestureTypeEnum pedestrianGestureType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const PedestrianGestureTypeEnum pedestrianGestureType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP PedestrianGestureType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP PedestrianGestureType& operator= (const PedestrianGestureTypeEnum &rhs);

            OPENSCENARIOLIB_EXP PedestrianGestureType& operator= (const PedestrianGestureType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const PedestrianGestureTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static PedestrianGestureTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of a pedestrian's motion.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Pedestrian is bending down.
         * <li>Pedestrian is crawling.
         * <li>Pedestrian is cycling.
         * <li>Pedestrian is ducking.
         * <li>Pedestrian is jumping.
         * <li>Pedestrian is lying down.
         * <li>Pedestrian is reeling.
         * <li>Pedestrian is running.
         * <li>Pedestrian is sitting.
         * <li>Pedestrian is crouching/squatting.
         * <li>Pedestrian is standing.
         * <li>Pedestrian is walking.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class PedestrianMotionType 
        {
        public:
            enum PedestrianMotionTypeEnum
            {
                UNKNOWN = -1,
                BENDING_DOWN,
                CRAWLING,
                CYCLING,
                DUCKING,
                JUMPING,
                LYING,
                REELING,
                RUNNING,
                SITTING,
                SQUATTING,
                STANDING,
                WALKING,
            };

        private:
            std::string _literal;
            PedestrianMotionTypeEnum _pedestrianMotionTypeEnum;
            static std::map<std::string, PedestrianMotionTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kPedestrianMotionTypeEnumString 
            {
                "UNKNOWN",
                "bendingDown",
                "crawling",
                "cycling",
                "ducking",
                "jumping",
                "lying",
                "reeling",
                "running",
                "sitting",
                "squatting",
                "standing",
                "walking",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP PedestrianMotionType();

            OPENSCENARIOLIB_EXP PedestrianMotionType(PedestrianMotionTypeEnum& pedestrianMotionType);

            OPENSCENARIOLIB_EXP PedestrianMotionType(const PedestrianMotionTypeEnum pedestrianMotionType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const PedestrianMotionTypeEnum pedestrianMotionType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const PedestrianMotionTypeEnum pedestrianMotionType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const PedestrianMotionTypeEnum pedestrianMotionType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP PedestrianMotionType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP PedestrianMotionType& operator= (const PedestrianMotionTypeEnum &rhs);

            OPENSCENARIOLIB_EXP PedestrianMotionType& operator= (const PedestrianMotionType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const PedestrianMotionTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static PedestrianMotionTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const PrecipitationTypeEnum precipitationType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const PrecipitationTypeEnum precipitationType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const PrecipitationTypeEnum precipitationType);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Rules that govern interaction between events that belong to the same maneuver.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>If a starting event has priority Override, all events in running state, within the same scope (maneuver) as the 
         * starting event, should be issued a stop command (stop transition).
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
                OVERRIDE,
                OVERWRITE,
                PARALLEL,
                SKIP,
            };

        private:
            std::string _literal;
            PriorityEnum _priorityEnum;
            static std::map<std::string, PriorityEnum> _stringToEnum;
            static std::map<PriorityEnum, bool> _enumToDeprecated;
            static std::map<PriorityEnum, std::string> _enumToDeprecatedVersion;
            static std::map<PriorityEnum, std::string> _enumToDeprecatedComment;          	
            
        public:
            const std::vector<std::string> kPriorityEnumString 
            {
                "UNKNOWN",
                "override",
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const PriorityEnum priority);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const PriorityEnum priority);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const PriorityEnum priority);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const ReferenceContextEnum referenceContext);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const ReferenceContextEnum referenceContext);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const ReferenceContextEnum referenceContext);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the coordinate system dimension(s) to be used for calculating distances.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Cartesian distance offset. If used together with CoordinateSystem, then the value of the CoordinateSystem is not 
         * considered.
         * <li>
Absolute magnitude of the euclidean distance vector. CoordinateSystem defaults to entity. If CoordinateSystem is 
         * defined by user, that value is overridden.
         * <li>
Smallest lateral distance (y for cartesian coordinate systems, t for road-based coordinate systems).
         * <li>Smallest longitudinal distance (x for cartesian coordinate systems, s for road-based coordinate systems).
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
                EUCLIDIAN_DISTANCE,
                LATERAL,
                LONGITUDINAL,
            };

        private:
            std::string _literal;
            RelativeDistanceTypeEnum _relativeDistanceTypeEnum;
            static std::map<std::string, RelativeDistanceTypeEnum> _stringToEnum;
            static std::map<RelativeDistanceTypeEnum, bool> _enumToDeprecated;
            static std::map<RelativeDistanceTypeEnum, std::string> _enumToDeprecatedVersion;
            static std::map<RelativeDistanceTypeEnum, std::string> _enumToDeprecatedComment;          	
            
        public:
            const std::vector<std::string> kRelativeDistanceTypeEnumString 
            {
                "UNKNOWN",
                "cartesianDistance",
                "euclidianDistance",
                "lateral",
                "longitudinal",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP RelativeDistanceType();

            OPENSCENARIOLIB_EXP RelativeDistanceType(RelativeDistanceTypeEnum& relativeDistanceType);

            OPENSCENARIOLIB_EXP RelativeDistanceType(const RelativeDistanceTypeEnum relativeDistanceType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const RelativeDistanceTypeEnum relativeDistanceType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const RelativeDistanceTypeEnum relativeDistanceType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const RelativeDistanceTypeEnum relativeDistanceType);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Roles for entity objects of type Vehicle or Pedestrian. The default role if not specified is None.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>The entity role is ambulance.
         * <li>The entity role is civil.
         * <li>The entity role is fire fighting, e.g. fire engine.
         * <li>The entity role is military, e.g. camouflaged truck.
         * <li>The entity has no specific role.
         * <li>The entity role is police.
         * <li>The entity role is public transport, e.g. a school bus.
         * <li>The entity role is roadside assistance, e.g. tow truck.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class Role 
        {
        public:
            enum RoleEnum
            {
                UNKNOWN = -1,
                AMBULANCE,
                CIVIL,
                FIRE,
                MILITARY,
                NONE,
                POLICE,
                PUBLIC_TRANSPORT,
                ROAD_ASSISTANCE,
            };

        private:
            std::string _literal;
            RoleEnum _roleEnum;
            static std::map<std::string, RoleEnum> _stringToEnum;

        public:
            const std::vector<std::string> kRoleEnumString 
            {
                "UNKNOWN",
                "ambulance",
                "civil",
                "fire",
                "military",
                "none",
                "police",
                "publicTransport",
                "roadAssistance",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP Role();

            OPENSCENARIOLIB_EXP Role(RoleEnum& role);

            OPENSCENARIOLIB_EXP Role(const RoleEnum role);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const RoleEnum role);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const RoleEnum role);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const RoleEnum role);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP Role(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP Role& operator= (const RoleEnum &rhs);

            OPENSCENARIOLIB_EXP Role& operator= (const Role &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const RoleEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static RoleEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const RouteStrategyEnum routeStrategy);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const RouteStrategyEnum routeStrategy);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const RouteStrategyEnum routeStrategy);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Algorithm for path selection/calculation between two positions across roads. To be used for distance calculations in
         * road/lane coordinates during runtime.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Use the route which has already been assigned to the entity at the start position at the point in time when the 
         * distance shall be calculated.
         * <li>Calculate the route with the shortest travelling time between start and target position.
         * <li>Calculate the route with as few junctions as possible between start and target position.
         * <li>Calculate the route with the shortest path between start and target position.
         * <li>It is up to the simulator how to calculate the route between the start and target positions.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class RoutingAlgorithm 
        {
        public:
            enum RoutingAlgorithmEnum
            {
                UNKNOWN = -1,
                ASSIGNED_ROUTE,
                FASTEST,
                LEAST_INTERSECTIONS,
                SHORTEST,
                UNDEFINED,
            };

        private:
            std::string _literal;
            RoutingAlgorithmEnum _routingAlgorithmEnum;
            static std::map<std::string, RoutingAlgorithmEnum> _stringToEnum;

        public:
            const std::vector<std::string> kRoutingAlgorithmEnumString 
            {
                "UNKNOWN",
                "assignedRoute",
                "fastest",
                "leastIntersections",
                "shortest",
                "undefined",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP RoutingAlgorithm();

            OPENSCENARIOLIB_EXP RoutingAlgorithm(RoutingAlgorithmEnum& routingAlgorithm);

            OPENSCENARIOLIB_EXP RoutingAlgorithm(const RoutingAlgorithmEnum routingAlgorithm);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const RoutingAlgorithmEnum routingAlgorithm);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const RoutingAlgorithmEnum routingAlgorithm);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const RoutingAlgorithmEnum routingAlgorithm);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP RoutingAlgorithm(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP RoutingAlgorithm& operator= (const RoutingAlgorithmEnum &rhs);

            OPENSCENARIOLIB_EXP RoutingAlgorithm& operator= (const RoutingAlgorithm &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const RoutingAlgorithmEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static RoutingAlgorithmEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Rules (operators) used to compare quantitative variables or signals.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>'Equal to' operator.
         * <li>'Greater or equal' operator.
         * <li>'Greater than' operator.
         * <li>'Less or equal' operator.
         * <li>'Less than' operator.
         * <li>'Not equal' operator.
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
                GREATER_OR_EQUAL,
                GREATER_THAN,
                LESS_OR_EQUAL,
                LESS_THAN,
                NOT_EQUAL_TO,
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
                "greaterOrEqual",
                "greaterThan",
                "lessOrEqual",
                "lessThan",
                "notEqualTo",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP Rule();

            OPENSCENARIOLIB_EXP Rule(RuleEnum& rule);

            OPENSCENARIOLIB_EXP Rule(const RuleEnum rule);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const RuleEnum rule);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const RuleEnum rule);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const RuleEnum rule);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Type definition that relates a speed value relative to another one.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>The relative value is interpreted as a difference to a referenced value. Unit: [m/s]. As an example, a speed value 
         * of 10 equals a speed that's 10m/s faster than the reference speed.
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const SpeedTargetValueTypeEnum speedTargetValueType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const SpeedTargetValueTypeEnum speedTargetValueType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const SpeedTargetValueTypeEnum speedTargetValueType);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const StoryboardElementStateEnum storyboardElementState);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const StoryboardElementStateEnum storyboardElementState);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const StoryboardElementStateEnum storyboardElementState);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const StoryboardElementTypeEnum storyboardElementType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const StoryboardElementTypeEnum storyboardElementType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const StoryboardElementTypeEnum storyboardElementType);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const TriggeringEntitiesRuleEnum triggeringEntitiesRule);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const TriggeringEntitiesRuleEnum triggeringEntitiesRule);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const TriggeringEntitiesRuleEnum triggeringEntitiesRule);

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
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
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

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const VehicleCategoryEnum vehicleCategory);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const VehicleCategoryEnum vehicleCategory);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const VehicleCategoryEnum vehicleCategory);

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


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of vehicle component types.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Front left door of a vehicle.
         * <li>Front right door of a vehicle.
         * <li>Rear left door of a vehicle.
         * <li>Rear right door of a vehicle.
         * <li>Hood of a vehicle.
         * <li>All left side mirrors of a vehicle.
         * <li>All right side mirrors of a vehicle.
         * <li>All side mirrors of a vehicle.
         * <li>Trunk of a vehicle.
         * <li>Front left window of a vehicle.
         * <li>Front right window of a vehicle.
         * <li>Rear left window of a vehicle.
         * <li>Rear right window of a vehicle.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleComponentType 
        {
        public:
            enum VehicleComponentTypeEnum
            {
                UNKNOWN = -1,
                DOOR_FRONT_LEFT,
                DOOR_FRONT_RIGHT,
                DOOR_REAR_LEFT,
                DOOR_REAR_RIGHT,
                HOOD,
                SIDE_MIRROR_LEFT,
                SIDE_MIRROR_RIGHT,
                SIDE_MIRRORS,
                TRUNK,
                WINDOW_FRONT_LEFT,
                WINDOW_FRONT_RIGHT,
                WINDOW_REAR_LEFT,
                WINDOW_REAR_RIGHT,
            };

        private:
            std::string _literal;
            VehicleComponentTypeEnum _vehicleComponentTypeEnum;
            static std::map<std::string, VehicleComponentTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kVehicleComponentTypeEnumString 
            {
                "UNKNOWN",
                "doorFrontLeft",
                "doorFrontRight",
                "doorRearLeft",
                "doorRearRight",
                "hood",
                "sideMirrorLeft",
                "sideMirrorRight",
                "sideMirrors",
                "trunk",
                "windowFrontLeft",
                "windowFrontRight",
                "windowRearLeft",
                "windowRearRight",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP VehicleComponentType();

            OPENSCENARIOLIB_EXP VehicleComponentType(VehicleComponentTypeEnum& vehicleComponentType);

            OPENSCENARIOLIB_EXP VehicleComponentType(const VehicleComponentTypeEnum vehicleComponentType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const VehicleComponentTypeEnum vehicleComponentType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const VehicleComponentTypeEnum vehicleComponentType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const VehicleComponentTypeEnum vehicleComponentType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP VehicleComponentType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP VehicleComponentType& operator= (const VehicleComponentTypeEnum &rhs);

            OPENSCENARIOLIB_EXP VehicleComponentType& operator= (const VehicleComponentType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const VehicleComponentTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static VehicleComponentTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of vehicle light types.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Brake lights of a vehicle.
         * <li>Daytime running lights of a vehicle.
         * <li>All fog lights of a vehicle.
         * <li>Front fog lights of a vehicle.
         * <li>Rear fog lights of a vehicle.
         * <li>High beam of a vehicle.
         * <li>Left indicators of a vehicle.
         * <li>Right indicators of a vehicle.
         * <li>License plate illumination of a vehicle.
         * <li>Low beam of a vehicle.
         * <li>Reversing lights of a vehicle.
         * <li>E.g. emergency light of a emergency-, police-, ... vehicle or service lights.
         * <li>Warning lights of a vehicle.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class VehicleLightType 
        {
        public:
            enum VehicleLightTypeEnum
            {
                UNKNOWN = -1,
                BRAKE_LIGHTS,
                DAYTIME_RUNNING_LIGHTS,
                FOG_LIGHTS,
                FOG_LIGHTS_FRONT,
                FOG_LIGHTS_REAR,
                HIGH_BEAM,
                INDICATOR_LEFT,
                INDICATOR_RIGHT,
                LICENSE_PLATE_ILLUMINATION,
                LOW_BEAM,
                REVERSING_LIGHTS,
                SPECIAL_PURPOSE_LIGHTS,
                WARNING_LIGHTS,
            };

        private:
            std::string _literal;
            VehicleLightTypeEnum _vehicleLightTypeEnum;
            static std::map<std::string, VehicleLightTypeEnum> _stringToEnum;

        public:
            const std::vector<std::string> kVehicleLightTypeEnumString 
            {
                "UNKNOWN",
                "brakeLights",
                "daytimeRunningLights",
                "fogLights",
                "fogLightsFront",
                "fogLightsRear",
                "highBeam",
                "indicatorLeft",
                "indicatorRight",
                "licensePlateIllumination",
                "lowBeam",
                "reversingLights",
                "specialPurposeLights",
                "warningLights",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP VehicleLightType();

            OPENSCENARIOLIB_EXP VehicleLightType(VehicleLightTypeEnum& vehicleLightType);

            OPENSCENARIOLIB_EXP VehicleLightType(const VehicleLightTypeEnum vehicleLightType);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const VehicleLightTypeEnum vehicleLightType);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const VehicleLightTypeEnum vehicleLightType);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const VehicleLightTypeEnum vehicleLightType);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP VehicleLightType(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP VehicleLightType& operator= (const VehicleLightTypeEnum &rhs);

            OPENSCENARIOLIB_EXP VehicleLightType& operator= (const VehicleLightType &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const VehicleLightTypeEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static VehicleLightTypeEnum GetFromLiteral(const std::string literal_);

        };


        /**
         * This is a automatic generated file according to the OpenSCENARIO specification version 1.2
         * <p>
         * From OpenSCENARIO class model specification:
         * Definition of the wetness of the road.
         * 
         * Values from OpenSCENARIO class model specification:
         * <ul>
         * <li>Not wet.
         * <li>Road completely covered with water. Water depth &gt; 5cm.
         * <li>Road completely covered with water. No puddles anymore.
         * <li>Wet but no puddles are formed.
         * <li>Wet, puddles are formed.
         * </ul>
         * 
         * @author RA Consulting OpenSCENARIO generation facility
        */
        class Wetness 
        {
        public:
            enum WetnessEnum
            {
                UNKNOWN = -1,
                DRY,
                HIGH_FLOODED,
                LOW_FLOODED,
                MOIST,
                WET_WITH_PUDDLES,
            };

        private:
            std::string _literal;
            WetnessEnum _wetnessEnum;
            static std::map<std::string, WetnessEnum> _stringToEnum;

        public:
            const std::vector<std::string> kWetnessEnumString 
            {
                "UNKNOWN",
                "dry",
                "highFlooded",
                "lowFlooded",
                "moist",
                "wetWithPuddles",
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP Wetness();

            OPENSCENARIOLIB_EXP Wetness(WetnessEnum& wetness);

            OPENSCENARIOLIB_EXP Wetness(const WetnessEnum wetness);

			OPENSCENARIOLIB_EXP static bool IsDeprecated(const WetnessEnum wetness);
			
			OPENSCENARIOLIB_EXP static std::string GetDeprecatedVersion(const WetnessEnum wetness);

			OPENSCENARIOLIB_EXP static std::string GetDeprecatedComment(const WetnessEnum wetness);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP Wetness(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP Wetness& operator= (const WetnessEnum &rhs);

            OPENSCENARIOLIB_EXP Wetness& operator= (const Wetness &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const WetnessEnum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static WetnessEnum GetFromLiteral(const std::string literal_);

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
