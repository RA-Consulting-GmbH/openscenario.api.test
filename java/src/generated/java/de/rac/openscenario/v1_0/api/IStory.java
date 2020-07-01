package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping of independent executable parts of a scenario. The name of a story must be unique within an OpenSCENARIO file.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IStory extends IOpenScenarioModelElement,IStoryboardElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the story, must be unique within an OpenSCENARIO file.
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
	 * Defines the acts of the story.
	 * 
	 * @return value of model property acts
	*/
	public List<IAct> getActs();
}
