package de.rac.openscenario.v1_0.api;

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
public enum SpeedTargetValueType {	
	DELTA("delta"),
	FACTOR("factor");
	
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
	SpeedTargetValueType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static SpeedTargetValueType getFromLiteral(String literal)
	{
		if(literal.equals("delta"))
		{
			return DELTA;
		} else 
		if(literal.equals("factor"))
		{
			return FACTOR;
		} else 
		{
			return null;
		}
	}

}

