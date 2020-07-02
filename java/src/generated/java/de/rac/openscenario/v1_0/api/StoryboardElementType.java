/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
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

