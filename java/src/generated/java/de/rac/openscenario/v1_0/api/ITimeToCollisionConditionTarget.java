package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Target position used in the TimeToCollisionCondition. Can be defined as either an explicit position, or the position of
 * a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITimeToCollisionConditionTarget extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Position.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public IEntityRef getEntityRef();
}
