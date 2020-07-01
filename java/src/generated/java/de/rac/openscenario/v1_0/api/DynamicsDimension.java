package de.rac.openscenario.v1_0.api;

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
public enum DynamicsDimension {	
	RATE("rate"),
	TIME("time"),
	DISTANCE("distance");
	
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
	DynamicsDimension(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static DynamicsDimension getFromLiteral(String literal)
	{
		if(literal.equals("rate"))
		{
			return RATE;
		} else 
		if(literal.equals("time"))
		{
			return TIME;
		} else 
		if(literal.equals("distance"))
		{
			return DISTANCE;
		} else 
		{
			return null;
		}
	}

}

