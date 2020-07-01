package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action assigns a controller to the given entity defined in the enclosing PrivateAction. Controllers could be
 * defined inline or by using a catalog reference.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAssignControllerAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a controller to a given entity.
	 * 
	 * @return value of model property controller
	*/
	public IController getController();

	/**
	 * From OpenSCENARIO class model specification:
	 * Uses a CatalogReference to assign a controller to a given entity. CatalogReference must point to a Controller type.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();
}
