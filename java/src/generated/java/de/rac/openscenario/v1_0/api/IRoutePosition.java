package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position along a route defined in terms of PositionInRoadCoordinates, PositionInLaneCoordinates or current position of a
 * reference object. Orientation definition is optional.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoutePosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to the route the position is calculated from.
	 * 
	 * @return value of model property routeRef
	*/
	public IRouteRef getRouteRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
	 * and t coordinates or to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position along the route.
	 * 
	 * @return value of model property inRoutePosition
	*/
	public IInRoutePosition getInRoutePosition();
}
