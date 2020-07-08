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
 * Edge types that can be used for conditions.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>A condition defined with a rising edge shall return true at discrete time t if its logical expression is true at 
 * discrete time t and its logical expression was false at discrete time t-ts, where ts is the simulation sampling time.
 * <li>A condition defined with a falling edge shall return true at discrete time t if its logical expression is false at 
 * discrete time t and its logical expression was true at discrete time t-ts, where ts is the simulation sampling time.
 * <li>A condition defined with a 'risingOrFalling' edge shall return true at discrete time t if its logical expression is 
 * true at discrete time t and its logical expression was false at discrete time t-ts OR if its logical expression is false
 * at discrete time t and its logical expression was true at discrete time t-ts. ts is the simulation sampling time.
 * <li>A condition defined with a 'none' edge shall return true at discrete time t if its logical expression is true at 
 * discrete time t.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum ConditionEdge {	
	RISING("rising"),
	FALLING("falling"),
	RISING_OR_FALLING("risingOrFalling"),
	NONE("none");
	
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
	ConditionEdge(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static ConditionEdge getFromLiteral(String literal)
	{
		if(literal.equals("rising"))
		{
			return RISING;
		} else 
		if(literal.equals("falling"))
		{
			return FALLING;
		} else 
		if(literal.equals("risingOrFalling"))
		{
			return RISING_OR_FALLING;
		} else 
		if(literal.equals("none"))
		{
			return NONE;
		} else 
		{
			return null;
		}
	}

}

