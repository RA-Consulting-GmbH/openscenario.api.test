package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top level container for scenarios or catalogs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOpenScenario extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Header information for the scenario or the catalog.
	 * 
	 * @return value of model property fileHeader
	*/
	public IFileHeader getFileHeader();

	/**
	 * From OpenSCENARIO class model specification:
	 * Category (catalog or scenario) of the OpenSCENARIO description.
	 * 
	 * @return value of model property openScenarioCategory
	*/
	public IOpenScenarioCategory getOpenScenarioCategory();
}
