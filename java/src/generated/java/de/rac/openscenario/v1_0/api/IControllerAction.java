package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action that assigns a new controller or overrides an existing one.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IControllerAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Assign a controller to an entity.
	 * 
	 * @return value of model property assignControllerAction
	*/
	public IAssignControllerAction getAssignControllerAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Values for throttle, brake, clutch, parking brake, steering wheel or gear.
	 * 
	 * @return value of model property overrideControllerValueAction
	*/
	public IOverrideControllerValueAction getOverrideControllerValueAction();
}
