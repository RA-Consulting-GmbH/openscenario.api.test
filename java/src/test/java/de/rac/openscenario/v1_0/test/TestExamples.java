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

import java.util.List;

import org.junit.jupiter.api.Test;

import de.rac.openscenario.v1_0.api.ICatalogLocations;
import de.rac.openscenario.v1_0.api.IEntities;
import de.rac.openscenario.v1_0.api.IFileHeader;
import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.api.IOpenScenarioCategory;
import de.rac.openscenario.v1_0.api.IParameterDeclaration;
import de.rac.openscenario.v1_0.api.IRoadNetwork;
import de.rac.openscenario.v1_0.api.IScenarioDefinition;
import de.rac.openscenario.v1_0.api.IStoryboard;
import de.rac.openscenario.v1_0.api.IVehicle;
import de.rac.openscenario.v1_0.checker.ICheckerRule;
import de.rac.openscenario.v1_0.checker.IScenarioChecker;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.loader.FileResourceLocator;
import de.rac.openscenario.v1_0.loader.IScenarioLoader;
import de.rac.openscenario.v1_0.loader.IScenarioLoaderFactory;
import de.rac.openscenario.v1_0.loader.MessageLoggerDecorator;
import de.rac.openscenario.v1_0.loader.ScenarioLoaderException;
import de.rac.openscenario.v1_0.loader.XmlScenarioLoaderFactory;

public class TestExamples extends TestBase{


	@Test
	public void testExample()
			throws ScenarioLoaderException {
		
		MessageLoggerDecorator messageLogger = new MessageLoggerDecorator(this.messageLogger);
		
		// Instantiating the factory
		IScenarioLoaderFactory loaderFactory = 
				new XmlScenarioLoaderFactory(inputDir + "DoubleLaneChanger.xosc");
		
		// Creating the loader
		IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
		
		// Loading 
		IOpenScenario openScenario = loader.load(messageLogger);
		
		// Check for errors
		if (!messageLogger.hasErrors())
		{
			// Browse through the results
			IFileHeader fileHeader = openScenario.getFileHeader();
			System.out.println( "Major Revision :" + fileHeader.getRevMajor());
			System.out.println( "Minor Revision :" + fileHeader.getRevMinor());
		}
		
		// 
		IOpenScenarioCategory openScenarioCategory = openScenario.getOpenScenarioCategory();
		
		if (openScenario.getOpenScenarioCategory() != null)
		{
			// This is a scenario definition, not a catalog
			IScenarioDefinition scenarioDefinition = openScenarioCategory.getScenarioDefinition();
			
			// Browse through parameter declarations
			List<IParameterDeclaration> parameterDeclarations = scenarioDefinition.getParameterDeclarations();

			// Browse through roadNetwork definition
			IRoadNetwork roadNetwork = scenarioDefinition.getRoadNetwork();
			
			// Browse through entities
			IEntities entities = scenarioDefinition.getEntities();
			
			// Browse through storyboard
			IStoryboard storyboard = scenarioDefinition.getStoryboard();
			
			// Browse through catalog locations
			ICatalogLocations catalogLocations = scenarioDefinition.getCatalogLocations();
						
			
		}
		MessageLogger checkerRuleLogger = new  MessageLogger();
		
		// Using the adapter interface to get the checker
		IScenarioChecker scenarioChecker = (IScenarioChecker) openScenario.getAdapter(IScenarioChecker.class);
		
		// Add a checker rule for all vehicles: E.g. Check ^whether the name starts with a capital letter
		scenarioChecker.addVehicleCheckerRule(new ICheckerRule<IVehicle>() {
			
			@Override
			public void applyRule(IParserMessageLogger messageLogger, IVehicle object) {
				
				String name = object.getName();
				// name must start with a capital letter
				if (!name.matches("^[A-Z].*"))
				{
					
					// Get the textmarker at the error
					ILocator locator = (ILocator) object.getAdapter(ILocator.class);
			 		Textmarker textmarker = locator.getStartMarkerOfProperty(OscConstants.ATTRIBUTE__NAME);
			 		
			 		// Add a message to the logger
			 		messageLogger.logMessage(
						new FileContentMessage("Name must start with a capital letter" , ErrorLevel.ERROR, textmarker)
					);
					
				}
				
			}
		});
		
		// Now start the check. It is applied to all vehicles. For any checker rule violation an entry is created.
		scenarioChecker.checkScenario(checkerRuleLogger, openScenario);
	
		// Iterate through violations
		for (FileContentMessage message : checkerRuleLogger.getMessages()) {
			// e.g. display the error 
			System.out.println(message.getMessage());
		}

	}
}
