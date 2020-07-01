package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the longitudinal behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILongitudinalAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * This action describes the transition between the current longitudinal speed of an entity and its target speed.
	 * 
	 * @return value of model property speedAction
	*/
	public ISpeedAction getSpeedAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * This Action defines a continuously kept longitudinal distance to a specific entity.
	 * 
	 * @return value of model property longitudinalDistanceAction
	*/
	public ILongitudinalDistanceAction getLongitudinalDistanceAction();
}
