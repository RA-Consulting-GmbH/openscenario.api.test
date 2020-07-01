package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to define a steering trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrajectoryFollowingMode extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines (lateral) trajectory following behavior of the actor: Mode 'position' forces the actor to strictly adhere to the
	 * trajectory. In contrast, mode 'follow' hands over control to the actor. In this mode, the actor tries to follow the
	 * trajectory as best as he can. This may be restricted by dynamics constraints and/or control loop implementation.
	 * 
	 * @return value of model property followingMode
	*/
	public FollowingMode getFollowingMode();
}
