package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Collection of entities that includes entities explicitly by their reference or includes the entities by their type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISelectedEntities extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * References to the selected entities.
	 * 
	 * @return value of model property entityRef
	*/
	public List<IEntityRef> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines the type to determine that all entities of a specific type are members.
	 * 
	 * @return value of model property byType
	*/
	public List<IByType> getByType();
}
