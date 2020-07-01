package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifies the target speed of a SpeedAction. Can be either an absolute speed value or a speed value relative to another
 * entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISpeedActionTarget extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed as relative speed to a reference entity. Unit: m/s.
	 * 
	 * @return value of model property relativeTargetSpeed
	*/
	public IRelativeTargetSpeed getRelativeTargetSpeed();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed as absolute speed.Unit: m/s.
	 * 
	 * @return value of model property absoluteTargetSpeed
	*/
	public IAbsoluteTargetSpeed getAbsoluteTargetSpeed();
}
