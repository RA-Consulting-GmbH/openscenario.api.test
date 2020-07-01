package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action used to set or overwrite a signals state or a signal controllers state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Action used to control the state of a signal.
	 * 
	 * @return value of model property trafficSignalControllerAction
	*/
	public ITrafficSignalControllerAction getTrafficSignalControllerAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Action used to set a specific phase of a signal controller.
	 * 
	 * @return value of model property trafficSignalStateAction
	*/
	public ITrafficSignalStateAction getTrafficSignalStateAction();
}
