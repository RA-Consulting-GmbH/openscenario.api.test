package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IOverrideBrakeAction;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IOverrideBrakeAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OverrideBrakeActionRangeCheckerRule  extends RangeCheckerRule<IOverrideBrakeAction>
{

	/**
	 * Default constructor
	 */
	public OverrideBrakeActionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IOverrideBrakeAction object)
	{
		Double value = object.getValue();
		if (value != null)
		{
		 	if (!(value <= 1))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__VALUE, object.getValue().toString(), "<=", "1", OscConstants.ATTRIBUTE__VALUE);
		 		
		 	}
		 	if (!(value >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__VALUE , object.getValue().toString(), ">=", "0", OscConstants.ATTRIBUTE__VALUE);
		 	}
		}
	}	
}
