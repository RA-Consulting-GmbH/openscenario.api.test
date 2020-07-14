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

import net.asam.openscenario.v1_0.api.ISynchronizeAction;
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
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IFinalSpeed;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISynchronizeAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISynchronizeAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SynchronizeActionImpl extends BaseImpl implements ISynchronizeAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, String.class);
	}
	
	private NamedReferenceProxy<IEntity> masterEntityRef;
	private IPosition targetPositionMaster;
	private IPosition targetPosition;
	private IFinalSpeed finalSpeed;
	/**
	 * Default constructor
	 */
	public SynchronizeActionImpl()
	{
		super();
		addAdapter(SynchronizeActionImpl.class, this);
		addAdapter(ISynchronizeAction.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public INamedReference<IEntity> getMasterEntityRef()
	{
		return masterEntityRef;
	}
	@Override
	public IPosition getTargetPositionMaster()
	{
		return targetPositionMaster;
	}
	@Override
	public IPosition getTargetPosition()
	{
		return targetPosition;
	}
	@Override
	public IFinalSpeed getFinalSpeed()
	{
		return finalSpeed;
	}
	/**
	 * Sets the value of model property masterEntityRef
	 * @param masterEntityRef from OpenSCENARIO class model specification: [A reference to the master entity.]
	 * 
	*/
	public  void setMasterEntityRef (NamedReferenceProxy<IEntity> masterEntityRef )
	{
		this.masterEntityRef = masterEntityRef;
	}
	/**
	 * Sets the value of model property targetPositionMaster
	 * @param targetPositionMaster from OpenSCENARIO class model specification: [The target position for the master entity.]
	 * 
	*/
	public  void setTargetPositionMaster (IPosition targetPositionMaster )
	{
		this.targetPositionMaster = targetPositionMaster;
	}
	/**
	 * Sets the value of model property targetPosition
	 * @param targetPosition from OpenSCENARIO class model specification: [The target position for the entity that should be 
	 * synchronized.]
	 * 
	*/
	public  void setTargetPosition (IPosition targetPosition )
	{
		this.targetPosition = targetPosition;
	}
	/**
	 * Sets the value of model property finalSpeed
	 * @param finalSpeed from OpenSCENARIO class model specification: [The speed that the synchronized entity should have at 
	 * its target position.]
	 * 
	*/
	public  void setFinalSpeed (IFinalSpeed finalSpeed )
	{
		this.finalSpeed = finalSpeed;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			masterEntityRef = proxy;
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
		
			IPosition targetPositionMaster = null;
			targetPositionMaster =  getTargetPositionMaster();
			if (targetPositionMaster != null)
			{
				result.add((BaseImpl) targetPositionMaster);
			}	
			IPosition targetPosition = null;
			targetPosition =  getTargetPosition();
			if (targetPosition != null)
			{
				result.add((BaseImpl) targetPosition);
			}	
			IFinalSpeed finalSpeed = null;
			finalSpeed =  getFinalSpeed();
			if (finalSpeed != null)
			{
				result.add((BaseImpl) finalSpeed);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public SynchronizeActionImpl clone()
	{
		SynchronizeActionImpl clonedObject = new SynchronizeActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getMasterEntityRef()).clone();
		clonedObject.setMasterEntityRef(proxy);
		proxy.setParent(clonedObject);
		// clone children
		IPosition targetPositionMaster = null;
		targetPositionMaster =  getTargetPositionMaster();
		if (targetPositionMaster != null)
		{
			PositionImpl clonedChild = ((PositionImpl) targetPositionMaster).clone();
			clonedObject.setTargetPositionMaster(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IPosition targetPosition = null;
		targetPosition =  getTargetPosition();
		if (targetPosition != null)
		{
			PositionImpl clonedChild = ((PositionImpl) targetPosition).clone();
			clonedObject.setTargetPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IFinalSpeed finalSpeed = null;
		finalSpeed =  getFinalSpeed();
		if (finalSpeed != null)
		{
			FinalSpeedImpl clonedChild = ((FinalSpeedImpl) finalSpeed).clone();
			clonedObject.setFinalSpeed(clonedChild);
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
	if (key.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF))
	{
		// Get the Proxy
		INamedReference<IEntity> masterEntityRef = getMasterEntityRef();
		return masterEntityRef!= null? masterEntityRef.getNameRef():null;
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
	throw new KeyNotSupportedException();
  		
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
	if (key.equals(OscConstants.ELEMENT__TARGET_POSITION_MASTER))
	{
		return (IOpenScenarioFlexElement) getTargetPositionMaster();
	}else 
	if (key.equals(OscConstants.ELEMENT__TARGET_POSITION))
	{
		return (IOpenScenarioFlexElement) getTargetPosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__FINAL_SPEED))
	{
		return (IOpenScenarioFlexElement) getFinalSpeed();
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
	if (key.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF))
	{
		// Get the Proxy
		INamedReference<IEntity> masterEntityRef = getMasterEntityRef();
		return masterEntityRef!= null?(IOpenScenarioFlexElement) masterEntityRef.getTargetObject():null;
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
  	return "SynchronizeAction";
  }
 	
}

