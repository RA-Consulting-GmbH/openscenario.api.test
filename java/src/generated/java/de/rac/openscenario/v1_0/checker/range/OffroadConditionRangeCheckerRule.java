package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IOffroadCondition;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOffroadCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OffroadConditionRangeCheckerRule  extends RangeCheckerRule<IOffroadCondition>
{

	/**
	 * Default constructor
	 */
	public OffroadConditionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IOffroadCondition object)
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
