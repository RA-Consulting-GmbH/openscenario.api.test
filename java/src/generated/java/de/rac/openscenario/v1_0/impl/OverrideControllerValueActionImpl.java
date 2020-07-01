package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IOverrideControllerValueAction;
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

import de.rac.openscenario.v1_0.api.IOverrideSteeringWheelAction;
import de.rac.openscenario.v1_0.api.IOverrideThrottleAction;
import de.rac.openscenario.v1_0.api.IOverrideParkingBrakeAction;
import de.rac.openscenario.v1_0.api.IOverrideGearAction;
import de.rac.openscenario.v1_0.api.IOverrideBrakeAction;
import de.rac.openscenario.v1_0.api.IOverrideClutchAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOverrideControllerValueAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOverrideControllerValueAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OverrideControllerValueActionImpl extends BaseImpl implements IOverrideControllerValueAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IOverrideThrottleAction throttle;
	private IOverrideBrakeAction brake;
	private IOverrideClutchAction clutch;
	private IOverrideParkingBrakeAction parkingBrake;
	private IOverrideSteeringWheelAction steeringWheel;
	private IOverrideGearAction gear;

	@Override
	public IOverrideThrottleAction getThrottle()
	{
		return throttle;
	}
	@Override
	public IOverrideBrakeAction getBrake()
	{
		return brake;
	}
	@Override
	public IOverrideClutchAction getClutch()
	{
		return clutch;
	}
	@Override
	public IOverrideParkingBrakeAction getParkingBrake()
	{
		return parkingBrake;
	}
	@Override
	public IOverrideSteeringWheelAction getSteeringWheel()
	{
		return steeringWheel;
	}
	@Override
	public IOverrideGearAction getGear()
	{
		return gear;
	}
	/**
	 * Sets the value of model property throttle
	 * @param throttle from OpenSCENARIO class model specification: [New value for throttle pedal position or unset value.]
	 * 
	*/
	public  void setThrottle (IOverrideThrottleAction throttle )
	{
		this.throttle = throttle;
	}
	/**
	 * Sets the value of model property brake
	 * @param brake from OpenSCENARIO class model specification: [New value for brake position or unset value.]
	 * 
	*/
	public  void setBrake (IOverrideBrakeAction brake )
	{
		this.brake = brake;
	}
	/**
	 * Sets the value of model property clutch
	 * @param clutch from OpenSCENARIO class model specification: [New value for clutch position or unset value.]
	 * 
	*/
	public  void setClutch (IOverrideClutchAction clutch )
	{
		this.clutch = clutch;
	}
	/**
	 * Sets the value of model property parkingBrake
	 * @param parkingBrake from OpenSCENARIO class model specification: [New value for parking brake position or unset value.]
	 * 
	*/
	public  void setParkingBrake (IOverrideParkingBrakeAction parkingBrake )
	{
		this.parkingBrake = parkingBrake;
	}
	/**
	 * Sets the value of model property steeringWheel
	 * @param steeringWheel from OpenSCENARIO class model specification: [New value for steering wheel position or unset 
	 * value.]
	 * 
	*/
	public  void setSteeringWheel (IOverrideSteeringWheelAction steeringWheel )
	{
		this.steeringWheel = steeringWheel;
	}
	/**
	 * Sets the value of model property gear
	 * @param gear from OpenSCENARIO class model specification: [New value for gear position or unset value.]
	 * 
	*/
	public  void setGear (IOverrideGearAction gear )
	{
		this.gear = gear;
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
		
			IOverrideThrottleAction throttle = null;
			throttle =  getThrottle();
			if (throttle != null)
			{
				result.add((BaseImpl) throttle);
			}	
			IOverrideBrakeAction brake = null;
			brake =  getBrake();
			if (brake != null)
			{
				result.add((BaseImpl) brake);
			}	
			IOverrideClutchAction clutch = null;
			clutch =  getClutch();
			if (clutch != null)
			{
				result.add((BaseImpl) clutch);
			}	
			IOverrideParkingBrakeAction parkingBrake = null;
			parkingBrake =  getParkingBrake();
			if (parkingBrake != null)
			{
				result.add((BaseImpl) parkingBrake);
			}	
			IOverrideSteeringWheelAction steeringWheel = null;
			steeringWheel =  getSteeringWheel();
			if (steeringWheel != null)
			{
				result.add((BaseImpl) steeringWheel);
			}	
			IOverrideGearAction gear = null;
			gear =  getGear();
			if (gear != null)
			{
				result.add((BaseImpl) gear);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public OverrideControllerValueActionImpl clone()
	{
		OverrideControllerValueActionImpl clonedObject = new OverrideControllerValueActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IOverrideThrottleAction throttle = null;
		throttle =  getThrottle();
		if (throttle != null)
		{
			OverrideThrottleActionImpl clonedChild = ((OverrideThrottleActionImpl) throttle).clone();
			clonedObject.setThrottle(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOverrideBrakeAction brake = null;
		brake =  getBrake();
		if (brake != null)
		{
			OverrideBrakeActionImpl clonedChild = ((OverrideBrakeActionImpl) brake).clone();
			clonedObject.setBrake(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOverrideClutchAction clutch = null;
		clutch =  getClutch();
		if (clutch != null)
		{
			OverrideClutchActionImpl clonedChild = ((OverrideClutchActionImpl) clutch).clone();
			clonedObject.setClutch(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOverrideParkingBrakeAction parkingBrake = null;
		parkingBrake =  getParkingBrake();
		if (parkingBrake != null)
		{
			OverrideParkingBrakeActionImpl clonedChild = ((OverrideParkingBrakeActionImpl) parkingBrake).clone();
			clonedObject.setParkingBrake(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOverrideSteeringWheelAction steeringWheel = null;
		steeringWheel =  getSteeringWheel();
		if (steeringWheel != null)
		{
			OverrideSteeringWheelActionImpl clonedChild = ((OverrideSteeringWheelActionImpl) steeringWheel).clone();
			clonedObject.setSteeringWheel(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOverrideGearAction gear = null;
		gear =  getGear();
		if (gear != null)
		{
			OverrideGearActionImpl clonedChild = ((OverrideGearActionImpl) gear).clone();
			clonedObject.setGear(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

