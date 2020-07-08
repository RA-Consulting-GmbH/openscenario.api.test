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
 
package net.asam.openscenario.v1_0.test;

import java.util.ArrayList;
import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;
import net.asam.openscenario.v1_0.checker.range.RangeCheckerHelper;

public class TestRangeChecker extends TestBase {


	private void applyCheckerRules( IOpenScenario openScenario)
	{
		ScenarioCheckerImpl scenarioChecker = new ScenarioCheckerImpl();
		RangeCheckerHelper.addAllRangeCheckerRules(scenarioChecker);
		scenarioChecker.checkScenario(messageLogger, openScenario);
	}

	@Test
	public void testParamsFailure() {
		try {
			String filename = getResourceFile( "DoubleLaneChangerCheckerErrors.xosc").getAbsolutePath();
			IOpenScenario openScenario=executeParsing(filename);
			applyCheckerRules(openScenario);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
	

			messages.add(new FileContentMessage(
					"Range error: Rule (maxAcceleration>=0) is violated (value: -2.0)",
					ErrorLevel.ERROR, new Textmarker(44, 57, filename)));
			messages.add(new FileContentMessage(
					"Range error: Rule (maxDeceleration>=0) is violated (value: -10.0)",
					ErrorLevel.ERROR, new Textmarker(44, 20, filename)));
			messages.add(new FileContentMessage(
					"Range error: Rule (maxSteering<=PI) is violated (value: 7.0)",
					ErrorLevel.ERROR, new Textmarker(46, 75, filename)));
			messages.add(new FileContentMessage(
					"Range error: Rule (wheelDiameter>0) is violated (value: -12.0)",
					ErrorLevel.ERROR, new Textmarker(46, 55, filename)));
			messages.add(new FileContentMessage(
					"Range error: Rule (trackWidth>=0) is violated (value: -12.0)",
					ErrorLevel.ERROR, new Textmarker(46, 38, filename)));
			messages.add(new FileContentMessage(
					"Range error: Rule (positionX>=0) is violated (value: -2.0)",
					ErrorLevel.ERROR, new Textmarker(46, 91, filename)));
			messages.add(new FileContentMessage(
					"Range error: Rule (positionZ>=0) is violated (value: -13.0)",
					ErrorLevel.ERROR, new Textmarker(46,22, filename)));
			

			Assertions.assertTrue(assertMessages(messages, ErrorLevel.ERROR, messageLogger));

		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	

	
}
