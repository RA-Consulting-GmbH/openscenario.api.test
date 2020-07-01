package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of the road friction scale factor. Can be augmented with the addition of optional road properties.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoadCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Friction scale factor. Range: [0..inf[
	 * 
	 * @return value of model property frictionScaleFactor
	*/
	public Double getFrictionScaleFactor();

	/**
	 * From OpenSCENARIO class model specification:
	 * Additional properties to describe the road condition.
	 * 
	 * @return value of model property properties
	*/
	public IProperties getProperties();
}
