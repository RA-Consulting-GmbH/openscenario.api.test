package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A container for Events. Can be stored in a maneuver catalog. Allows declaration of parameters within its scope.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IManeuver extends IOpenScenarioModelElement,IStoryboardElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * List of events that are comprised by the maneuver.
	 * 
	 * @return value of model property events
	*/
	public List<IEvent> getEvents();
}
