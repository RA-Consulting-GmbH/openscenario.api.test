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

import de.rac.openscenario.v1_0.api.IOrientation;
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
import de.rac.openscenario.v1_0.common.ErrorLevel;

import de.rac.openscenario.v1_0.api.ReferenceContext;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOrientation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOrientation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OrientationImpl extends BaseImpl implements IOrientation, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__TYPE, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__H, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__P, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__R, Double.class);
	}
	
	private ReferenceContext type;
	private Double h;
	private Double p;
	private Double r;

	@Override
	public ReferenceContext getType()
	{
		return type;
	}
	@Override
	public Double getH()
	{
		return h;
	}
	@Override
	public Double getP()
	{
		return p;
	}
	@Override
	public Double getR()
	{
		return r;
	}
	/**
	 * Sets the value of model property type
	 * @param type from OpenSCENARIO class model specification: [Relative or absolute definition.]
	 * 
	*/
	public  void setType (ReferenceContext type )
	{
		this.type = type;
	}
	/**
	 * Sets the value of model property h
	 * @param h from OpenSCENARIO class model specification: [Heading angle. Unit: rad;.]
	 * 
	*/
	public  void setH (Double h )
	{
		this.h = h;
	}
	/**
	 * Sets the value of model property p
	 * @param p from OpenSCENARIO class model specification: [Pitch angle. Unit: rad;.]
	 * 
	*/
	public  void setP (Double p )
	{
		this.p = p;
	}
	/**
	 * Sets the value of model property r
	 * @param r from OpenSCENARIO class model specification: [Roll angle. Unit: rad;.]
	 * 
	*/
	public  void setR (Double r )
	{
		this.r = r;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__TYPE))
		{
			// Enumeration Type
			ReferenceContext result = ReferenceContext.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				type = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__H))
		{
			// Simple type
			h = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__P))
		{
			// Simple type
			p = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__R))
		{
			// Simple type
			r = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public OrientationImpl clone()
	{
		OrientationImpl clonedObject = new OrientationImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		ReferenceContext type = getType();
		if (type != null)
		{
			clonedObject.setType(ReferenceContext.getFromLiteral(type.getLiteral()));
		}
		// Simple type
		clonedObject.setH(getH());		
		// Simple type
		clonedObject.setP(getP());		
		// Simple type
		clonedObject.setR(getR());		
		// clone children
		return clonedObject;
	}
	
	
	
}

