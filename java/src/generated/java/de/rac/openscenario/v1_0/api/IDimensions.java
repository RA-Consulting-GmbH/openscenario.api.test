package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Dimensions for a three dimensional box. Width, length and height are the absolute extensions in the (y,x,z) coordinate
 * system of the entity's local coordinate system.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IDimensions extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Width of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property width
	*/
	public Double getWidth();

	/**
	 * From OpenSCENARIO class model specification:
	 * Length of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property length
	*/
	public Double getLength();

	/**
	 * From OpenSCENARIO class model specification:
	 * Height of the entity's bounding box. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property height
	*/
	public Double getHeight();
}
