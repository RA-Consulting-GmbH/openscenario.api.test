package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A set of entities representing the actors in a maneuver group.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IActors extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Indicates whether the triggering entities are considered actors.
	 * 
	 * @return value of model property selectTriggeringEntities
	*/
	public Boolean getSelectTriggeringEntities();

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entities this actor is referencing.
	 * 
	 * @return value of model property entityRefs
	*/
	public List<IEntityRef> getEntityRefs();
}
