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
 
package de.rac.openscenario.v1_0.test;

import org.junit.jupiter.api.Test;

import de.rac.openscenario.v1_0.main.OpenScenarioChecker;

public class TestMain extends TestBase {


	public void testImportSuccess() {
		OpenScenarioChecker.main(new String[] { inputDir
				+ "simpleImport/simpleImport.xosc" });

	}
	
	@Test
	public void testWithErrors()
	{
		String filename = inputDir + "DoubleLaneChangerParamsError.xosc";
		OpenScenarioChecker.main(new String[] {filename}
		);
	}
}
