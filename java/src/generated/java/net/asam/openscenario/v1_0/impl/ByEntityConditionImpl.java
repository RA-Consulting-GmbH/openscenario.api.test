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

import net.asam.openscenario.v1_0.api.IByEntityCondition;
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

import net.asam.openscenario.v1_0.api.IEntityCondition;
import net.asam.openscenario.v1_0.api.ITriggeringEntities;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IByEntityCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IByEntityCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ByEntityConditionImpl extends BaseImpl implements IByEntityCondition, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ITriggeringEntities triggeringEntities;
	private IEntityCondition entityCondition;
	/**
	 * Default constructor
	 */
	public ByEntityConditionImpl()
	{
		super();
		addAdapter(ByEntityConditionImpl.class, this);
		addAdapter(IByEntityCondition.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public ITriggeringEntities getTriggeringEntities()
	{
		return triggeringEntities;
	}
	@Override
	public IEntityCondition getEntityCondition()
	{
		return entityCondition;
	}
	/**
	 * Sets the value of model property triggeringEntities
	 * @param triggeringEntities from OpenSCENARIO class model specification: [A list of entities triggering this condition.]
	 * 
	*/
	public  void setTriggeringEntities (ITriggeringEntities triggeringEntities )
	{
		this.triggeringEntities = triggeringEntities;
	}
	/**
	 * Sets the value of model property entityCondition
	 * @param entityCondition from OpenSCENARIO class model specification: [The condition which is related to the triggering 
	 * entities.]
	 * 
	*/
	public  void setEntityCondition (IEntityCondition entityCondition )
	{
		this.entityCondition = entityCondition;
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
		
			ITriggeringEntities triggeringEntities = null;
			triggeringEntities =  getTriggeringEntities();
			if (triggeringEntities != null)
			{
				result.add((BaseImpl) triggeringEntities);
			}	
			IEntityCondition entityCondition = null;
			entityCondition =  getEntityCondition();
			if (entityCondition != null)
			{
				result.add((BaseImpl) entityCondition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ByEntityConditionImpl clone()
	{
		ByEntityConditionImpl clonedObject = new ByEntityConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ITriggeringEntities triggeringEntities = null;
		triggeringEntities =  getTriggeringEntities();
		if (triggeringEntities != null)
		{
			TriggeringEntitiesImpl clonedChild = ((TriggeringEntitiesImpl) triggeringEntities).clone();
			clonedObject.setTriggeringEntities(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IEntityCondition entityCondition = null;
		entityCondition =  getEntityCondition();
		if (entityCondition != null)
		{
			EntityConditionImpl clonedChild = ((EntityConditionImpl) entityCondition).clone();
			clonedObject.setEntityCondition(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__TRIGGERING_ENTITIES))
	{
		return (IOpenScenarioFlexElement) getTriggeringEntities();
	}else 
	if (key.equals(OscConstants.ELEMENT__ENTITY_CONDITION))
	{
		return (IOpenScenarioFlexElement) getEntityCondition();
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
  	return "ByEntityCondition";
  }
 	
}

