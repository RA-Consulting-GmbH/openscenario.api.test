package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Condition becomes true when the triggering entity/entities collide with another given entity or any entity of a specific
 * type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ICollisionCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a specific entity.
	 * 
	 * @return value of model property entityRef
	*/
	public IEntityRef getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Entities of this type can trigger the condition when collide.
	 * 
	 * @return value of model property byType
	*/
	public IByObjectType getByType();
}
