package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an absolute or relative orientation (heading, pitch and roll).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOrientation extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative or absolute definition.
	 * 
	 * @return value of model property type
	*/
	public ReferenceContext getType();

	/**
	 * From OpenSCENARIO class model specification:
	 * Heading angle. Unit: rad;.
	 * 
	 * @return value of model property h
	*/
	public Double getH();

	/**
	 * From OpenSCENARIO class model specification:
	 * Pitch angle. Unit: rad;.
	 * 
	 * @return value of model property p
	*/
	public Double getP();

	/**
	 * From OpenSCENARIO class model specification:
	 * Roll angle. Unit: rad;.
	 * 
	 * @return value of model property r
	*/
	public Double getR();
}
