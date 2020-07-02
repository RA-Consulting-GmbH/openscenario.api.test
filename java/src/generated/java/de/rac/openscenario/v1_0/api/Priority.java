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
 * Rules that govern interaction between events that belong to the same maneuver.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>If a starting event has priority Overwrite, all events in running state, within the same scope (maneuver) as the 
 * starting event, should be issued a stop command (stop transition).
 * <li>If a starting event has priority Skip, then it will not be ran if there is any other event in the same scope 
 * (maneuver) in the running state.
 * <li>Execute in parallel to other events.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum Priority {	
	OVERWRITE("overwrite"),
	SKIP("skip"),
	PARALLEL("parallel");
	
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
	Priority(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static Priority getFromLiteral(String literal)
	{
		if(literal.equals("overwrite"))
		{
			return OVERWRITE;
		} else 
		if(literal.equals("skip"))
		{
			return SKIP;
		} else 
		if(literal.equals("parallel"))
		{
			return PARALLEL;
		} else 
		{
			return null;
		}
	}

}

