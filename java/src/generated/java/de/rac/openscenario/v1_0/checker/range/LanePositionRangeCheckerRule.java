package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ILanePosition;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ILanePosition according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LanePositionRangeCheckerRule  extends RangeCheckerRule<ILanePosition>
{

	/**
	 * Default constructor
	 */
	public LanePositionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ILanePosition object)
	{
		Double s = object.getS();
		if (s != null)
		{
		 	if (!(s >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__S , object.getS().toString(), ">=", "0", OscConstants.ATTRIBUTE__S);
		 	}
		}
	}	
}
