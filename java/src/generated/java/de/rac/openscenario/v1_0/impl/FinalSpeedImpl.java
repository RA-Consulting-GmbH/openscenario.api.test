package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IFinalSpeed;
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

import de.rac.openscenario.v1_0.api.IAbsoluteSpeed;
import de.rac.openscenario.v1_0.api.IRelativeSpeedToMaster;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFinalSpeed. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFinalSpeed)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class FinalSpeedImpl extends BaseImpl implements IFinalSpeed, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IAbsoluteSpeed absoluteSpeed;
	private IRelativeSpeedToMaster relativeSpeedToMaster;

	@Override
	public IAbsoluteSpeed getAbsoluteSpeed()
	{
		return absoluteSpeed;
	}
	@Override
	public IRelativeSpeedToMaster getRelativeSpeedToMaster()
	{
		return relativeSpeedToMaster;
	}
	/**
	 * Sets the value of model property absoluteSpeed
	 * @param absoluteSpeed from OpenSCENARIO class model specification: [The absolute speed a synchronized entity should have 
	 * at its target position.]
	 * 
	*/
	public  void setAbsoluteSpeed (IAbsoluteSpeed absoluteSpeed )
	{
		this.absoluteSpeed = absoluteSpeed;
	}
	/**
	 * Sets the value of model property relativeSpeedToMaster
	 * @param relativeSpeedToMaster from OpenSCENARIO class model specification: [The speed a synchronized entity should have 
	 * relative to its master entity at its target position.]
	 * 
	*/
	public  void setRelativeSpeedToMaster (IRelativeSpeedToMaster relativeSpeedToMaster )
	{
		this.relativeSpeedToMaster = relativeSpeedToMaster;
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
		
			IAbsoluteSpeed absoluteSpeed = null;
			absoluteSpeed =  getAbsoluteSpeed();
			if (absoluteSpeed != null)
			{
				result.add((BaseImpl) absoluteSpeed);
			}	
			IRelativeSpeedToMaster relativeSpeedToMaster = null;
			relativeSpeedToMaster =  getRelativeSpeedToMaster();
			if (relativeSpeedToMaster != null)
			{
				result.add((BaseImpl) relativeSpeedToMaster);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public FinalSpeedImpl clone()
	{
		FinalSpeedImpl clonedObject = new FinalSpeedImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IAbsoluteSpeed absoluteSpeed = null;
		absoluteSpeed =  getAbsoluteSpeed();
		if (absoluteSpeed != null)
		{
			AbsoluteSpeedImpl clonedChild = ((AbsoluteSpeedImpl) absoluteSpeed).clone();
			clonedObject.setAbsoluteSpeed(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeSpeedToMaster relativeSpeedToMaster = null;
		relativeSpeedToMaster =  getRelativeSpeedToMaster();
		if (relativeSpeedToMaster != null)
		{
			RelativeSpeedToMasterImpl clonedChild = ((RelativeSpeedToMasterImpl) relativeSpeedToMaster).clone();
			clonedObject.setRelativeSpeedToMaster(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

