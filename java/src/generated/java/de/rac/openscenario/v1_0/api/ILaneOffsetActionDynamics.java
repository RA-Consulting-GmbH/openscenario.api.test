package de.rac.openscenario.v1_0.api;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines shape, duration and lateral acceleration which are used to do the lane offset action.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILaneOffsetActionDynamics extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum lateral acceleration used to initially reach and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.
	 * 
	 * @return value of model property maxLateralAcc
	*/
	public Double getMaxLateralAcc();

	/**
	 * From OpenSCENARIO class model specification:
	 * Geometrical shape of the LaneOffsetAction's dynamics.
	 * 
	 * @return value of model property dynamicsShape
	*/
	public DynamicsShape getDynamicsShape();
}
