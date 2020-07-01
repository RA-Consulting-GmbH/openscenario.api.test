package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the environment conditions of a scenario, e.g. time of day, weather and road condition.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEnvironment extends IOpenScenarioModelElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the environment. If used in catalog name is required.
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
	 * Time of the day during the simulation.
	 * 
	 * @return value of model property timeOfDay
	*/
	public ITimeOfDay getTimeOfDay();

	/**
	 * From OpenSCENARIO class model specification:
	 * Weather conditions during the simulation.
	 * 
	 * @return value of model property weather
	*/
	public IWeather getWeather();

	/**
	 * From OpenSCENARIO class model specification:
	 * Road conditions during the simulation.
	 * 
	 * @return value of model property roadCondition
	*/
	public IRoadCondition getRoadCondition();
}
