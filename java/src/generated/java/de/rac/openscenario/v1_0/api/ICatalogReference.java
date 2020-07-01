package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A reference to type in a catalog. It is used when importing the type in a scenario. Furthermore, it hands over
 * additional parameter values.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ICatalogReference extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the catalog.
	 * 
	 * @return value of model property catalogName
	*/
	public String getCatalogName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of catalog entry.
	 * 
	 * @return value of model property entryName
	*/
	public String getEntryName();

	/**
	 * From OpenSCENARIO class model specification:
	 * List of parameter assignments for instantiation.
	 * 
	 * @return value of model property parameterAssignments
	*/
	public List<IParameterAssignment> getParameterAssignments();

	/**
	 * From OpenSCENARIO class model specification:
	 * The resolved reference to a catalog element (out of the catalogName and entryName). Transient means, that it is not
	 * mapped to the schema.
	 * 
	 * @return value of model property ref
	*/
	public ICatalogElement getRef();
}
