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

import net.asam.openscenario.v1_0.api.IStoryboard;
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

import net.asam.openscenario.v1_0.api.IInit;
import net.asam.openscenario.v1_0.api.IStory;
import net.asam.openscenario.v1_0.api.ITrigger;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IStoryboard. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IStoryboard)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class StoryboardImpl extends BaseImpl implements IStoryboard, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IInit init;
	private List<IStory> stories;
	private ITrigger stopTrigger;
	/**
	 * Default constructor
	 */
	public StoryboardImpl()
	{
		super();
		addAdapter(StoryboardImpl.class, this);
		addAdapter(IStoryboard.class, this);
		
	}
	@Override
	public IInit getInit()
	{
		return init;
	}
	@Override
	public List<IStory> getStories()
	{
		return stories;
	}
	@Override
	public ITrigger getStopTrigger()
	{
		return stopTrigger;
	}
	/**
	 * Sets the value of model property init
	 * @param init from OpenSCENARIO class model specification: [Initialization of the storyboard instance. Initial conditions 
	 * are set and initial actions are applied to entities.]
	 * 
	*/
	public  void setInit (IInit init )
	{
		this.init = init;
	}
	/**
	 * Sets the value of model property stories
	 * @param stories from OpenSCENARIO class model specification: [List of stories defined in a story board.]
	 * 
	*/
	public void setStories(List<IStory> stories)
	{
		this.stories = stories;
	}
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Trigger to stop the Storyboard instance.]
	 * 
	*/
	public  void setStopTrigger (ITrigger stopTrigger )
	{
		this.stopTrigger = stopTrigger;
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
		
			IInit init = null;
			init =  getInit();
			if (init != null)
			{
				result.add((BaseImpl) init);
			}	
			List<IStory> stories = null;
			stories =  getStories();
			if (stories != null)
			{
				for(IStory item : stories)
				{
					result.add((BaseImpl) item);
				}
			}
			ITrigger stopTrigger = null;
			stopTrigger =  getStopTrigger();
			if (stopTrigger != null)
			{
				result.add((BaseImpl) stopTrigger);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public StoryboardImpl clone()
	{
		StoryboardImpl clonedObject = new StoryboardImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IInit init = null;
		init =  getInit();
		if (init != null)
		{
			InitImpl clonedChild = ((InitImpl) init).clone();
			clonedObject.setInit(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		List<IStory> stories = null;
			stories =  getStories();
		if (stories != null)
		{
			List<IStory> clonedList = new ArrayList<IStory>();
			for(IStory item : stories)
			{
				StoryImpl clonedChild = ((StoryImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setStories(clonedList);
		}
		ITrigger stopTrigger = null;
		stopTrigger =  getStopTrigger();
		if (stopTrigger != null)
		{
			TriggerImpl clonedChild = ((TriggerImpl) stopTrigger).clone();
			clonedObject.setStopTrigger(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__INIT))
	{
		return (IOpenScenarioFlexElement) getInit();
	}else 
	if (key.equals(OscConstants.ELEMENT__STOP_TRIGGER))
	{
		return (IOpenScenarioFlexElement) getStopTrigger();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__STORY))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getStories();

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
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "Storyboard";
  }
 	
}

