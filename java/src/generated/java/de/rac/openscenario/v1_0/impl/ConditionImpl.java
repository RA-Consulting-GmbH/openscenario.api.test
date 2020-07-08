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

import de.rac.openscenario.v1_0.api.ICondition;
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

import de.rac.openscenario.v1_0.api.ConditionEdge;
import de.rac.openscenario.v1_0.api.IByValueCondition;
import de.rac.openscenario.v1_0.api.IByEntityCondition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ConditionImpl extends BaseImpl implements ICondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DELAY, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__CONDITION_EDGE, String.class);
	}
	
	private String name;
	private Double delay;
	private ConditionEdge conditionEdge;
	private IByEntityCondition byEntityCondition;
	private IByValueCondition byValueCondition;
	/**
	 * Default constructor
	 */
	public ConditionImpl()
	{
		super();
		addAdapter(ConditionImpl.class, this);
		addAdapter(ICondition.class, this);
		
	}
	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public Double getDelay()
	{
		return delay;
	}
	@Override
	public ConditionEdge getConditionEdge()
	{
		return conditionEdge;
	}
	@Override
	public IByEntityCondition getByEntityCondition()
	{
		return byEntityCondition;
	}
	@Override
	public IByValueCondition getByValueCondition()
	{
		return byValueCondition;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the condition.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property delay
	 * @param delay from OpenSCENARIO class model specification: [Time elapsed after the edge condition is verified, until the 
	 * condition returns true to the scenario. Unit: s; Range: , [0..inf[.]
	 * 
	*/
	public  void setDelay (Double delay )
	{
		this.delay = delay;
	}
	/**
	 * Sets the value of model property conditionEdge
	 * @param conditionEdge from OpenSCENARIO class model specification: [Specifies the edge when the condition is evaluated to
	 * true (rising, falling, any).]
	 * 
	*/
	public  void setConditionEdge (ConditionEdge conditionEdge )
	{
		this.conditionEdge = conditionEdge;
	}
	/**
	 * Sets the value of model property byEntityCondition
	 * @param byEntityCondition from OpenSCENARIO class model specification: [A condition that refers to an entity.]
	 * 
	*/
	public  void setByEntityCondition (IByEntityCondition byEntityCondition )
	{
		this.byEntityCondition = byEntityCondition;
	}
	/**
	 * Sets the value of model property byValueCondition
	 * @param byValueCondition from OpenSCENARIO class model specification: [A condition that refers to a runtime value.]
	 * 
	*/
	public  void setByValueCondition (IByValueCondition byValueCondition )
	{
		this.byValueCondition = byValueCondition;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME))
		{
			// Simple type
			name = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DELAY))
		{
			// Simple type
			delay = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__CONDITION_EDGE))
		{
			// Enumeration Type
			ConditionEdge result = ConditionEdge.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				conditionEdge = result;
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
		
			IByEntityCondition byEntityCondition = null;
			byEntityCondition =  getByEntityCondition();
			if (byEntityCondition != null)
			{
				result.add((BaseImpl) byEntityCondition);
			}	
			IByValueCondition byValueCondition = null;
			byValueCondition =  getByValueCondition();
			if (byValueCondition != null)
			{
				result.add((BaseImpl) byValueCondition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ConditionImpl clone()
	{
		ConditionImpl clonedObject = new ConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// Simple type
		clonedObject.setDelay(getDelay());		
		// Enumeration Type
		ConditionEdge conditionEdge = getConditionEdge();
		if (conditionEdge != null)
		{
			clonedObject.setConditionEdge(ConditionEdge.getFromLiteral(conditionEdge.getLiteral()));
		}
		// clone children
		IByEntityCondition byEntityCondition = null;
		byEntityCondition =  getByEntityCondition();
		if (byEntityCondition != null)
		{
			ByEntityConditionImpl clonedChild = ((ByEntityConditionImpl) byEntityCondition).clone();
			clonedObject.setByEntityCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IByValueCondition byValueCondition = null;
		byValueCondition =  getByValueCondition();
		if (byValueCondition != null)
		{
			ByValueConditionImpl clonedChild = ((ByValueConditionImpl) byValueCondition).clone();
			clonedObject.setByValueCondition(clonedChild);
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
	if (key.equals(OscConstants.ATTRIBUTE__NAME))
	{
		return getName();		
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
	if (key.equals(OscConstants.ATTRIBUTE__DELAY))
	{
		return getDelay();
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
	if (key.equals(OscConstants.ELEMENT__BY_ENTITY_CONDITION))
	{
		return (IOpenScenarioFlexElement) getByEntityCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__BY_VALUE_CONDITION))
	{
		return (IOpenScenarioFlexElement) getByValueCondition();
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__CONDITION_EDGE))
	{
	 	ConditionEdge conditionEdge = getConditionEdge();
		return conditionEdge != null?conditionEdge.getLiteral():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override
  public String getModelType()
  {
  	return "Condition";
  }
 	
}

