package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Overrides entity controller values. Mostly suited for motor vehicles.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOverrideControllerValueAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for throttle pedal position or unset value.
	 * 
	 * @return value of model property throttle
	*/
	public IOverrideThrottleAction getThrottle();

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for brake position or unset value.
	 * 
	 * @return value of model property brake
	*/
	public IOverrideBrakeAction getBrake();

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for clutch position or unset value.
	 * 
	 * @return value of model property clutch
	*/
	public IOverrideClutchAction getClutch();

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for parking brake position or unset value.
	 * 
	 * @return value of model property parkingBrake
	*/
	public IOverrideParkingBrakeAction getParkingBrake();

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for steering wheel position or unset value.
	 * 
	 * @return value of model property steeringWheel
	*/
	public IOverrideSteeringWheelAction getSteeringWheel();

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for gear position or unset value.
	 * 
	 * @return value of model property gear
	*/
	public IOverrideGearAction getGear();
}
