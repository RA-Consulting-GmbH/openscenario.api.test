package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Conditions referring an entity need to know which entity shall trigger the condition. TriggeringEntities is a collection
 * of entities whose states are used to verify the given condition. An additional attribute needs to specify if one of the
 * entities is enough for the condition to become true, or if all of them are required.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IByEntityCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entities triggering this condition.
	 * 
	 * @return value of model property triggeringEntities
	*/
	public ITriggeringEntities getTriggeringEntities();

	/**
	 * From OpenSCENARIO class model specification:
	 * The condition which is related to the triggering entities.
	 * 
	 * @return value of model property entityCondition
	*/
	public IEntityCondition getEntityCondition();
}
