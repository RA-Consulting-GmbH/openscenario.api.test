package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Checks if an entity is of the road. The logical expression returns true after the entity has been offroad for a specific
 * duration.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOffroadCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of time of driving offroad. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
	public Double getDuration();
}
