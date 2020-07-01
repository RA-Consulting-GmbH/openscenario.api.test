package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the target lane of the LaneOffsetAction.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILaneOffsetTarget extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative reference to the lane position of a specific entity.
	 * 
	 * @return value of model property relativeTargetLaneOffset
	*/
	public IRelativeTargetLaneOffset getRelativeTargetLaneOffset();

	/**
	 * From OpenSCENARIO class model specification:
	 * Absolute reference to the current lane's center line.
	 * 
	 * @return value of model property absoluteTargetLaneOffset
	*/
	public IAbsoluteTargetLaneOffset getAbsoluteTargetLaneOffset();
}
