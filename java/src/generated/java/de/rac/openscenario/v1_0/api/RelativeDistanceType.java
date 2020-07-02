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
 * Alternative ways in which to calculate the distance in a RelativeDistanceCondition.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>Longitudinal distance offset.
 * <li>Lateral distance offset.
 * <li>Cartesian distance offset.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum RelativeDistanceType {	
	LONGITUDINAL("longitudinal"),
	LATERAL("lateral"),
	CARTESIAN_DISTANCE("cartesianDistance");
	
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
	RelativeDistanceType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static RelativeDistanceType getFromLiteral(String literal)
	{
		if(literal.equals("longitudinal"))
		{
			return LONGITUDINAL;
		} else 
		if(literal.equals("lateral"))
		{
			return LATERAL;
		} else 
		if(literal.equals("cartesianDistance"))
		{
			return CARTESIAN_DISTANCE;
		} else 
		{
			return null;
		}
	}

}

