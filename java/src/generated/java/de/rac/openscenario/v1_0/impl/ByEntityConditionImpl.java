package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IByEntityCondition;
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

import de.rac.openscenario.v1_0.api.ITriggeringEntities;
import de.rac.openscenario.v1_0.api.IEntityCondition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IByEntityCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IByEntityCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ByEntityConditionImpl extends BaseImpl implements IByEntityCondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ITriggeringEntities triggeringEntities;
	private IEntityCondition entityCondition;

	@Override
	public ITriggeringEntities getTriggeringEntities()
	{
		return triggeringEntities;
	}
	@Override
	public IEntityCondition getEntityCondition()
	{
		return entityCondition;
	}
	/**
	 * Sets the value of model property triggeringEntities
	 * @param triggeringEntities from OpenSCENARIO class model specification: [A list of entities triggering this condition.]
	 * 
	*/
	public  void setTriggeringEntities (ITriggeringEntities triggeringEntities )
	{
		this.triggeringEntities = triggeringEntities;
	}
	/**
	 * Sets the value of model property entityCondition
	 * @param entityCondition from OpenSCENARIO class model specification: [The condition which is related to the triggering 
	 * entities.]
	 * 
	*/
	public  void setEntityCondition (IEntityCondition entityCondition )
	{
		this.entityCondition = entityCondition;
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
		
			ITriggeringEntities triggeringEntities = null;
			triggeringEntities =  getTriggeringEntities();
			if (triggeringEntities != null)
			{
				result.add((BaseImpl) triggeringEntities);
			}	
			IEntityCondition entityCondition = null;
			entityCondition =  getEntityCondition();
			if (entityCondition != null)
			{
				result.add((BaseImpl) entityCondition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ByEntityConditionImpl clone()
	{
		ByEntityConditionImpl clonedObject = new ByEntityConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ITriggeringEntities triggeringEntities = null;
		triggeringEntities =  getTriggeringEntities();
		if (triggeringEntities != null)
		{
			TriggeringEntitiesImpl clonedChild = ((TriggeringEntitiesImpl) triggeringEntities).clone();
			clonedObject.setTriggeringEntities(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IEntityCondition entityCondition = null;
		entityCondition =  getEntityCondition();
		if (entityCondition != null)
		{
			EntityConditionImpl clonedChild = ((EntityConditionImpl) entityCondition).clone();
			clonedObject.setEntityCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

