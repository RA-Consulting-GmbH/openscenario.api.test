package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position defined in terms of distance along  a route (pathS) and lateral offset from the route's reference line (t) at
 * that point.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPositionInRoadCoordinates extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in s coordinates along the reference line of the road.
	 * 
	 * @return value of model property pathS
	*/
	public Double getPathS();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in t coordinates orthogonal to the reference line of the road.
	 * 
	 * @return value of model property t
	*/
	public Double getT();
}
