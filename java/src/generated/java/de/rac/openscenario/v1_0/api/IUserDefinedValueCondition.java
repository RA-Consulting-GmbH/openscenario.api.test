package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This condition acts as a wrapper for external custom conditions which are implemented in the user software. This
 * condition is considered true if the given value verifies the specified relation rule (bigger than, smaller than, or
 * equal to) relatively to the provided reference.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IUserDefinedValueCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the external value.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference value the external value is compared to.
	 * 
	 * @return value of model property value
	*/
	public String getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();
}
