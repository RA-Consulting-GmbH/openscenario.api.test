package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * An action serves to create or modify all dynamic elements of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAction extends IOpenScenarioModelElement,IStoryboardElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of this action.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * The GlobalAction to be executed when the enclosing Action is startedis started.
	 * 
	 * @return value of model property globalAction
	*/
	public IGlobalAction getGlobalAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * The UserDefinedAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property userDefinedAction
	*/
	public IUserDefinedAction getUserDefinedAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * The PrivateAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property privateAction
	*/
	public IPrivateAction getPrivateAction();
}
