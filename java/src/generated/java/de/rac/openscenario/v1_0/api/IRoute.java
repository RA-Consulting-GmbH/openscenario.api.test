package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A route is defined in a scenario or in a catalog. It represents a continuous path throughout the road network, defined
 * by a series of waypoints.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoute extends IOpenScenarioModelElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the route. Required in catalogs.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * In a closed route, the last waypoint is followed by the first waypoint to create a closed route.
	 * 
	 * @return value of model property closed
	*/
	public Boolean getClosed();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * At least two waypoints are needed to define a route.
	 * 
	 * @return value of model property waypoints
	*/
	public List<IWaypoint> getWaypoints();
}
