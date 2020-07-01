package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Considered true if a referenced traffic signal (e.g. from an OpenDRIVE file) reaches a specific states. Signal IDs are
 * listed in the TrafficSignal list of the RoadNetwork together with their states and their controllers to enable dynamic
 * signal modelling.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal defined in a road network. The signal ID must be listed in the TrafficSignal list of the
	 * RoadNetwork section.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal to be reached for the condition to become true.
	 * 
	 * @return value of model property state
	*/
	public String getState();
}
