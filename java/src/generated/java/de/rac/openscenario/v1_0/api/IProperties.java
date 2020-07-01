package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for one or more properties. Properties encloses multiple property instances and/or multiple file references.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IProperties extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A name/value pair. The semantic of the name/values are subject of a contract between the provider of a simulation
	 * environment and the author of a scenario.
	 * 
	 * @return value of model property properties
	*/
	public List<IProperty> getProperties();

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of arbitrary files attached to an object that owns the properties. The semantic and the file formats are subject
	 * of a contract between the provider of a simulation environment and the author of a scenario.
	 * 
	 * @return value of model property files
	*/
	public List<IFile> getFiles();
}
