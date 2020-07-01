package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Logical expression in condition becomes true if the triggering entity/entities stands still for a given amount of time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IStandStillCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Duration time of still standing to let the logical expression become true. Unit: s. Range [0..inf[.
	 * 
	 * @return value of model property duration
	*/
	public Double getDuration();
}
