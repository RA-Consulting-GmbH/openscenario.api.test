package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrafficSignalAction;
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

import de.rac.openscenario.v1_0.api.ITrafficSignalControllerAction;
import de.rac.openscenario.v1_0.api.ITrafficSignalStateAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalActionImpl extends BaseImpl implements ITrafficSignalAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ITrafficSignalControllerAction trafficSignalControllerAction;
	private ITrafficSignalStateAction trafficSignalStateAction;

	@Override
	public ITrafficSignalControllerAction getTrafficSignalControllerAction()
	{
		return trafficSignalControllerAction;
	}
	@Override
	public ITrafficSignalStateAction getTrafficSignalStateAction()
	{
		return trafficSignalStateAction;
	}
	/**
	 * Sets the value of model property trafficSignalControllerAction
	 * @param trafficSignalControllerAction from OpenSCENARIO class model specification: [Action used to control the state of a
	 * signal.]
	 * 
	*/
	public  void setTrafficSignalControllerAction (ITrafficSignalControllerAction trafficSignalControllerAction )
	{
		this.trafficSignalControllerAction = trafficSignalControllerAction;
	}
	/**
	 * Sets the value of model property trafficSignalStateAction
	 * @param trafficSignalStateAction from OpenSCENARIO class model specification: [Action used to set a specific phase of a 
	 * signal controller.]
	 * 
	*/
	public  void setTrafficSignalStateAction (ITrafficSignalStateAction trafficSignalStateAction )
	{
		this.trafficSignalStateAction = trafficSignalStateAction;
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
		
			ITrafficSignalControllerAction trafficSignalControllerAction = null;
			trafficSignalControllerAction =  getTrafficSignalControllerAction();
			if (trafficSignalControllerAction != null)
			{
				result.add((BaseImpl) trafficSignalControllerAction);
			}	
			ITrafficSignalStateAction trafficSignalStateAction = null;
			trafficSignalStateAction =  getTrafficSignalStateAction();
			if (trafficSignalStateAction != null)
			{
				result.add((BaseImpl) trafficSignalStateAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrafficSignalActionImpl clone()
	{
		TrafficSignalActionImpl clonedObject = new TrafficSignalActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ITrafficSignalControllerAction trafficSignalControllerAction = null;
		trafficSignalControllerAction =  getTrafficSignalControllerAction();
		if (trafficSignalControllerAction != null)
		{
			TrafficSignalControllerActionImpl clonedChild = ((TrafficSignalControllerActionImpl) trafficSignalControllerAction).clone();
			clonedObject.setTrafficSignalControllerAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrafficSignalStateAction trafficSignalStateAction = null;
		trafficSignalStateAction =  getTrafficSignalStateAction();
		if (trafficSignalStateAction != null)
		{
			TrafficSignalStateActionImpl clonedChild = ((TrafficSignalStateActionImpl) trafficSignalStateAction).clone();
			clonedObject.setTrafficSignalStateAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

