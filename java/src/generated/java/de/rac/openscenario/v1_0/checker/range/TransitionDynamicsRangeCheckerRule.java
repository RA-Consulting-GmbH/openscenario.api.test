package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ITransitionDynamics;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITransitionDynamics according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TransitionDynamicsRangeCheckerRule  extends RangeCheckerRule<ITransitionDynamics>
{

	/**
	 * Default constructor
	 */
	public TransitionDynamicsRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITransitionDynamics object)
	{
		Double value = object.getValue();
		if (value != null)
		{
		 	if (!(value >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__VALUE , object.getValue().toString(), ">=", "0", OscConstants.ATTRIBUTE__VALUE);
		 	}
		}
	}	
}
