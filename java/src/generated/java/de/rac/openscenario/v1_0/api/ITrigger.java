package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A trigger is then defined as an association of condition groups. A trigger evaluates to true if at least one of the
 * associated condition groups evaluates to true, otherwise it evaluates to false (OR operation).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrigger extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * List of condition groups as a container of conditions.
	 * 
	 * @return value of model property conditionGroups
	*/
	public List<IConditionGroup> getConditionGroups();
}
