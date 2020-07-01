package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of macroscopic traffic based on vehicle and controller definitions.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficDefinition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the traffic definition.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Distribution of vehicle categories within the traffic.
	 * 
	 * @return value of model property vehicleCategoryDistribution
	*/
	public IVehicleCategoryDistribution getVehicleCategoryDistribution();

	/**
	 * From OpenSCENARIO class model specification:
	 * Distribution of controllers within this traffic.
	 * 
	 * @return value of model property controllerDistribution
	*/
	public IControllerDistribution getControllerDistribution();
}
