package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Checks if a triggering entity/entities has reached a given position, within some user specified tolerance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IReachPositionCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Radius of tolerance circle around given position. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property tolerance
	*/
	public Double getTolerance();

	/**
	 * From OpenSCENARIO class model specification:
	 * The position to be reached with the defined tolerance.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();
}
