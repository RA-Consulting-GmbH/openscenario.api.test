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

import net.asam.openscenario.v1_0.api.ILateralAction;
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

import net.asam.openscenario.v1_0.api.ILateralDistanceAction;
import net.asam.openscenario.v1_0.api.ILaneChangeAction;
import net.asam.openscenario.v1_0.api.ILaneOffsetAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILateralAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILateralAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LateralActionImpl extends BaseImpl implements ILateralAction, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ILaneChangeAction laneChangeAction;
	private ILaneOffsetAction laneOffsetAction;
	private ILateralDistanceAction lateralDistanceAction;
	/**
	 * Default constructor
	 */
	public LateralActionImpl()
	{
		super();
		addAdapter(LateralActionImpl.class, this);
		addAdapter(ILateralAction.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public ILaneChangeAction getLaneChangeAction()
	{
		return laneChangeAction;
	}
	@Override
	public ILaneOffsetAction getLaneOffsetAction()
	{
		return laneOffsetAction;
	}
	@Override
	public ILateralDistanceAction getLateralDistanceAction()
	{
		return lateralDistanceAction;
	}
	/**
	 * Sets the value of model property laneChangeAction
	 * @param laneChangeAction from OpenSCENARIO class model specification: [Action defining a lane change.]
	 * 
	*/
	public  void setLaneChangeAction (ILaneChangeAction laneChangeAction )
	{
		this.laneChangeAction = laneChangeAction;
	}
	/**
	 * Sets the value of model property laneOffsetAction
	 * @param laneOffsetAction from OpenSCENARIO class model specification: [Action defining a continuously kept lane offset.]
	 * 
	*/
	public  void setLaneOffsetAction (ILaneOffsetAction laneOffsetAction )
	{
		this.laneOffsetAction = laneOffsetAction;
	}
	/**
	 * Sets the value of model property lateralDistanceAction
	 * @param lateralDistanceAction from OpenSCENARIO class model specification: [Action defining a continuously kept lateral 
	 * distance to a specific entity.]
	 * 
	*/
	public  void setLateralDistanceAction (ILateralDistanceAction lateralDistanceAction )
	{
		this.lateralDistanceAction = lateralDistanceAction;
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
		
			ILaneChangeAction laneChangeAction = null;
			laneChangeAction =  getLaneChangeAction();
			if (laneChangeAction != null)
			{
				result.add((BaseImpl) laneChangeAction);
			}	
			ILaneOffsetAction laneOffsetAction = null;
			laneOffsetAction =  getLaneOffsetAction();
			if (laneOffsetAction != null)
			{
				result.add((BaseImpl) laneOffsetAction);
			}	
			ILateralDistanceAction lateralDistanceAction = null;
			lateralDistanceAction =  getLateralDistanceAction();
			if (lateralDistanceAction != null)
			{
				result.add((BaseImpl) lateralDistanceAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LateralActionImpl clone()
	{
		LateralActionImpl clonedObject = new LateralActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ILaneChangeAction laneChangeAction = null;
		laneChangeAction =  getLaneChangeAction();
		if (laneChangeAction != null)
		{
			LaneChangeActionImpl clonedChild = ((LaneChangeActionImpl) laneChangeAction).clone();
			clonedObject.setLaneChangeAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ILaneOffsetAction laneOffsetAction = null;
		laneOffsetAction =  getLaneOffsetAction();
		if (laneOffsetAction != null)
		{
			LaneOffsetActionImpl clonedChild = ((LaneOffsetActionImpl) laneOffsetAction).clone();
			clonedObject.setLaneOffsetAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ILateralDistanceAction lateralDistanceAction = null;
		lateralDistanceAction =  getLateralDistanceAction();
		if (lateralDistanceAction != null)
		{
			LateralDistanceActionImpl clonedChild = ((LateralDistanceActionImpl) lateralDistanceAction).clone();
			clonedObject.setLateralDistanceAction(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__LANE_CHANGE_ACTION))
	{
		return (IOpenScenarioFlexElement) getLaneChangeAction();
	}else 
	if (key.equals(OscConstants.ELEMENT__LANE_OFFSET_ACTION))
	{
		return (IOpenScenarioFlexElement) getLaneOffsetAction();
	}else 
	if (key.equals(OscConstants.ELEMENT__LATERAL_DISTANCE_ACTION))
	{
		return (IOpenScenarioFlexElement) getLateralDistanceAction();
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
  	return "LateralAction";
  }
 	
}

