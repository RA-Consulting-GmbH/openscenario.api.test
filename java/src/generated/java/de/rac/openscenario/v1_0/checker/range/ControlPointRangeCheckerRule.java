package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IControlPoint;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IControlPoint according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControlPointRangeCheckerRule  extends RangeCheckerRule<IControlPoint>
{

	/**
	 * Default constructor
	 */
	public ControlPointRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IControlPoint object)
	{
		Double time = object.getTime();
		if (time != null)
		{
		 	if (!(time >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__TIME , object.getTime().toString(), ">=", "0", OscConstants.ATTRIBUTE__TIME);
		 	}
		}
	}	
}
