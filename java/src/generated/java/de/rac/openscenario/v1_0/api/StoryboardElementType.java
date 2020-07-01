package de.rac.openscenario.v1_0.api;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Types of storyboard elements in a scenario.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>The referenced StoryboardElement instance is a Story.
 * <li>The referenced StoryboardElement instance is an Act.
 * <li>The referenced StoryboardElement instance is a Maneuver.
 * <li>The referenced StoryboardElement instance is an Event.
 * <li>The referenced StoryboardElement instance is an Action.
 * <li>The referenced StoryboardElement instance is a ManeuverGroup.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum StoryboardElementType {	
	STORY("story"),
	ACT("act"),
	MANEUVER("maneuver"),
	EVENT("event"),
	ACTION("action"),
	MANEUVER_GROUP("maneuverGroup");
	
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
	StoryboardElementType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static StoryboardElementType getFromLiteral(String literal)
	{
		if(literal.equals("story"))
		{
			return STORY;
		} else 
		if(literal.equals("act"))
		{
			return ACT;
		} else 
		if(literal.equals("maneuver"))
		{
			return MANEUVER;
		} else 
		if(literal.equals("event"))
		{
			return EVENT;
		} else 
		if(literal.equals("action"))
		{
			return ACTION;
		} else 
		if(literal.equals("maneuverGroup"))
		{
			return MANEUVER_GROUP;
		} else 
		{
			return null;
		}
	}

}

