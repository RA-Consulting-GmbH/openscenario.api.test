package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the day and time.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITimeOfDay extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * If true, the timeofday is animated with progressing simulation time, e.g. in order to animate the position of the sun.
	 * 
	 * @return value of model property animation
	*/
	public Boolean getAnimation();

	/**
	 * From OpenSCENARIO class model specification:
	 * Datetime value.
	 * 
	 * @return value of model property dateTime
	*/
	public java.util.Date getDateTime();
}
