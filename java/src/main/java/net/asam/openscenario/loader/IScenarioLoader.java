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
 
package net.asam.openscenario.loader;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.IParserMessageLogger;

/**
 * Abstracts the source the open scenario file is loaded from. t could be a file 
 * system or a database.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IScenarioLoader {
	/**
	 * Loads a scenario.
	 * @param messageLogger to log the messaes during loading.
	 * @return the IOpenScensrio root object of a scenario. it may be inconsistent when errors occured.
	 * @throws ScenarioLoaderException An Exception when the loader stops with a fatal error.
	 */
	public IOpenScenarioModelElement load(IParserMessageLogger messageLogger) throws ScenarioLoaderException;
}
