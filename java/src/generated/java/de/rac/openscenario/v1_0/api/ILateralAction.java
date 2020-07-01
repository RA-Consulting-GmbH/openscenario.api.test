package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls the lateral behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILateralAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a lane change.
	 * 
	 * @return value of model property laneChangeAction
	*/
	public ILaneChangeAction getLaneChangeAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lane offset.
	 * 
	 * @return value of model property laneOffsetAction
	*/
	public ILaneOffsetAction getLaneOffsetAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lateral distance to a specific entity.
	 * 
	 * @return value of model property lateralDistanceAction
	*/
	public ILateralDistanceAction getLateralDistanceAction();
}
