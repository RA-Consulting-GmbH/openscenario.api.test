package de.rac.openscenario.v1_0.api;

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Unambiguous reference to an entity represented as its name.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEntityRef extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();
}
