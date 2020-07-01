package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IControllerAction;
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

import de.rac.openscenario.v1_0.api.IAssignControllerAction;
import de.rac.openscenario.v1_0.api.IOverrideControllerValueAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControllerActionImpl extends BaseImpl implements IControllerAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IAssignControllerAction assignControllerAction;
	private IOverrideControllerValueAction overrideControllerValueAction;

	@Override
	public IAssignControllerAction getAssignControllerAction()
	{
		return assignControllerAction;
	}
	@Override
	public IOverrideControllerValueAction getOverrideControllerValueAction()
	{
		return overrideControllerValueAction;
	}
	/**
	 * Sets the value of model property assignControllerAction
	 * @param assignControllerAction from OpenSCENARIO class model specification: [Assign a controller to an entity.]
	 * 
	*/
	public  void setAssignControllerAction (IAssignControllerAction assignControllerAction )
	{
		this.assignControllerAction = assignControllerAction;
	}
	/**
	 * Sets the value of model property overrideControllerValueAction
	 * @param overrideControllerValueAction from OpenSCENARIO class model specification: [Values for throttle, brake, clutch, 
	 * parking brake, steering wheel or gear.]
	 * 
	*/
	public  void setOverrideControllerValueAction (IOverrideControllerValueAction overrideControllerValueAction )
	{
		this.overrideControllerValueAction = overrideControllerValueAction;
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
		
			IAssignControllerAction assignControllerAction = null;
			assignControllerAction =  getAssignControllerAction();
			if (assignControllerAction != null)
			{
				result.add((BaseImpl) assignControllerAction);
			}	
			IOverrideControllerValueAction overrideControllerValueAction = null;
			overrideControllerValueAction =  getOverrideControllerValueAction();
			if (overrideControllerValueAction != null)
			{
				result.add((BaseImpl) overrideControllerValueAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ControllerActionImpl clone()
	{
		ControllerActionImpl clonedObject = new ControllerActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IAssignControllerAction assignControllerAction = null;
		assignControllerAction =  getAssignControllerAction();
		if (assignControllerAction != null)
		{
			AssignControllerActionImpl clonedChild = ((AssignControllerActionImpl) assignControllerAction).clone();
			clonedObject.setAssignControllerAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOverrideControllerValueAction overrideControllerValueAction = null;
		overrideControllerValueAction =  getOverrideControllerValueAction();
		if (overrideControllerValueAction != null)
		{
			OverrideControllerValueActionImpl clonedChild = ((OverrideControllerValueActionImpl) overrideControllerValueAction).clone();
			clonedObject.setOverrideControllerValueAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

