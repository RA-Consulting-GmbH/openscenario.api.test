package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ISpeedActionTarget;
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

import de.rac.openscenario.v1_0.api.IRelativeTargetSpeed;
import de.rac.openscenario.v1_0.api.IAbsoluteTargetSpeed;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISpeedActionTarget. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISpeedActionTarget)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SpeedActionTargetImpl extends BaseImpl implements ISpeedActionTarget, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IRelativeTargetSpeed relativeTargetSpeed;
	private IAbsoluteTargetSpeed absoluteTargetSpeed;

	@Override
	public IRelativeTargetSpeed getRelativeTargetSpeed()
	{
		return relativeTargetSpeed;
	}
	@Override
	public IAbsoluteTargetSpeed getAbsoluteTargetSpeed()
	{
		return absoluteTargetSpeed;
	}
	/**
	 * Sets the value of model property relativeTargetSpeed
	 * @param relativeTargetSpeed from OpenSCENARIO class model specification: [Defines the target speed as relative speed to a
	 * reference entity. Unit: m/s.]
	 * 
	*/
	public  void setRelativeTargetSpeed (IRelativeTargetSpeed relativeTargetSpeed )
	{
		this.relativeTargetSpeed = relativeTargetSpeed;
	}
	/**
	 * Sets the value of model property absoluteTargetSpeed
	 * @param absoluteTargetSpeed from OpenSCENARIO class model specification: [Defines the target speed as absolute 
	 * speed.Unit: m/s.]
	 * 
	*/
	public  void setAbsoluteTargetSpeed (IAbsoluteTargetSpeed absoluteTargetSpeed )
	{
		this.absoluteTargetSpeed = absoluteTargetSpeed;
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
		
			IRelativeTargetSpeed relativeTargetSpeed = null;
			relativeTargetSpeed =  getRelativeTargetSpeed();
			if (relativeTargetSpeed != null)
			{
				result.add((BaseImpl) relativeTargetSpeed);
			}	
			IAbsoluteTargetSpeed absoluteTargetSpeed = null;
			absoluteTargetSpeed =  getAbsoluteTargetSpeed();
			if (absoluteTargetSpeed != null)
			{
				result.add((BaseImpl) absoluteTargetSpeed);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public SpeedActionTargetImpl clone()
	{
		SpeedActionTargetImpl clonedObject = new SpeedActionTargetImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IRelativeTargetSpeed relativeTargetSpeed = null;
		relativeTargetSpeed =  getRelativeTargetSpeed();
		if (relativeTargetSpeed != null)
		{
			RelativeTargetSpeedImpl clonedChild = ((RelativeTargetSpeedImpl) relativeTargetSpeed).clone();
			clonedObject.setRelativeTargetSpeed(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAbsoluteTargetSpeed absoluteTargetSpeed = null;
		absoluteTargetSpeed =  getAbsoluteTargetSpeed();
		if (absoluteTargetSpeed != null)
		{
			AbsoluteTargetSpeedImpl clonedChild = ((AbsoluteTargetSpeedImpl) absoluteTargetSpeed).clone();
			clonedObject.setAbsoluteTargetSpeed(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

