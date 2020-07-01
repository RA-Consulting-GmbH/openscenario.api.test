package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls entity routing, either by following a predefined route or trajectory, alternatively by specifying a destination
 * position which the entity should aim to reach.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoutingAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a route to an entity. The route is defined by at least two waypoints.
	 * 
	 * @return value of model property assignRouteAction
	*/
	public IAssignRouteAction getAssignRouteAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Controls an entity to follow a trajectory.
	 * 
	 * @return value of model property followTrajectoryAction
	*/
	public IFollowTrajectoryAction getFollowTrajectoryAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a route to an entity. The route assigned will be the shortest route (along roads) between the entity's current
	 * position and the position specified.
	 * 
	 * @return value of model property acquirePositionAction
	*/
	public IAcquirePositionAction getAcquirePositionAction();
}
