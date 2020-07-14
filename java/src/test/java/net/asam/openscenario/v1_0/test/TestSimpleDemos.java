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
import net.asam.openscenario.common.SimpleMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.IAxle;
import net.asam.openscenario.v1_0.api.IAxles;
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.api.IScenarioObject;
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.catalog.CatalogHelper;
import net.asam.openscenario.v1_0.checker.VersionCheckerRule;
import net.asam.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;
import net.asam.openscenario.v1_0.loader.XmlScenarioImportLoaderFactory;
import net.asam.openscenario.v1_0.loader.XmlScenarioLoaderFactory;
import net.asam.openscenario.v1_0.test.helper.EgoCheckerRule;

public class TestSimpleDemos extends TestBase{


	@Test
	public void testSimpleDemo() throws ScenarioLoaderException{
	  
	  // Creating a message Logger to pick up the messages
	  SimpleMessageLogger messageLogger = new SimpleMessageLogger(ErrorLevel.INFO);
      
      // Instantiating the factory
      IScenarioLoaderFactory loaderFactory = 
              new XmlScenarioLoaderFactory(getResourceFile("DoubleLaneChanger.xosc").getAbsolutePath());
      
      // Creating the loader with a file resource locator (we are reading directly from a file system)
      IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
      
      // Loading the scenario
      IOpenScenario openScenario = (IOpenScenario)  loader.load(messageLogger).getAdapter(IOpenScenario.class);
      
      // Check for errors
      if (!messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty())
      {
          // Browse through the results
          IFileHeader fileHeader = openScenario.getFileHeader();
          System.out.println( "Major Revision :" + fileHeader.getRevMajor());
          System.out.println( "Minor Revision :" + fileHeader.getRevMinor());
      }

		
	}
	
	@Test
    public void testImportDemo() throws ScenarioLoaderException{
      
      // Creating a message Logger to pick up the messages
	  SimpleMessageLogger messageLogger = new SimpleMessageLogger(ErrorLevel.INFO);
	  
	  // create another messageLogger for logging the messages that occur from imported files
	  SimpleMessageLogger catalogMessageLogger = new SimpleMessageLogger(ErrorLevel.INFO);
      
	  
      // Instantiating the factory
      IScenarioLoaderFactory loaderFactory = new XmlScenarioImportLoaderFactory(
          catalogMessageLogger,getResourceFile("simpleImport/simpleImport.xosc").getAbsolutePath());

      // Creating the loader with a file resource locator (we are reading directly from a file system)
      IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
      
      // Loading the scenario
      IOpenScenario openScenario = (IOpenScenario)  loader.load(messageLogger).getAdapter(IOpenScenario.class);
      
      // Get the list of scenario objects
      List<IScenarioObject> scenarioObjects = openScenario.getOpenScenarioCategory().getScenarioDefinition().getEntities().getScenarioObjects();
      
      
      for (IScenarioObject scenarioObject: scenarioObjects)
      {
          // Access the object that is imported from a catalog with the name "Ego"
          if (scenarioObject.getName().equals("Ego"))
          {
              // Get the catalog reference
              ICatalogReference catalogReference = scenarioObject.getEntityObject().getCatalogReference();
              
              if (catalogReference != null && catalogReference.getEntryName().equals("car_white"))
              {
                  // Now check the type.
                  if (CatalogHelper.isVehicle(catalogReference.getRef()))
                  {
                    IVehicle vehicle = CatalogHelper.asVehicle(catalogReference.getRef());
                    // Now you can access the resolved vehicle
                    IAxles axles = vehicle.getAxles();
                    // get the additonal axles
                    List<IAxle> additionalAxles = axles.getAdditionalAxles();
                    if (additionalAxles == null || additionalAxles.size() == 0)
                    {
                      System.out.println("Ego has 2 axles (front, rear)");
                    }else
                    {
                      System.out.println("Ego has "+ (2+additionalAxles.size()) +" axles (front, rear and "+ additionalAxles.size()+" addtional axles");
                    }
                  }
              }
          }
      }

        
    }


    @Test
    public void testCheckerRuleDemo() {
        try {
            String filename = getResourceFile( "DoubleLaneChanger.xosc").getAbsolutePath();
            IOpenScenario openScenario=executeParsing(filename);
            
            // the root of the tree is available in the IOpenScenario openScenario variable
            
            // Instantiate a checker now
            ScenarioCheckerImpl scenarioChecker = new ScenarioCheckerImpl();
            
            // The sceanrio checker provided a method for every model type (here IFileHeader) to add CheckerRule
            scenarioChecker.addFileHeaderCheckerRule(new VersionCheckerRule(1, 0));
            
            // Create a message logger to pick up the messages
            SimpleMessageLogger simpleMessageLogger = new SimpleMessageLogger(ErrorLevel.INFO);
            
            // Now call the checkScenario method to check the tree
            scenarioChecker.checkScenario(simpleMessageLogger, openScenario);
            
            // Now check the picked up messages
            for (FileContentMessage message : simpleMessageLogger.getMessages())
            {
              // do somethong with the messaged that are picked up during the check
            }
            

        } catch (ScenarioLoaderException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
    
    @Test
    public void testCheckerRuleEgoDemo() {
        try {
            String filename = getResourceFile( "DoubleLaneChanger.xosc").getAbsolutePath();
            IOpenScenario openScenario=executeParsing(filename);
            
            // the root of the tree is available in the IOpenScenario openScenario variable
            
            // Instantiate a checker now
            ScenarioCheckerImpl scenarioChecker = new ScenarioCheckerImpl();
            
            // The sceanrio checker provided a method for every model type (here IFileHeader) to add CheckerRule
            scenarioChecker.addEntitiesCheckerRule(new EgoCheckerRule());
            
            // Create a message logger to pick up the messages
            SimpleMessageLogger simpleMessageLogger = new SimpleMessageLogger(ErrorLevel.INFO);
            
            // Now call the checkScenario method to check the tree
            scenarioChecker.checkScenario(simpleMessageLogger, openScenario);
            
            // Now check the picked up messages
            for (FileContentMessage message : simpleMessageLogger.getMessages())
            {
              // do somethong with the messaged that are picked up during the check
            }
            

        } catch (ScenarioLoaderException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }

	
	
}
