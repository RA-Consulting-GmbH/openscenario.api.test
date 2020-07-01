package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IAxle;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IAxle according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class AxleRangeCheckerRule  extends RangeCheckerRule<IAxle>
{

	/**
	 * Default constructor
	 */
	public AxleRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IAxle object)
	{
		Double maxSteering = object.getMaxSteering();
		if (maxSteering != null)
		{
		 	if (!(maxSteering <= java.lang.Math.PI))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_STEERING, object.getMaxSteering().toString(), "<=", "PI", OscConstants.ATTRIBUTE__MAX_STEERING);
		 		
		 	}
		 	if (!(maxSteering >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_STEERING , object.getMaxSteering().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_STEERING);
		 	}
		}
		Double wheelDiameter = object.getWheelDiameter();
		if (wheelDiameter != null)
		{
		 	if (!(wheelDiameter > 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__WHEEL_DIAMETER , object.getWheelDiameter().toString(), ">", "0", OscConstants.ATTRIBUTE__WHEEL_DIAMETER);
		 	}
		}
		Double trackWidth = object.getTrackWidth();
		if (trackWidth != null)
		{
		 	if (!(trackWidth >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__TRACK_WIDTH , object.getTrackWidth().toString(), ">=", "0", OscConstants.ATTRIBUTE__TRACK_WIDTH);
		 	}
		}
		Double positionX = object.getPositionX();
		if (positionX != null)
		{
		 	if (!(positionX >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__POSITION_X , object.getPositionX().toString(), ">=", "0", OscConstants.ATTRIBUTE__POSITION_X);
		 	}
		}
		Double positionZ = object.getPositionZ();
		if (positionZ != null)
		{
		 	if (!(positionZ >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__POSITION_Z , object.getPositionZ().toString(), ">=", "0", OscConstants.ATTRIBUTE__POSITION_Z);
		 	}
		}
	}	
}
