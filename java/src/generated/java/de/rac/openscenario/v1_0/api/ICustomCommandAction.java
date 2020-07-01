package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to activate a custom action native to the specific user environment
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ICustomCommandAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Type that is defined as a contract between the simulation environment provider and the author of a scenario.
	 * 
	 * @return value of model property type
	*/
	public String getType();

	/**
	 * From OpenSCENARIO class model specification:
	 * The command that is defined as a contract between the simulation environment provider and the author of a scenario.
	 * 
	 * @return value of model property content
	*/
	public String getContent();
}
