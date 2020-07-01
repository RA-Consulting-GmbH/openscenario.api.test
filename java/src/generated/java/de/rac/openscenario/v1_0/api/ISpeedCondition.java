package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares a triggering entity's/entities' speed to a target speed. The logical operator for the comparison is given by
 * the rule attribute.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISpeedCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Speed value of the speed condition. Unit m/s.
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
