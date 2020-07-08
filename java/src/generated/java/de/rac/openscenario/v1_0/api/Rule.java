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
 * Rules (operators) used to compare quantitative variables or signals.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>'Greater than' operator.
 * <li>'Less than' operator.
 * <li>'Equal to' operator.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum Rule {	
	GREATER_THAN("greaterThan"),
	LESS_THAN("lessThan"),
	EQUAL_TO("equalTo");
	
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
	Rule(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static Rule getFromLiteral(String literal)
	{
		if(literal.equals("greaterThan"))
		{
			return GREATER_THAN;
		} else 
		if(literal.equals("lessThan"))
		{
			return LESS_THAN;
		} else 
		if(literal.equals("equalTo"))
		{
			return EQUAL_TO;
		} else 
		{
			return null;
		}
	}

}

