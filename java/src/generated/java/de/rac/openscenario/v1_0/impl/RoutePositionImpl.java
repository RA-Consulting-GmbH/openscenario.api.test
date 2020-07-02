/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IRoutePosition;
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

import de.rac.openscenario.v1_0.api.IInRoutePosition;
import de.rac.openscenario.v1_0.api.IOrientation;
import de.rac.openscenario.v1_0.api.IRouteRef;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoutePosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoutePosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RoutePositionImpl extends BaseImpl implements IRoutePosition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IRouteRef routeRef;
	private IOrientation orientation;
	private IInRoutePosition inRoutePosition;

	@Override
	public IRouteRef getRouteRef()
	{
		return routeRef;
	}
	@Override
	public IOrientation getOrientation()
	{
		return orientation;
	}
	@Override
	public IInRoutePosition getInRoutePosition()
	{
		return inRoutePosition;
	}
	/**
	 * Sets the value of model property routeRef
	 * @param routeRef from OpenSCENARIO class model specification: [Reference to the route the position is calculated from.]
	 * 
	*/
	public  void setRouteRef (IRouteRef routeRef )
	{
		this.routeRef = routeRef;
	}
	/**
	 * Sets the value of model property orientation
	 * @param orientation from OpenSCENARIO class model specification: [Orientation. The relative reference context refers to 
	 * the referenced road's s and t coordinates, to the current lane's s, and t coordinates or to the orientation of the 
	 * reference entity.]
	 * 
	*/
	public  void setOrientation (IOrientation orientation )
	{
		this.orientation = orientation;
	}
	/**
	 * Sets the value of model property inRoutePosition
	 * @param inRoutePosition from OpenSCENARIO class model specification: [Position along the route.]
	 * 
	*/
	public  void setInRoutePosition (IInRoutePosition inRoutePosition )
	{
		this.inRoutePosition = inRoutePosition;
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
		
			IRouteRef routeRef = null;
			routeRef =  getRouteRef();
			if (routeRef != null)
			{
				result.add((BaseImpl) routeRef);
			}	
			IOrientation orientation = null;
			orientation =  getOrientation();
			if (orientation != null)
			{
				result.add((BaseImpl) orientation);
			}	
			IInRoutePosition inRoutePosition = null;
			inRoutePosition =  getInRoutePosition();
			if (inRoutePosition != null)
			{
				result.add((BaseImpl) inRoutePosition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public RoutePositionImpl clone()
	{
		RoutePositionImpl clonedObject = new RoutePositionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IRouteRef routeRef = null;
		routeRef =  getRouteRef();
		if (routeRef != null)
		{
			RouteRefImpl clonedChild = ((RouteRefImpl) routeRef).clone();
			clonedObject.setRouteRef(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOrientation orientation = null;
		orientation =  getOrientation();
		if (orientation != null)
		{
			OrientationImpl clonedChild = ((OrientationImpl) orientation).clone();
			clonedObject.setOrientation(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IInRoutePosition inRoutePosition = null;
		inRoutePosition =  getInRoutePosition();
		if (inRoutePosition != null)
		{
			InRoutePositionImpl clonedChild = ((InRoutePositionImpl) inRoutePosition).clone();
			clonedObject.setInRoutePosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

