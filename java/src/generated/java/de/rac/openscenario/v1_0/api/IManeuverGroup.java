package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping element connecting a set of actors to a set maneuvers. Multiple maneuver groups can run independently in
 * parallel. Maneuvers can be defined or instantiated from a maneuver type in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IManeuverGroup extends IOpenScenarioModelElement,IStoryboardElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Number of allowed executions of the maneuver group. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/
	public Long getMaximumExecutionCount();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver group.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Actors of the maneuver group.
	 * 
	 * @return value of model property actors
	*/
	public IActors getActors();

	/**
	 * From OpenSCENARIO class model specification:
	 * Each element of this list of must reference a maneuver type in a catalog.
	 * 
	 * @return value of model property catalogReferences
	*/
	public List<ICatalogReference> getCatalogReferences();

	/**
	 * From OpenSCENARIO class model specification:
	 * Maneuver type definitions.
	 * 
	 * @return value of model property maneuvers
	*/
	public List<IManeuver> getManeuvers();
}
