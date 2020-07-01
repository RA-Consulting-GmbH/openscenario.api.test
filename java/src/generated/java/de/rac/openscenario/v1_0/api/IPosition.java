package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for position types.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that uses global coordinates.
	 * 
	 * @return value of model property worldPosition
	*/
	public IWorldPosition getWorldPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to a world position.
	 * 
	 * @return value of model property relativeWorldPosition
	*/
	public IRelativeWorldPosition getRelativeWorldPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to an entity.
	 * 
	 * @return value of model property relativeObjectPosition
	*/
	public IRelativeObjectPosition getRelativeObjectPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in road coordinates (t,s) applied to a given road.
	 * 
	 * @return value of model property roadPosition
	*/
	public IRoadPosition getRoadPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position relative to an entity's road position (ds, dt).
	 * 
	 * @return value of model property relativeRoadPosition
	*/
	public IRelativeRoadPosition getRelativeRoadPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
	 * 
	 * @return value of model property lanePosition
	*/
	public ILanePosition getLanePosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined relative to the lane coordinates of a given entity. (Relative lane and relative s to this
	 * entity).
	 * 
	 * @return value of model property relativeLanePosition
	*/
	public IRelativeLanePosition getRelativeLanePosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a given route.
	 * 
	 * @return value of model property routePosition
	*/
	public IRoutePosition getRoutePosition();
}
