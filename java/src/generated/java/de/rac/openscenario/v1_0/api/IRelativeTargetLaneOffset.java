package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the relative lane offset from a triggering entity/entities to a reference entity as a target for a
 * LaneOffsetTarget.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeTargetLaneOffset extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lane offset with respect to the reference entity's current lane position. Unit: m.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();
}
