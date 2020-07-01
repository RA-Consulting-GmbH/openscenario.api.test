package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes the transition of an entity's longitudinal speed to a target longitudinal speed.
 * SpeedActionDynamics specifies the transition with respects to time or distance combined with a shape.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISpeedAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines how the target speed is reached.
	 * 
	 * @return value of model property speedActionDynamics
	*/
	public ITransitionDynamics getSpeedActionDynamics();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the target speed which should be reached.
	 * 
	 * @return value of model property speedActionTarget
	*/
	public ISpeedActionTarget getSpeedActionTarget();
}
