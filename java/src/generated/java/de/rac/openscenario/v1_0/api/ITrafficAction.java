package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions defining macroscopic traffic flow and behavior.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a source of traffic at a specific position.
	 * 
	 * @return value of model property trafficSourceAction
	*/
	public ITrafficSourceAction getTrafficSourceAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a sink of traffic at a specific position.
	 * 
	 * @return value of model property trafficSinkAction
	*/
	public ITrafficSinkAction getTrafficSinkAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines swarm traffic around a given central entity.
	 * 
	 * @return value of model property trafficSwarmAction
	*/
	public ITrafficSwarmAction getTrafficSwarmAction();
}
