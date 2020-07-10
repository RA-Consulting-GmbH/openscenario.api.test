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
 
package net.asam.openscenario.v1_0.main;

import java.io.IOException;
import java.util.Arrays;
import java.util.Properties;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.main.MessageLogger;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;
import net.asam.openscenario.v1_0.loader.XmlScenarioImportLoaderFactory;


/**
 * Executable class for checking a OpenScenario file.
 * 
 * @author Andreas Hege - RA Consulting *
 * 
 * <ul>
 * <li> Reading the file
 * <li> Resolving the parameters
 * <li> Resolving the catalog references
 * <li> Checking all type ranges that differ from the ones of the default type (e.g. positiv doubles)
 * </ul>
 *
 */
public class OpenScenarioChecker {
	public static boolean isDebug = false;

	public static void main(String[] args) {
	    Properties properties = new Properties();
	    try
        {
          properties.load(OpenScenarioChecker.class.getClassLoader().getResourceAsStream("version.properties"));
        }
        catch (IOException e)
        {
          System.err.println("Internal error Ocuured");
          return;
        }
		
	    String version = properties.getProperty("version");
	    // 1. input file
		// 2. option skip parameter checking -P
		// 3. option skip import -Y
		// 4. option skip range checker rules -R
		// 5. Version -v
		// 8. print import errors
	    String header = "* ASAM OpenSCENARIO 1.0 Checker (2020) *";
	    String headerFillString = getFilledString(header.length(),'*');
	    
		System.out.println(headerFillString);
		System.out.println(header);
		System.out.println(headerFillString);
		if (args == null || args.length == 0) {
			System.out.println("OpenScenarioChecker [option]");
			System.out.println("Options:");
			System.out.println("[input]\tinput file name");
			System.out.println("-v\tprogram version");
			return;
		}
		if (args[0].equals("-v")) {
			System.out.println("Program version " + version);
			return;
		}
		
		System.out.println("Checking '"+args[0]+"'");
		MessageLogger catalogMessageLogger = new MessageLogger();
		MessageLogger messageLogger = new MessageLogger();

		try {
			executeImportParsing(args[0], messageLogger, catalogMessageLogger);

			System.out.println("Errors and Warnings");
			System.out.println("===================");
			for (FileContentMessage message : messageLogger.getMessages()) {
				Textmarker textmarker = message.getTextmarker();
				if (message.getErrorLevel() != ErrorLevel.DEBUG || isDebug)
				{
					System.out.println(message.getErrorLevel().toString() + ": "
						+ message.getMessage() + " (" + textmarker.getLine()
						+ "," + textmarker.getColumn() + ")");
				}
			}

			if (!catalogMessageLogger.getMessages().isEmpty() && isDebug) {
				System.out.println("Info from catalog referencing");
				System.out.println("=============================");
				for (FileContentMessage message : catalogMessageLogger
						.getMessages()) {
					Textmarker textmarker = message.getTextmarker();
					if (message.getErrorLevel() != ErrorLevel.DEBUG || isDebug)
					{
						System.out.println(ErrorLevel.INFO.toString()
					
							+ ": (File:" + textmarker.getFilename()+") "
							+ message.getMessage() + " (" + textmarker.getLine()
							+ "," + textmarker.getColumn() + ")");
					}
				}
			}
			

		} catch (ScenarioLoaderException e) {
			System.err.println("Internal error Ocuured");
		}

	}

	private static OpenScenarioImpl executeImportParsing(String filename,
			MessageLogger messageLogger,
			IParserMessageLogger catalogMessageLogger)
			throws ScenarioLoaderException {

		IScenarioLoaderFactory loaderFactory = new XmlScenarioImportLoaderFactory(
				catalogMessageLogger, filename);

		IScenarioLoader loader = loaderFactory
				.createLoader(new FileResourceLocator());
		return (OpenScenarioImpl) loader.load(messageLogger).getAdapter(OpenScenarioImpl.class);

	}
	
	protected static String getFilledString(int length, char charToFill) {
	    char[] array = new char[length];
	    Arrays.fill(array, charToFill);
	    return new String(array);
	}

}
