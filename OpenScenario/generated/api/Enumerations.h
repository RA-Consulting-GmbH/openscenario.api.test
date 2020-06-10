#pragma once
#include <string>
#include <map>
#include <vector>

namespace RAC_OPENSCENARIO
{
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of cloud states.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>Turns off the sky visualization.
 * <li>Cloud free conditions.
 * <li>Cloudy. There are more clouds than sunshine.
 * <li>Overcast sky. Dull and gray looking.
 * <li>Rain clouds.
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
            SKY_OFF,
            FREE,
            CLOUDY,
            OVERCAST,
            RAINY,
        };

    private:
        std::string _literal;
        static std::map<std::string, CloudStateEnum> _stringToEnum;

    public:
        const std::vector<std::string> CloudStateEnumString 
        {
            "skyOff",
            "free",
            "cloudy",
            "overcast",
            "rainy",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        CloudState(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static CloudStateEnum GetFromLiteral(std::string literal_)
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
 * <li>A condition defined with a rising edge shall return true at discrete time t if its logical expression is true at 
 * discrete time t and its logical expression was false at discrete time t-ts, where ts is the simulation sampling time.
 * <li>A condition defined with a falling edge shall return true at discrete time t if its logical expression is false at 
 * discrete time t and its logical expression was true at discrete time t-ts, where ts is the simulation sampling time.
 * <li>A condition defined with a 'risingOrFalling' edge shall return true at discrete time t if its logical expression is 
 * true at discrete time t and its logical expression was false at discrete time t-ts OR if its logical expression is false
 * at discrete time t and its logical expression was true at discrete time t-ts. ts is the simulation sampling time.
 * <li>A condition defined with a 'none' edge shall return true at discrete time t if its logical expression is true at 
 * discrete time t.
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
            RISING,
            FALLING,
            RISING_OR_FALLING,
            NONE,
        };

    private:
        std::string _literal;
        static std::map<std::string, ConditionEdgeEnum> _stringToEnum;

    public:
        const std::vector<std::string> ConditionEdgeEnumString 
        {
            "rising",
            "falling",
            "risingOrFalling",
            "none",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        ConditionEdge(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static ConditionEdgeEnum GetFromLiteral(std::string literal_)
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
 * <li>A predefined constant rate is used to acquire the target value.
 * <li>A predefined time (duration) is used to acquire the target value.
 * <li>A predefined distance used to acquire the target value.
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
            RATE,
            TIME,
            DISTANCE,
        };

    private:
        std::string _literal;
        static std::map<std::string, DynamicsDimensionEnum> _stringToEnum;

    public:
        const std::vector<std::string> DynamicsDimensionEnumString 
        {
            "rate",
            "time",
            "distance",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        DynamicsDimension(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static DynamicsDimensionEnum GetFromLiteral(std::string literal_)
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
 * <li>Value changes in a linear function: f(x) = f_0 + rate * x.
 * <li>Cubical transition f(x)=A*x^3+B*x^2+C*x+D with the constraint that the gradient must be zero at start and end.
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
            LINEAR,
            CUBIC,
            SINUSOIDAL,
            STEP,
        };

    private:
        std::string _literal;
        static std::map<std::string, DynamicsShapeEnum> _stringToEnum;

    public:
        const std::vector<std::string> DynamicsShapeEnumString 
        {
            "linear",
            "cubic",
            "sinusoidal",
            "step",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        DynamicsShape(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static DynamicsShapeEnum GetFromLiteral(std::string literal_)
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
 * <li>Explicit definition of the lateral position of an entity.
 * <li>Follow of the steering target (e.g. for a driver model).
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
            POSITION,
            FOLLOW,
        };

    private:
        std::string _literal;
        static std::map<std::string, FollowingModeEnum> _stringToEnum;

    public:
        const std::vector<std::string> FollowingModeEnumString 
        {
            "position",
            "follow",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        FollowingMode(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static FollowingModeEnum GetFromLiteral(std::string literal_)
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
 * <li>None, other
 * <li>Not further defined obstacle
 * <li>A pole
 * <li>A tree
 * <li>Not further defined vegetation.
 * <li>A barrier.
 * <li>A building.
 * <li>A parking space.
 * <li>A patch.
 * <li>A railing or guard rail.
 * <li>A traffic island.
 * <li>A crosswalk.
 * <li>A street lamp.
 * <li>A gantry.
 * <li>A sound barrier.
 * <li>Wind.
 * <li>Not further defined road mark.
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
            NONE,
            OBSTACLE,
            POLE,
            TREE,
            VEGETATION,
            BARRIER,
            BUILDING,
            PARKING_SPACE,
            PATCH,
            RAILING,
            TRAFFIC_ISLAND,
            CROSSWALK,
            STREET_LAMP,
            GANTRY,
            SOUND_BARRIER,
            WIND,
            ROAD_MARK,
        };

    private:
        std::string _literal;
        static std::map<std::string, MiscObjectCategoryEnum> _stringToEnum;

    public:
        const std::vector<std::string> MiscObjectCategoryEnumString 
        {
            "none",
            "obstacle",
            "pole",
            "tree",
            "vegetation",
            "barrier",
            "building",
            "parkingSpace",
            "patch",
            "railing",
            "trafficIsland",
            "crosswalk",
            "streetLamp",
            "gantry",
            "soundBarrier",
            "wind",
            "roadMark",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        MiscObjectCategory(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static MiscObjectCategoryEnum GetFromLiteral(std::string literal_)
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
 * <li>A Pedestrian.
 * <li>Ac Vehicle.
 * <li>Miscellaneous object.
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
            PEDESTRIAN,
            VEHICLE,
            MISCELLANEOUS,
        };

    private:
        std::string _literal;
        static std::map<std::string, ObjectTypeEnum> _stringToEnum;

    public:
        const std::vector<std::string> ObjectTypeEnumString 
        {
            "pedestrian",
            "vehicle",
            "miscellaneous",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        ObjectType(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static ObjectTypeEnum GetFromLiteral(std::string literal_)
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
 * <li>Integer.
 * <li>Double.
 * <li>String.
 * <li>UnsignedInt.
 * <li>UnsignedShort.
 * <li>Boolean.
 * <li>DateTime.
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
            INTEGER,
            DOUBLE,
            STRING,
            UNSIGNED_INT,
            UNSIGNED_SHORT,
            BOOLEAN,
            DATE_TIME,
        };

    private:
        std::string _literal;
        static std::map<std::string, ParameterTypeEnum> _stringToEnum;

    public:
        const std::vector<std::string> ParameterTypeEnumString 
        {
            "integer",
            "double",
            "string",
            "unsignedInt",
            "unsignedShort",
            "boolean",
            "dateTime",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        ParameterType(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static ParameterTypeEnum GetFromLiteral(std::string literal_)
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
 * <li>A pedestrian.
 * <li>A wheelchair.
 * <li>An animal.
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
            PEDESTRIAN,
            WHEELCHAIR,
            ANIMAL,
        };

    private:
        std::string _literal;
        static std::map<std::string, PedestrianCategoryEnum> _stringToEnum;

    public:
        const std::vector<std::string> PedestrianCategoryEnumString 
        {
            "pedestrian",
            "wheelchair",
            "animal",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        PedestrianCategory(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static PedestrianCategoryEnum GetFromLiteral(std::string literal_)
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
        static std::map<std::string, PrecipitationTypeEnum> _stringToEnum;

    public:
        const std::vector<std::string> PrecipitationTypeEnumString 
        {
            "dry",
            "rain",
            "snow",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        PrecipitationType(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static PrecipitationTypeEnum GetFromLiteral(std::string literal_)
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
 * <li>If a starting event has priority Skip, then it will not be ran if there is any other event in the same scope 
 * (maneuver) in the running state.
 * <li>Execute in parallel to other events.
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
            SKIP,
            PARALLEL,
        };

    private:
        std::string _literal;
        static std::map<std::string, PriorityEnum> _stringToEnum;

    public:
        const std::vector<std::string> PriorityEnumString 
        {
            "overwrite",
            "skip",
            "parallel",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        Priority(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static PriorityEnum GetFromLiteral(std::string literal_)
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
 * <li>Relative reference.
 * <li>Absolute reference.
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
            RELATIVE,
            ABSOLUTE,
        };

    private:
        std::string _literal;
        static std::map<std::string, ReferenceContextEnum> _stringToEnum;

    public:
        const std::vector<std::string> ReferenceContextEnumString 
        {
            "relative",
            "absolute",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        ReferenceContext(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static ReferenceContextEnum GetFromLiteral(std::string literal_)
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
 * <li>Longitudinal distance offset.
 * <li>Lateral distance offset.
 * <li>Cartesian distance offset.
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
            LONGITUDINAL,
            LATERAL,
            CARTESIAN_DISTANCE,
        };

    private:
        std::string _literal;
        static std::map<std::string, RelativeDistanceTypeEnum> _stringToEnum;

    public:
        const std::vector<std::string> RelativeDistanceTypeEnumString 
        {
            "longitudinal",
            "lateral",
            "cartesianDistance",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        RelativeDistanceType(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static RelativeDistanceTypeEnum GetFromLiteral(std::string literal_)
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
 * <li>Shortest route.
 * <li>Route with least number of intersections.
 * <li>Random route.
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
            SHORTEST,
            LEAST_INTERSECTIONS,
            RANDOM,
        };

    private:
        std::string _literal;
        static std::map<std::string, RouteStrategyEnum> _stringToEnum;

    public:
        const std::vector<std::string> RouteStrategyEnumString 
        {
            "fastest",
            "shortest",
            "leastIntersections",
            "random",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        RouteStrategy(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static RouteStrategyEnum GetFromLiteral(std::string literal_)
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
 * <li>'Greater than' operator.
 * <li>'Less than' operator.
 * <li>'Equal to' operator.
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
            GREATER_THAN,
            LESS_THAN,
            EQUAL_TO,
        };

    private:
        std::string _literal;
        static std::map<std::string, RuleEnum> _stringToEnum;

    public:
        const std::vector<std::string> RuleEnumString 
        {
            "greaterThan",
            "lessThan",
            "equalTo",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        Rule(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static RuleEnum GetFromLiteral(std::string literal_)
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
        static std::map<std::string, SpeedTargetValueTypeEnum> _stringToEnum;

    public:
        const std::vector<std::string> SpeedTargetValueTypeEnumString 
        {
            "delta",
            "factor",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        SpeedTargetValueType(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static SpeedTargetValueTypeEnum GetFromLiteral(std::string literal_)
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
 * <li>Transition between the standby and running state. The moment the referenced StoryboardElement instance starts its 
 * execution.
 * <li>Transition between the running state and the standby state. The moment the referenced StoryboardElement terminates 
 * its execution by completing its goal.
 * <li>Transition between the running or standby states to the complete state. Occurs when the execution of the referenced 
 * StoryboardElement instance is stopped via a stop trigger or overriding.
 * <li>Transition marking the moment an element is asked to move to the running state but is instead skipped so it remains 
 * in the standby state (Only for Event instances).
 * <li>State from which the Storyboard element cannot return to the running state without external interference (forced by 
 * a parent element).
 * <li>State in which the storyboard element is executing its actions.
 * <li>State in which the storyboard element could move to the running state given a start trigger.
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
            START_TRANSITION,
            END_TRANSITION,
            STOP_TRANSITION,
            SKIP_TRANSITION,
            COMPLETE_STATE,
            RUNNING_STATE,
            STANDBY_STATE,
        };

    private:
        std::string _literal;
        static std::map<std::string, StoryboardElementStateEnum> _stringToEnum;

    public:
        const std::vector<std::string> StoryboardElementStateEnumString 
        {
            "startTransition",
            "endTransition",
            "stopTransition",
            "skipTransition",
            "completeState",
            "runningState",
            "standbyState",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        StoryboardElementState(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static StoryboardElementStateEnum GetFromLiteral(std::string literal_)
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
 * <li>The referenced StoryboardElement instance is a Story.
 * <li>The referenced StoryboardElement instance is an Act.
 * <li>The referenced StoryboardElement instance is a Maneuver.
 * <li>The referenced StoryboardElement instance is an Event.
 * <li>The referenced StoryboardElement instance is an Action.
 * <li>The referenced StoryboardElement instance is a ManeuverGroup.
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
            STORY,
            ACT,
            MANEUVER,
            EVENT,
            ACTION,
            MANEUVER_GROUP,
        };

    private:
        std::string _literal;
        static std::map<std::string, StoryboardElementTypeEnum> _stringToEnum;

    public:
        const std::vector<std::string> StoryboardElementTypeEnumString 
        {
            "story",
            "act",
            "maneuver",
            "event",
            "action",
            "maneuverGroup",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        StoryboardElementType(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static StoryboardElementTypeEnum GetFromLiteral(std::string literal_)
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
 * <li>One of the triggering entities reaching the position is enough to trigger the lane change.
 * <li>All listed triggering entities must reach the specifies position in order to start the lane change.
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
            ANY,
            ALL,
        };

    private:
        std::string _literal;
        static std::map<std::string, TriggeringEntitiesRuleEnum> _stringToEnum;

    public:
        const std::vector<std::string> TriggeringEntitiesRuleEnumString 
        {
            "any",
            "all",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        TriggeringEntitiesRule(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static TriggeringEntitiesRuleEnum GetFromLiteral(std::string literal_)
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
 * <li>The vehicle is a car.
 * <li>The vehicle is a van.
 * <li>The vehicle is a truck.
 * <li>The vehicle is a trailer.
 * <li>The vehicle is a semi trailer.
 * <li>The vehicle is a bus.
 * <li>The vehicle is a motor bike.
 * <li>The vehicle is a bicycle.
 * <li>The vehicle is a train.
 * <li>The vehicle is a tram.
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
            CAR,
            VAN,
            TRUCK,
            TRAILER,
            SEMITRAILER,
            BUS,
            MOTORBIKE,
            BICYCLE,
            TRAIN,
            TRAM,
        };

    private:
        std::string _literal;
        static std::map<std::string, VehicleCategoryEnum> _stringToEnum;

    public:
        const std::vector<std::string> VehicleCategoryEnumString 
        {
            "car",
            "van",
            "truck",
            "trailer",
            "semitrailer",
            "bus",
            "motorbike",
            "bicycle",
            "train",
            "tram",
        };

        /**
         * Constructor using the literal
         * @param literal_ as defined in OpenSCENARIO
         */
        VehicleCategory(std::string& literal_):_literal(literal_){}

        /**
         * The literal from this enumeration value.
         * @return the literal as defined in OpenSCENARIO
         */
        std::string GetLiteral() const { return _literal;}

        /**
         * The enumeration value from the literal
         * @param literal_ as defined in OpenSCENARIO
         * @return the enumeration value
         */
        static VehicleCategoryEnum GetFromLiteral(std::string literal_)
        {
            const auto kIt = _stringToEnum.find(literal_);
            if (kIt != _stringToEnum.end())
                return kIt->second;
            return UNKNOWN;
        }

    };
}

