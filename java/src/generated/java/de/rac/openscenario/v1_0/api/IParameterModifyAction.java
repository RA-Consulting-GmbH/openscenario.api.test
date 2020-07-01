package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Modify a global parameter according to given rules.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IParameterModifyAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Either adding a value to a parameter or multiply a parameter by a value. Has to match the parameter type.
	 * 
	 * @return value of model property rule
	*/
	public IModifyRule getRule();
}
