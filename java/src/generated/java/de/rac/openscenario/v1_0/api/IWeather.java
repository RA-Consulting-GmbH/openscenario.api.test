package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the weather conditions in terms of light, fog, precipitation and cloud states.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IWeather extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the cloud state, i.e. cloud state and sky visualization settings.
	 * 
	 * @return value of model property cloudState
	*/
	public CloudState getCloudState();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the sun, i.e. position and intensity.
	 * 
	 * @return value of model property sun
	*/
	public ISun getSun();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of fog, i.e. visual range and bounding box.
	 * 
	 * @return value of model property fog
	*/
	public IFog getFog();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of precipitation, i.e. type and intensity.
	 * 
	 * @return value of model property precipitation
	*/
	public IPrecipitation getPrecipitation();
}
