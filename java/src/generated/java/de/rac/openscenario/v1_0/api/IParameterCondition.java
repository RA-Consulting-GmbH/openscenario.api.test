package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Compares a named parameter's value to a reference value. The logical operator used for comparison is defined by the rule
 * attribute Less and greater operator will only be supported if the value given as string can unambiguously be converted
 * into a scalar value (e.g. value=5, value=16.667).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IParameterCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter that must be defined.
	 * 
	 * @return value of model property parameterRef
	*/
	public INamedReference<IParameterDeclaration> getParameterRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter.
	 * 
	 * @return value of model property value
	*/
	public String getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();
}
