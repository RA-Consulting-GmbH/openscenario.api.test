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

import net.asam.openscenario.v1_0.api.IAct;
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

import net.asam.openscenario.v1_0.api.IManeuverGroup;
import net.asam.openscenario.v1_0.api.ITrigger;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAct. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAct)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ActImpl extends BaseImpl implements IAct, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private String name;
	private List<IManeuverGroup> maneuverGroups;
	private ITrigger startTrigger;
	private ITrigger stopTrigger;
	/**
	 * Default constructor
	 */
	public ActImpl()
	{
		super();
		addAdapter(ActImpl.class, this);
		addAdapter(IAct.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public List<IManeuverGroup> getManeuverGroups()
	{
		return maneuverGroups;
	}
	@Override
	public ITrigger getStartTrigger()
	{
		return startTrigger;
	}
	@Override
	public ITrigger getStopTrigger()
	{
		return stopTrigger;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of this act.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property maneuverGroups
	 * @param maneuverGroups from OpenSCENARIO class model specification: [A list of maneuver groups representing the act.]
	 * 
	*/
	public void setManeuverGroups(List<IManeuverGroup> maneuverGroups)
	{
		this.maneuverGroups = maneuverGroups;
	}
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Defines a trigger to that starts the act.]
	 * 
	*/
	public  void setStartTrigger (ITrigger startTrigger )
	{
		this.startTrigger = startTrigger;
	}
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Defines a trigger that stops the act.]
	 * 
	*/
	public  void setStopTrigger (ITrigger stopTrigger )
	{
		this.stopTrigger = stopTrigger;
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
		
			List<IManeuverGroup> maneuverGroups = null;
			maneuverGroups =  getManeuverGroups();
			if (maneuverGroups != null)
			{
				for(IManeuverGroup item : maneuverGroups)
				{
					result.add((BaseImpl) item);
				}
			}
			ITrigger startTrigger = null;
			startTrigger =  getStartTrigger();
			if (startTrigger != null)
			{
				result.add((BaseImpl) startTrigger);
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
	public ActImpl clone()
	{
		ActImpl clonedObject = new ActImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		List<IManeuverGroup> maneuverGroups = null;
			maneuverGroups =  getManeuverGroups();
		if (maneuverGroups != null)
		{
			List<IManeuverGroup> clonedList = new ArrayList<IManeuverGroup>();
			for(IManeuverGroup item : maneuverGroups)
			{
				ManeuverGroupImpl clonedChild = ((ManeuverGroupImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setManeuverGroups(clonedList);
		}
		ITrigger startTrigger = null;
		startTrigger =  getStartTrigger();
		if (startTrigger != null)
		{
			TriggerImpl clonedChild = ((TriggerImpl) startTrigger).clone();
			clonedObject.setStartTrigger(clonedChild);
			clonedChild.setParent(clonedObject);
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
	if (key.equals(OscConstants.ELEMENT__START_TRIGGER))
	{
		return (IOpenScenarioFlexElement) getStartTrigger();
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
	if (key.equals(OscConstants.ELEMENT__MANEUVER_GROUP))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getManeuverGroups();

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
  	return "Act";
  }
 	
}

