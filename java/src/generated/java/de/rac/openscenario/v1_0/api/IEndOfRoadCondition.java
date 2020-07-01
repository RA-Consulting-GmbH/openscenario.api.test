package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Condition becomes true after the triggering entity/entities has reached the end of a road for a given amount of time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEndOfRoadCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of time at end of road. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
	public Double getDuration();
}
