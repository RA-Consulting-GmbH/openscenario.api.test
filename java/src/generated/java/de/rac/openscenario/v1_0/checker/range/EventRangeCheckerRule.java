package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IEvent;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IEvent according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EventRangeCheckerRule  extends RangeCheckerRule<IEvent>
{

	/**
	 * Default constructor
	 */
	public EventRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IEvent object)
	{
		Long maximumExecutionCount = object.getMaximumExecutionCount();
		if (maximumExecutionCount != null)
		{
		 	if (!(maximumExecutionCount >= 1))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT , object.getMaximumExecutionCount().toString(), ">=", "1", OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
		 	}
		}
	}	
}
