package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an action which changes a state of a traffic signal or a traffic signal controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IInfrastructureAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Set or overwrite a signals state or a signal controllers state from a road network.
	 * 
	 * @return value of model property trafficSignalAction
	*/
	public ITrafficSignalAction getTrafficSignalAction();
}
