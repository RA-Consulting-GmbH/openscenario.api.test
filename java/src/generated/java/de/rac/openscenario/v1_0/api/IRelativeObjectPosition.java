package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a position derived from coordinates (dx, dy and dz) relative to a reference entity. The coordinate system for
 * the relative coordinates is the reference entity's coordinate system (taking the orientation of the entity into
 * account).
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeObjectPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the x axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dx
	*/
	public Double getDx();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the y axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dy
	*/
	public Double getDy();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative position in the z axis, using the coordinate system of the reference entity.
	 * 
	 * @return value of model property dz
	*/
	public Double getDz();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();
}
