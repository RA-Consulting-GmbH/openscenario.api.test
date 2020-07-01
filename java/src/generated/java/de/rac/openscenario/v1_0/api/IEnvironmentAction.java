package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Setting weather state, road conditions, and time of the day. An environment can be defined or an environment type from a
 * catalog can be used to instantiate an environment.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEnvironmentAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * New environment definition.
	 * 
	 * @return value of model property environment
	*/
	public IEnvironment getEnvironment();

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to a catalog entry of type Environment.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();
}
