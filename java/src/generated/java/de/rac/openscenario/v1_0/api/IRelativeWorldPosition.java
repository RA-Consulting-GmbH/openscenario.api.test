package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position defined in terms of delta x, y, (z) relative to a reference entity's position. Optionally, an orientation can
 * be defined in either absolute or relative values.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeWorldPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity from which the relative world position is measured.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative x coordinate in the world coordinate system.
	 * 
	 * @return value of model property dx
	*/
	public Double getDx();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative y coordinate in the world coordinate system.
	 * 
	 * @return value of model property dy
	*/
	public Double getDy();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative z coordinate in the world coordinate system.
	 * 
	 * @return value of model property dz
	*/
	public Double getDz();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the reference entity's orientation.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();
}
