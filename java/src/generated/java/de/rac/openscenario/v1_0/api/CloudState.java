package de.rac.openscenario.v1_0.api;

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
public enum CloudState {	
	SKY_OFF("skyOff"),
	FREE("free"),
	CLOUDY("cloudy"),
	OVERCAST("overcast"),
	RAINY("rainy");
	
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
	CloudState(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static CloudState getFromLiteral(String literal)
	{
		if(literal.equals("skyOff"))
		{
			return SKY_OFF;
		} else 
		if(literal.equals("free"))
		{
			return FREE;
		} else 
		if(literal.equals("cloudy"))
		{
			return CLOUDY;
		} else 
		if(literal.equals("overcast"))
		{
			return OVERCAST;
		} else 
		if(literal.equals("rainy"))
		{
			return RAINY;
		} else 
		{
			return null;
		}
	}

}

