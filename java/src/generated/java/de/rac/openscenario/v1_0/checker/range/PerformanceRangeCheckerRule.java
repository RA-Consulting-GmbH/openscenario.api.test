package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IPerformance;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPerformance according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PerformanceRangeCheckerRule  extends RangeCheckerRule<IPerformance>
{

	/**
	 * Default constructor
	 */
	public PerformanceRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IPerformance object)
	{
		Double maxAcceleration = object.getMaxAcceleration();
		if (maxAcceleration != null)
		{
		 	if (!(maxAcceleration >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_ACCELERATION , object.getMaxAcceleration().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_ACCELERATION);
		 	}
		}
		Double maxDeceleration = object.getMaxDeceleration();
		if (maxDeceleration != null)
		{
		 	if (!(maxDeceleration >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_DECELERATION , object.getMaxDeceleration().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_DECELERATION);
		 	}
		}
	}	
}
