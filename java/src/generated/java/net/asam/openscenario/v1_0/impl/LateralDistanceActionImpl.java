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
package net.asam.openscenario.v1_0.impl;

import net.asam.openscenario.v1_0.api.ILateralDistanceAction;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import net.asam.openscenario.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IDynamicConstraints;
import net.asam.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILateralDistanceAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILateralDistanceAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LateralDistanceActionImpl extends BaseImpl implements ILateralDistanceAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DISTANCE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__FREESPACE, Boolean.class);
		propertyToType.put(OscConstants.ATTRIBUTE__CONTINUOUS, Boolean.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private Double distance;
	private Boolean freespace;
	private Boolean continuous;
	private IDynamicConstraints dynamicConstraints;
	/**
	 * Default constructor
	 */
	public LateralDistanceActionImpl()
	{
		super();
		addAdapter(LateralDistanceActionImpl.class, this);
		addAdapter(ILateralDistanceAction.class, this);
		
	}
	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public Double getDistance()
	{
		return distance;
	}
	@Override
	public Boolean getFreespace()
	{
		return freespace;
	}
	@Override
	public Boolean getContinuous()
	{
		return continuous;
	}
	@Override
	public IDynamicConstraints getDynamicConstraints()
	{
		return dynamicConstraints;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity the lateral distance shall 
	 * be kept to.]
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property distance
	 * @param distance from OpenSCENARIO class model specification: [Lateral distance value. Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setDistance (Double distance )
	{
		this.distance = distance;
	}
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: Lateral distance is measured using the distance 
	 * between closest bounding box points. False: Reference point , distance is used.]
	 * 
	*/
	public  void setFreespace (Boolean freespace )
	{
		this.freespace = freespace;
	}
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target distance is 
	 * reached. If true it does not end and can only be stopped.]
	 * 
	*/
	public  void setContinuous (Boolean continuous )
	{
		this.continuous = continuous;
	}
	/**
	 * Sets the value of model property dynamicConstraints
	 * @param dynamicConstraints from OpenSCENARIO class model specification: [Parameter that assigns either unlimited dynamics
	 * (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the, action.]
	 * 
	*/
	public  void setDynamicConstraints (IDynamicConstraints dynamicConstraints )
	{
		this.dynamicConstraints = dynamicConstraints;
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
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DISTANCE))
		{
			// Simple type
			distance = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__FREESPACE))
		{
			// Simple type
			freespace = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
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
		
			IDynamicConstraints dynamicConstraints = null;
			dynamicConstraints =  getDynamicConstraints();
			if (dynamicConstraints != null)
			{
				result.add((BaseImpl) dynamicConstraints);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LateralDistanceActionImpl clone()
	{
		LateralDistanceActionImpl clonedObject = new LateralDistanceActionImpl();
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
		clonedObject.setDistance(getDistance());		
		// Simple type
		clonedObject.setFreespace(getFreespace());		
		// Simple type
		clonedObject.setContinuous(getContinuous());		
		// clone children
		IDynamicConstraints dynamicConstraints = null;
		dynamicConstraints =  getDynamicConstraints();
		if (dynamicConstraints != null)
		{
			DynamicConstraintsImpl clonedChild = ((DynamicConstraintsImpl) dynamicConstraints).clone();
			clonedObject.setDynamicConstraints(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
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
	if (key.equals(OscConstants.ATTRIBUTE__DISTANCE))
	{
		return getDistance();
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
	if (key.equals(OscConstants.ATTRIBUTE__FREESPACE))
	{
		return getFreespace();
	}else 
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__DYNAMIC_CONSTRAINTS))
	{
		return (IOpenScenarioFlexElement) getDynamicConstraints();
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
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "LateralDistanceAction";
  }
 	
}
