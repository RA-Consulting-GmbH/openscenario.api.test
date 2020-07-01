package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITimeToCollisionConditionTarget;
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

import de.rac.openscenario.v1_0.api.IEntityRef;
import de.rac.openscenario.v1_0.api.IPosition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeToCollisionConditionTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeToCollisionConditionTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimeToCollisionConditionTargetImpl extends BaseImpl implements ITimeToCollisionConditionTarget, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IPosition position;
	private IEntityRef entityRef;

	@Override
	public IPosition getPosition()
	{
		return position;
	}
	@Override
	public IEntityRef getEntityRef()
	{
		return entityRef;
	}
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Position.]
	 * 
	*/
	public  void setPosition (IPosition position )
	{
		this.position = position;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
	 * 
	*/
	public  void setEntityRef (IEntityRef entityRef )
	{
		this.entityRef = entityRef;
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
		
			IPosition position = null;
			position =  getPosition();
			if (position != null)
			{
				result.add((BaseImpl) position);
			}	
			IEntityRef entityRef = null;
			entityRef =  getEntityRef();
			if (entityRef != null)
			{
				result.add((BaseImpl) entityRef);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TimeToCollisionConditionTargetImpl clone()
	{
		TimeToCollisionConditionTargetImpl clonedObject = new TimeToCollisionConditionTargetImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IPosition position = null;
		position =  getPosition();
		if (position != null)
		{
			PositionImpl clonedChild = ((PositionImpl) position).clone();
			clonedObject.setPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IEntityRef entityRef = null;
		entityRef =  getEntityRef();
		if (entityRef != null)
		{
			EntityRefImpl clonedChild = ((EntityRefImpl) entityRef).clone();
			clonedObject.setEntityRef(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

