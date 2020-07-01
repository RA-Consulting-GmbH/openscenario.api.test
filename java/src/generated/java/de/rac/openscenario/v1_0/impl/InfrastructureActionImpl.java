package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IInfrastructureAction;
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

import de.rac.openscenario.v1_0.api.ITrafficSignalAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInfrastructureAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInfrastructureAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class InfrastructureActionImpl extends BaseImpl implements IInfrastructureAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ITrafficSignalAction trafficSignalAction;

	@Override
	public ITrafficSignalAction getTrafficSignalAction()
	{
		return trafficSignalAction;
	}
	/**
	 * Sets the value of model property trafficSignalAction
	 * @param trafficSignalAction from OpenSCENARIO class model specification: [Set or overwrite a signals state or a signal 
	 * controllers state from a road network.]
	 * 
	*/
	public  void setTrafficSignalAction (ITrafficSignalAction trafficSignalAction )
	{
		this.trafficSignalAction = trafficSignalAction;
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
		
			ITrafficSignalAction trafficSignalAction = null;
			trafficSignalAction =  getTrafficSignalAction();
			if (trafficSignalAction != null)
			{
				result.add((BaseImpl) trafficSignalAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public InfrastructureActionImpl clone()
	{
		InfrastructureActionImpl clonedObject = new InfrastructureActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ITrafficSignalAction trafficSignalAction = null;
		trafficSignalAction =  getTrafficSignalAction();
		if (trafficSignalAction != null)
		{
			TrafficSignalActionImpl clonedChild = ((TrafficSignalActionImpl) trafficSignalAction).clone();
			clonedObject.setTrafficSignalAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

