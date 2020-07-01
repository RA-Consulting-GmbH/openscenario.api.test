package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the state of a collection of traffic signals.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalController extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the traffic signal controller in the road network.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * The delay to the controller in the reference property. A controller having a delay to another one means that its first
	 * phase virtually starts delaytime seconds after the start of the reference's first phase. This can be used to define a
	 * progressive signal system, but only makes sense, if the total times of all connected controllers are the same. If delay
	 * is set, reference is required. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property delay
	*/
	public Double getDelay();

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference (ID) to the connected controller in the road network. If reference is set, a delay is required.
	 * 
	 * @return value of model property reference
	*/
	public String getReference();

	/**
	 * From OpenSCENARIO class model specification:
	 * Phases of a TrafficSignalController.
	 * 
	 * @return value of model property phases
	*/
	public List<IPhase> getPhases();
}
