package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Represents the geometrical center of the bounding box expressed in coordinates that refer to the coordinate system of
 * the entity (e.g. the vehicle coordinate system).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ICenter extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in x direction.
	 * 
	 * @return value of model property x
	*/
	public Double getX();

	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in y direction.
	 * 
	 * @return value of model property y
	*/
	public Double getY();

	/**
	 * From OpenSCENARIO class model specification:
	 * Center offset in z direction.
	 * 
	 * @return value of model property z
	*/
	public Double getZ();
}
