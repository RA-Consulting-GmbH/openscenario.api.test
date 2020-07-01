package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares the simulation time to the specified value. The logical operator is defined by the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISimulationTimeCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Time value of the simulation time condition. Unit: s.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();
}
