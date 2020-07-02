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

import de.rac.openscenario.v1_0.api.ITiming;
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
 * Value class that implements ITiming. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITiming)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimingImpl extends BaseImpl implements ITiming, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__SCALE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__OFFSET, Double.class);
	}
	
	private ReferenceContext domainAbsoluteRelative;
	private Double scale;
	private Double offset;

	@Override
	public ReferenceContext getDomainAbsoluteRelative()
	{
		return domainAbsoluteRelative;
	}
	@Override
	public Double getScale()
	{
		return scale;
	}
	@Override
	public Double getOffset()
	{
		return offset;
	}
	/**
	 * Sets the value of model property domainAbsoluteRelative
	 * @param domainAbsoluteRelative from OpenSCENARIO class model specification: [Definition of time value context as either 
	 * absolute or relative.]
	 * 
	*/
	public  void setDomainAbsoluteRelative (ReferenceContext domainAbsoluteRelative )
	{
		this.domainAbsoluteRelative = domainAbsoluteRelative;
	}
	/**
	 * Sets the value of model property scale
	 * @param scale from OpenSCENARIO class model specification: [Scaling factor for time values. While values smaller than 1.0
	 * represent negative scaling, values larger than 1.0 will , result in positive scaling. A value of 1.0 means no scaling. 
	 * Range: ]0..inf[.]
	 * 
	*/
	public  void setScale (Double scale )
	{
		this.scale = scale;
	}
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Introduction of a global offset for all time values. Unit: 
	 * s; Range: ]-inf..inf[.]
	 * 
	*/
	public  void setOffset (Double offset )
	{
		this.offset = offset;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE))
		{
			// Enumeration Type
			ReferenceContext result = ReferenceContext.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				domainAbsoluteRelative = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__SCALE))
		{
			// Simple type
			scale = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__OFFSET))
		{
			// Simple type
			offset = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public TimingImpl clone()
	{
		TimingImpl clonedObject = new TimingImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		ReferenceContext domainAbsoluteRelative = getDomainAbsoluteRelative();
		if (domainAbsoluteRelative != null)
		{
			clonedObject.setDomainAbsoluteRelative(ReferenceContext.getFromLiteral(domainAbsoluteRelative.getLiteral()));
		}
		// Simple type
		clonedObject.setScale(getScale());		
		// Simple type
		clonedObject.setOffset(getOffset());		
		// clone children
		return clonedObject;
	}
	
	
	
}

