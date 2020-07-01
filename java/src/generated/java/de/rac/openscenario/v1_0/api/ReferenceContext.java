package de.rac.openscenario.v1_0.api;

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
public enum ReferenceContext {	
	RELATIVE("relative"),
	ABSOLUTE("absolute");
	
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
	ReferenceContext(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static ReferenceContext getFromLiteral(String literal)
	{
		if(literal.equals("relative"))
		{
			return RELATIVE;
		} else 
		if(literal.equals("absolute"))
		{
			return ABSOLUTE;
		} else 
		{
			return null;
		}
	}

}

