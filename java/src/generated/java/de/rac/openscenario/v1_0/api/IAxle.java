package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The definition of vehicle axle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAxle extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum steering angle which can be performed by the wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.
	 * 
	 * @return value of model property maxSteering
	*/
	public Double getMaxSteering();

	/**
	 * From OpenSCENARIO class model specification:
	 * Diameter of the wheels on this axle. Unit: m; Range: ]0..inf[.
	 * 
	 * @return value of model property wheelDiameter
	*/
	public Double getWheelDiameter();

	/**
	 * From OpenSCENARIO class model specification:
	 * Distance of the wheels center lines at zero steering. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property trackWidth
	*/
	public Double getTrackWidth();

	/**
	 * From OpenSCENARIO class model specification:
	 * Longitudinal position of the axle with respect to the vehicles reference point. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property positionX
	*/
	public Double getPositionX();

	/**
	 * From OpenSCENARIO class model specification:
	 * Z-position of the axle with respect to the vehicles reference point. Usually this is half of wheel diameter. Unit:m;
	 * Range:[0..inf[.
	 * 
	 * @return value of model property positionZ
	*/
	public Double getPositionZ();
}
