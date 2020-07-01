package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITimeReference;
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

import de.rac.openscenario.v1_0.api.ITiming;
import de.rac.openscenario.v1_0.api.INone;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeReference. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeReference)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimeReferenceImpl extends BaseImpl implements ITimeReference, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private INone none;
	private ITiming timing;

	@Override
	public INone getNone()
	{
		return none;
	}
	@Override
	public ITiming getTiming()
	{
		return timing;
	}
	/**
	 * Sets the value of model property none
	 * @param none from OpenSCENARIO class model specification: [This property indicates Timing information is neglected.]
	 * 
	*/
	public  void setNone (INone none )
	{
		this.none = none;
	}
	/**
	 * Sets the value of model property timing
	 * @param timing from OpenSCENARIO class model specification: [This property indicates timing information is taken into 
	 * account. Its underlying properties allow specification of the , time domain (absolute or relative), time scaling and a 
	 * global time offset.]
	 * 
	*/
	public  void setTiming (ITiming timing )
	{
		this.timing = timing;
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
		
			INone none = null;
			none =  getNone();
			if (none != null)
			{
				result.add((BaseImpl) none);
			}	
			ITiming timing = null;
			timing =  getTiming();
			if (timing != null)
			{
				result.add((BaseImpl) timing);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TimeReferenceImpl clone()
	{
		TimeReferenceImpl clonedObject = new TimeReferenceImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		INone none = null;
		none =  getNone();
		if (none != null)
		{
			NoneImpl clonedChild = ((NoneImpl) none).clone();
			clonedObject.setNone(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITiming timing = null;
		timing =  getTiming();
		if (timing != null)
		{
			TimingImpl clonedChild = ((TimingImpl) timing).clone();
			clonedObject.setTiming(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

