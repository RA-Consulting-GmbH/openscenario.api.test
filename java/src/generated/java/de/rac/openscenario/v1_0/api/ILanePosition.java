package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position along a lane with a given s coordinate, lane ID, road ID and orientation.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILanePosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the current road (ID of a road in road network).
	 * 
	 * @return value of model property roadId
	*/
	public String getRoadId();

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the current lane (ID of a lane in road network).
	 * 
	 * @return value of model property laneId
	*/
	public String getLaneId();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset to the centerline of the current lane. Unit: m.
	 * 
	 * @return value of model property offset
	*/
	public Double getOffset();

	/**
	 * From OpenSCENARIO class model specification:
	 * The s coordinate of the current position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property s
	*/
	public Double getS();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();
}
