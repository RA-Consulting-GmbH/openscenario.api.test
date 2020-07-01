package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares the entity's acceleration to a reference value. The logical operator used for comparison is defined by the rule
 * attribute (less, greater, equal).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAccelerationCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Acceleration value. Unit: m/s^2.
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
