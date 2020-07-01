package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Enclosing type for either adding a value to a parameter or multiply the parameter by a value. Has to be match the
 * parameter type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IModifyRule extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Adding a value to a parameter.
	 * 
	 * @return value of model property addValue
	*/
	public IParameterAddValueRule getAddValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * Multiply a parameter by a value.
	 * 
	 * @return value of model property multiplyByValue
	*/
	public IParameterMultiplyByValueRule getMultiplyByValue();
}
