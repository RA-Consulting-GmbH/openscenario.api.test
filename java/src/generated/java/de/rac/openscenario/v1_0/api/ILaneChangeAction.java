package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes the transition between an entity's current lane and its target lane. The target lane may be given
 * in absolute or relative terms. The dynamics of the transition may be given either by providing the time or the distance
 * required for performing the transition. Time and distance are measured between the start position and the end position
 * of the action.. The transition starts at the current lane position, including the current lane offset and ends at the
 * target lane position, optionally including a targetLaneOffset.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILaneChangeAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane offset to be reached at the target lane; the action will end there. Unit: m.
	 * 
	 * @return value of model property targetLaneOffset
	*/
	public Double getTargetLaneOffset();

	/**
	 * From OpenSCENARIO class model specification:
	 * Shape/time of lane change action.
	 * 
	 * @return value of model property laneChangeActionDynamics
	*/
	public ITransitionDynamics getLaneChangeActionDynamics();

	/**
	 * From OpenSCENARIO class model specification:
	 * Direction of lane change action.
	 * 
	 * @return value of model property laneChangeTarget
	*/
	public ILaneChangeTarget getLaneChangeTarget();
}
