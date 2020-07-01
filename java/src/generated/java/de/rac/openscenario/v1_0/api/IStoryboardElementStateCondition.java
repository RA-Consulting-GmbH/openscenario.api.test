package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Considered true if a referenced storyboard element has reached a given runtime state (standbyState, runningState,
 * completeState) or if the referenced storyboard element undergoes a specific transition (startTransition, stopTransition,
 * endTransition, skipTransition) at a discrete time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IStoryboardElementStateCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Type of storyboard element instance.
	 * 
	 * @return value of model property storyboardElementType
	*/
	public StoryboardElementType getStoryboardElementType();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the referenced Storyboard instance.
	 * 
	 * @return value of model property storyboardElementRef
	*/
	public INamedReference<IStoryboardElement> getStoryboardElementRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * The state or the transition of the storyboard element instance for which the condition becomes true.
	 * 
	 * @return value of model property state
	*/
	public StoryboardElementState getState();
}
