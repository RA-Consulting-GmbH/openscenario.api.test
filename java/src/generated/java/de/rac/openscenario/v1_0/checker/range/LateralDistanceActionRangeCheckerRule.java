package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ILateralDistanceAction;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILateralDistanceAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LateralDistanceActionRangeCheckerRule  extends RangeCheckerRule<ILateralDistanceAction>
{

	/**
	 * Default constructor
	 */
	public LateralDistanceActionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ILateralDistanceAction object)
	{
		Double distance = object.getDistance();
		if (distance != null)
		{
		 	if (!(distance >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__DISTANCE , object.getDistance().toString(), ">=", "0", OscConstants.ATTRIBUTE__DISTANCE);
		 	}
		}
	}	
}
