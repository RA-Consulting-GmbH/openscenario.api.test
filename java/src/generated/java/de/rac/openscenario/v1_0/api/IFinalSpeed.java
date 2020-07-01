package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Final speed definition for a SynchronizeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IFinalSpeed extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The absolute speed a synchronized entity should have at its target position.
	 * 
	 * @return value of model property absoluteSpeed
	*/
	public IAbsoluteSpeed getAbsoluteSpeed();

	/**
	 * From OpenSCENARIO class model specification:
	 * The speed a synchronized entity should have relative to its master entity at its target position.
	 * 
	 * @return value of model property relativeSpeedToMaster
	*/
	public IRelativeSpeedToMaster getRelativeSpeedToMaster();
}
