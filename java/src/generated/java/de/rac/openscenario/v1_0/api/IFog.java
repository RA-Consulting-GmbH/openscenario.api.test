package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines fog at simulation runtime.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IFog extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property visualRange
	*/
	public Double getVisualRange();

	/**
	 * From OpenSCENARIO class model specification:
	 * Dimensions and center of fog in fixed coordinates.
	 * 
	 * @return value of model property boundingBox
	*/
	public IBoundingBox getBoundingBox();
}
