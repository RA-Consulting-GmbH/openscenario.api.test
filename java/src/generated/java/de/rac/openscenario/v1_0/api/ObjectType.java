package de.rac.openscenario.v1_0.api;

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
public enum ObjectType {	
	PEDESTRIAN("pedestrian"),
	VEHICLE("vehicle"),
	MISCELLANEOUS("miscellaneous");
	
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
	ObjectType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static ObjectType getFromLiteral(String literal)
	{
		if(literal.equals("pedestrian"))
		{
			return PEDESTRIAN;
		} else 
		if(literal.equals("vehicle"))
		{
			return VEHICLE;
		} else 
		if(literal.equals("miscellaneous"))
		{
			return MISCELLANEOUS;
		} else 
		{
			return null;
		}
	}

}

