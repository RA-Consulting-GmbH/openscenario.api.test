package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Phase of a TrafficSignalController. A TrafficSignalController has sequential phases. Each phase has multiple
 * TrafficSignalStates.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPhase extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Duration of the phase. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
	public Double getDuration();

	/**
	 * From OpenSCENARIO class model specification:
	 * Each phase has multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1
	 * (trafficSignal1:true;false;false, trafficSignal2:false;false;true).
	 * 
	 * @return value of model property trafficSignalStates
	*/
	public List<ITrafficSignalState> getTrafficSignalStates();
}
