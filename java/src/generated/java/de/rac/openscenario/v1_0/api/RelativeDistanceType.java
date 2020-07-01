package de.rac.openscenario.v1_0.api;

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
public enum RelativeDistanceType {	
	LONGITUDINAL("longitudinal"),
	LATERAL("lateral"),
	CARTESIAN_DISTANCE("cartesianDistance");
	
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
	RelativeDistanceType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static RelativeDistanceType getFromLiteral(String literal)
	{
		if(literal.equals("longitudinal"))
		{
			return LONGITUDINAL;
		} else 
		if(literal.equals("lateral"))
		{
			return LATERAL;
		} else 
		if(literal.equals("cartesianDistance"))
		{
			return CARTESIAN_DISTANCE;
		} else 
		{
			return null;
		}
	}

}

