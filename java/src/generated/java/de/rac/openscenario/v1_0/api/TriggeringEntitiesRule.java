package de.rac.openscenario.v1_0.api;

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
public enum TriggeringEntitiesRule {	
	ANY("any"),
	ALL("all");
	
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
	TriggeringEntitiesRule(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static TriggeringEntitiesRule getFromLiteral(String literal)
	{
		if(literal.equals("any"))
		{
			return ANY;
		} else 
		if(literal.equals("all"))
		{
			return ALL;
		} else 
		{
			return null;
		}
	}

}

