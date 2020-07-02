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
 
package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IVisibilityAction;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import de.rac.openscenario.v1_0.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVisibilityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVisibilityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class VisibilityActionImpl extends BaseImpl implements IVisibilityAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__GRAPHICS, Boolean.class);
		propertyToType.put(OscConstants.ATTRIBUTE__TRAFFIC, Boolean.class);
		propertyToType.put(OscConstants.ATTRIBUTE__SENSORS, Boolean.class);
	}
	
	private Boolean graphics;
	private Boolean traffic;
	private Boolean sensors;

	@Override
	public Boolean getGraphics()
	{
		return graphics;
	}
	@Override
	public Boolean getTraffic()
	{
		return traffic;
	}
	@Override
	public Boolean getSensors()
	{
		return sensors;
	}
	/**
	 * Sets the value of model property graphics
	 * @param graphics from OpenSCENARIO class model specification: [True: actor is visible in image generator(s). False: actor
	 * is not visible in image generator(s).]
	 * 
	*/
	public  void setGraphics (Boolean graphics )
	{
		this.graphics = graphics;
	}
	/**
	 * Sets the value of model property traffic
	 * @param traffic from OpenSCENARIO class model specification: [True: actor is visible for other traffic participants, 
	 * particularly for autonomous driver models. False: actor is not , visible for other traffic participants.]
	 * 
	*/
	public  void setTraffic (Boolean traffic )
	{
		this.traffic = traffic;
	}
	/**
	 * Sets the value of model property sensors
	 * @param sensors from OpenSCENARIO class model specification: [True: actor is visible in sensor(s). False: actor is not 
	 * visible in sensor(s).]
	 * 
	*/
	public  void setSensors (Boolean sensors )
	{
		this.sensors = sensors;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__GRAPHICS))
		{
			// Simple type
			graphics = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__TRAFFIC))
		{
			// Simple type
			traffic = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__SENSORS))
		{
			// Simple type
			sensors = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public VisibilityActionImpl clone()
	{
		VisibilityActionImpl clonedObject = new VisibilityActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setGraphics(getGraphics());		
		// Simple type
		clonedObject.setTraffic(getTraffic());		
		// Simple type
		clonedObject.setSensors(getSensors());		
		// clone children
		return clonedObject;
	}
	
	
	
}

