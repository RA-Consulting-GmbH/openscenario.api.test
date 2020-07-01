package de.rac.openscenario.v1_0.api;
import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Definition of a pedestrian type in a scenario or in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPedestrian extends IOpenScenarioModelElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the model of the pedestrian.
	 * 
	 * @return value of model property model
	*/
	public String getModel();

	/**
	 * From OpenSCENARIO class model specification:
	 * The mass of a pedestrian in kg.
	 * 
	 * @return value of model property mass
	*/
	public Double getMass();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the pedestrian type. Required when used in catalog.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Category type of pedestrian.
	 * 
	 * @return value of model property pedestrianCategory
	*/
	public PedestrianCategory getPedestrianCategory();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box of the pedestrian.
	 * 
	 * @return value of model property boundingBox
	*/
	public IBoundingBox getBoundingBox();

	/**
	 * From OpenSCENARIO class model specification:
	 * Properties (values/files) of the pedestrian.
	 * 
	 * @return value of model property properties
	*/
	public IProperties getProperties();
}
