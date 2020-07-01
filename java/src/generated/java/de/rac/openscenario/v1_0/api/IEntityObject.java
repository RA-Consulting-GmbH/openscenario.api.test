package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * A vehicle type, pedestrian type or miscellaneous object type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEntityObject extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to a catalog entry of type MiscObject, Vehicle or Pedestrian.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();

	/**
	 * From OpenSCENARIO class model specification:
	 * Vehicle definition.
	 * 
	 * @return value of model property vehicle
	*/
	public IVehicle getVehicle();

	/**
	 * From OpenSCENARIO class model specification:
	 * Pedestrian definition.
	 * 
	 * @return value of model property pedestrian
	*/
	public IPedestrian getPedestrian();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of a MiscObject.
	 * 
	 * @return value of model property miscObject
	*/
	public IMiscObject getMiscObject();
}
