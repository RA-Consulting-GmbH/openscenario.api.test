package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a controller for a scenario object. Either an inline definition or a catalog reference to a controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IObjectController extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Catalog reference to a controller.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();

	/**
	 * From OpenSCENARIO class model specification:
	 * Controller type definition.
	 * 
	 * @return value of model property controller
	*/
	public IController getController();
}
