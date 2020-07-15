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

import net.asam.openscenario.v1_0.api.IRoutingAction;
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

import net.asam.openscenario.v1_0.api.IFollowTrajectoryAction;
import net.asam.openscenario.v1_0.api.IAssignRouteAction;
import net.asam.openscenario.v1_0.api.IAcquirePositionAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoutingAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoutingAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RoutingActionImpl extends BaseImpl implements IRoutingAction, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IAssignRouteAction assignRouteAction;
	private IFollowTrajectoryAction followTrajectoryAction;
	private IAcquirePositionAction acquirePositionAction;
	/**
	 * Default constructor
	 */
	public RoutingActionImpl()
	{
		super();
		addAdapter(RoutingActionImpl.class, this);
		addAdapter(IRoutingAction.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public IAssignRouteAction getAssignRouteAction()
	{
		return assignRouteAction;
	}
	@Override
	public IFollowTrajectoryAction getFollowTrajectoryAction()
	{
		return followTrajectoryAction;
	}
	@Override
	public IAcquirePositionAction getAcquirePositionAction()
	{
		return acquirePositionAction;
	}
	/**
	 * Sets the value of model property assignRouteAction
	 * @param assignRouteAction from OpenSCENARIO class model specification: [Assigns a route to an entity. The route is 
	 * defined by at least two waypoints.]
	 * 
	*/
	public  void setAssignRouteAction (IAssignRouteAction assignRouteAction )
	{
		this.assignRouteAction = assignRouteAction;
	}
	/**
	 * Sets the value of model property followTrajectoryAction
	 * @param followTrajectoryAction from OpenSCENARIO class model specification: [Controls an entity to follow a trajectory.]
	 * 
	*/
	public  void setFollowTrajectoryAction (IFollowTrajectoryAction followTrajectoryAction )
	{
		this.followTrajectoryAction = followTrajectoryAction;
	}
	/**
	 * Sets the value of model property acquirePositionAction
	 * @param acquirePositionAction from OpenSCENARIO class model specification: [Assigns a route to an entity. The route 
	 * assigned will be the shortest route (along roads) between the entity's current , position and the position specified.]
	 * 
	*/
	public  void setAcquirePositionAction (IAcquirePositionAction acquirePositionAction )
	{
		this.acquirePositionAction = acquirePositionAction;
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
		
			IAssignRouteAction assignRouteAction = null;
			assignRouteAction =  getAssignRouteAction();
			if (assignRouteAction != null)
			{
				result.add((BaseImpl) assignRouteAction);
			}	
			IFollowTrajectoryAction followTrajectoryAction = null;
			followTrajectoryAction =  getFollowTrajectoryAction();
			if (followTrajectoryAction != null)
			{
				result.add((BaseImpl) followTrajectoryAction);
			}	
			IAcquirePositionAction acquirePositionAction = null;
			acquirePositionAction =  getAcquirePositionAction();
			if (acquirePositionAction != null)
			{
				result.add((BaseImpl) acquirePositionAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public RoutingActionImpl clone()
	{
		RoutingActionImpl clonedObject = new RoutingActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IAssignRouteAction assignRouteAction = null;
		assignRouteAction =  getAssignRouteAction();
		if (assignRouteAction != null)
		{
			AssignRouteActionImpl clonedChild = ((AssignRouteActionImpl) assignRouteAction).clone();
			clonedObject.setAssignRouteAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IFollowTrajectoryAction followTrajectoryAction = null;
		followTrajectoryAction =  getFollowTrajectoryAction();
		if (followTrajectoryAction != null)
		{
			FollowTrajectoryActionImpl clonedChild = ((FollowTrajectoryActionImpl) followTrajectoryAction).clone();
			clonedObject.setFollowTrajectoryAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAcquirePositionAction acquirePositionAction = null;
		acquirePositionAction =  getAcquirePositionAction();
		if (acquirePositionAction != null)
		{
			AcquirePositionActionImpl clonedChild = ((AcquirePositionActionImpl) acquirePositionAction).clone();
			clonedObject.setAcquirePositionAction(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__ASSIGN_ROUTE_ACTION))
	{
		return (IOpenScenarioFlexElement) getAssignRouteAction();
	}else 
	if (key.equals(OscConstants.ELEMENT__FOLLOW_TRAJECTORY_ACTION))
	{
		return (IOpenScenarioFlexElement) getFollowTrajectoryAction();
	}else 
	if (key.equals(OscConstants.ELEMENT__ACQUIRE_POSITION_ACTION))
	{
		return (IOpenScenarioFlexElement) getAcquirePositionAction();
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
  	return "RoutingAction";
  }
 	
}

