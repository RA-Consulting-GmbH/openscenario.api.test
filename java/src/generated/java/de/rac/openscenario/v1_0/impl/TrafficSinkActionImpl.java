package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrafficSinkAction;
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

import de.rac.openscenario.v1_0.api.ITrafficDefinition;
import de.rac.openscenario.v1_0.api.IPosition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSinkAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSinkAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSinkActionImpl extends BaseImpl implements ITrafficSinkAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__RATE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__RADIUS, Double.class);
	}
	
	private Double rate;
	private Double radius;
	private IPosition position;
	private ITrafficDefinition trafficDefinition;

	@Override
	public Double getRate()
	{
		return rate;
	}
	@Override
	public Double getRadius()
	{
		return radius;
	}
	@Override
	public IPosition getPosition()
	{
		return position;
	}
	@Override
	public ITrafficDefinition getTrafficDefinition()
	{
		return trafficDefinition;
	}
	/**
	 * Sets the value of model property rate
	 * @param rate from OpenSCENARIO class model specification: [Defines the rate on which vehicles disappear at the sinks 
	 * location. Unit: vehicles/s Range: [0..inf[.]
	 * 
	*/
	public  void setRate (Double rate )
	{
		this.rate = rate;
	}
	/**
	 * Sets the value of model property radius
	 * @param radius from OpenSCENARIO class model specification: [Defines the radius of the traffic sink where vehicles 
	 * disappear around the specified position. Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setRadius (Double radius )
	{
		this.radius = radius;
	}
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [Defines the position of the traffic sink.]
	 * 
	*/
	public  void setPosition (IPosition position )
	{
		this.position = position;
	}
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Defines the vehicle and controller distribution 
	 * for the sink.]
	 * 
	*/
	public  void setTrafficDefinition (ITrafficDefinition trafficDefinition )
	{
		this.trafficDefinition = trafficDefinition;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__RATE))
		{
			// Simple type
			rate = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__RADIUS))
		{
			// Simple type
			radius = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IPosition position = null;
			position =  getPosition();
			if (position != null)
			{
				result.add((BaseImpl) position);
			}	
			ITrafficDefinition trafficDefinition = null;
			trafficDefinition =  getTrafficDefinition();
			if (trafficDefinition != null)
			{
				result.add((BaseImpl) trafficDefinition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrafficSinkActionImpl clone()
	{
		TrafficSinkActionImpl clonedObject = new TrafficSinkActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setRate(getRate());		
		// Simple type
		clonedObject.setRadius(getRadius());		
		// clone children
		IPosition position = null;
		position =  getPosition();
		if (position != null)
		{
			PositionImpl clonedChild = ((PositionImpl) position).clone();
			clonedObject.setPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrafficDefinition trafficDefinition = null;
		trafficDefinition =  getTrafficDefinition();
		if (trafficDefinition != null)
		{
			TrafficDefinitionImpl clonedChild = ((TrafficDefinitionImpl) trafficDefinition).clone();
			clonedObject.setTrafficDefinition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

