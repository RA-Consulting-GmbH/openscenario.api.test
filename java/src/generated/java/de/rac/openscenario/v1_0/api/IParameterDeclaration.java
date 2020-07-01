package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Declaration of a parameter.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IParameterDeclaration extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Type of the parameter.
	 * 
	 * @return value of model property parameterType
	*/
	public ParameterType getParameterType();

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter as its default value.
	 * 
	 * @return value of model property value
	*/
	public String getValue();
}
