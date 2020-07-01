package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines an absolute position derived from relative road coordinates delta s [ds] and delta t [dt] to a reference entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeRoadPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative ds road coordinate to s coordinate of the reference entity.
	 * 
	 * @return value of model property ds
	*/
	public Double getDs();

	/**
	 * From OpenSCENARIO class model specification:
	 * Relative dt road coordinate to t coordinate of the reference entity.
	 * 
	 * @return value of model property dt
	*/
	public Double getDt();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();
}
