package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Logical expression in condition becomes true after the triggering entity/entities have traveled the given distance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITraveledDistanceCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Amount of traveled distance. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();
}
