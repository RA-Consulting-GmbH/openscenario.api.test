package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Represents the weight of a given vehicle category within a traffic definition. The relative probability for the
 * occurence of this category is defined by the weight devided by the sum of all weights of this distribution.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IVehicleCategoryDistributionEntry extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The category of the vehicles that appear in traffic.
	 * 
	 * @return value of model property category
	*/
	public VehicleCategory getCategory();

	/**
	 * From OpenSCENARIO class model specification:
	 * The weight of a vehicle category within a traffic distribution. Range: [0..inf[.
	 * 
	 * @return value of model property weight
	*/
	public Double getWeight();
}
