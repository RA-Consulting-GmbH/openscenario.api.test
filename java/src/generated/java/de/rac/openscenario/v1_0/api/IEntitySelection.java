package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Grouping of scenario objects by name and/or type. An instance of EntitySelection is considered also an instance of
 * Entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEntitySelection extends IOpenScenarioModelElement,IEntity{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the entity selection. By this name, a selection can be referenced as an entity.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Selected entities as members of the entity selection.
	 * 
	 * @return value of model property members
	*/
	public ISelectedEntities getMembers();
}
