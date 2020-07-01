package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITriggeringEntities;
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
import de.rac.openscenario.v1_0.common.ErrorLevel;

import de.rac.openscenario.v1_0.api.IEntityRef;
import de.rac.openscenario.v1_0.api.TriggeringEntitiesRule;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITriggeringEntities. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITriggeringEntities)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TriggeringEntitiesImpl extends BaseImpl implements ITriggeringEntities, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, String.class);
	}
	
	private TriggeringEntitiesRule triggeringEntitiesRule;
	private List<IEntityRef> entityRefs;

	@Override
	public TriggeringEntitiesRule getTriggeringEntitiesRule()
	{
		return triggeringEntitiesRule;
	}
	@Override
	public List<IEntityRef> getEntityRefs()
	{
		return entityRefs;
	}
	/**
	 * Sets the value of model property triggeringEntitiesRule
	 * @param triggeringEntitiesRule from OpenSCENARIO class model specification: [All or any.]
	 * 
	*/
	public  void setTriggeringEntitiesRule (TriggeringEntitiesRule triggeringEntitiesRule )
	{
		this.triggeringEntitiesRule = triggeringEntitiesRule;
	}
	/**
	 * Sets the value of model property entityRefs
	 * @param entityRefs from OpenSCENARIO class model specification: [List of referenced entities that trigger the condition.]
	 * 
	*/
	public void setEntityRefs(List<IEntityRef> entityRefs)
	{
		this.entityRefs = entityRefs;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE))
		{
			// Enumeration Type
			TriggeringEntitiesRule result = TriggeringEntitiesRule.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				triggeringEntitiesRule = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
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
	public TriggeringEntitiesImpl clone()
	{
		TriggeringEntitiesImpl clonedObject = new TriggeringEntitiesImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		TriggeringEntitiesRule triggeringEntitiesRule = getTriggeringEntitiesRule();
		if (triggeringEntitiesRule != null)
		{
			clonedObject.setTriggeringEntitiesRule(TriggeringEntitiesRule.getFromLiteral(triggeringEntitiesRule.getLiteral()));
		}
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

