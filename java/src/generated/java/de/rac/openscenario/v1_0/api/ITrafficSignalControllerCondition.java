package de.rac.openscenario.v1_0.api;
import java.util.List;
import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Considered true if a given traffic signal controller (which may be defined within OpenSCENARIO or externally) reaches a
 * specific state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalControllerCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal controller in a road network.
	 * 
	 * @return value of model property trafficSignalControllerRef
	*/
	public INamedReference<ITrafficSignalController> getTrafficSignalControllerRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase of the signal controller to be reached for the condition to become true. The available phases are
	 * defined in type RoadNetwork under the property trafficSignalControllers.
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
