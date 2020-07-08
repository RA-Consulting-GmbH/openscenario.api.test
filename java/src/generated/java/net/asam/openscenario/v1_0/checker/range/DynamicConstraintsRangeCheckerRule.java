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
package net.asam.openscenario.v1_0.checker.range;


import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.api.IDynamicConstraints;
import net.asam.openscenario.checker.RangeCheckerRule;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IDynamicConstraints according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class DynamicConstraintsRangeCheckerRule  extends RangeCheckerRule<IDynamicConstraints>
{

	/**
	 * Default constructor
	 */
	public DynamicConstraintsRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IDynamicConstraints object)
	{
		Double maxAcceleration = object.getMaxAcceleration();
		if (maxAcceleration != null)
		{
		 	if (!(maxAcceleration >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_ACCELERATION , object.getMaxAcceleration().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_ACCELERATION);
		 	}
		}
		Double maxDeceleration = object.getMaxDeceleration();
		if (maxDeceleration != null)
		{
		 	if (!(maxDeceleration >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_DECELERATION , object.getMaxDeceleration().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_DECELERATION);
		 	}
		}
		Double maxSpeed = object.getMaxSpeed();
		if (maxSpeed != null)
		{
		 	if (!(maxSpeed >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_SPEED , object.getMaxSpeed().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_SPEED);
		 	}
		}
	}	
}
