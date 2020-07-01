package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.INurbs;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type INurbs according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class NurbsRangeCheckerRule  extends RangeCheckerRule<INurbs>
{

	/**
	 * Default constructor
	 */
	public NurbsRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, INurbs object)
	{
		Long order = object.getOrder();
		if (order != null)
		{
		 	if (!(order >= 2))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__ORDER , object.getOrder().toString(), ">=", "2", OscConstants.ATTRIBUTE__ORDER);
		 	}
		}
	}	
}
