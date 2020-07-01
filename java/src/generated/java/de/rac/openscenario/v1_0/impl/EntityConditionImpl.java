package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IEntityCondition;
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

import de.rac.openscenario.v1_0.api.IEndOfRoadCondition;
import de.rac.openscenario.v1_0.api.IDistanceCondition;
import de.rac.openscenario.v1_0.api.IAccelerationCondition;
import de.rac.openscenario.v1_0.api.IReachPositionCondition;
import de.rac.openscenario.v1_0.api.IRelativeSpeedCondition;
import de.rac.openscenario.v1_0.api.ITimeHeadwayCondition;
import de.rac.openscenario.v1_0.api.ITimeToCollisionCondition;
import de.rac.openscenario.v1_0.api.ICollisionCondition;
import de.rac.openscenario.v1_0.api.IStandStillCondition;
import de.rac.openscenario.v1_0.api.ISpeedCondition;
import de.rac.openscenario.v1_0.api.IOffroadCondition;
import de.rac.openscenario.v1_0.api.IRelativeDistanceCondition;
import de.rac.openscenario.v1_0.api.ITraveledDistanceCondition;


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
	
	
	
}

