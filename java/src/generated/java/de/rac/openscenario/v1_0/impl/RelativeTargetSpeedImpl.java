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

import de.rac.openscenario.v1_0.api.IRelativeTargetSpeed;
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
import de.rac.openscenario.common.ErrorLevel;
import de.rac.openscenario.impl.NamedReferenceProxy;
import de.rac.openscenario.common.INamedReference;
import de.rac.openscenario.v1_0.api.SpeedTargetValueType;
import de.rac.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRelativeTargetSpeed. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRelativeTargetSpeed)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RelativeTargetSpeedImpl extends BaseImpl implements IRelativeTargetSpeed, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__VALUE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__CONTINUOUS, Boolean.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private Double value;
	private SpeedTargetValueType speedTargetValueType;
	private Boolean continuous;
	/**
	 * Default constructor
	 */
	public RelativeTargetSpeedImpl()
	{
		super();
		addAdapter(RelativeTargetSpeedImpl.class, this);
		addAdapter(IRelativeTargetSpeed.class, this);
		
	}
	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public Double getValue()
	{
		return value;
	}
	@Override
	public SpeedTargetValueType getSpeedTargetValueType()
	{
		return speedTargetValueType;
	}
	@Override
	public Boolean getContinuous()
	{
		return continuous;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [Value of the relative speed. This value is either given as a 
	 * delta or as a factor. E.g. value=10 together with , valueType=delta means the entity/entities are supposed to drive 
	 * 10m/s faster than the target reference entity. E.g. , value=1.1 together with valueType=factor means that the 
	 * entity/entities are supposed to drive 10% faster than the target, reference entity. Unit: m/s or 1.]
	 * 
	*/
	public  void setValue (Double value )
	{
		this.value = value;
	}
	/**
	 * Sets the value of model property speedTargetValueType
	 * @param speedTargetValueType from OpenSCENARIO class model specification: [The value is either a delta (Unit m/s) or a 
	 * factor (no Unit).]
	 * 
	*/
	public  void setSpeedTargetValueType (SpeedTargetValueType speedTargetValueType )
	{
		this.speedTargetValueType = speedTargetValueType;
	}
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [By setting continuous to true a controller comes into 
	 * place and tries to maintain a continuous relative speed. This may , not be used together with Dynamics.time or 
	 * Dynamics.distance.]
	 * 
	*/
	public  void setContinuous (Boolean continuous )
	{
		this.continuous = continuous;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			entityRef = proxy;
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE))
		{
			// Simple type
			value = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE))
		{
			// Enumeration Type
			SpeedTargetValueType result = SpeedTargetValueType.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				speedTargetValueType = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__CONTINUOUS))
		{
			// Simple type
			continuous = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public RelativeTargetSpeedImpl clone()
	{
		RelativeTargetSpeedImpl clonedObject = new RelativeTargetSpeedImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getEntityRef()).clone();
		clonedObject.setEntityRef(proxy);
		proxy.setParent(clonedObject);
		// Simple type
		clonedObject.setValue(getValue());		
		// Enumeration Type
		SpeedTargetValueType speedTargetValueType = getSpeedTargetValueType();
		if (speedTargetValueType != null)
		{
			clonedObject.setSpeedTargetValueType(SpeedTargetValueType.getFromLiteral(speedTargetValueType.getLiteral()));
		}
		// Simple type
		clonedObject.setContinuous(getContinuous());		
		// clone children
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
	{
		// Get the Proxy
		INamedReference<IEntity> entityRef = getEntityRef();
		return entityRef!= null? entityRef.getNameRef():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
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
	if (key.equals(OscConstants.ATTRIBUTE__VALUE))
	{
		return getValue();
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__CONTINUOUS))
	{
		return getContinuous();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 	throw new KeyNotSupportedException();

  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
	{
		// Get the Proxy
		INamedReference<IEntity> entityRef = getEntityRef();
		return entityRef!= null?(IOpenScenarioFlexElement) entityRef.getTargetObject():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__SPEED_TARGET_VALUE_TYPE))
	{
	 	SpeedTargetValueType speedTargetValueType = getSpeedTargetValueType();
		return speedTargetValueType != null?speedTargetValueType.getLiteral():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override
  public String getModelType()
  {
  	return "RelativeTargetSpeed";
  }
 	
}

