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

import net.asam.openscenario.v1_0.api.IModifyRule;
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

import net.asam.openscenario.v1_0.api.IParameterMultiplyByValueRule;
import net.asam.openscenario.v1_0.api.IParameterAddValueRule;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IModifyRule. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IModifyRule)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ModifyRuleImpl extends BaseImpl implements IModifyRule, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IParameterAddValueRule addValue;
	private IParameterMultiplyByValueRule multiplyByValue;
	/**
	 * Default constructor
	 */
	public ModifyRuleImpl()
	{
		super();
		addAdapter(ModifyRuleImpl.class, this);
		addAdapter(IModifyRule.class, this);
		
	}
	@Override
	public IParameterAddValueRule getAddValue()
	{
		return addValue;
	}
	@Override
	public IParameterMultiplyByValueRule getMultiplyByValue()
	{
		return multiplyByValue;
	}
	/**
	 * Sets the value of model property addValue
	 * @param addValue from OpenSCENARIO class model specification: [Adding a value to a parameter.]
	 * 
	*/
	public  void setAddValue (IParameterAddValueRule addValue )
	{
		this.addValue = addValue;
	}
	/**
	 * Sets the value of model property multiplyByValue
	 * @param multiplyByValue from OpenSCENARIO class model specification: [Multiply a parameter by a value.]
	 * 
	*/
	public  void setMultiplyByValue (IParameterMultiplyByValueRule multiplyByValue )
	{
		this.multiplyByValue = multiplyByValue;
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
		
			IParameterAddValueRule addValue = null;
			addValue =  getAddValue();
			if (addValue != null)
			{
				result.add((BaseImpl) addValue);
			}	
			IParameterMultiplyByValueRule multiplyByValue = null;
			multiplyByValue =  getMultiplyByValue();
			if (multiplyByValue != null)
			{
				result.add((BaseImpl) multiplyByValue);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ModifyRuleImpl clone()
	{
		ModifyRuleImpl clonedObject = new ModifyRuleImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IParameterAddValueRule addValue = null;
		addValue =  getAddValue();
		if (addValue != null)
		{
			ParameterAddValueRuleImpl clonedChild = ((ParameterAddValueRuleImpl) addValue).clone();
			clonedObject.setAddValue(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IParameterMultiplyByValueRule multiplyByValue = null;
		multiplyByValue =  getMultiplyByValue();
		if (multiplyByValue != null)
		{
			ParameterMultiplyByValueRuleImpl clonedChild = ((ParameterMultiplyByValueRuleImpl) multiplyByValue).clone();
			clonedObject.setMultiplyByValue(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__ADD_VALUE))
	{
		return (IOpenScenarioFlexElement) getAddValue();
	}else 
	if (key.equals(OscConstants.ELEMENT__MULTIPLY_BY_VALUE))
	{
		return (IOpenScenarioFlexElement) getMultiplyByValue();
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
  	return "ModifyRule";
  }
 	
}

