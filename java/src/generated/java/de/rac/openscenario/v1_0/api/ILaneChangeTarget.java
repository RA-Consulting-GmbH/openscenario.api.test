package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the target lane of the LaneChangeAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILaneChangeTarget extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane change direction relative to entity's lane.
	 * 
	 * @return value of model property relativeTargetLane
	*/
	public IRelativeTargetLane getRelativeTargetLane();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane change target lane number.
	 * 
	 * @return value of model property absoluteTargetLane
	*/
	public IAbsoluteTargetLane getAbsoluteTargetLane();
}
