package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the current position in a given route, either through a position in the lane coordinate system, a position in a
 * road coordinate system or through the current position of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IInRoutePosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The position is defined through the current position of a given entity.
	 * 
	 * @return value of model property fromCurrentEntity
	*/
	public IPositionOfCurrentEntity getFromCurrentEntity();

	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in road coordinate system.
	 * 
	 * @return value of model property fromRoadCoordinates
	*/
	public IPositionInRoadCoordinates getFromRoadCoordinates();

	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in lane coordinate system.
	 * 
	 * @return value of model property fromLaneCoordinates
	*/
	public IPositionInLaneCoordinates getFromLaneCoordinates();
}
