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
 * Categories for entity objects which are not pedestrians or vehicles.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>None, other
 * <li>Not further defined obstacle
 * <li>A pole
 * <li>A tree
 * <li>Not further defined vegetation.
 * <li>A barrier.
 * <li>A building.
 * <li>A parking space.
 * <li>A patch.
 * <li>A railing or guard rail.
 * <li>A traffic island.
 * <li>A crosswalk.
 * <li>A street lamp.
 * <li>A gantry.
 * <li>A sound barrier.
 * <li>Wind.
 * <li>Not further defined road mark.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum MiscObjectCategory {	
	NONE("none"),
	OBSTACLE("obstacle"),
	POLE("pole"),
	TREE("tree"),
	VEGETATION("vegetation"),
	BARRIER("barrier"),
	BUILDING("building"),
	PARKING_SPACE("parkingSpace"),
	PATCH("patch"),
	RAILING("railing"),
	TRAFFIC_ISLAND("trafficIsland"),
	CROSSWALK("crosswalk"),
	STREET_LAMP("streetLamp"),
	GANTRY("gantry"),
	SOUND_BARRIER("soundBarrier"),
	WIND("wind"),
	ROAD_MARK("roadMark");
	
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
	MiscObjectCategory(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static MiscObjectCategory getFromLiteral(String literal)
	{
		if(literal.equals("none"))
		{
			return NONE;
		} else 
		if(literal.equals("obstacle"))
		{
			return OBSTACLE;
		} else 
		if(literal.equals("pole"))
		{
			return POLE;
		} else 
		if(literal.equals("tree"))
		{
			return TREE;
		} else 
		if(literal.equals("vegetation"))
		{
			return VEGETATION;
		} else 
		if(literal.equals("barrier"))
		{
			return BARRIER;
		} else 
		if(literal.equals("building"))
		{
			return BUILDING;
		} else 
		if(literal.equals("parkingSpace"))
		{
			return PARKING_SPACE;
		} else 
		if(literal.equals("patch"))
		{
			return PATCH;
		} else 
		if(literal.equals("railing"))
		{
			return RAILING;
		} else 
		if(literal.equals("trafficIsland"))
		{
			return TRAFFIC_ISLAND;
		} else 
		if(literal.equals("crosswalk"))
		{
			return CROSSWALK;
		} else 
		if(literal.equals("streetLamp"))
		{
			return STREET_LAMP;
		} else 
		if(literal.equals("gantry"))
		{
			return GANTRY;
		} else 
		if(literal.equals("soundBarrier"))
		{
			return SOUND_BARRIER;
		} else 
		if(literal.equals("wind"))
		{
			return WIND;
		} else 
		if(literal.equals("roadMark"))
		{
			return ROAD_MARK;
		} else 
		{
			return null;
		}
	}

}

