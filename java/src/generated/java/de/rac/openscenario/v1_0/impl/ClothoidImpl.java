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

import de.rac.openscenario.v1_0.api.IClothoid;
import de.rac.openscenario.impl.BaseImpl;
import de.rac.openscenario.common.ILocator;
import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.common.FileContentMessage;
import de.rac.openscenario.api.IOpenScenarioModelElement;
import de.rac.openscenario.api.IOpenScenarioFlexElement;
import de.rac.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import de.rac.openscenario.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IPosition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IClothoid. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IClothoid)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ClothoidImpl extends BaseImpl implements IClothoid, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__CURVATURE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__CURVATURE_DOT, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__LENGTH, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__START_TIME, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__STOP_TIME, Double.class);
	}
	
	private Double curvature;
	private Double curvatureDot;
	private Double length;
	private Double startTime;
	private Double stopTime;
	private IPosition position;
	/**
	 * Default constructor
	 */
	public ClothoidImpl()
	{
		super();
		addAdapter(ClothoidImpl.class, this);
		addAdapter(IClothoid.class, this);
		
	}
	@Override
	public Double getCurvature()
	{
		return curvature;
	}
	@Override
	public Double getCurvatureDot()
	{
		return curvatureDot;
	}
	@Override
	public Double getLength()
	{
		return length;
	}
	@Override
	public Double getStartTime()
	{
		return startTime;
	}
	@Override
	public Double getStopTime()
	{
		return stopTime;
	}
	@Override
	public IPosition getPosition()
	{
		return position;
	}
	/**
	 * Sets the value of model property curvature
	 * @param curvature from OpenSCENARIO class model specification: [Start curvature of clothoid.]
	 * 
	*/
	public  void setCurvature (Double curvature )
	{
		this.curvature = curvature;
	}
	/**
	 * Sets the value of model property curvatureDot
	 * @param curvatureDot from OpenSCENARIO class model specification: [Rate of change of the curvature of the clothoid.Unit: 
	 * 1/s;Range [0..inf[.]
	 * 
	*/
	public  void setCurvatureDot (Double curvatureDot )
	{
		this.curvatureDot = curvatureDot;
	}
	/**
	 * Sets the value of model property length
	 * @param length from OpenSCENARIO class model specification: [Length of clothoid.]
	 * 
	*/
	public  void setLength (Double length )
	{
		this.length = length;
	}
	/**
	 * Sets the value of model property startTime
	 * @param startTime from OpenSCENARIO class model specification: [Optional time specification at the start of the clothoid.
	 * Unit: s;Range [0..inf[.]
	 * 
	*/
	public  void setStartTime (Double startTime )
	{
		this.startTime = startTime;
	}
	/**
	 * Sets the value of model property stopTime
	 * @param stopTime from OpenSCENARIO class model specification: [Optional time specification at the end of the clothoid. 
	 * Unit: s;Range ]0..inf[.]
	 * 
	*/
	public  void setStopTime (Double stopTime )
	{
		this.stopTime = stopTime;
	}
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Start position of a clothoid.]
	 * 
	*/
	public  void setPosition (IPosition position )
	{
		this.position = position;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__CURVATURE))
		{
			// Simple type
			curvature = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__CURVATURE_DOT))
		{
			// Simple type
			curvatureDot = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__LENGTH))
		{
			// Simple type
			length = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__START_TIME))
		{
			// Simple type
			startTime = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__STOP_TIME))
		{
			// Simple type
			stopTime = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IPosition position = null;
			position =  getPosition();
			if (position != null)
			{
				result.add((BaseImpl) position);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ClothoidImpl clone()
	{
		ClothoidImpl clonedObject = new ClothoidImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setCurvature(getCurvature());		
		// Simple type
		clonedObject.setCurvatureDot(getCurvatureDot());		
		// Simple type
		clonedObject.setLength(getLength());		
		// Simple type
		clonedObject.setStartTime(getStartTime());		
		// Simple type
		clonedObject.setStopTime(getStopTime());		
		// clone children
		IPosition position = null;
		position =  getPosition();
		if (position != null)
		{
			PositionImpl clonedChild = ((PositionImpl) position).clone();
			clonedObject.setPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	throw new KeyNotSupportedException();
  }
  
  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }  
  
  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
 
  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__CURVATURE))
	{
		return getCurvature();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__CURVATURE_DOT))
	{
		return getCurvatureDot();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__LENGTH))
	{
		return getLength();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__START_TIME))
	{
		return getStartTime();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__STOP_TIME))
	{
		return getStopTime();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  		
  }
  
  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
 
  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 	throw new KeyNotSupportedException();

  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__POSITION))
	{
		return (IOpenScenarioFlexElement) getPosition();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
   
  @Override
  public IOpenScenarioFlexElement getParentFlexElement()
  {
   	return (IOpenScenarioFlexElement) getParent();
  }
  
  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "Clothoid";
  }
 	
}

