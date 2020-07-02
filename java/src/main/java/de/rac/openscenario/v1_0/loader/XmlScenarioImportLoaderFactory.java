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
 
package de.rac.openscenario.v1_0.loader;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;

/**
 * A factory for creating catalog loaders
 * 
 * @author Andreas Hege - RA Consulting
 * 
 */
public class XmlScenarioImportLoaderFactory implements IScenarioLoaderFactory {

	private IParserMessageLogger catalogMessageLogger;

	private String filename;

	/**
	 * Constructor
	 * 
	 * @param catalogMessageLogger
	 *            to log messages
	 * @param filename
	 *            base directory
	 */
	public XmlScenarioImportLoaderFactory(
			IParserMessageLogger catalogMessageLogger, String filename) {
		super();
		this.catalogMessageLogger = catalogMessageLogger;
		this.filename = filename;
	}

	@Override
	public IScenarioLoader createLoader(IResourceLocator resourceLocator) {

		XmlScenarioLoader innerScenarioLoader = new XmlScenarioLoader(filename,
				resourceLocator);
		return new XmlScenarioImportLoader(innerScenarioLoader,
				catalogMessageLogger);
	}

}
