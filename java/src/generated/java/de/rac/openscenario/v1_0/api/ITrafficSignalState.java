package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Possible state of traffic signal within a phase. One state per phase.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalState extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal in a road network. The signal ID must be listed in TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property trafficSignalId
	*/
	public String getTrafficSignalId();

	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/
	public String getState();
}
