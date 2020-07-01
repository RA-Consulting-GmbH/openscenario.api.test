package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ITrafficSignalController;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSignalController according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalControllerRangeCheckerRule  extends RangeCheckerRule<ITrafficSignalController>
{

	/**
	 * Default constructor
	 */
	public TrafficSignalControllerRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITrafficSignalController object)
	{
		Double delay = object.getDelay();
		if (delay != null)
		{
		 	if (!(delay >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__DELAY , object.getDelay().toString(), ">=", "0", OscConstants.ATTRIBUTE__DELAY);
		 	}
		}
	}	
}
