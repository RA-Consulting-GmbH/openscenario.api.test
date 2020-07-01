package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A condition group is an association of conditions that is assessed during simulation time and signals true when all
 * associated conditions are evaluated to true.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IConditionGroup extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A associated list of conditions.
	 * 
	 * @return value of model property conditions
	*/
	public List<ICondition> getConditions();
}
