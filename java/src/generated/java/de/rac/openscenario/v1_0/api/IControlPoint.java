package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of one control point of a NURBS trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IControlPoint extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional specification of the time dimension of the control point. Unit: s;Range [0..inf[.
	 * 
	 * @return value of model property time
	*/
	public Double getTime();

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional weight specification of the control point. If unspecified, all control points will be equal weighted. Range
	 * ]-inf..inf[.
	 * 
	 * @return value of model property weight
	*/
	public Double getWeight();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the control point.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();
}
