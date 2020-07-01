package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions applied to one or multiple entities. Either the entities are referenced in the actors of the enclosing maneuver
 * group or the single entity is referenced in the enclosing Private instance.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPrivateAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Applies longitudinal control behavior on the reference entity/entities. Either a SpeedAction or a
	 * LongitudinalDistanceAction.
	 * 
	 * @return value of model property longitudinalAction
	*/
	public ILongitudinalAction getLongitudinalAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Applies lateral control behavior on the reference entity/entities. Either a LaneChangeAction, LaneOffsetAction or a
	 * LateralDistanceAction.
	 * 
	 * @return value of model property lateralAction
	*/
	public ILateralAction getLateralAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Sets visibility attributes on the reference entity/entities.
	 * 
	 * @return value of model property visibilityAction
	*/
	public IVisibilityAction getVisibilityAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Synchronizes the reference entity/entities with a master entity. A target position is provided for the entity and for
	 * the master entity to be reached at the same time.
	 * 
	 * @return value of model property synchronizeAction
	*/
	public ISynchronizeAction getSynchronizeAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Activates/ deactivates a controller on the reference entity/entities.
	 * 
	 * @return value of model property activateControllerAction
	*/
	public IActivateControllerAction getActivateControllerAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a controller to the reference entity/entities.
	 * 
	 * @return value of model property controllerAction
	*/
	public IControllerAction getControllerAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Assigns a position to the reference entity/entities.
	 * 
	 * @return value of model property teleportAction
	*/
	public ITeleportAction getTeleportAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Applies an AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
	 * 
	 * @return value of model property routingAction
	*/
	public IRoutingAction getRoutingAction();
}
