package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specification of sun properties.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISun extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Illuminance of the sun, direct sunlight is around 100,00 lx. Unit: lux; Range: [0..inf[.
	 * 
	 * @return value of model property intensity
	*/
	public Double getIntensity();

	/**
	 * From OpenSCENARIO class model specification:
	 * Azimuth of the sun, counted counterclockwise, 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: radian; Range:
	 * [0..2PI].
	 * 
	 * @return value of model property azimuth
	*/
	public Double getAzimuth();

	/**
	 * From OpenSCENARIO class model specification:
	 * Solar elevation angle, 0=x/y plane, PI/2=zenith. Unit: rad; Range: [-PI..PI].
	 * 
	 * @return value of model property elevation
	*/
	public Double getElevation();
}
