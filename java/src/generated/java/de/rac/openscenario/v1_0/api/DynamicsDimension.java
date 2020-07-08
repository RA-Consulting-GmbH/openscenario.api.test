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
 * Defines how a target value will be acquired (with a constant rate, in a defined distance, within a defined time).
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>A predefined constant rate is used to acquire the target value.
 * <li>A predefined time (duration) is used to acquire the target value.
 * <li>A predefined distance used to acquire the target value.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum DynamicsDimension {	
	RATE("rate"),
	TIME("time"),
	DISTANCE("distance");
	
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
	DynamicsDimension(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static DynamicsDimension getFromLiteral(String literal)
	{
		if(literal.equals("rate"))
		{
			return RATE;
		} else 
		if(literal.equals("time"))
		{
			return TIME;
		} else 
		if(literal.equals("distance"))
		{
			return DISTANCE;
		} else 
		{
			return null;
		}
	}

}

