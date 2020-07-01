package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IParameterModifyAction;
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

import de.rac.openscenario.v1_0.api.IModifyRule;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IParameterModifyAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IParameterModifyAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ParameterModifyActionImpl extends BaseImpl implements IParameterModifyAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IModifyRule rule;

	@Override
	public IModifyRule getRule()
	{
		return rule;
	}
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [Either adding a value to a parameter or multiply a parameter 
	 * by a value. Has to match the parameter type.]
	 * 
	*/
	public  void setRule (IModifyRule rule )
	{
		this.rule = rule;
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
		
			IModifyRule rule = null;
			rule =  getRule();
			if (rule != null)
			{
				result.add((BaseImpl) rule);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ParameterModifyActionImpl clone()
	{
		ParameterModifyActionImpl clonedObject = new ParameterModifyActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IModifyRule rule = null;
		rule =  getRule();
		if (rule != null)
		{
			ModifyRuleImpl clonedChild = ((ModifyRuleImpl) rule).clone();
			clonedObject.setRule(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

