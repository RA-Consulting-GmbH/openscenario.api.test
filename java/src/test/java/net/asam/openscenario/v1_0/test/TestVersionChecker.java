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
import net.asam.openscenario.v1_0.checker.VersionCheckerRule;
import net.asam.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;
import net.asam.openscenario.v1_0.checker.range.RangeCheckerHelper;

public class TestVersionChecker extends TestBase {


	private void applyCheckerRules( IOpenScenario openScenario, int majorRev, int minorRev)
	{
		ScenarioCheckerImpl scenarioChecker = new ScenarioCheckerImpl();
		scenarioChecker.addFileHeaderCheckerRule(new VersionCheckerRule(majorRev, minorRev));
		scenarioChecker.checkScenario(messageLogger, openScenario);
	}

	@Test
	public void testSuccess() {
		try {
			String filename = getResourceFile( "DoubleLaneChanger.xosc").getAbsolutePath();
			IOpenScenario openScenario=executeParsing(filename);
			applyCheckerRules(openScenario, 0,9);
			List<FileContentMessage> messages = new ArrayList<FileContentMessage>();
			Assertions.assertTrue(assertMessages(messages, ErrorLevel.WARNING, messageLogger));
			applyCheckerRules(openScenario, 1,0);
            messages.add(new FileContentMessage(
			    "Major revision and minor revision are expected to be 1 and 0",
					ErrorLevel.WARNING, new Textmarker(5, 2, filename)));

			Assertions.assertTrue(assertMessages(messages, ErrorLevel.WARNING, messageLogger));

		} catch (ScenarioLoaderException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	

	
}
