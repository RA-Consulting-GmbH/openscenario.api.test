package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a miscellaneous object type. A miscellaneous object has no controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IMiscObject extends IOpenScenarioModelElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Categorization of the miscellaneous object.
	 * 
	 * @return value of model property miscObjectCategory
	*/
	public MiscObjectCategory getMiscObjectCategory();

	/**
	 * From OpenSCENARIO class model specification:
	 * Mass of the miscellaneous object. Unit: kg; Range: [0..inf[.
	 * 
	 * @return value of model property mass
	*/
	public Double getMass();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the miscellaneous object type.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box definition for the miscellaneous object.
	 * 
	 * @return value of model property boundingBox
	*/
	public IBoundingBox getBoundingBox();

	/**
	 * From OpenSCENARIO class model specification:
	 * Property definitions for the miscellaneous object.
	 * 
	 * @return value of model property properties
	*/
	public IProperties getProperties();
}
