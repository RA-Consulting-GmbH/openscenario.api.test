package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Action that toggles (on or off) an entity's visibility attributes, with respect to sensors, other traffic or the
 * graphics engine.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IVisibilityAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in image generator(s). False: actor is not visible in image generator(s).
	 * 
	 * @return value of model property graphics
	*/
	public Boolean getGraphics();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible for other traffic participants, particularly for autonomous driver models. False: actor is not
	 * visible for other traffic participants.
	 * 
	 * @return value of model property traffic
	*/
	public Boolean getTraffic();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in sensor(s). False: actor is not visible in sensor(s).
	 * 
	 * @return value of model property sensors
	*/
	public Boolean getSensors();
}
