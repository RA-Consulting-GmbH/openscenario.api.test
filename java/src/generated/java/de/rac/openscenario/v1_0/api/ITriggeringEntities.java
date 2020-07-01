package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A collection of entities evaluated for an EntityCondition to be triggered. It is optional whether the condition must be
 * fulfilled any or all of the objects.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITriggeringEntities extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * All or any.
	 * 
	 * @return value of model property triggeringEntitiesRule
	*/
	public TriggeringEntitiesRule getTriggeringEntitiesRule();

	/**
	 * From OpenSCENARIO class model specification:
	 * List of referenced entities that trigger the condition.
	 * 
	 * @return value of model property entityRefs
	*/
	public List<IEntityRef> getEntityRefs();
}
