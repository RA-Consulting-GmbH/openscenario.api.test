package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IModifyRule;
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

import de.rac.openscenario.v1_0.api.IParameterMultiplyByValueRule;
import de.rac.openscenario.v1_0.api.IParameterAddValueRule;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IModifyRule. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IModifyRule)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ModifyRuleImpl extends BaseImpl implements IModifyRule, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IParameterAddValueRule addValue;
	private IParameterMultiplyByValueRule multiplyByValue;

	@Override
	public IParameterAddValueRule getAddValue()
	{
		return addValue;
	}
	@Override
	public IParameterMultiplyByValueRule getMultiplyByValue()
	{
		return multiplyByValue;
	}
	/**
	 * Sets the value of model property addValue
	 * @param addValue from OpenSCENARIO class model specification: [Adding a value to a parameter.]
	 * 
	*/
	public  void setAddValue (IParameterAddValueRule addValue )
	{
		this.addValue = addValue;
	}
	/**
	 * Sets the value of model property multiplyByValue
	 * @param multiplyByValue from OpenSCENARIO class model specification: [Multiply a parameter by a value.]
	 * 
	*/
	public  void setMultiplyByValue (IParameterMultiplyByValueRule multiplyByValue )
	{
		this.multiplyByValue = multiplyByValue;
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
		
			IParameterAddValueRule addValue = null;
			addValue =  getAddValue();
			if (addValue != null)
			{
				result.add((BaseImpl) addValue);
			}	
			IParameterMultiplyByValueRule multiplyByValue = null;
			multiplyByValue =  getMultiplyByValue();
			if (multiplyByValue != null)
			{
				result.add((BaseImpl) multiplyByValue);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ModifyRuleImpl clone()
	{
		ModifyRuleImpl clonedObject = new ModifyRuleImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IParameterAddValueRule addValue = null;
		addValue =  getAddValue();
		if (addValue != null)
		{
			ParameterAddValueRuleImpl clonedChild = ((ParameterAddValueRuleImpl) addValue).clone();
			clonedObject.setAddValue(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IParameterMultiplyByValueRule multiplyByValue = null;
		multiplyByValue =  getMultiplyByValue();
		if (multiplyByValue != null)
		{
			ParameterMultiplyByValueRuleImpl clonedChild = ((ParameterMultiplyByValueRuleImpl) multiplyByValue).clone();
			clonedObject.setMultiplyByValue(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

