package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines that weight in a controller distribution, for the given controller type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IControllerDistributionEntry extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The weight of the entry. Range: ]0..inf[.
	 * 
	 * @return value of model property weight
	*/
	public Double getWeight();

	/**
	 * From OpenSCENARIO class model specification:
	 * The specified controller type.
	 * 
	 * @return value of model property controller
	*/
	public IController getController();

	/**
	 * From OpenSCENARIO class model specification:
	 * A controller type import from a catalog.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();
}
