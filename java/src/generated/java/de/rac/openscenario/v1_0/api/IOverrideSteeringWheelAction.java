package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the state of the steering wheel of a vehicle, when overriding a steering wheel angle in a ControllerAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IOverrideSteeringWheelAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Steering wheel angle. Unit: rad.
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
