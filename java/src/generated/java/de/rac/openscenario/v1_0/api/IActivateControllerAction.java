package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on the given entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IActivateControllerAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * In lateral domain: Activate or deactivate controller defined (e.g. automated, autonomous) behavior.
	 * 
	 * @return value of model property lateral
	*/
	public Boolean getLateral();

	/**
	 * From OpenSCENARIO class model specification:
	 * In longitudinal domain: Activate or deactivate autonomous behavior.
	 * 
	 * @return value of model property longitudinal
	*/
	public Boolean getLongitudinal();
}
