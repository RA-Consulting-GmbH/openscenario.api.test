package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the gear of a vehicle, when overriding a gear value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOverrideGearAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Gear number.
	 * 
	 * @return value of model property number
	*/
	public Double getNumber();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: override; false: stop overriding.
	 * 
	 * @return value of model property active
	*/
	public Boolean getActive();
}
