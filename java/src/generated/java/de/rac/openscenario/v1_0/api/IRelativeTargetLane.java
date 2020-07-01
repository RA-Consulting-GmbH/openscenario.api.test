package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the relative lane offset to a reference entity as target for a LaneChangeTarget.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeTargetLane extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Signed number of lanes that is offset the reference entity's current lane.
	 * 
	 * @return value of model property value
	*/
	public Integer getValue();
}
