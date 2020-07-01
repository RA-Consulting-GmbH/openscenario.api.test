package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for Actions. Its priority settings determine how to interact with other events within the same scope
 * (maneuver).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEvent extends IOpenScenarioModelElement,IStoryboardElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Priority of each event.
	 * 
	 * @return value of model property priority
	*/
	public Priority getPriority();

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum number of executions. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/
	public Long getMaximumExecutionCount();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the event.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * List of actions in an event.
	 * 
	 * @return value of model property actions
	*/
	public List<IAction> getActions();

	/**
	 * From OpenSCENARIO class model specification:
	 * Actions are executed as soon as the start trigger fires. This point in time represents the start of the event.
	 * 
	 * @return value of model property startTrigger
	*/
	public ITrigger getStartTrigger();
}
