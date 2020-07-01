package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Shape for use in trajectories. Supported types: Polyline (line segments), Clothoid, Nurbs.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IShape extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Polyline property of a shape.
	 * 
	 * @return value of model property polyline
	*/
	public IPolyline getPolyline();

	/**
	 * From OpenSCENARIO class model specification:
	 * Clothoid property of a shape.
	 * 
	 * @return value of model property clothoid
	*/
	public IClothoid getClothoid();

	/**
	 * From OpenSCENARIO class model specification:
	 * NURBS property of a shape.
	 * 
	 * @return value of model property nurbs
	*/
	public INurbs getNurbs();
}
