package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of entities (scenario objects or entity selections) in a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEntities extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of scenario object definitions that pairs an entity object and a controller.
	 * 
	 * @return value of model property scenarioObjects
	*/
	public List<IScenarioObject> getScenarioObjects();

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of entity selection definitions.
	 * 
	 * @return value of model property entitySelections
	*/
	public List<IEntitySelection> getEntitySelections();
}
