package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IPositionInLaneCoordinates;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IPositionInLaneCoordinates according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PositionInLaneCoordinatesRangeCheckerRule  extends RangeCheckerRule<IPositionInLaneCoordinates>
{

	/**
	 * Default constructor
	 */
	public PositionInLaneCoordinatesRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IPositionInLaneCoordinates object)
	{
		Double pathS = object.getPathS();
		if (pathS != null)
		{
		 	if (!(pathS >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__PATH_S , object.getPathS().toString(), ">=", "0", OscConstants.ATTRIBUTE__PATH_S);
		 	}
		}
	}	
}
