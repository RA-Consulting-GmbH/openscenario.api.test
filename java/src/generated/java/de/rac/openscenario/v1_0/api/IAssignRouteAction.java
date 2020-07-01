package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls an entity to follow a route using waypoints on the road network. The corresponding route can be instantiated
 * from a catalog type, or defined within this declaration. This action does not override any action that controls either
 * lateral or longitudinal domain.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAssignRouteAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The route definition.
	 * 
	 * @return value of model property route
	*/
	public IRoute getRoute();

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the route definition in a catalog. The reference must point to a route.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();
}
