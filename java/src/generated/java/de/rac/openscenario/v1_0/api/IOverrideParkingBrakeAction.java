package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the parking brake of a vehicle, when overriding a parking brake value in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOverrideParkingBrakeAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Parking brake value. Unit: %; Range: [0..1]. The value 1 represent the maximum parking brake state.
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
