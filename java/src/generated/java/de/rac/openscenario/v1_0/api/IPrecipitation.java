package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines a precipitation by type and value of a weather.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPrecipitation extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Type of the precipitation.
	 * 
	 * @return value of model property precipitationType
	*/
	public PrecipitationType getPrecipitationType();

	/**
	 * From OpenSCENARIO class model specification:
	 * The intensity of the precipitation. Range: [0..1].
	 * 
	 * @return value of model property intensity
	*/
	public Double getIntensity();
}
