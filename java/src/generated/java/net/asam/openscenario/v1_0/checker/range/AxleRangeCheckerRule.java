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
import net.asam.openscenario.v1_0.api.IAxle;
import net.asam.openscenario.checker.RangeCheckerRule;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IAxle according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class AxleRangeCheckerRule  extends RangeCheckerRule<IAxle>
{

	/**
	 * Default constructor
	 */
	public AxleRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IAxle object)
	{
		Double maxSteering = object.getMaxSteering();
		if (maxSteering != null)
		{
		 	if (!(maxSteering <= java.lang.Math.PI))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_STEERING, object.getMaxSteering().toString(), "<=", "PI", OscConstants.ATTRIBUTE__MAX_STEERING);
		 		
		 	}
		 	if (!(maxSteering >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__MAX_STEERING , object.getMaxSteering().toString(), ">=", "0", OscConstants.ATTRIBUTE__MAX_STEERING);
		 	}
		}
		Double wheelDiameter = object.getWheelDiameter();
		if (wheelDiameter != null)
		{
		 	if (!(wheelDiameter > 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__WHEEL_DIAMETER , object.getWheelDiameter().toString(), ">", "0", OscConstants.ATTRIBUTE__WHEEL_DIAMETER);
		 	}
		}
		Double trackWidth = object.getTrackWidth();
		if (trackWidth != null)
		{
		 	if (!(trackWidth >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__TRACK_WIDTH , object.getTrackWidth().toString(), ">=", "0", OscConstants.ATTRIBUTE__TRACK_WIDTH);
		 	}
		}
		Double positionX = object.getPositionX();
		if (positionX != null)
		{
		 	if (!(positionX >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__POSITION_X , object.getPositionX().toString(), ">=", "0", OscConstants.ATTRIBUTE__POSITION_X);
		 	}
		}
		Double positionZ = object.getPositionZ();
		if (positionZ != null)
		{
		 	if (!(positionZ >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__POSITION_Z , object.getPositionZ().toString(), ">=", "0", OscConstants.ATTRIBUTE__POSITION_Z);
		 	}
		}
	}	
}
