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

import java.io.File;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import org.junit.jupiter.api.BeforeEach;

import de.rac.openscenario.api.IOpenScenarioModelElement;
import de.rac.openscenario.common.ErrorLevel;
import de.rac.openscenario.common.FileContentMessage;
import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.loader.FileResourceLocator;
import de.rac.openscenario.loader.IScenarioLoader;
import de.rac.openscenario.loader.IScenarioLoaderFactory;
import de.rac.openscenario.loader.ScenarioLoaderException;
import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.impl.OpenScenarioImpl;
import de.rac.openscenario.v1_0.loader.XmlScenarioImportLoaderFactory;
import de.rac.openscenario.v1_0.loader.XmlScenarioLoaderFactory;

public class TestBase {

	protected MessageLogger messageLogger = new MessageLogger();
	//protected static String inputDir = "./src/test/Resources/";


	public OpenScenarioImpl executeParsing(String filename)
			throws ScenarioLoaderException {
		IScenarioLoaderFactory loaderFactory = new XmlScenarioLoaderFactory(
				filename);

		IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
		
		IOpenScenarioModelElement load = loader.load(messageLogger);
        return load != null?(OpenScenarioImpl) load.getAdapter(OpenScenarioImpl.class):null;

	}
	
	public OpenScenarioImpl executeImportParsing(String filename, IParserMessageLogger catalogMessageLogger)
			throws ScenarioLoaderException {
		
		IScenarioLoaderFactory loaderFactory = new XmlScenarioImportLoaderFactory(
				catalogMessageLogger,filename);

		IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
		return (OpenScenarioImpl) loader.load(messageLogger).getAdapter(OpenScenarioImpl.class);

	}

	@BeforeEach
	public void clearMessageLogger() {
		messageLogger.clear();
	}
	protected boolean hasErrors(MessageLogger messageLogger) {
		for (FileContentMessage message : messageLogger.getMessages()) {
			if (message.getErrorLevel() == ErrorLevel.ERROR
					|| message.getErrorLevel() == ErrorLevel.FATAL) {
				return true;
			}
		}
		return false;
	}

	protected File getResourceFile(String resourceName)
	{
	  ClassLoader classLoader = getClass().getClassLoader();
	  return new File(classLoader.getResource(resourceName).getFile());
	}
	
	protected boolean assertMessages(List<FileContentMessage> messages,
			ErrorLevel errorLevel, MessageLogger logger) {
		List<FileContentMessage> filterByErrorLevelMessages = filterByErrorLevel(
				messages, errorLevel);
		List<FileContentMessage> filterByErrorLevelLogger = filterByErrorLevel(
				logger.getMessages(), errorLevel);
		return filterByErrorLevelMessages.equals(filterByErrorLevelLogger)
				&& filterByErrorLevelMessages.size() == filterByErrorLevelLogger
						.size();

	}

	protected List<FileContentMessage> filterByErrorLevel(
			List<FileContentMessage> messages, ErrorLevel errorLevel) {
		List<FileContentMessage> result = new ArrayList<FileContentMessage>();
		for (FileContentMessage message : messages) {
			if (errorLevel == message.getErrorLevel()) {
				result.add(message);
			}
		}
		Collections.sort(result);
		return result;
	}


}
