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
import de.rac.openscenario.v1_0.api.IDimensions;
import de.rac.openscenario.checker.RangeCheckerRule;
import de.rac.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * A range checker rule class for the type IDimensions according to OpenSCENARIO standard
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class DimensionsRangeCheckerRule  extends RangeCheckerRule<IDimensions>
{

	/**
	 * Default constructor
	 */
	public DimensionsRangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRule(IParserMessageLogger messageLogger, IDimensions object)
	{
		Double width = object.getWidth();
		if (width != null)
		{
		 	if (!(width >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__WIDTH , object.getWidth().toString(), ">=", "0", OscConstants.ATTRIBUTE__WIDTH);
		 	}
		}
		Double length = object.getLength();
		if (length != null)
		{
		 	if (!(length >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__LENGTH , object.getLength().toString(), ">=", "0", OscConstants.ATTRIBUTE__LENGTH);
		 	}
		}
		Double height = object.getHeight();
		if (height != null)
		{
		 	if (!(height >= 0))
		 	{
		 		logMessage(object,  messageLogger,  OscConstants.ATTRIBUTE__HEIGHT , object.getHeight().toString(), ">=", "0", OscConstants.ATTRIBUTE__HEIGHT);
		 	}
		}
	}	
}
