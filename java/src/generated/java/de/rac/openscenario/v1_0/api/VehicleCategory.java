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
 * Categories for entity objects of type vehicle.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>The vehicle is a car.
 * <li>The vehicle is a van.
 * <li>The vehicle is a truck.
 * <li>The vehicle is a trailer.
 * <li>The vehicle is a semi trailer.
 * <li>The vehicle is a bus.
 * <li>The vehicle is a motor bike.
 * <li>The vehicle is a bicycle.
 * <li>The vehicle is a train.
 * <li>The vehicle is a tram.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum VehicleCategory {	
	CAR("car"),
	VAN("van"),
	TRUCK("truck"),
	TRAILER("trailer"),
	SEMITRAILER("semitrailer"),
	BUS("bus"),
	MOTORBIKE("motorbike"),
	BICYCLE("bicycle"),
	TRAIN("train"),
	TRAM("tram");
	
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
	VehicleCategory(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static VehicleCategory getFromLiteral(String literal)
	{
		if(literal.equals("car"))
		{
			return CAR;
		} else 
		if(literal.equals("van"))
		{
			return VAN;
		} else 
		if(literal.equals("truck"))
		{
			return TRUCK;
		} else 
		if(literal.equals("trailer"))
		{
			return TRAILER;
		} else 
		if(literal.equals("semitrailer"))
		{
			return SEMITRAILER;
		} else 
		if(literal.equals("bus"))
		{
			return BUS;
		} else 
		if(literal.equals("motorbike"))
		{
			return MOTORBIKE;
		} else 
		if(literal.equals("bicycle"))
		{
			return BICYCLE;
		} else 
		if(literal.equals("train"))
		{
			return TRAIN;
		} else 
		if(literal.equals("tram"))
		{
			return TRAM;
		} else 
		{
			return null;
		}
	}

}

