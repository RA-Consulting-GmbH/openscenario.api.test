package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Speed definition relative to the master entity's speed within a SynchronizeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeSpeedToMaster extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative speed. Unit: m/s. Range: ]-inf..inf[.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The semantics of the value (delta, offset, factor).
	 * 
	 * @return value of model property speedTargetValueType
	*/
	public SpeedTargetValueType getSpeedTargetValueType();
}
