package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IRoadCondition;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IRoadCondition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RoadConditionRangeCheckerRule  extends RangeCheckerRule<IRoadCondition>
{

	/**
	 * Default constructor
	 */
	public RoadConditionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IRoadCondition object)
	{
		Double frictionScaleFactor = object.getFrictionScaleFactor();
		if (frictionScaleFactor != null)
		{
		 	if (!(frictionScaleFactor >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR , object.getFrictionScaleFactor().toString(), ">=", "0", OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR);
		 	}
		}
	}	
}
