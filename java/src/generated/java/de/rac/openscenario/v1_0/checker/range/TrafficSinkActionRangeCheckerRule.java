package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ITrafficSinkAction;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSinkAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSinkActionRangeCheckerRule  extends RangeCheckerRule<ITrafficSinkAction>
{

	/**
	 * Default constructor
	 */
	public TrafficSinkActionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITrafficSinkAction object)
	{
		Double rate = object.getRate();
		if (rate != null)
		{
		 	if (!(rate >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__RATE , object.getRate().toString(), ">=", "0", OscConstants.ATTRIBUTE__RATE);
		 	}
		}
		Double radius = object.getRadius();
		if (radius != null)
		{
		 	if (!(radius >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__RADIUS , object.getRadius().toString(), ">=", "0", OscConstants.ATTRIBUTE__RADIUS);
		 	}
		}
	}	
}
