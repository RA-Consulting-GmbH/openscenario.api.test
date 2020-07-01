package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for Performance values of a vehicle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPerformance extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum speed of the vehicle. Unit: m/s.
	 * 
	 * @return value of model property maxSpeed
	*/
	public Double getMaxSpeed();

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum acceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
	 * 
	 * @return value of model property maxAcceleration
	*/
	public Double getMaxAcceleration();

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum deceleration of the vehicle. Unit: m/s^2. Range: [0..inf[.
	 * 
	 * @return value of model property maxDeceleration
	*/
	public Double getMaxDeceleration();
}
