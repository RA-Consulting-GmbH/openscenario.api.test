package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the actions which are executed during the initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IInit extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of actions initially executed when the enclosing storyboard starts.
	 * 
	 * @return value of model property actions
	*/
	public IInitActions getActions();
}
