package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines swarm traffic within an elliptical planview around a given central entity. The innerRadius defines the minimum
 * distance between the central vehicle and swarm traffic. The latter is set up in the free space between the circular area
 * defined by innerRadius and the outline of the ellipsis defined by the two semi axis attributes. While vehicles are
 * created in this area, they are removed if they leave it crossing the it ellipsisâ€™ outline. Within the innerRadius,
 * vehicles are neither set up nor removed. Optionally, the swarm area can be longitudinally offset to the central scenario
 * object.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSwarmAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMajorAxis defines the
	 * half length of the major axis of this ellipsis. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property semiMajorAxis
	*/
	public Double getSemiMajorAxis();

	/**
	 * From OpenSCENARIO class model specification:
	 * Shape of the swarm traffic distribution area is given as an ellipsis around a central entity. SemiMinorAxis defines the
	 * half length of the minor axis of this ellipsis. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property semiMinorAxis
	*/
	public Double getSemiMinorAxis();

	/**
	 * From OpenSCENARIO class model specification:
	 * Radius of the inner circular area around the central entity. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property innerRadius
	*/
	public Double getInnerRadius();

	/**
	 * From OpenSCENARIO class model specification:
	 * Offset in longitudinal direction related to the x-axis of the central entity. Unit: m;.
	 * 
	 * @return value of model property offset
	*/
	public Double getOffset();

	/**
	 * From OpenSCENARIO class model specification:
	 * The maximum number of vehicles surrounding the central entity. Depending on the current road situation less than
	 * numberOfVehicles might be set up. Range: [0..inf[.
	 * 
	 * @return value of model property numberOfVehicles
	*/
	public Long getNumberOfVehicles();

	/**
	 * From OpenSCENARIO class model specification:
	 * The optional starting velocity of a created entity. Unit: m/s; Range: [0..inf[.
	 * 
	 * @return value of model property velocity
	*/
	public Double getVelocity();

	/**
	 * From OpenSCENARIO class model specification:
	 * The entity that represents the center of a swarm.
	 * 
	 * @return value of model property centralObject
	*/
	public ICentralSwarmObject getCentralObject();

	/**
	 * From OpenSCENARIO class model specification:
	 * Specifies properties of autonomous traffic with respect to vehicle and driver distributions.
	 * 
	 * @return value of model property trafficDefinition
	*/
	public ITrafficDefinition getTrafficDefinition();
}
