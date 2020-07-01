package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IFog;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IFog according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class FogRangeCheckerRule  extends RangeCheckerRule<IFog>
{

	/**
	 * Default constructor
	 */
	public FogRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IFog object)
	{
		Double visualRange = object.getVisualRange();
		if (visualRange != null)
		{
		 	if (!(visualRange >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__VISUAL_RANGE , object.getVisualRange().toString(), ">=", "0", OscConstants.ATTRIBUTE__VISUAL_RANGE);
		 	}
		}
	}	
}
