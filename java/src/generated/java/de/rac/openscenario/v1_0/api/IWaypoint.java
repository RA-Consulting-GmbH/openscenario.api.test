package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Reference position used to form a route.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IWaypoint extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The corresponding routing strategy (fastest, shortest, random, leastIntersections).
	 * 
	 * @return value of model property routeStrategy
	*/
	public RouteStrategy getRouteStrategy();

	/**
	 * From OpenSCENARIO class model specification:
	 * The reference position to form the route.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();
}
