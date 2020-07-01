package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A distribution for vehicle in traffic. Category of vehicles and their weight (measure of relative likelihood, check
 * VehicleCategoryDistributionEntry).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IVehicleCategoryDistribution extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * List of elements that pair vehicle categories and their weight within the distribution.
	 * 
	 * @return value of model property vehicleCategoryDistributionEntries
	*/
	public List<IVehicleCategoryDistributionEntry> getVehicleCategoryDistributionEntries();
}
