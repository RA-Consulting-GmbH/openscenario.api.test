package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A set of the axles of a vehicle. A vehicle must have a front axle and a rear axle. It might have additional axles.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAxles extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Front axle.
	 * 
	 * @return value of model property frontAxle
	*/
	public IAxle getFrontAxle();

	/**
	 * From OpenSCENARIO class model specification:
	 * Rear axle.
	 * 
	 * @return value of model property rearAxle
	*/
	public IAxle getRearAxle();

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of optional additional axles.
	 * 
	 * @return value of model property additionalAxles
	*/
	public List<IAxle> getAdditionalAxles();
}
