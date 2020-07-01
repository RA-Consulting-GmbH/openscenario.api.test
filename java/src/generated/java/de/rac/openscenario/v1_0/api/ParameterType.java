package de.rac.openscenario.v1_0.api;

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
public enum ParameterType {	
	INTEGER("integer"),
	DOUBLE("double"),
	STRING("string"),
	UNSIGNED_INT("unsignedInt"),
	UNSIGNED_SHORT("unsignedShort"),
	BOOLEAN("boolean"),
	DATE_TIME("dateTime");
	
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
	ParameterType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static ParameterType getFromLiteral(String literal)
	{
		if(literal.equals("integer"))
		{
			return INTEGER;
		} else 
		if(literal.equals("double"))
		{
			return DOUBLE;
		} else 
		if(literal.equals("string"))
		{
			return STRING;
		} else 
		if(literal.equals("unsignedInt"))
		{
			return UNSIGNED_INT;
		} else 
		if(literal.equals("unsignedShort"))
		{
			return UNSIGNED_SHORT;
		} else 
		if(literal.equals("boolean"))
		{
			return BOOLEAN;
		} else 
		if(literal.equals("dateTime"))
		{
			return DATE_TIME;
		} else 
		{
			return null;
		}
	}

}

