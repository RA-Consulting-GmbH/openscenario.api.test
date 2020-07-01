package de.rac.openscenario.v1_0.api;
import java.util.List;
import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Sets a specific phase of a traffic signal controller, typically affecting a collection of signals.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalControllerAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the signal controller in a road network.
	 * 
	 * @return value of model property trafficSignalControllerRef
	*/
	public INamedReference<ITrafficSignalController> getTrafficSignalControllerRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Targeted phase of the signal controller. The available phases are defined in type RoadNetwork under the property
	 * trafficSignalControllers.
	 * 
	 * @return value of model property phase
	*/
	public String getPhase();

	/**
	 * From OpenSCENARIO class model specification:
	 * The reference to the phase (phase is the referential key in the referenced TrafficSignalController).
	 * 
	 * @return value of model property phaseRef
	*/
	public List<IPhase> getPhaseRef();
}
