package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines whether time information present in trajectories should be considered. If considered, it may be used as either
 * absolute or relative time values. Moreover, a time offset or time scaling may be applied.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITimeReference extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * This property indicates Timing information is neglected.
	 * 
	 * @return value of model property none
	*/
	public INone getNone();

	/**
	 * From OpenSCENARIO class model specification:
	 * This property indicates timing information is taken into account. Its underlying properties allow specification of the
	 * time domain (absolute or relative), time scaling and a global time offset.
	 * 
	 * @return value of model property timing
	*/
	public ITiming getTiming();
}
