package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ILaneOffsetActionDynamics;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILaneOffsetActionDynamics according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneOffsetActionDynamicsRangeCheckerRule  extends RangeCheckerRule<ILaneOffsetActionDynamics>
{

	/**
	 * Default constructor
	 */
	public LaneOffsetActionDynamicsRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ILaneOffsetActionDynamics object)
	{
		Double maxLateralAcc = object.getMaxLateralAcc();
		if (maxLateralAcc != null)
		{
		 	if (!(maxLateralAcc >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_LATERAL_ACC , object.getMaxLateralAcc().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_LATERAL_ACC);
		 	}
		}
	}	
}
