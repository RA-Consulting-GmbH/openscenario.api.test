package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IReachPositionCondition;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IReachPositionCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ReachPositionConditionRangeCheckerRule  extends RangeCheckerRule<IReachPositionCondition>
{

	/**
	 * Default constructor
	 */
	public ReachPositionConditionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IReachPositionCondition object)
	{
		Double tolerance = object.getTolerance();
		if (tolerance != null)
		{
		 	if (!(tolerance >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__TOLERANCE , object.getTolerance().toString(), ">=", "0", OscConstants.ATTRIBUTE__TOLERANCE);
		 	}
		}
	}	
}
