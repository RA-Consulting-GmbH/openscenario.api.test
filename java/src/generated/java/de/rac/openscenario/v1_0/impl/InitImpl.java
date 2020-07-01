package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IInit;
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

import de.rac.openscenario.v1_0.api.IInitActions;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInit. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInit)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class InitImpl extends BaseImpl implements IInit, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IInitActions actions;

	@Override
	public IInitActions getActions()
	{
		return actions;
	}
	/**
	 * Sets the value of model property actions
	 * @param actions from OpenSCENARIO class model specification: [A list of actions initially executed when the enclosing 
	 * storyboard starts.]
	 * 
	*/
	public  void setActions (IInitActions actions )
	{
		this.actions = actions;
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
		
			IInitActions actions = null;
			actions =  getActions();
			if (actions != null)
			{
				result.add((BaseImpl) actions);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public InitImpl clone()
	{
		InitImpl clonedObject = new InitImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IInitActions actions = null;
		actions =  getActions();
		if (actions != null)
		{
			InitActionsImpl clonedChild = ((InitActionsImpl) actions).clone();
			clonedObject.setActions(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

