package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrigger;
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

import de.rac.openscenario.v1_0.api.IConditionGroup;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrigger. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrigger)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TriggerImpl extends BaseImpl implements ITrigger, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private List<IConditionGroup> conditionGroups;

	@Override
	public List<IConditionGroup> getConditionGroups()
	{
		return conditionGroups;
	}
	/**
	 * Sets the value of model property conditionGroups
	 * @param conditionGroups from OpenSCENARIO class model specification: [List of condition groups as a container of 
	 * conditions.]
	 * 
	*/
	public void setConditionGroups(List<IConditionGroup> conditionGroups)
	{
		this.conditionGroups = conditionGroups;
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
		
			List<IConditionGroup> conditionGroups = null;
			conditionGroups =  getConditionGroups();
			if (conditionGroups != null)
			{
				for(IConditionGroup item : conditionGroups)
				{
					result.add((BaseImpl) item);
				}
			}
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TriggerImpl clone()
	{
		TriggerImpl clonedObject = new TriggerImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		List<IConditionGroup> conditionGroups = null;
			conditionGroups =  getConditionGroups();
		if (conditionGroups != null)
		{
			List<IConditionGroup> clonedList = new ArrayList<IConditionGroup>();
			for(IConditionGroup item : conditionGroups)
			{
				ConditionGroupImpl clonedChild = ((ConditionGroupImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setConditionGroups(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

