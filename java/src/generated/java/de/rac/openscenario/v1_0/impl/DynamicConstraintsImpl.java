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

import de.rac.openscenario.v1_0.api.IDynamicConstraints;
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
 * Value class that implements IDynamicConstraints. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IDynamicConstraints)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class DynamicConstraintsImpl extends BaseImpl implements IDynamicConstraints, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_ACCELERATION, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_DECELERATION, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_SPEED, Double.class);
	}
	
	private Double maxAcceleration;
	private Double maxDeceleration;
	private Double maxSpeed;

	@Override
	public Double getMaxAcceleration()
	{
		return maxAcceleration;
	}
	@Override
	public Double getMaxDeceleration()
	{
		return maxDeceleration;
	}
	@Override
	public Double getMaxSpeed()
	{
		return maxSpeed;
	}
	/**
	 * Sets the value of model property maxAcceleration
	 * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration the distance controller is 
	 * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
	public  void setMaxAcceleration (Double maxAcceleration )
	{
		this.maxAcceleration = maxAcceleration;
	}
	/**
	 * Sets the value of model property maxDeceleration
	 * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration the distance controller is 
	 * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.]
	 * 
	*/
	public  void setMaxDeceleration (Double maxDeceleration )
	{
		this.maxDeceleration = maxDeceleration;
	}
	/**
	 * Sets the value of model property maxSpeed
	 * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed the distance controller is allowed to use 
	 * for keeping the distance. Unit: m/s; Range: [0..inf[.]
	 * 
	*/
	public  void setMaxSpeed (Double maxSpeed )
	{
		this.maxSpeed = maxSpeed;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_ACCELERATION))
		{
			// Simple type
			maxAcceleration = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_DECELERATION))
		{
			// Simple type
			maxDeceleration = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_SPEED))
		{
			// Simple type
			maxSpeed = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public DynamicConstraintsImpl clone()
	{
		DynamicConstraintsImpl clonedObject = new DynamicConstraintsImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setMaxAcceleration(getMaxAcceleration());		
		// Simple type
		clonedObject.setMaxDeceleration(getMaxDeceleration());		
		// Simple type
		clonedObject.setMaxSpeed(getMaxSpeed());		
		// clone children
		return clonedObject;
	}
	
	
	
}

