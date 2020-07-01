package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrafficAction;
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

import de.rac.openscenario.v1_0.api.ITrafficSinkAction;
import de.rac.openscenario.v1_0.api.ITrafficSwarmAction;
import de.rac.openscenario.v1_0.api.ITrafficSourceAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficActionImpl extends BaseImpl implements ITrafficAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ITrafficSourceAction trafficSourceAction;
	private ITrafficSinkAction trafficSinkAction;
	private ITrafficSwarmAction trafficSwarmAction;

	@Override
	public ITrafficSourceAction getTrafficSourceAction()
	{
		return trafficSourceAction;
	}
	@Override
	public ITrafficSinkAction getTrafficSinkAction()
	{
		return trafficSinkAction;
	}
	@Override
	public ITrafficSwarmAction getTrafficSwarmAction()
	{
		return trafficSwarmAction;
	}
	/**
	 * Sets the value of model property trafficSourceAction
	 * @param trafficSourceAction from OpenSCENARIO class model specification: [Defines a source of traffic at a specific 
	 * position.]
	 * 
	*/
	public  void setTrafficSourceAction (ITrafficSourceAction trafficSourceAction )
	{
		this.trafficSourceAction = trafficSourceAction;
	}
	/**
	 * Sets the value of model property trafficSinkAction
	 * @param trafficSinkAction from OpenSCENARIO class model specification: [Defines a sink of traffic at a specific 
	 * position.]
	 * 
	*/
	public  void setTrafficSinkAction (ITrafficSinkAction trafficSinkAction )
	{
		this.trafficSinkAction = trafficSinkAction;
	}
	/**
	 * Sets the value of model property trafficSwarmAction
	 * @param trafficSwarmAction from OpenSCENARIO class model specification: [Defines swarm traffic around a given central 
	 * entity.]
	 * 
	*/
	public  void setTrafficSwarmAction (ITrafficSwarmAction trafficSwarmAction )
	{
		this.trafficSwarmAction = trafficSwarmAction;
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
		
			ITrafficSourceAction trafficSourceAction = null;
			trafficSourceAction =  getTrafficSourceAction();
			if (trafficSourceAction != null)
			{
				result.add((BaseImpl) trafficSourceAction);
			}	
			ITrafficSinkAction trafficSinkAction = null;
			trafficSinkAction =  getTrafficSinkAction();
			if (trafficSinkAction != null)
			{
				result.add((BaseImpl) trafficSinkAction);
			}	
			ITrafficSwarmAction trafficSwarmAction = null;
			trafficSwarmAction =  getTrafficSwarmAction();
			if (trafficSwarmAction != null)
			{
				result.add((BaseImpl) trafficSwarmAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrafficActionImpl clone()
	{
		TrafficActionImpl clonedObject = new TrafficActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ITrafficSourceAction trafficSourceAction = null;
		trafficSourceAction =  getTrafficSourceAction();
		if (trafficSourceAction != null)
		{
			TrafficSourceActionImpl clonedChild = ((TrafficSourceActionImpl) trafficSourceAction).clone();
			clonedObject.setTrafficSourceAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrafficSinkAction trafficSinkAction = null;
		trafficSinkAction =  getTrafficSinkAction();
		if (trafficSinkAction != null)
		{
			TrafficSinkActionImpl clonedChild = ((TrafficSinkActionImpl) trafficSinkAction).clone();
			clonedObject.setTrafficSinkAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrafficSwarmAction trafficSwarmAction = null;
		trafficSwarmAction =  getTrafficSwarmAction();
		if (trafficSwarmAction != null)
		{
			TrafficSwarmActionImpl clonedChild = ((TrafficSwarmActionImpl) trafficSwarmAction).clone();
			clonedObject.setTrafficSwarmAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

