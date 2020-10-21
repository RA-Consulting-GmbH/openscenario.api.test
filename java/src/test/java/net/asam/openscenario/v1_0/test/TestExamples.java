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

import java.util.List;

import org.junit.jupiter.api.Test;

import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.checker.tree.PropertyTreeContext;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.SimpleMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.ICatalogLocations;
import net.asam.openscenario.v1_0.api.IEntities;
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.api.IOpenScenarioCategory;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IRoadNetwork;
import net.asam.openscenario.v1_0.api.IScenarioDefinition;
import net.asam.openscenario.v1_0.api.IStoryboard;
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.checker.IScenarioChecker;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.loader.XmlScenarioLoaderFactory;

public class TestExamples extends TestBase {

  @SuppressWarnings("unused")
  @Test
  public void testExample() throws ScenarioLoaderException {

 
    // Instantiating the factory
    IScenarioLoaderFactory loaderFactory =
        new XmlScenarioLoaderFactory(getResourceFile("DoubleLaneChanger.xosc").getAbsolutePath());

    // Creating the loader
    IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());

    // Loading
    IOpenScenario openScenario =
        (IOpenScenario) loader.load(this.messageLogger).getAdapter(IOpenScenario.class);

    // Check for errors
    if (this.messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty()) {
      // Browse through the results
      IFileHeader fileHeader = openScenario.getFileHeader();
      System.out.println("Major Revision :" + fileHeader.getRevMajor());
      System.out.println("Minor Revision :" + fileHeader.getRevMinor());
    }

    //
    IOpenScenarioCategory openScenarioCategory = openScenario.getOpenScenarioCategory();

    if (openScenario.getOpenScenarioCategory() != null) {
      // This is a scenario definition, not a catalog
      IScenarioDefinition scenarioDefinition = openScenarioCategory.getScenarioDefinition();

      // Browse through parameter declarations
      List<IParameterDeclaration> parameterDeclarations =
          scenarioDefinition.getParameterDeclarations();

      // Browse through roadNetwork definition
      IRoadNetwork roadNetwork = scenarioDefinition.getRoadNetwork();

      // Browse through entities
      IEntities entities = scenarioDefinition.getEntities();

      // Browse through storyboard
      IStoryboard storyboard = scenarioDefinition.getStoryboard();

      // Browse through catalog locations
      ICatalogLocations catalogLocations = scenarioDefinition.getCatalogLocations();
    }
    SimpleMessageLogger checkerRuleLogger = new SimpleMessageLogger(ErrorLevel.INFO);

    // Using the adapter interface to get the checker
    IScenarioChecker scenarioChecker =
        (IScenarioChecker) openScenario.getAdapter(IScenarioChecker.class);

    // Add a checker rule for all vehicles: E.g. Check ^whether the name starts with a capital
    // letter
    scenarioChecker.addVehicleCheckerRule(
        new ICheckerRule<IVehicle>() {

          @Override
          public void applyRuleInFileContext(IParserMessageLogger messageLogger, IVehicle object) {

            if (!doesNameMatches(object)) {

              // Get the textmarker at the error
              ILocator locator = (ILocator) object.getAdapter(ILocator.class);
              Textmarker textmarker =
                  locator.getStartMarkerOfProperty(OscConstants.ATTRIBUTE__NAME);

              // Add a message to the logger
              messageLogger.logMessage(
                  new FileContentMessage(
                      getMessage(), ErrorLevel.ERROR, textmarker));
            }
          }

          /**
           * @return
           */
          private String getMessage()
          {
            return "Name must start with a capital letter";
          }

          @Override
          public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, IVehicle object)
          {
            if (!doesNameMatches(object)) {

              // Get the textmarker at the error
              ILocator locator = (ILocator) object.getAdapter(ILocator.class);
              Textmarker textmarker =
                  locator.getStartMarkerOfProperty(OscConstants.ATTRIBUTE__NAME);

              // Add a message to the logger
              messageLogger.logMessage(
                  new TreeContentMessage(
                      getMessage(), ErrorLevel.ERROR, PropertyTreeContext.create(object, OscConstants.ATTRIBUTE__NAME)));
            }
            
          }
          private boolean doesNameMatches(IVehicle object)
          {
            String name = object.getName();
            // name must start with a capital letter
            return name.matches("^[A-Z].*");
          }
        });

    // Now start the check. It is applied to all vehicles. For any checker rule violation an entry
    // is created.
    scenarioChecker.checkScenarioInFileContext(checkerRuleLogger, openScenario);

    // Iterate through violations
    for (FileContentMessage message : checkerRuleLogger.getMessages()) {
      // e.g. display the error
      System.out.println(message.getMessage());
    }
  }
}
