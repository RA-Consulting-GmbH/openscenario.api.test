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

