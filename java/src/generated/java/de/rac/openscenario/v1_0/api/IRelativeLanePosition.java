package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position derived from relative lane coordinates (dLane, ds and offset) to a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeLanePosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative dlane to the lane of the reference entity.
	 * 
	 * @return value of model property dLane
	*/
	public Integer getDLane();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative ds to the s of reference entity.
	 * 
	 * @return value of model property ds
	*/
	public Double getDs();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral offset to the taqrget lane. Unit: m; Range: ]-inf..inf[
	 * 
	 * @return value of model property offset
	*/
	public Double getOffset();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced lane's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();
}
