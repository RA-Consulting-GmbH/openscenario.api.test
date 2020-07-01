package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IWaypoint;
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
import de.rac.openscenario.v1_0.common.ErrorLevel;

import de.rac.openscenario.v1_0.api.RouteStrategy;
import de.rac.openscenario.v1_0.api.IPosition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IWaypoint. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IWaypoint)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class WaypointImpl extends BaseImpl implements IWaypoint, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ROUTE_STRATEGY, String.class);
	}
	
	private RouteStrategy routeStrategy;
	private IPosition position;

	@Override
	public RouteStrategy getRouteStrategy()
	{
		return routeStrategy;
	}
	@Override
	public IPosition getPosition()
	{
		return position;
	}
	/**
	 * Sets the value of model property routeStrategy
	 * @param routeStrategy from OpenSCENARIO class model specification: [The corresponding routing strategy (fastest, 
	 * shortest, random, leastIntersections).]
	 * 
	*/
	public  void setRouteStrategy (RouteStrategy routeStrategy )
	{
		this.routeStrategy = routeStrategy;
	}
	/**
	 * Sets the value of model property position
	 * @param position from OpenSCENARIO class model specification: [The reference position to form the route.]
	 * 
	*/
	public  void setPosition (IPosition position )
	{
		this.position = position;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ROUTE_STRATEGY))
		{
			// Enumeration Type
			RouteStrategy result = RouteStrategy.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				routeStrategy = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
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
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public WaypointImpl clone()
	{
		WaypointImpl clonedObject = new WaypointImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		RouteStrategy routeStrategy = getRouteStrategy();
		if (routeStrategy != null)
		{
			clonedObject.setRouteStrategy(RouteStrategy.getFromLiteral(routeStrategy.getLiteral()));
		}
		// clone children
		IPosition position = null;
		position =  getPosition();
		if (position != null)
		{
			PositionImpl clonedChild = ((PositionImpl) position).clone();
			clonedObject.setPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

