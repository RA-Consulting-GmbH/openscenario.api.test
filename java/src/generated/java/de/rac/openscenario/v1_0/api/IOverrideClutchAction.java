package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the clutch of a vehicle, when overriding a clutch value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOverrideClutchAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Clutch pedal value. Range: [0..1]. 0 represents 0%, 1 represents 100% of pressing the clutch pedal.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
	public Boolean getActive();
}
