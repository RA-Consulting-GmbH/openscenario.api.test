package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to either issue a command to the simulation environment or start an external script. Allows the user to activate
 * custom actions in their simulation tool.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IUserDefinedAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The available commands are subject of a contract between simulation environment provider and scenario author.
	 * 
	 * @return value of model property customCommandAction
	*/
	public ICustomCommandAction getCustomCommandAction();
}
