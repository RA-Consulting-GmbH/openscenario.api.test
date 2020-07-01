package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ILongitudinalDistanceAction;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LongitudinalDistanceActionRangeCheckerRule  extends RangeCheckerRule<ILongitudinalDistanceAction>
{

	/**
	 * Default constructor
	 */
	public LongitudinalDistanceActionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ILongitudinalDistanceAction object)
	{
		Double distance = object.getDistance();
		if (distance != null)
		{
		 	if (!(distance >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__DISTANCE , object.getDistance().toString(), ">=", "0", OscConstants.ATTRIBUTE__DISTANCE);
		 	}
		}
		Double timeGap = object.getTimeGap();
		if (timeGap != null)
		{
		 	if (!(timeGap >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__TIME_GAP , object.getTimeGap().toString(), ">=", "0", OscConstants.ATTRIBUTE__TIME_GAP);
		 	}
		}
	}	
}
