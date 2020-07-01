package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The logical expression is considered true if the simulated time and date verifies the specified relation rule (bigger
 * than, smaller than, or equal to) relatively to a given time and date value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITimeOfDayCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();

	/**
	 * From OpenSCENARIO class model specification:
	 * Datetime value for comparison.
	 * 
	 * @return value of model property dateTime
	*/
	public java.util.Date getDateTime();
}
