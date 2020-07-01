package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ITiming;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITiming according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimingRangeCheckerRule  extends RangeCheckerRule<ITiming>
{

	/**
	 * Default constructor
	 */
	public TimingRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITiming object)
	{
		Double scale = object.getScale();
		if (scale != null)
		{
		 	if (!(scale > 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__SCALE , object.getScale().toString(), ">", "0", OscConstants.ATTRIBUTE__SCALE);
		 	}
		}
	}	
}
