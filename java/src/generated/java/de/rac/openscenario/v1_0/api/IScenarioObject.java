package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A scenario object represents a runtime object that is created from an EntityObject (vehicle type, pedestrian type,
 * miscellaneous object type) and a Controller. Miscellaneous objects must not have a controller.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IScenarioObject extends IOpenScenarioModelElement,IEntity{

	/**
	 * From OpenSCENARIO class model specification:
	 * Identifier of the scenario object.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * The EntityObject (either instance of type Vehicle, Pedestrian or MiscObject).
	 * 
	 * @return value of model property entityObject
	*/
	public IEntityObject getEntityObject();

	/**
	 * From OpenSCENARIO class model specification:
	 * Controller of the EntityObject instance.
	 * 
	 * @return value of model property objectController
	*/
	public IObjectController getObjectController();
}
