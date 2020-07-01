package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IPrecipitation;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPrecipitation according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PrecipitationRangeCheckerRule  extends RangeCheckerRule<IPrecipitation>
{

	/**
	 * Default constructor
	 */
	public PrecipitationRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IPrecipitation object)
	{
		Double intensity = object.getIntensity();
		if (intensity != null)
		{
		 	if (!(intensity <= 1))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__INTENSITY, object.getIntensity().toString(), "<=", "1", OscConstants.ATTRIBUTE__INTENSITY);
		 		
		 	}
		 	if (!(intensity >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__INTENSITY , object.getIntensity().toString(), ">=", "0", OscConstants.ATTRIBUTE__INTENSITY);
		 	}
		}
	}	
}
