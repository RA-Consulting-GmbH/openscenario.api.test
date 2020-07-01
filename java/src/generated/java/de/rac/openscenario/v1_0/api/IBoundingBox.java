package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines geometric properties of the entities as a simplified three dimensional bounding box.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IBoundingBox extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
	 * the entity (e.g. the vehicle coordinate system).
	 * 
	 * @return value of model property center
	*/
	public ICenter getCenter();

	/**
	 * From OpenSCENARIO class model specification:
	 * Width, length and height of the bounding box.
	 * 
	 * @return value of model property dimensions
	*/
	public IDimensions getDimensions();
}
