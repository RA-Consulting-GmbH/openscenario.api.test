package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ILaneChangeTarget;
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

import de.rac.openscenario.v1_0.api.IAbsoluteTargetLane;
import de.rac.openscenario.v1_0.api.IRelativeTargetLane;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneChangeTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneChangeTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneChangeTargetImpl extends BaseImpl implements ILaneChangeTarget, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IRelativeTargetLane relativeTargetLane;
	private IAbsoluteTargetLane absoluteTargetLane;

	@Override
	public IRelativeTargetLane getRelativeTargetLane()
	{
		return relativeTargetLane;
	}
	@Override
	public IAbsoluteTargetLane getAbsoluteTargetLane()
	{
		return absoluteTargetLane;
	}
	/**
	 * Sets the value of model property relativeTargetLane
	 * @param relativeTargetLane from OpenSCENARIO class model specification: [Lane change direction relative to entity's 
	 * lane.]
	 * 
	*/
	public  void setRelativeTargetLane (IRelativeTargetLane relativeTargetLane )
	{
		this.relativeTargetLane = relativeTargetLane;
	}
	/**
	 * Sets the value of model property absoluteTargetLane
	 * @param absoluteTargetLane from OpenSCENARIO class model specification: [Lane change target lane number.]
	 * 
	*/
	public  void setAbsoluteTargetLane (IAbsoluteTargetLane absoluteTargetLane )
	{
		this.absoluteTargetLane = absoluteTargetLane;
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
		
			IRelativeTargetLane relativeTargetLane = null;
			relativeTargetLane =  getRelativeTargetLane();
			if (relativeTargetLane != null)
			{
				result.add((BaseImpl) relativeTargetLane);
			}	
			IAbsoluteTargetLane absoluteTargetLane = null;
			absoluteTargetLane =  getAbsoluteTargetLane();
			if (absoluteTargetLane != null)
			{
				result.add((BaseImpl) absoluteTargetLane);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LaneChangeTargetImpl clone()
	{
		LaneChangeTargetImpl clonedObject = new LaneChangeTargetImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IRelativeTargetLane relativeTargetLane = null;
		relativeTargetLane =  getRelativeTargetLane();
		if (relativeTargetLane != null)
		{
			RelativeTargetLaneImpl clonedChild = ((RelativeTargetLaneImpl) relativeTargetLane).clone();
			clonedObject.setRelativeTargetLane(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAbsoluteTargetLane absoluteTargetLane = null;
		absoluteTargetLane =  getAbsoluteTargetLane();
		if (absoluteTargetLane != null)
		{
			AbsoluteTargetLaneImpl clonedChild = ((AbsoluteTargetLaneImpl) absoluteTargetLane).clone();
			clonedObject.setAbsoluteTargetLane(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

