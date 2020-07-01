package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the state of a traffic signal.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalStateAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of a signal in a road network. The signal ID must be listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Targeted state of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/
	public String getState();
}
