/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package de.rac.openscenario.v1_0.checker.range;


import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ITrafficSourceAction;
import de.rac.openscenario.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSourceAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSourceActionRangeCheckerRule  extends RangeCheckerRule<ITrafficSourceAction>
{

	/**
	 * Default constructor
	 */
	public TrafficSourceActionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITrafficSourceAction object)
	{
		Double rate = object.getRate();
		if (rate != null)
		{
		 	if (!(rate >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__RATE , object.getRate().toString(), ">=", "0", OscConstants.ATTRIBUTE__RATE);
		 	}
		}
		Double radius = object.getRadius();
		if (radius != null)
		{
		 	if (!(radius >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__RADIUS , object.getRadius().toString(), ">=", "0", OscConstants.ATTRIBUTE__RADIUS);
		 	}
		}
		Double velocity = object.getVelocity();
		if (velocity != null)
		{
		 	if (!(velocity >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__VELOCITY , object.getVelocity().toString(), ">=", "0", OscConstants.ATTRIBUTE__VELOCITY);
		 	}
		}
	}	
}
