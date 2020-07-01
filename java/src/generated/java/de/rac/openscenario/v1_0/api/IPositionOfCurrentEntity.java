package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Reference to the current Entity. The position in a route is defined through the position of this entity (used in
 * RoutePosition).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPositionOfCurrentEntity extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to an entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();
}
