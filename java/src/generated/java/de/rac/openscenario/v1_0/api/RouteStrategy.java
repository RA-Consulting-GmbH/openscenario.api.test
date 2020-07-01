package de.rac.openscenario.v1_0.api;

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
public enum RouteStrategy {	
	FASTEST("fastest"),
	SHORTEST("shortest"),
	LEAST_INTERSECTIONS("leastIntersections"),
	RANDOM("random");
	
	private final String literal;
	
	/**
	 * The literal from this enumeration value.
	 * @return the literal as defined in OpenSCENARIO
	 */
	public String getLiteral()
	{
		return literal;
	}
	
	/**
	 * Constructor using the literal
	 * @param the literal as defined in OpenSCENARIO
	 */
	RouteStrategy(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static RouteStrategy getFromLiteral(String literal)
	{
		if(literal.equals("fastest"))
		{
			return FASTEST;
		} else 
		if(literal.equals("shortest"))
		{
			return SHORTEST;
		} else 
		if(literal.equals("leastIntersections"))
		{
			return LEAST_INTERSECTIONS;
		} else 
		if(literal.equals("random"))
		{
			return RANDOM;
		} else 
		{
			return null;
		}
	}

}

