package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a distribution which controller should be used in a traffic.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IControllerDistribution extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The weights of controllers of a specific type in a traffic.
	 * 
	 * @return value of model property controllerDistributionEntries
	*/
	public List<IControllerDistributionEntry> getControllerDistributionEntries();
}
