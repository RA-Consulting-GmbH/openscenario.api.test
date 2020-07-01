package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IEndOfRoadCondition;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IEndOfRoadCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EndOfRoadConditionRangeCheckerRule  extends RangeCheckerRule<IEndOfRoadCondition>
{

	/**
	 * Default constructor
	 */
	public EndOfRoadConditionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IEndOfRoadCondition object)
	{
		Double duration = object.getDuration();
		if (duration != null)
		{
		 	if (!(duration >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__DURATION , object.getDuration().toString(), ">=", "0", OscConstants.ATTRIBUTE__DURATION);
		 	}
		}
	}	
}
