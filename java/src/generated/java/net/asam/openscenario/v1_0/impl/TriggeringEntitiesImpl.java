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

import net.asam.openscenario.v1_0.api.ITriggeringEntities;
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
import net.asam.openscenario.common.ErrorLevel;

import net.asam.openscenario.v1_0.api.IEntityRef;
import net.asam.openscenario.v1_0.api.TriggeringEntitiesRule;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITriggeringEntities. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITriggeringEntities)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TriggeringEntitiesImpl extends BaseImpl implements ITriggeringEntities, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, String.class);
	}
	
	private TriggeringEntitiesRule triggeringEntitiesRule;
	private List<IEntityRef> entityRefs;
	/**
	 * Default constructor
	 */
	public TriggeringEntitiesImpl()
	{
		super();
		addAdapter(TriggeringEntitiesImpl.class, this);
		addAdapter(ITriggeringEntities.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public TriggeringEntitiesRule getTriggeringEntitiesRule()
	{
		return triggeringEntitiesRule;
	}
	@Override
	public List<IEntityRef> getEntityRefs()
	{
		return entityRefs;
	}
	/**
	 * Sets the value of model property triggeringEntitiesRule
	 * @param triggeringEntitiesRule from OpenSCENARIO class model specification: [All or any.]
	 * 
	*/
	public  void setTriggeringEntitiesRule (TriggeringEntitiesRule triggeringEntitiesRule )
	{
		this.triggeringEntitiesRule = triggeringEntitiesRule;
	}
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [List of referenced entities that trigger the condition.]
	 * 
	*/
	public void setEntityRefs(List<IEntityRef> entityRefs)
	{
		this.entityRefs = entityRefs;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE))
		{
			// Enumeration Type
			TriggeringEntitiesRule result = TriggeringEntitiesRule.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				triggeringEntitiesRule = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
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
		
			List<IEntityRef> entityRefs = null;
			entityRefs =  getEntityRefs();
			if (entityRefs != null)
			{
				for(IEntityRef item : entityRefs)
				{
					result.add((BaseImpl) item);
				}
			}
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TriggeringEntitiesImpl clone()
	{
		TriggeringEntitiesImpl clonedObject = new TriggeringEntitiesImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		TriggeringEntitiesRule triggeringEntitiesRule = getTriggeringEntitiesRule();
		if (triggeringEntitiesRule != null)
		{
			clonedObject.setTriggeringEntitiesRule(TriggeringEntitiesRule.getFromLiteral(triggeringEntitiesRule.getLiteral()));
		}
		// clone children
		List<IEntityRef> entityRefs = null;
			entityRefs =  getEntityRefs();
		if (entityRefs != null)
		{
			List<IEntityRef> clonedList = new ArrayList<IEntityRef>();
			for(IEntityRef item : entityRefs)
			{
				EntityRefImpl clonedChild = ((EntityRefImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setEntityRefs(clonedList);
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
	throw new KeyNotSupportedException();
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__ENTITY_REF))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getEntityRefs();

	}else 
	{
		throw new KeyNotSupportedException();
	}
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE))
	{
	 	TriggeringEntitiesRule triggeringEntitiesRule = getTriggeringEntitiesRule();
		return triggeringEntitiesRule != null?triggeringEntitiesRule.getLiteral():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override
  public String getModelType()
  {
  	return "TriggeringEntities";
  }
 	
}

