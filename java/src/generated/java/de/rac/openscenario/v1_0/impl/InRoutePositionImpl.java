package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IInRoutePosition;
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

import de.rac.openscenario.v1_0.api.IPositionInRoadCoordinates;
import de.rac.openscenario.v1_0.api.IPositionInLaneCoordinates;
import de.rac.openscenario.v1_0.api.IPositionOfCurrentEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IInRoutePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IInRoutePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class InRoutePositionImpl extends BaseImpl implements IInRoutePosition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IPositionOfCurrentEntity fromCurrentEntity;
	private IPositionInRoadCoordinates fromRoadCoordinates;
	private IPositionInLaneCoordinates fromLaneCoordinates;

	@Override
	public IPositionOfCurrentEntity getFromCurrentEntity()
	{
		return fromCurrentEntity;
	}
	@Override
	public IPositionInRoadCoordinates getFromRoadCoordinates()
	{
		return fromRoadCoordinates;
	}
	@Override
	public IPositionInLaneCoordinates getFromLaneCoordinates()
	{
		return fromLaneCoordinates;
	}
	/**
	 * Sets the value of model property fromCurrentEntity
	 * @param fromCurrentEntity from OpenSCENARIO class model specification: [The position is defined through the current 
	 * position of a given entity.]
	 * 
	*/
	public  void setFromCurrentEntity (IPositionOfCurrentEntity fromCurrentEntity )
	{
		this.fromCurrentEntity = fromCurrentEntity;
	}
	/**
	 * Sets the value of model property fromRoadCoordinates
	 * @param fromRoadCoordinates from OpenSCENARIO class model specification: [Route position in road coordinate system.]
	 * 
	*/
	public  void setFromRoadCoordinates (IPositionInRoadCoordinates fromRoadCoordinates )
	{
		this.fromRoadCoordinates = fromRoadCoordinates;
	}
	/**
	 * Sets the value of model property fromLaneCoordinates
	 * @param fromLaneCoordinates from OpenSCENARIO class model specification: [Route position in lane coordinate system.]
	 * 
	*/
	public  void setFromLaneCoordinates (IPositionInLaneCoordinates fromLaneCoordinates )
	{
		this.fromLaneCoordinates = fromLaneCoordinates;
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
		
			IPositionOfCurrentEntity fromCurrentEntity = null;
			fromCurrentEntity =  getFromCurrentEntity();
			if (fromCurrentEntity != null)
			{
				result.add((BaseImpl) fromCurrentEntity);
			}	
			IPositionInRoadCoordinates fromRoadCoordinates = null;
			fromRoadCoordinates =  getFromRoadCoordinates();
			if (fromRoadCoordinates != null)
			{
				result.add((BaseImpl) fromRoadCoordinates);
			}	
			IPositionInLaneCoordinates fromLaneCoordinates = null;
			fromLaneCoordinates =  getFromLaneCoordinates();
			if (fromLaneCoordinates != null)
			{
				result.add((BaseImpl) fromLaneCoordinates);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public InRoutePositionImpl clone()
	{
		InRoutePositionImpl clonedObject = new InRoutePositionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IPositionOfCurrentEntity fromCurrentEntity = null;
		fromCurrentEntity =  getFromCurrentEntity();
		if (fromCurrentEntity != null)
		{
			PositionOfCurrentEntityImpl clonedChild = ((PositionOfCurrentEntityImpl) fromCurrentEntity).clone();
			clonedObject.setFromCurrentEntity(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IPositionInRoadCoordinates fromRoadCoordinates = null;
		fromRoadCoordinates =  getFromRoadCoordinates();
		if (fromRoadCoordinates != null)
		{
			PositionInRoadCoordinatesImpl clonedChild = ((PositionInRoadCoordinatesImpl) fromRoadCoordinates).clone();
			clonedObject.setFromRoadCoordinates(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IPositionInLaneCoordinates fromLaneCoordinates = null;
		fromLaneCoordinates =  getFromLaneCoordinates();
		if (fromLaneCoordinates != null)
		{
			PositionInLaneCoordinatesImpl clonedChild = ((PositionInLaneCoordinatesImpl) fromLaneCoordinates).clone();
			clonedObject.setFromLaneCoordinates(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

