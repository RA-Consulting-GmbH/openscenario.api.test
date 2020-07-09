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

import net.asam.openscenario.v1_0.api.IEntityCondition;
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

import net.asam.openscenario.v1_0.api.IReachPositionCondition;
import net.asam.openscenario.v1_0.api.IOffroadCondition;
import net.asam.openscenario.v1_0.api.IStandStillCondition;
import net.asam.openscenario.v1_0.api.IRelativeSpeedCondition;
import net.asam.openscenario.v1_0.api.IDistanceCondition;
import net.asam.openscenario.v1_0.api.ISpeedCondition;
import net.asam.openscenario.v1_0.api.ITimeHeadwayCondition;
import net.asam.openscenario.v1_0.api.IRelativeDistanceCondition;
import net.asam.openscenario.v1_0.api.ICollisionCondition;
import net.asam.openscenario.v1_0.api.IAccelerationCondition;
import net.asam.openscenario.v1_0.api.ITimeToCollisionCondition;
import net.asam.openscenario.v1_0.api.ITraveledDistanceCondition;
import net.asam.openscenario.v1_0.api.IEndOfRoadCondition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EntityConditionImpl extends BaseImpl implements IEntityCondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IEndOfRoadCondition endOfRoadCondition;
	private ICollisionCondition collisionCondition;
	private IOffroadCondition offroadCondition;
	private ITimeHeadwayCondition timeHeadwayCondition;
	private ITimeToCollisionCondition timeToCollisionCondition;
	private IAccelerationCondition accelerationCondition;
	private IStandStillCondition standStillCondition;
	private ISpeedCondition speedCondition;
	private IRelativeSpeedCondition relativeSpeedCondition;
	private ITraveledDistanceCondition traveledDistanceCondition;
	private IReachPositionCondition reachPositionCondition;
	private IDistanceCondition distanceCondition;
	private IRelativeDistanceCondition relativeDistanceCondition;
	/**
	 * Default constructor
	 */
	public EntityConditionImpl()
	{
		super();
		addAdapter(EntityConditionImpl.class, this);
		addAdapter(IEntityCondition.class, this);
		
	}
	@Override
	public IEndOfRoadCondition getEndOfRoadCondition()
	{
		return endOfRoadCondition;
	}
	@Override
	public ICollisionCondition getCollisionCondition()
	{
		return collisionCondition;
	}
	@Override
	public IOffroadCondition getOffroadCondition()
	{
		return offroadCondition;
	}
	@Override
	public ITimeHeadwayCondition getTimeHeadwayCondition()
	{
		return timeHeadwayCondition;
	}
	@Override
	public ITimeToCollisionCondition getTimeToCollisionCondition()
	{
		return timeToCollisionCondition;
	}
	@Override
	public IAccelerationCondition getAccelerationCondition()
	{
		return accelerationCondition;
	}
	@Override
	public IStandStillCondition getStandStillCondition()
	{
		return standStillCondition;
	}
	@Override
	public ISpeedCondition getSpeedCondition()
	{
		return speedCondition;
	}
	@Override
	public IRelativeSpeedCondition getRelativeSpeedCondition()
	{
		return relativeSpeedCondition;
	}
	@Override
	public ITraveledDistanceCondition getTraveledDistanceCondition()
	{
		return traveledDistanceCondition;
	}
	@Override
	public IReachPositionCondition getReachPositionCondition()
	{
		return reachPositionCondition;
	}
	@Override
	public IDistanceCondition getDistanceCondition()
	{
		return distanceCondition;
	}
	@Override
	public IRelativeDistanceCondition getRelativeDistanceCondition()
	{
		return relativeDistanceCondition;
	}
	/**
	 * Sets the value of model property endOfRoadCondition
	 * @param endOfRoadCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has reached the end of the road.]
	 * 
	*/
	public  void setEndOfRoadCondition (IEndOfRoadCondition endOfRoadCondition )
	{
		this.endOfRoadCondition = endOfRoadCondition;
	}
	/**
	 * Sets the value of model property collisionCondition
	 * @param collisionCondition from OpenSCENARIO class model specification: [Condition checking whether the reference entity 
	 * was involved in a collision.]
	 * 
	*/
	public  void setCollisionCondition (ICollisionCondition collisionCondition )
	{
		this.collisionCondition = collisionCondition;
	}
	/**
	 * Sets the value of model property offroadCondition
	 * @param offroadCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has left the road.]
	 * 
	*/
	public  void setOffroadCondition (IOffroadCondition offroadCondition )
	{
		this.offroadCondition = offroadCondition;
	}
	/**
	 * Sets the value of model property timeHeadwayCondition
	 * @param timeHeadwayCondition from OpenSCENARIO class model specification: [Condition checking the time headway between 
	 * two entities.]
	 * 
	*/
	public  void setTimeHeadwayCondition (ITimeHeadwayCondition timeHeadwayCondition )
	{
		this.timeHeadwayCondition = timeHeadwayCondition;
	}
	/**
	 * Sets the value of model property timeToCollisionCondition
	 * @param timeToCollisionCondition from OpenSCENARIO class model specification: [Condition checking the time to collision 
	 * between two entities.]
	 * 
	*/
	public  void setTimeToCollisionCondition (ITimeToCollisionCondition timeToCollisionCondition )
	{
		this.timeToCollisionCondition = timeToCollisionCondition;
	}
	/**
	 * Sets the value of model property accelerationCondition
	 * @param accelerationCondition from OpenSCENARIO class model specification: [Condition checking the current acceleration 
	 * of an entity.]
	 * 
	*/
	public  void setAccelerationCondition (IAccelerationCondition accelerationCondition )
	{
		this.accelerationCondition = accelerationCondition;
	}
	/**
	 * Sets the value of model property standStillCondition
	 * @param standStillCondition from OpenSCENARIO class model specification: [Condition checking for how long the reference 
	 * entity has not moved.]
	 * 
	*/
	public  void setStandStillCondition (IStandStillCondition standStillCondition )
	{
		this.standStillCondition = standStillCondition;
	}
	/**
	 * Sets the value of model property speedCondition
	 * @param speedCondition from OpenSCENARIO class model specification: [Condition checking the current speed of the 
	 * referenced entities.]
	 * 
	*/
	public  void setSpeedCondition (ISpeedCondition speedCondition )
	{
		this.speedCondition = speedCondition;
	}
	/**
	 * Sets the value of model property relativeSpeedCondition
	 * @param relativeSpeedCondition from OpenSCENARIO class model specification: [Condition checking the relative speed 
	 * between two entity.]
	 * 
	*/
	public  void setRelativeSpeedCondition (IRelativeSpeedCondition relativeSpeedCondition )
	{
		this.relativeSpeedCondition = relativeSpeedCondition;
	}
	/**
	 * Sets the value of model property traveledDistanceCondition
	 * @param traveledDistanceCondition from OpenSCENARIO class model specification: [Condition checking the total traveled 
	 * distance of the reference entity since the start of the scenario.]
	 * 
	*/
	public  void setTraveledDistanceCondition (ITraveledDistanceCondition traveledDistanceCondition )
	{
		this.traveledDistanceCondition = traveledDistanceCondition;
	}
	/**
	 * Sets the value of model property reachPositionCondition
	 * @param reachPositionCondition from OpenSCENARIO class model specification: [Condition checking whether the reference 
	 * entity has reached a given position within a given uncertainty.]
	 * 
	*/
	public  void setReachPositionCondition (IReachPositionCondition reachPositionCondition )
	{
		this.reachPositionCondition = reachPositionCondition;
	}
	/**
	 * Sets the value of model property distanceCondition
	 * @param distanceCondition from OpenSCENARIO class model specification: [Condition checking the distance between two 
	 * entities or an entity and a position.]
	 * 
	*/
	public  void setDistanceCondition (IDistanceCondition distanceCondition )
	{
		this.distanceCondition = distanceCondition;
	}
	/**
	 * Sets the value of model property relativeDistanceCondition
	 * @param relativeDistanceCondition from OpenSCENARIO class model specification: [Condition checking the relative distance 
	 * between two entities.]
	 * 
	*/
	public  void setRelativeDistanceCondition (IRelativeDistanceCondition relativeDistanceCondition )
	{
		this.relativeDistanceCondition = relativeDistanceCondition;
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
		
			IEndOfRoadCondition endOfRoadCondition = null;
			endOfRoadCondition =  getEndOfRoadCondition();
			if (endOfRoadCondition != null)
			{
				result.add((BaseImpl) endOfRoadCondition);
			}	
			ICollisionCondition collisionCondition = null;
			collisionCondition =  getCollisionCondition();
			if (collisionCondition != null)
			{
				result.add((BaseImpl) collisionCondition);
			}	
			IOffroadCondition offroadCondition = null;
			offroadCondition =  getOffroadCondition();
			if (offroadCondition != null)
			{
				result.add((BaseImpl) offroadCondition);
			}	
			ITimeHeadwayCondition timeHeadwayCondition = null;
			timeHeadwayCondition =  getTimeHeadwayCondition();
			if (timeHeadwayCondition != null)
			{
				result.add((BaseImpl) timeHeadwayCondition);
			}	
			ITimeToCollisionCondition timeToCollisionCondition = null;
			timeToCollisionCondition =  getTimeToCollisionCondition();
			if (timeToCollisionCondition != null)
			{
				result.add((BaseImpl) timeToCollisionCondition);
			}	
			IAccelerationCondition accelerationCondition = null;
			accelerationCondition =  getAccelerationCondition();
			if (accelerationCondition != null)
			{
				result.add((BaseImpl) accelerationCondition);
			}	
			IStandStillCondition standStillCondition = null;
			standStillCondition =  getStandStillCondition();
			if (standStillCondition != null)
			{
				result.add((BaseImpl) standStillCondition);
			}	
			ISpeedCondition speedCondition = null;
			speedCondition =  getSpeedCondition();
			if (speedCondition != null)
			{
				result.add((BaseImpl) speedCondition);
			}	
			IRelativeSpeedCondition relativeSpeedCondition = null;
			relativeSpeedCondition =  getRelativeSpeedCondition();
			if (relativeSpeedCondition != null)
			{
				result.add((BaseImpl) relativeSpeedCondition);
			}	
			ITraveledDistanceCondition traveledDistanceCondition = null;
			traveledDistanceCondition =  getTraveledDistanceCondition();
			if (traveledDistanceCondition != null)
			{
				result.add((BaseImpl) traveledDistanceCondition);
			}	
			IReachPositionCondition reachPositionCondition = null;
			reachPositionCondition =  getReachPositionCondition();
			if (reachPositionCondition != null)
			{
				result.add((BaseImpl) reachPositionCondition);
			}	
			IDistanceCondition distanceCondition = null;
			distanceCondition =  getDistanceCondition();
			if (distanceCondition != null)
			{
				result.add((BaseImpl) distanceCondition);
			}	
			IRelativeDistanceCondition relativeDistanceCondition = null;
			relativeDistanceCondition =  getRelativeDistanceCondition();
			if (relativeDistanceCondition != null)
			{
				result.add((BaseImpl) relativeDistanceCondition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public EntityConditionImpl clone()
	{
		EntityConditionImpl clonedObject = new EntityConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IEndOfRoadCondition endOfRoadCondition = null;
		endOfRoadCondition =  getEndOfRoadCondition();
		if (endOfRoadCondition != null)
		{
			EndOfRoadConditionImpl clonedChild = ((EndOfRoadConditionImpl) endOfRoadCondition).clone();
			clonedObject.setEndOfRoadCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ICollisionCondition collisionCondition = null;
		collisionCondition =  getCollisionCondition();
		if (collisionCondition != null)
		{
			CollisionConditionImpl clonedChild = ((CollisionConditionImpl) collisionCondition).clone();
			clonedObject.setCollisionCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOffroadCondition offroadCondition = null;
		offroadCondition =  getOffroadCondition();
		if (offroadCondition != null)
		{
			OffroadConditionImpl clonedChild = ((OffroadConditionImpl) offroadCondition).clone();
			clonedObject.setOffroadCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITimeHeadwayCondition timeHeadwayCondition = null;
		timeHeadwayCondition =  getTimeHeadwayCondition();
		if (timeHeadwayCondition != null)
		{
			TimeHeadwayConditionImpl clonedChild = ((TimeHeadwayConditionImpl) timeHeadwayCondition).clone();
			clonedObject.setTimeHeadwayCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITimeToCollisionCondition timeToCollisionCondition = null;
		timeToCollisionCondition =  getTimeToCollisionCondition();
		if (timeToCollisionCondition != null)
		{
			TimeToCollisionConditionImpl clonedChild = ((TimeToCollisionConditionImpl) timeToCollisionCondition).clone();
			clonedObject.setTimeToCollisionCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAccelerationCondition accelerationCondition = null;
		accelerationCondition =  getAccelerationCondition();
		if (accelerationCondition != null)
		{
			AccelerationConditionImpl clonedChild = ((AccelerationConditionImpl) accelerationCondition).clone();
			clonedObject.setAccelerationCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IStandStillCondition standStillCondition = null;
		standStillCondition =  getStandStillCondition();
		if (standStillCondition != null)
		{
			StandStillConditionImpl clonedChild = ((StandStillConditionImpl) standStillCondition).clone();
			clonedObject.setStandStillCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ISpeedCondition speedCondition = null;
		speedCondition =  getSpeedCondition();
		if (speedCondition != null)
		{
			SpeedConditionImpl clonedChild = ((SpeedConditionImpl) speedCondition).clone();
			clonedObject.setSpeedCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeSpeedCondition relativeSpeedCondition = null;
		relativeSpeedCondition =  getRelativeSpeedCondition();
		if (relativeSpeedCondition != null)
		{
			RelativeSpeedConditionImpl clonedChild = ((RelativeSpeedConditionImpl) relativeSpeedCondition).clone();
			clonedObject.setRelativeSpeedCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITraveledDistanceCondition traveledDistanceCondition = null;
		traveledDistanceCondition =  getTraveledDistanceCondition();
		if (traveledDistanceCondition != null)
		{
			TraveledDistanceConditionImpl clonedChild = ((TraveledDistanceConditionImpl) traveledDistanceCondition).clone();
			clonedObject.setTraveledDistanceCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IReachPositionCondition reachPositionCondition = null;
		reachPositionCondition =  getReachPositionCondition();
		if (reachPositionCondition != null)
		{
			ReachPositionConditionImpl clonedChild = ((ReachPositionConditionImpl) reachPositionCondition).clone();
			clonedObject.setReachPositionCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IDistanceCondition distanceCondition = null;
		distanceCondition =  getDistanceCondition();
		if (distanceCondition != null)
		{
			DistanceConditionImpl clonedChild = ((DistanceConditionImpl) distanceCondition).clone();
			clonedObject.setDistanceCondition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRelativeDistanceCondition relativeDistanceCondition = null;
		relativeDistanceCondition =  getRelativeDistanceCondition();
		if (relativeDistanceCondition != null)
		{
			RelativeDistanceConditionImpl clonedChild = ((RelativeDistanceConditionImpl) relativeDistanceCondition).clone();
			clonedObject.setRelativeDistanceCondition(clonedChild);
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
	if (key.equals(OscConstants.ELEMENT__END_OF_ROAD_CONDITION))
	{
		return (IOpenScenarioFlexElement) getEndOfRoadCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__COLLISION_CONDITION))
	{
		return (IOpenScenarioFlexElement) getCollisionCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__OFFROAD_CONDITION))
	{
		return (IOpenScenarioFlexElement) getOffroadCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__TIME_HEADWAY_CONDITION))
	{
		return (IOpenScenarioFlexElement) getTimeHeadwayCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION))
	{
		return (IOpenScenarioFlexElement) getTimeToCollisionCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__ACCELERATION_CONDITION))
	{
		return (IOpenScenarioFlexElement) getAccelerationCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__STAND_STILL_CONDITION))
	{
		return (IOpenScenarioFlexElement) getStandStillCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__SPEED_CONDITION))
	{
		return (IOpenScenarioFlexElement) getSpeedCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__RELATIVE_SPEED_CONDITION))
	{
		return (IOpenScenarioFlexElement) getRelativeSpeedCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__TRAVELED_DISTANCE_CONDITION))
	{
		return (IOpenScenarioFlexElement) getTraveledDistanceCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__REACH_POSITION_CONDITION))
	{
		return (IOpenScenarioFlexElement) getReachPositionCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__DISTANCE_CONDITION))
	{
		return (IOpenScenarioFlexElement) getDistanceCondition();
	}else 
	if (key.equals(OscConstants.ELEMENT__RELATIVE_DISTANCE_CONDITION))
	{
		return (IOpenScenarioFlexElement) getRelativeDistanceCondition();
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
  	return "EntityCondition";
  }
 	
}

