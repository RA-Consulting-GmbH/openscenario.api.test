package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a sink of traffic at a specific position.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSinkAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the rate on which vehicles disappear at the sinks location. Unit: vehicles/s Range: [0..inf[.
	 * 
	 * @return value of model property rate
	*/
	public Double getRate();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the radius of the traffic sink where vehicles disappear around the specified position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property radius
	*/
	public Double getRadius();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the position of the traffic sink.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the vehicle and controller distribution for the sink.
	 * 
	 * @return value of model property trafficDefinition
	*/
	public ITrafficDefinition getTrafficDefinition();
}
