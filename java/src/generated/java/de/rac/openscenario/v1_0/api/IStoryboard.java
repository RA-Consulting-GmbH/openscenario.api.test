package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Top container for the dynamic content of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IStoryboard extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Initialization of the storyboard instance. Initial conditions are set and initial actions are applied to entities.
	 * 
	 * @return value of model property init
	*/
	public IInit getInit();

	/**
	 * From OpenSCENARIO class model specification:
	 * List of stories defined in a story board.
	 * 
	 * @return value of model property stories
	*/
	public List<IStory> getStories();

	/**
	 * From OpenSCENARIO class model specification:
	 * Trigger to stop the Storyboard instance.
	 * 
	 * @return value of model property stopTrigger
	*/
	public ITrigger getStopTrigger();
}
