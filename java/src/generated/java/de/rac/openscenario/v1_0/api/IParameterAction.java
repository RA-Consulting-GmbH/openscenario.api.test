package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Set or modify a named parameter. (Be aware of the data type).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IParameterAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter.
	 * 
	 * @return value of model property parameterRef
	*/
	public INamedReference<IParameterDeclaration> getParameterRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * New value for the parameter.
	 * 
	 * @return value of model property setAction
	*/
	public IParameterSetAction getSetAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Modifying rule for the parameter (Add value or multiply by value).
	 * 
	 * @return value of model property modifyAction
	*/
	public IParameterModifyAction getModifyAction();
}
