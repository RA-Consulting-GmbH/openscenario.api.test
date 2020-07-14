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
package net.asam.openscenario.v1_0.impl;

import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import net.asam.openscenario.v1_0.api.IWorldPosition;
import net.asam.openscenario.v1_0.api.IRelativeRoadPosition;
import net.asam.openscenario.v1_0.api.IRelativeWorldPosition;
import net.asam.openscenario.v1_0.api.IRelativeLanePosition;
import net.asam.openscenario.v1_0.api.IRoadPosition;
import net.asam.openscenario.v1_0.api.ILanePosition;
import net.asam.openscenario.v1_0.api.IRelativeObjectPosition;
import net.asam.openscenario.v1_0.api.IRoutePosition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPosition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPosition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PositionImpl extends BaseImpl implements IPosition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IWorldPosition worldPosition;
	private IRelativeWorldPosition relativeWorldPosition;
	private IRelativeObjectPosition relativeObjectPosition;
	private IRoadPosition roadPosition;
	private IRelativeRoadPosition relativeRoadPosition;
	private ILanePosition lanePosition;
	private IRelativeLanePosition relativeLanePosition;
	private IRoutePosition routePosition;
	/**
	 * Default constructor
	 */
	public PositionImpl()
	{
		super();
		addAdapter(PositionImpl.class, this);
		addAdapter(IPosition.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public IWorldPosition getWorldPosition()
	{
		return worldPosition;
	}
	@Override
	public IRelativeWorldPosition getRelativeWorldPosition()
	{
		return relativeWorldPosition;
	}
	@Override
	public IRelativeObjectPosition getRelativeObjectPosition()
	{
		return relativeObjectPosition;
	}
	@Override
	public IRoadPosition getRoadPosition()
	{
		return roadPosition;
	}
	@Override
	public IRelativeRoadPosition getRelativeRoadPosition()
	{
		return relativeRoadPosition;
	}
	@Override
	public ILanePosition getLanePosition()
	{
		return lanePosition;
	}
	@Override
	public IRelativeLanePosition getRelativeLanePosition()
	{
		return relativeLanePosition;
	}
	@Override
	public IRoutePosition getRoutePosition()
	{
		return routePosition;
	}
	/**
	 * Sets the value of model property worldPosition
	 * @param worldPosition from OpenSCENARIO class model specification: [Position that uses global coordinates.]
	 * 
	*/
	public  void setWorldPosition (IWorldPosition worldPosition )
	{
		this.worldPosition = worldPosition;
	}
	/**
	 * Sets the value of model property relativeWorldPosition
	 * @param relativeWorldPosition from OpenSCENARIO class model specification: [Position is given relative to a world 
	 * position.]
	 * 
	*/
	public  void setRelativeWorldPosition (IRelativeWorldPosition relativeWorldPosition )
	{
		this.relativeWorldPosition = relativeWorldPosition;
	}
	/**
	 * Sets the value of model property relativeObjectPosition
	 * @param relativeObjectPosition from OpenSCENARIO class model specification: [Position is given relative to an entity.]
	 * 
	*/
	public  void setRelativeObjectPosition (IRelativeObjectPosition relativeObjectPosition )
	{
		this.relativeObjectPosition = relativeObjectPosition;
	}
	/**
	 * Sets the value of model property roadPosition
	 * @param roadPosition from OpenSCENARIO class model specification: [Position in road coordinates (t,s) applied to a given 
	 * road.]
	 * 
	*/
	public  void setRoadPosition (IRoadPosition roadPosition )
	{
		this.roadPosition = roadPosition;
	}
	/**
	 * Sets the value of model property relativeRoadPosition
	 * @param relativeRoadPosition from OpenSCENARIO class model specification: [Position relative to an entity's road position
	 * (ds, dt).]
	 * 
	*/
	public  void setRelativeRoadPosition (IRelativeRoadPosition relativeRoadPosition )
	{
		this.relativeRoadPosition = relativeRoadPosition;
	}
	/**
	 * Sets the value of model property lanePosition
	 * @param lanePosition from OpenSCENARIO class model specification: [Position that is determined by a lane (lane ID) and 
	 * the s coordinate of a given road.]
	 * 
	*/
	public  void setLanePosition (ILanePosition lanePosition )
	{
		this.lanePosition = lanePosition;
	}
	/**
	 * Sets the value of model property relativeLanePosition
	 * @param relativeLanePosition from OpenSCENARIO class model specification: [Position that is determined relative to the 
	 * lane coordinates of a given entity. (Relative lane and relative s to this , entity).]
	 * 
	*/
	public  void setRelativeLanePosition (IRelativeLanePosition relativeLanePosition )
	{
		this.relativeLanePosition = relativeLanePosition;
	}
	/**
	 * Sets the value of model property routePosition
	 * @param routePosition from OpenSCENARIO class model specification: [Position that is determined by a given route.]
	 * 
	*/
	public  void setRoutePosition (IRoutePosition routePosition )
	{
		this.routePosition = routePosition;
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
		
			IWorldPosition worldPosition = null;
			worldPosition =  getWorldPosition();
			if (worldPosition != null)
			{
				result.add((BaseImpl) worldPosition);
			}	
			IRelativeWorldPosition relativeWorldPosition = null;
			relativeWorldPosition =  getRelativeWorldPosition();
			if (relativeWorldPosition != null)
			{
				result.add((BaseImpl) relativeWorldPosition);
			}	
			IRelativeObjectPosition relativeObjectPosition = null;
			relativeObjectPosition =  getRelativeObjectPosition();
			if (relativeObjectPosition != null)
			{
				result.add((BaseImpl) relativeObjectPosition);
			}	
			IRoadPosition roadPosition = null;
			roadPosition =  getRoadPosition();
			if (roadPosition != null)
			{
				result.add((BaseImpl) roadPosition);
			}	
			IRelativeRoadPosition relativeRoadPosition = null;
			relativeRoadPosition =  getRelativeRoadPosition();
			if (relativeRoadPosition != null)
			{
				result.add((BaseImpl) relativeRoadPosition);
			}	
			ILanePosition lanePosition = null;
			lanePosition =  getLanePosition();
			if (lanePosition != null)
			{
				result.add((BaseImpl) lanePosition);
			}	
			IRelativeLanePosition relativeLanePosition = null;
			relativeLanePosition =  getRelativeLanePosition();
			if (relativeLanePosition != null)
			{
				result.add((BaseImpl) relativeLanePosition);
			}	
			IRoutePosition routePosition = null;
			routePosition =  getRoutePosition();
			if (routePosition != null)
			{
				result.add((BaseImpl) routePosition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public PositionImpl clone()
	{
		PositionImpl clonedObject = new PositionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IWorldPosition worldPosition = null;
		worldPosition =  getWorldPosition();
		if (worldPosition != null)
		{
			WorldPositionImpl clonedChild = ((WorldPositionImpl) worldPosition).clone();
			clonedObject.setWorldPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeWorldPosition relativeWorldPosition = null;
		relativeWorldPosition =  getRelativeWorldPosition();
		if (relativeWorldPosition != null)
		{
			RelativeWorldPositionImpl clonedChild = ((RelativeWorldPositionImpl) relativeWorldPosition).clone();
			clonedObject.setRelativeWorldPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeObjectPosition relativeObjectPosition = null;
		relativeObjectPosition =  getRelativeObjectPosition();
		if (relativeObjectPosition != null)
		{
			RelativeObjectPositionImpl clonedChild = ((RelativeObjectPositionImpl) relativeObjectPosition).clone();
			clonedObject.setRelativeObjectPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRoadPosition roadPosition = null;
		roadPosition =  getRoadPosition();
		if (roadPosition != null)
		{
			RoadPositionImpl clonedChild = ((RoadPositionImpl) roadPosition).clone();
			clonedObject.setRoadPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeRoadPosition relativeRoadPosition = null;
		relativeRoadPosition =  getRelativeRoadPosition();
		if (relativeRoadPosition != null)
		{
			RelativeRoadPositionImpl clonedChild = ((RelativeRoadPositionImpl) relativeRoadPosition).clone();
			clonedObject.setRelativeRoadPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ILanePosition lanePosition = null;
		lanePosition =  getLanePosition();
		if (lanePosition != null)
		{
			LanePositionImpl clonedChild = ((LanePositionImpl) lanePosition).clone();
			clonedObject.setLanePosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeLanePosition relativeLanePosition = null;
		relativeLanePosition =  getRelativeLanePosition();
		if (relativeLanePosition != null)
		{
			RelativeLanePositionImpl clonedChild = ((RelativeLanePositionImpl) relativeLanePosition).clone();
			clonedObject.setRelativeLanePosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRoutePosition routePosition = null;
		routePosition =  getRoutePosition();
		if (routePosition != null)
		{
			RoutePositionImpl clonedChild = ((RoutePositionImpl) routePosition).clone();
			clonedObject.setRoutePosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	throw new KeyNotSupportedException();
  }
  
  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }  
  
  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
 
  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
  
  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
 
  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 	throw new KeyNotSupportedException();

  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__WORLD_POSITION))
	{
		return (IOpenScenarioFlexElement) getWorldPosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__RELATIVE_WORLD_POSITION))
	{
		return (IOpenScenarioFlexElement) getRelativeWorldPosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION))
	{
		return (IOpenScenarioFlexElement) getRelativeObjectPosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__ROAD_POSITION))
	{
		return (IOpenScenarioFlexElement) getRoadPosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__RELATIVE_ROAD_POSITION))
	{
		return (IOpenScenarioFlexElement) getRelativeRoadPosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__LANE_POSITION))
	{
		return (IOpenScenarioFlexElement) getLanePosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__RELATIVE_LANE_POSITION))
	{
		return (IOpenScenarioFlexElement) getRelativeLanePosition();
	}else 
	if (key.equals(OscConstants.ELEMENT__ROUTE_POSITION))
	{
		return (IOpenScenarioFlexElement) getRoutePosition();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
   
  @Override
  public IOpenScenarioFlexElement getParentFlexElement()
  {
   	return (IOpenScenarioFlexElement) getParent();
  }
  
  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "Position";
  }
 	
}

