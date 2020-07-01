package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a coordinate along a lane with a given s coordinate and lane ID.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPositionInLaneCoordinates extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * s-coordinate of the actual position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property pathS
	*/
	public Double getPathS();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane ID of the actual position.
	 * 
	 * @return value of model property laneId
	*/
	public String getLaneId();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset (relative to the lane centerline) of the actual position. Unit: m.
	 * 
	 * @return value of model property laneOffset
	*/
	public Double getLaneOffset();
}
