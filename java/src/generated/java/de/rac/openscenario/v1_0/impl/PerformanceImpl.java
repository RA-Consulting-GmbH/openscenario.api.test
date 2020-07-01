package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IPerformance;
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



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPerformance. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPerformance)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PerformanceImpl extends BaseImpl implements IPerformance, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_SPEED, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_ACCELERATION, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__MAX_DECELERATION, Double.class);
	}
	
	private Double maxSpeed;
	private Double maxAcceleration;
	private Double maxDeceleration;

	@Override
	public Double getMaxSpeed()
	{
		return maxSpeed;
	}
	@Override
	public Double getMaxAcceleration()
	{
		return maxAcceleration;
	}
	@Override
	public Double getMaxDeceleration()
	{
		return maxDeceleration;
	}
	/**
	 * Sets the value of model property maxSpeed
	 * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed of the vehicle. Unit: m/s.]
	 * 
	*/
	public  void setMaxSpeed (Double maxSpeed )
	{
		this.maxSpeed = maxSpeed;
	}
	/**
	 * Sets the value of model property maxAcceleration
	 * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration of the vehicle. Unit: m/s^2. 
	 * Range: [0..inf[.]
	 * 
	*/
	public  void setMaxAcceleration (Double maxAcceleration )
	{
		this.maxAcceleration = maxAcceleration;
	}
	/**
	 * Sets the value of model property maxDeceleration
	 * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration of the vehicle. Unit: m/s^2. 
	 * Range: [0..inf[.]
	 * 
	*/
	public  void setMaxDeceleration (Double maxDeceleration )
	{
		this.maxDeceleration = maxDeceleration;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_SPEED))
		{
			// Simple type
			maxSpeed = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_ACCELERATION))
		{
			// Simple type
			maxAcceleration = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_DECELERATION))
		{
			// Simple type
			maxDeceleration = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public PerformanceImpl clone()
	{
		PerformanceImpl clonedObject = new PerformanceImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setMaxSpeed(getMaxSpeed());		
		// Simple type
		clonedObject.setMaxAcceleration(getMaxAcceleration());		
		// Simple type
		clonedObject.setMaxDeceleration(getMaxDeceleration());		
		// clone children
		return clonedObject;
	}
	
	
	
}

