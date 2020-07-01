package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IClothoid;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IClothoid according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ClothoidRangeCheckerRule  extends RangeCheckerRule<IClothoid>
{

	/**
	 * Default constructor
	 */
	public ClothoidRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IClothoid object)
	{
		Double curvatureDot = object.getCurvatureDot();
		if (curvatureDot != null)
		{
		 	if (!(curvatureDot >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__CURVATURE_DOT , object.getCurvatureDot().toString(), ">=", "0", OscConstants.ATTRIBUTE__CURVATURE_DOT);
		 	}
		}
		Double startTime = object.getStartTime();
		if (startTime != null)
		{
		 	if (!(startTime >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__START_TIME , object.getStartTime().toString(), ">=", "0", OscConstants.ATTRIBUTE__START_TIME);
		 	}
		}
		Double stopTime = object.getStopTime();
		if (stopTime != null)
		{
		 	if (!(stopTime > 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__STOP_TIME , object.getStopTime().toString(), ">", "0", OscConstants.ATTRIBUTE__STOP_TIME);
		 	}
		}
	}	
}
