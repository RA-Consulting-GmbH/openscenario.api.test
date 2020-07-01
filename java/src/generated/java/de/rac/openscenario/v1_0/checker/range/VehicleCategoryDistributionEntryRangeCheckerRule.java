package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.IVehicleCategoryDistributionEntry;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IVehicleCategoryDistributionEntry according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class VehicleCategoryDistributionEntryRangeCheckerRule  extends RangeCheckerRule<IVehicleCategoryDistributionEntry>
{

	/**
	 * Default constructor
	 */
	public VehicleCategoryDistributionEntryRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IVehicleCategoryDistributionEntry object)
	{
		Double weight = object.getWeight();
		if (weight != null)
		{
		 	if (!(weight >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__WEIGHT , object.getWeight().toString(), ">=", "0", OscConstants.ATTRIBUTE__WEIGHT);
		 	}
		}
	}	
}
