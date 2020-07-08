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

import de.rac.openscenario.v1_0.api.IStoryboardElementStateCondition;
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
import de.rac.openscenario.v1_0.api.IStoryboardElement;
import de.rac.openscenario.v1_0.api.StoryboardElementState;
import de.rac.openscenario.v1_0.api.StoryboardElementType;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStoryboardElementStateCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStoryboardElementStateCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class StoryboardElementStateConditionImpl extends BaseImpl implements IStoryboardElementStateCondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__STATE, String.class);
	}
	
	private StoryboardElementType storyboardElementType;
	private NamedReferenceProxy<IStoryboardElement> storyboardElementRef;
	private StoryboardElementState state;
	/**
	 * Default constructor
	 */
	public StoryboardElementStateConditionImpl()
	{
		super();
		addAdapter(StoryboardElementStateConditionImpl.class, this);
		addAdapter(IStoryboardElementStateCondition.class, this);
		
	}
	@Override
	public StoryboardElementType getStoryboardElementType()
	{
		return storyboardElementType;
	}
	@Override
	public INamedReference<IStoryboardElement> getStoryboardElementRef()
	{
		return storyboardElementRef;
	}
	@Override
	public StoryboardElementState getState()
	{
		return state;
	}
	/**
	 * Sets the value of model property storyboardElementType
	 * @param storyboardElementType from OpenSCENARIO class model specification: [Type of storyboard element instance.]
	 * 
	*/
	public  void setStoryboardElementType (StoryboardElementType storyboardElementType )
	{
		this.storyboardElementType = storyboardElementType;
	}
	/**
	 * Sets the value of model property storyboardElementRef
	 * @param storyboardElementRef from OpenSCENARIO class model specification: [Name of the referenced Storyboard instance.]
	 * 
	*/
	public  void setStoryboardElementRef (NamedReferenceProxy<IStoryboardElement> storyboardElementRef )
	{
		this.storyboardElementRef = storyboardElementRef;
	}
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [The state or the transition of the storyboard element 
	 * instance for which the condition becomes true.]
	 * 
	*/
	public  void setState (StoryboardElementState state )
	{
		this.state = state;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE))
		{
			// Enumeration Type
			StoryboardElementType result = StoryboardElementType.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				storyboardElementType = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF))
		{
			// Proxy
			NamedReferenceProxy<IStoryboardElement> proxy = new NamedReferenceProxy<IStoryboardElement> (parameterLiteralValue);
			storyboardElementRef = proxy;
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__STATE))
		{
			// Enumeration Type
			StoryboardElementState result = StoryboardElementState.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				state = result;
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
		
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public StoryboardElementStateConditionImpl clone()
	{
		StoryboardElementStateConditionImpl clonedObject = new StoryboardElementStateConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		StoryboardElementType storyboardElementType = getStoryboardElementType();
		if (storyboardElementType != null)
		{
			clonedObject.setStoryboardElementType(StoryboardElementType.getFromLiteral(storyboardElementType.getLiteral()));
		}
		// Proxy
		NamedReferenceProxy<IStoryboardElement> proxy = ((NamedReferenceProxy<IStoryboardElement>)getStoryboardElementRef()).clone();
		clonedObject.setStoryboardElementRef(proxy);
		proxy.setParent(clonedObject);
		// Enumeration Type
		StoryboardElementState state = getState();
		if (state != null)
		{
			clonedObject.setState(StoryboardElementState.getFromLiteral(state.getLiteral()));
		}
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
	if (key.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF))
	{
		// Get the Proxy
		INamedReference<IStoryboardElement> storyboardElementRef = getStoryboardElementRef();
		return storyboardElementRef!= null? storyboardElementRef.getNameRef():null;
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
	if (key.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF))
	{
		// Get the Proxy
		INamedReference<IStoryboardElement> storyboardElementRef = getStoryboardElementRef();
		return storyboardElementRef!= null?(IOpenScenarioFlexElement) storyboardElementRef.getTargetObject():null;
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
	if (key.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE))
	{
	 	StoryboardElementType storyboardElementType = getStoryboardElementType();
		return storyboardElementType != null?storyboardElementType.getLiteral():null;
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__STATE))
	{
	 	StoryboardElementState state = getState();
		return state != null?state.getLiteral():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override
  public String getModelType()
  {
  	return "StoryboardElementStateCondition";
  }
 	
}

