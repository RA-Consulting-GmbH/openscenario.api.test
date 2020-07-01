package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ICondition;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ICondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ConditionRangeCheckerRule  extends RangeCheckerRule<ICondition>
{

	/**
	 * Default constructor
	 */
	public ConditionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ICondition object)
	{
		Double delay = object.getDelay();
		if (delay != null)
		{
		 	if (!(delay >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__DELAY , object.getDelay().toString(), ">=", "0", OscConstants.ATTRIBUTE__DELAY);
		 	}
		}
	}	
}
