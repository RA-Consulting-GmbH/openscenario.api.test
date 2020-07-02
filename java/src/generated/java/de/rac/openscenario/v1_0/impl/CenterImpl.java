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

import de.rac.openscenario.v1_0.api.ICenter;
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
 * Value class that implements ICenter. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICenter)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CenterImpl extends BaseImpl implements ICenter, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__X, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__Y, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__Z, Double.class);
	}
	
	private Double x;
	private Double y;
	private Double z;

	@Override
	public Double getX()
	{
		return x;
	}
	@Override
	public Double getY()
	{
		return y;
	}
	@Override
	public Double getZ()
	{
		return z;
	}
	/**
	 * Sets the value of model property x
	 * @param x from OpenSCENARIO class model specification: [Center offset in x direction.]
	 * 
	*/
	public  void setX (Double x )
	{
		this.x = x;
	}
	/**
	 * Sets the value of model property y
	 * @param y from OpenSCENARIO class model specification: [Center offset in y direction.]
	 * 
	*/
	public  void setY (Double y )
	{
		this.y = y;
	}
	/**
	 * Sets the value of model property z
	 * @param z from OpenSCENARIO class model specification: [Center offset in z direction.]
	 * 
	*/
	public  void setZ (Double z )
	{
		this.z = z;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__X))
		{
			// Simple type
			x = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__Y))
		{
			// Simple type
			y = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__Z))
		{
			// Simple type
			z = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public CenterImpl clone()
	{
		CenterImpl clonedObject = new CenterImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setX(getX());		
		// Simple type
		clonedObject.setY(getY());		
		// Simple type
		clonedObject.setZ(getZ());		
		// clone children
		return clonedObject;
	}
	
	
	
}

