package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A position which is fixed in the inertial reference frame of the simulation environment, the so-called world coordinate
 * system.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IWorldPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The x coordinate value.
	 * 
	 * @return value of model property x
	*/
	public Double getX();

	/**
	 * From OpenSCENARIO class model specification:
	 * The y coordinate value.
	 * 
	 * @return value of model property y
	*/
	public Double getY();

	/**
	 * From OpenSCENARIO class model specification:
	 * The z coordinate value.
	 * 
	 * @return value of model property z
	*/
	public Double getZ();

	/**
	 * From OpenSCENARIO class model specification:
	 * The heading angle of the object, defining a mathematically positive rotation about the z-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property h
	*/
	public Double getH();

	/**
	 * From OpenSCENARIO class model specification:
	 * The pitch angle of the object, defining a mathematically positive rotation about the y-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property p
	*/
	public Double getP();

	/**
	 * From OpenSCENARIO class model specification:
	 * The roll angle of the object, defining a mathematically positive rotation about the x-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property r
	*/
	public Double getR();
}
