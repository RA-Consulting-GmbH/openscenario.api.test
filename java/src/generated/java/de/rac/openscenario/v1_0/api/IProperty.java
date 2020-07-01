package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a property by name and value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IProperty extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a user defined property.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of a user defined property.
	 * 
	 * @return value of model property value
	*/
	public String getValue();
}
