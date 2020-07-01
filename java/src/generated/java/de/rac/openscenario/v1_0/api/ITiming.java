package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Adjust the timing within time references by scale and offset.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITiming extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of time value context as either absolute or relative.
	 * 
	 * @return value of model property domainAbsoluteRelative
	*/
	public ReferenceContext getDomainAbsoluteRelative();

	/**
	 * From OpenSCENARIO class model specification:
	 * Scaling factor for time values. While values smaller than 1.0 represent negative scaling, values larger than 1.0 will
	 * result in positive scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
	 * 
	 * @return value of model property scale
	*/
	public Double getScale();

	/**
	 * From OpenSCENARIO class model specification:
	 * Introduction of a global offset for all time values. Unit: s; Range: ]-inf..inf[.
	 * 
	 * @return value of model property offset
	*/
	public Double getOffset();
}
