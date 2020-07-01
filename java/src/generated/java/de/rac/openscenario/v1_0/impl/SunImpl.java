package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ISun;
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
 * Value class that implements ISun. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISun)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SunImpl extends BaseImpl implements ISun, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__INTENSITY, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__AZIMUTH, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__ELEVATION, Double.class);
	}
	
	private Double intensity;
	private Double azimuth;
	private Double elevation;

	@Override
	public Double getIntensity()
	{
		return intensity;
	}
	@Override
	public Double getAzimuth()
	{
		return azimuth;
	}
	@Override
	public Double getElevation()
	{
		return elevation;
	}
	/**
	 * Sets the value of model property intensity
	 * @param intensity from OpenSCENARIO class model specification: [Illuminance of the sun, direct sunlight is around 100,00 
	 * lx. Unit: lux; Range: [0..inf[.]
	 * 
	*/
	public  void setIntensity (Double intensity )
	{
		this.intensity = intensity;
	}
	/**
	 * Sets the value of model property azimuth
	 * @param azimuth from OpenSCENARIO class model specification: [Azimuth of the sun, counted counterclockwise, 0=north, PI/2
	 * = east, PI=south, 3/2 PI=west. Unit: radian; Range: , [0..2PI].]
	 * 
	*/
	public  void setAzimuth (Double azimuth )
	{
		this.azimuth = azimuth;
	}
	/**
	 * Sets the value of model property elevation
	 * @param elevation from OpenSCENARIO class model specification: [Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: 
	 * rad; Range: [-PI..PI].]
	 * 
	*/
	public  void setElevation (Double elevation )
	{
		this.elevation = elevation;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__INTENSITY))
		{
			// Simple type
			intensity = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__AZIMUTH))
		{
			// Simple type
			azimuth = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__ELEVATION))
		{
			// Simple type
			elevation = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public SunImpl clone()
	{
		SunImpl clonedObject = new SunImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setIntensity(getIntensity());		
		// Simple type
		clonedObject.setAzimuth(getAzimuth());		
		// Simple type
		clonedObject.setElevation(getElevation());		
		// clone children
		return clonedObject;
	}
	
	
	
}

