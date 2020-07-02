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


import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.api.ITrafficSwarmAction;
import de.rac.openscenario.v1_0.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITrafficSwarmAction according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSwarmActionRangeCheckerRule  extends RangeCheckerRule<ITrafficSwarmAction>
{

	/**
	 * Default constructor
	 */
	public TrafficSwarmActionRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITrafficSwarmAction object)
	{
		Double semiMajorAxis = object.getSemiMajorAxis();
		if (semiMajorAxis != null)
		{
		 	if (!(semiMajorAxis >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS , object.getSemiMajorAxis().toString(), ">=", "0", OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS);
		 	}
		}
		Double semiMinorAxis = object.getSemiMinorAxis();
		if (semiMinorAxis != null)
		{
		 	if (!(semiMinorAxis >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS , object.getSemiMinorAxis().toString(), ">=", "0", OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS);
		 	}
		}
		Double innerRadius = object.getInnerRadius();
		if (innerRadius != null)
		{
		 	if (!(innerRadius >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__INNER_RADIUS , object.getInnerRadius().toString(), ">=", "0", OscConstants.ATTRIBUTE__INNER_RADIUS);
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
