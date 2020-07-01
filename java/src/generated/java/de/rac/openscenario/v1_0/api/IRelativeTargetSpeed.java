package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a target speed relative to a reference entity's speed.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeTargetSpeed extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the relative speed. This value is either given as a delta or as a factor. E.g. value=10 together with
	 * valueType=delta means the entity/entities are supposed to drive 10m/s faster than the target reference entity. E.g.
	 * value=1.1 together with valueType=factor means that the entity/entities are supposed to drive 10% faster than the target
	 * reference entity. Unit: m/s or 1.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The value is either a delta (Unit m/s) or a factor (no Unit).
	 * 
	 * @return value of model property speedTargetValueType
	*/
	public SpeedTargetValueType getSpeedTargetValueType();

	/**
	 * From OpenSCENARIO class model specification:
	 * By setting continuous to true a controller comes into place and tries to maintain a continuous relative speed. This may
	 * not be used together with Dynamics.time or Dynamics.distance.
	 * 
	 * @return value of model property continuous
	*/
	public Boolean getContinuous();
}
