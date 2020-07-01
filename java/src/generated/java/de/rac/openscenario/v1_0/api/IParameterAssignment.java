package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Assignment of a value to a named parameter during runtime. This assignment is used when importing types of vehicles,
 * controllers etc. from a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IParameterAssignment extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the parameter that must be declared in the catalog.
	 * 
	 * @return value of model property parameterRef
	*/
	public INamedReference<IParameterDeclaration> getParameterRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the parameter that is handed over to the parametrizable type.
	 * 
	 * @return value of model property value
	*/
	public String getValue();
}
