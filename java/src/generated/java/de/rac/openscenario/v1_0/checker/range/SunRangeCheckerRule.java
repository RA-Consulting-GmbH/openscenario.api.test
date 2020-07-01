package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ISun;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ISun according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SunRangeCheckerRule  extends RangeCheckerRule<ISun>
{

	/**
	 * Default constructor
	 */
	public SunRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ISun object)
	{
		Double intensity = object.getIntensity();
		if (intensity != null)
		{
		 	if (!(intensity >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__INTENSITY , object.getIntensity().toString(), ">=", "0", OscConstants.ATTRIBUTE__INTENSITY);
		 	}
		}
		Double azimuth = object.getAzimuth();
		if (azimuth != null)
		{
		 	if (!(azimuth <= (2* java.lang.Math.PI)))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__AZIMUTH, object.getAzimuth().toString(), "<=", "2PI", OscConstants.ATTRIBUTE__AZIMUTH);
		 		
		 	}
		 	if (!(azimuth >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__AZIMUTH , object.getAzimuth().toString(), ">=", "0", OscConstants.ATTRIBUTE__AZIMUTH);
		 	}
		}
		Double elevation = object.getElevation();
		if (elevation != null)
		{
		 	if (!(elevation <= java.lang.Math.PI))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__ELEVATION, object.getElevation().toString(), "<=", "PI", OscConstants.ATTRIBUTE__ELEVATION);
		 		
		 	}
		 	if (!(elevation >= (- java.lang.Math.PI)))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__ELEVATION , object.getElevation().toString(), ">=", "-PI", OscConstants.ATTRIBUTE__ELEVATION);
		 	}
		}
	}	
}
