package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IControllerDistributionEntry;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IControllerDistributionEntry according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControllerDistributionEntryRangeCheckerRule  extends RangeCheckerRule<IControllerDistributionEntry>
{

	/**
	 * Default constructor
	 */
	public ControllerDistributionEntryRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IControllerDistributionEntry object)
	{
		Double weight = object.getWeight();
		if (weight != null)
		{
		 	if (!(weight > 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__WEIGHT , object.getWeight().toString(), ">", "0", OscConstants.ATTRIBUTE__WEIGHT);
		 	}
		}
	}	
}
