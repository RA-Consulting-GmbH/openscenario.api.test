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
import de.rac.openscenario.v1_0.api.ITiming;
import de.rac.openscenario.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type ITiming according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimingRangeCheckerRule  extends RangeCheckerRule<ITiming>
{

	/**
	 * Default constructor
	 */
	public TimingRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, ITiming object)
	{
		Double scale = object.getScale();
		if (scale != null)
		{
		 	if (!(scale > 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__SCALE , object.getScale().toString(), ">", "0", OscConstants.ATTRIBUTE__SCALE);
		 	}
		}
	}	
}
