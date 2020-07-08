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

import de.rac.openscenario.v1_0.api.ICollisionCondition;
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
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IByObjectType;
import de.rac.openscenario.v1_0.api.IEntityRef;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICollisionCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICollisionCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CollisionConditionImpl extends BaseImpl implements ICollisionCondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IEntityRef entityRef;
	private IByObjectType byType;
	/**
	 * Default constructor
	 */
	public CollisionConditionImpl()
	{
		super();
		addAdapter(CollisionConditionImpl.class, this);
		addAdapter(ICollisionCondition.class, this);
		
	}
	@Override
	public IEntityRef getEntityRef()
	{
		return entityRef;
	}
	@Override
	public IByObjectType getByType()
	{
		return byType;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of a specific entity.]
	 * 
	*/
	public  void setEntityRef (IEntityRef entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property byType
	 * @param byType from OpenSCENARIO class model specification: [Entities of this type can trigger the condition when 
	 * collide.]
	 * 
	*/
	public  void setByType (IByObjectType byType )
	{
		this.byType = byType;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
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
		
			IEntityRef entityRef = null;
			entityRef =  getEntityRef();
			if (entityRef != null)
			{
				result.add((BaseImpl) entityRef);
			}	
			IByObjectType byType = null;
			byType =  getByType();
			if (byType != null)
			{
				result.add((BaseImpl) byType);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public CollisionConditionImpl clone()
	{
		CollisionConditionImpl clonedObject = new CollisionConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IEntityRef entityRef = null;
		entityRef =  getEntityRef();
		if (entityRef != null)
		{
			EntityRefImpl clonedChild = ((EntityRefImpl) entityRef).clone();
			clonedObject.setEntityRef(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IByObjectType byType = null;
		byType =  getByType();
		if (byType != null)
		{
			ByObjectTypeImpl clonedChild = ((ByObjectTypeImpl) byType).clone();
			clonedObject.setByType(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__ENTITY_REF))
	{
		return (IOpenScenarioFlexElement) getEntityRef();
	}else 
	if (key.equals(OscConstants.ELEMENT__BY_TYPE))
	{
		return (IOpenScenarioFlexElement) getByType();
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
  	return "CollisionCondition";
  }
 	
}

