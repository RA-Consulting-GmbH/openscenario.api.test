package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IActors;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import de.rac.openscenario.v1_0.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IEntityRef;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IActors. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IActors)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ActorsImpl extends BaseImpl implements IActors, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, Boolean.class);
	}
	
	private Boolean selectTriggeringEntities;
	private List<IEntityRef> entityRefs;

	@Override
	public Boolean getSelectTriggeringEntities()
	{
		return selectTriggeringEntities;
	}
	@Override
	public List<IEntityRef> getEntityRefs()
	{
		return entityRefs;
	}
	/**
	 * Sets the value of model property selectTriggeringEntities
	 * @param selectTriggeringEntities from OpenSCENARIO class model specification: [Indicates whether the triggering entities 
	 * are considered actors.]
	 * 
	*/
	public  void setSelectTriggeringEntities (Boolean selectTriggeringEntities )
	{
		this.selectTriggeringEntities = selectTriggeringEntities;
	}
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [A list of entities this actor is referencing.]
	 * 
	*/
	public void setEntityRefs(List<IEntityRef> entityRefs)
	{
		this.entityRefs = entityRefs;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES))
		{
			// Simple type
			selectTriggeringEntities = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
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
		
			List<IEntityRef> entityRefs = null;
			entityRefs =  getEntityRefs();
			if (entityRefs != null)
			{
				for(IEntityRef item : entityRefs)
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
	public ActorsImpl clone()
	{
		ActorsImpl clonedObject = new ActorsImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setSelectTriggeringEntities(getSelectTriggeringEntities());		
		// clone children
		List<IEntityRef> entityRefs = null;
			entityRefs =  getEntityRefs();
		if (entityRefs != null)
		{
			List<IEntityRef> clonedList = new ArrayList<IEntityRef>();
			for(IEntityRef item : entityRefs)
			{
				EntityRefImpl clonedChild = ((EntityRefImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setEntityRefs(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

