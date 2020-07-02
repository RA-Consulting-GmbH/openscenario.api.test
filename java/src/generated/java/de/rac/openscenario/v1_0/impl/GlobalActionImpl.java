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

import de.rac.openscenario.v1_0.api.IGlobalAction;
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

import de.rac.openscenario.v1_0.api.ITrafficAction;
import de.rac.openscenario.v1_0.api.IEnvironmentAction;
import de.rac.openscenario.v1_0.api.IEntityAction;
import de.rac.openscenario.v1_0.api.IParameterAction;
import de.rac.openscenario.v1_0.api.IInfrastructureAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IGlobalAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IGlobalAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class GlobalActionImpl extends BaseImpl implements IGlobalAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IEnvironmentAction environmentAction;
	private IEntityAction entityAction;
	private IParameterAction parameterAction;
	private IInfrastructureAction infrastructureAction;
	private ITrafficAction trafficAction;

	@Override
	public IEnvironmentAction getEnvironmentAction()
	{
		return environmentAction;
	}
	@Override
	public IEntityAction getEntityAction()
	{
		return entityAction;
	}
	@Override
	public IParameterAction getParameterAction()
	{
		return parameterAction;
	}
	@Override
	public IInfrastructureAction getInfrastructureAction()
	{
		return infrastructureAction;
	}
	@Override
	public ITrafficAction getTrafficAction()
	{
		return trafficAction;
	}
	/**
	 * Sets the value of model property environmentAction
	 * @param environmentAction from OpenSCENARIO class model specification: [Sets the weather state, road conditions, and time
	 * of the day.]
	 * 
	*/
	public  void setEnvironmentAction (IEnvironmentAction environmentAction )
	{
		this.environmentAction = environmentAction;
	}
	/**
	 * Sets the value of model property entityAction
	 * @param entityAction from OpenSCENARIO class model specification: [Removing or adding entities.]
	 * 
	*/
	public  void setEntityAction (IEntityAction entityAction )
	{
		this.entityAction = entityAction;
	}
	/**
	 * Sets the value of model property parameterAction
	 * @param parameterAction from OpenSCENARIO class model specification: [Setting/modifying values of parameters.]
	 * 
	*/
	public  void setParameterAction (IParameterAction parameterAction )
	{
		this.parameterAction = parameterAction;
	}
	/**
	 * Sets the value of model property infrastructureAction
	 * @param infrastructureAction from OpenSCENARIO class model specification: [Setting/modifying traffic signals.]
	 * 
	*/
	public  void setInfrastructureAction (IInfrastructureAction infrastructureAction )
	{
		this.infrastructureAction = infrastructureAction;
	}
	/**
	 * Sets the value of model property trafficAction
	 * @param trafficAction from OpenSCENARIO class model specification: [Populating ambient traffic.]
	 * 
	*/
	public  void setTrafficAction (ITrafficAction trafficAction )
	{
		this.trafficAction = trafficAction;
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
		
			IEnvironmentAction environmentAction = null;
			environmentAction =  getEnvironmentAction();
			if (environmentAction != null)
			{
				result.add((BaseImpl) environmentAction);
			}	
			IEntityAction entityAction = null;
			entityAction =  getEntityAction();
			if (entityAction != null)
			{
				result.add((BaseImpl) entityAction);
			}	
			IParameterAction parameterAction = null;
			parameterAction =  getParameterAction();
			if (parameterAction != null)
			{
				result.add((BaseImpl) parameterAction);
			}	
			IInfrastructureAction infrastructureAction = null;
			infrastructureAction =  getInfrastructureAction();
			if (infrastructureAction != null)
			{
				result.add((BaseImpl) infrastructureAction);
			}	
			ITrafficAction trafficAction = null;
			trafficAction =  getTrafficAction();
			if (trafficAction != null)
			{
				result.add((BaseImpl) trafficAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public GlobalActionImpl clone()
	{
		GlobalActionImpl clonedObject = new GlobalActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IEnvironmentAction environmentAction = null;
		environmentAction =  getEnvironmentAction();
		if (environmentAction != null)
		{
			EnvironmentActionImpl clonedChild = ((EnvironmentActionImpl) environmentAction).clone();
			clonedObject.setEnvironmentAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IEntityAction entityAction = null;
		entityAction =  getEntityAction();
		if (entityAction != null)
		{
			EntityActionImpl clonedChild = ((EntityActionImpl) entityAction).clone();
			clonedObject.setEntityAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IParameterAction parameterAction = null;
		parameterAction =  getParameterAction();
		if (parameterAction != null)
		{
			ParameterActionImpl clonedChild = ((ParameterActionImpl) parameterAction).clone();
			clonedObject.setParameterAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IInfrastructureAction infrastructureAction = null;
		infrastructureAction =  getInfrastructureAction();
		if (infrastructureAction != null)
		{
			InfrastructureActionImpl clonedChild = ((InfrastructureActionImpl) infrastructureAction).clone();
			clonedObject.setInfrastructureAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrafficAction trafficAction = null;
		trafficAction =  getTrafficAction();
		if (trafficAction != null)
		{
			TrafficActionImpl clonedChild = ((TrafficActionImpl) trafficAction).clone();
			clonedObject.setTrafficAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

