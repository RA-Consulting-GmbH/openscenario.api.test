package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IWorldPosition;
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
 * Value class that implements IWorldPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IWorldPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class WorldPositionImpl extends BaseImpl implements IWorldPosition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__X, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__Y, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__Z, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__H, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__P, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__R, Double.class);
	}
	
	private Double x;
	private Double y;
	private Double z;
	private Double h;
	private Double p;
	private Double r;

	@Override
	public Double getX()
	{
		return x;
	}
	@Override
	public Double getY()
	{
		return y;
	}
	@Override
	public Double getZ()
	{
		return z;
	}
	@Override
	public Double getH()
	{
		return h;
	}
	@Override
	public Double getP()
	{
		return p;
	}
	@Override
	public Double getR()
	{
		return r;
	}
	/**
	 * Sets the value of model property x
	 * @param x from OpenSCENARIO class model specification: [The x coordinate value.]
	 * 
	*/
	public  void setX (Double x )
	{
		this.x = x;
	}
	/**
	 * Sets the value of model property y
	 * @param y from OpenSCENARIO class model specification: [The y coordinate value.]
	 * 
	*/
	public  void setY (Double y )
	{
		this.y = y;
	}
	/**
	 * Sets the value of model property z
	 * @param z from OpenSCENARIO class model specification: [The z coordinate value.]
	 * 
	*/
	public  void setZ (Double z )
	{
		this.z = z;
	}
	/**
	 * Sets the value of model property h
	 * @param h from OpenSCENARIO class model specification: [The heading angle of the object, defining a mathematically 
	 * positive rotation about the z-axis (see ISO 8855:2011).]
	 * 
	*/
	public  void setH (Double h )
	{
		this.h = h;
	}
	/**
	 * Sets the value of model property p
	 * @param p from OpenSCENARIO class model specification: [The pitch angle of the object, defining a mathematically positive
	 * rotation about the y-axis (see ISO 8855:2011).]
	 * 
	*/
	public  void setP (Double p )
	{
		this.p = p;
	}
	/**
	 * Sets the value of model property r
	 * @param r from OpenSCENARIO class model specification: [The roll angle of the object, defining a mathematically positive 
	 * rotation about the x-axis (see ISO 8855:2011).]
	 * 
	*/
	public  void setR (Double r )
	{
		this.r = r;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__X))
		{
			// Simple type
			x = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__Y))
		{
			// Simple type
			y = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__Z))
		{
			// Simple type
			z = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__H))
		{
			// Simple type
			h = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__P))
		{
			// Simple type
			p = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__R))
		{
			// Simple type
			r = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public WorldPositionImpl clone()
	{
		WorldPositionImpl clonedObject = new WorldPositionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setX(getX());		
		// Simple type
		clonedObject.setY(getY());		
		// Simple type
		clonedObject.setZ(getZ());		
		// Simple type
		clonedObject.setH(getH());		
		// Simple type
		clonedObject.setP(getP());		
		// Simple type
		clonedObject.setR(getR());		
		// clone children
		return clonedObject;
	}
	
	
	
}

