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

import de.rac.openscenario.v1_0.api.IRoutingAction;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IAssignRouteAction;
import de.rac.openscenario.v1_0.api.IFollowTrajectoryAction;
import de.rac.openscenario.v1_0.api.IAcquirePositionAction;


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
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IAssignRouteAction assignRouteAction;
	private IFollowTrajectoryAction followTrajectoryAction;
	private IAcquirePositionAction acquirePositionAction;

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
	
	
	
}

