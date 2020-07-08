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
 * Type definition that relates a speed value relative to another one.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>The relative value is interpreted as a difference to a referenced value. Unit: m/s. As an example, a speed value of 
 * 10 equals a speed that's 10m/s faster than the reference speed.
 * <li>The relative value is interpreted as a factor to a referenced value. No unit. As an example, a speed value of 1.1 
 * equals a speed that's 10% faster than the reference speed.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum SpeedTargetValueType {	
	DELTA("delta"),
	FACTOR("factor");
	
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
	SpeedTargetValueType(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static SpeedTargetValueType getFromLiteral(String literal)
	{
		if(literal.equals("delta"))
		{
			return DELTA;
		} else 
		if(literal.equals("factor"))
		{
			return FACTOR;
		} else 
		{
			return null;
		}
	}

}

