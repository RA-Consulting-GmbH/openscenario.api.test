package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A list of action instances (GlobalAction, UserDefinedAction, PrivateAction instances) which are executed during the
 * initialization phase of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IInitActions extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of global actions.
	 * 
	 * @return value of model property globalActions
	*/
	public List<IGlobalAction> getGlobalActions();

	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of user defined actions.
	 * 
	 * @return value of model property userDefinedActions
	*/
	public List<IUserDefinedAction> getUserDefinedActions();

	/**
	 * From OpenSCENARIO class model specification:
	 * An optional list of private actions.
	 * 
	 * @return value of model property privates
	*/
	public List<IPrivate> getPrivates();
}
