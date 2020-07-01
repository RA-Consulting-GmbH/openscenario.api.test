package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Indicates if the following content defines a scenario or a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOpenScenarioCategory extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a scenario.
	 * 
	 * @return value of model property scenarioDefinition
	*/
	public IScenarioDefinition getScenarioDefinition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a catalog.
	 * 
	 * @return value of model property catalogDefinition
	*/
	public ICatalogDefinition getCatalogDefinition();
}
