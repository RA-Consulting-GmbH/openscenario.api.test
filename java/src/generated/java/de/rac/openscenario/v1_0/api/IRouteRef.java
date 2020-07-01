package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a reference to a route. Either an inline definition of a route or a route in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRouteRef extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Route definition.
	 * 
	 * @return value of model property route
	*/
	public IRoute getRoute();

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to route in the catalog.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();
}
