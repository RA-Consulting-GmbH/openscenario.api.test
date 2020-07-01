package de.rac.openscenario.v1_0.api;

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
public enum PrecipitationType {	
	DRY("dry"),
	RAIN("rain"),
	SNOW("snow");
	
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
	PrecipitationType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static PrecipitationType getFromLiteral(String literal)
	{
		if(literal.equals("dry"))
		{
			return DRY;
		} else 
		if(literal.equals("rain"))
		{
			return RAIN;
		} else 
		if(literal.equals("snow"))
		{
			return SNOW;
		} else 
		{
			return null;
		}
	}

}

