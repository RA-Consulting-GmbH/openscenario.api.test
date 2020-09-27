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

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.IActors;
import net.asam.openscenario.v1_0.api.IEvent;
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.IInit;
import net.asam.openscenario.v1_0.api.IInitActions;
import net.asam.openscenario.v1_0.api.IManeuver;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.api.IOpenScenarioCategory;
import net.asam.openscenario.v1_0.api.IPrivate;
import net.asam.openscenario.v1_0.api.IPrivateAction;
import net.asam.openscenario.v1_0.api.IRelativeLanePosition;
import net.asam.openscenario.v1_0.api.IScenarioDefinition;
import net.asam.openscenario.v1_0.api.ISpeedAction;
import net.asam.openscenario.v1_0.api.IStoryboard;
import net.asam.openscenario.v1_0.api.ITransitionDynamics;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.loader.XmlScenarioLoaderFactory;

public class TestFlexInterface extends TestBase {

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

    Assertions.assertFalse(!this.messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty());

    // Browse through the results
    IFileHeader fileHeader = openScenario.getFileHeader();
    IOpenScenarioFlexElement flexElement = fileHeader.getOpenScenarioFlexElement();

    try {
      // Date Time
      String expectedDateString = "2001-10-26T21:32:52";
      Date expectedDate = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss").parse(expectedDateString);
      Date date = flexElement.getDateTimeProperty(OscConstants.ATTRIBUTE__DATE);
      Assertions.assertEquals(expectedDate, date);

      // Unsigned Short
      Integer majorRef = flexElement.getUnsignedShortProperty(OscConstants.ATTRIBUTE__REV_MAJOR);
      Assertions.assertEquals(0, majorRef);

      // String
      String description = flexElement.getStringProperty(OscConstants.ATTRIBUTE__DESCRIPTION);
      Assertions.assertEquals("Sample Scenario - Double Lane Changer", description);

      // test Enumeration
      ITransitionDynamics speedActionDynamics = getSpeedActionDynamics(openScenario);
      String enmuerationValue =
          speedActionDynamics
              .getOpenScenarioFlexElement()
              .getEnumerationLiteral(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE);
      Assertions.assertEquals("step", enmuerationValue);

      // test Unsigned integer
      IEvent event = getEvent(openScenario);
      Long maximumExecutionCount =
          event
              .getOpenScenarioFlexElement()
              .getUnsignedIntProperty(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
      Assertions.assertEquals(2, maximumExecutionCount);

      // test Double
      Double value =
          speedActionDynamics
              .getOpenScenarioFlexElement()
              .getDoubleProperty(OscConstants.ATTRIBUTE__VALUE);
      Assertions.assertEquals(2.0D, value);

      // testInteger
      IRelativeLanePosition relativeLanePosition = getRelativeLanePosition(event);
      Integer dLane =
          relativeLanePosition
              .getOpenScenarioFlexElement()
              .getIntProperty(OscConstants.ATTRIBUTE__D_LANE);
      Assertions.assertEquals(1, dLane);

      // test Boolean
      IActors actors = getActors(openScenario);
      Boolean alongRoute =
          actors
              .getOpenScenarioFlexElement()
              .getBooleanProperty(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES);
      Assertions.assertEquals(Boolean.FALSE, alongRoute);

      // Test Proxy (Name only)
      String entityRef =
          relativeLanePosition
              .getOpenScenarioFlexElement()
              .getStringProperty(OscConstants.ATTRIBUTE__ENTITY_REF);
      Assertions.assertEquals("Ego", entityRef);

      // testParent
      Assertions.assertTrue(
          event.getOpenScenarioFlexElement().getParentFlexElement() instanceof IManeuver);

      // test type
      Assertions.assertEquals("Event", event.getOpenScenarioFlexElement().getModelType());

      // Exceptions
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getDateTimeProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getUnsignedShortProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getStringProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getDoubleProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getBooleanProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getIntProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getUnsignedIntProperty("Test");
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getReferencedElement("Test", "Ego");
          });

      // Exceptions (null Arguments)
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getDateTimeProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getUnsignedShortProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getStringProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getDoubleProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getBooleanProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getIntProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getUnsignedIntProperty(null);
          });
      Assertions.assertThrows(
          KeyNotSupportedException.class,
          () -> {
            flexElement.getReferencedElement(null, "Ego");
          });

    } catch (Error | KeyNotSupportedException | ParseException e) {
      e.printStackTrace();
      Assertions.fail();
    }
  }

  private ITransitionDynamics getSpeedActionDynamics(IOpenScenario openScenario) {
    IOpenScenarioCategory openScenarioCategory = openScenario.getOpenScenarioCategory();
    Assertions.assertNotNull(openScenarioCategory, "Unexpected null value");
    IScenarioDefinition scenarioDefinition = openScenarioCategory.getScenarioDefinition();
    Assertions.assertNotNull(scenarioDefinition, "Unexpected null value");
    IStoryboard storyboard = scenarioDefinition.getStoryboard();
    Assertions.assertNotNull(storyboard, "Unexpected null value");
    IInit init = storyboard.getInit();
    Assertions.assertNotNull(init, "Unexpected null value");
    IInitActions actions = init.getActions();
    Assertions.assertNotNull(actions, "Unexpected null value");
    List<IPrivate> privates = actions.getPrivates();
    Assertions.assertNotNull(privates, "Unexpected null value");
    Assertions.assertEquals(3, privates.size());
    IPrivate privateAction = privates.get(0);
    List<IPrivateAction> privateActions = privateAction.getPrivateActions();
    Assertions.assertEquals(2, privateActions.size());
    ISpeedAction speedAction = privateActions.get(0).getLongitudinalAction().getSpeedAction();
    return speedAction.getSpeedActionDynamics();
  }

  private IEvent getEvent(IOpenScenario openScenario) {
    IOpenScenarioCategory openScenarioCategory = openScenario.getOpenScenarioCategory();
    IScenarioDefinition scenarioDefinition = openScenarioCategory.getScenarioDefinition();
    IStoryboard storyboard = scenarioDefinition.getStoryboard();
    return storyboard
        .getStories()
        .get(0)
        .getActs()
        .get(0)
        .getManeuverGroups()
        .get(0)
        .getManeuvers()
        .get(0)
        .getEvents()
        .get(0);
  }

  private IRelativeLanePosition getRelativeLanePosition(IEvent event) {

    return event
        .getActions()
        .get(1)
        .getPrivateAction()
        .getRoutingAction()
        .getAcquirePositionAction()
        .getPosition()
        .getRelativeLanePosition();
  }

  private IActors getActors(IOpenScenario openScenario) {
    IOpenScenarioCategory openScenarioCategory = openScenario.getOpenScenarioCategory();
    IScenarioDefinition scenarioDefinition = openScenarioCategory.getScenarioDefinition();
    IStoryboard storyboard = scenarioDefinition.getStoryboard();
    return storyboard.getStories().get(0).getActs().get(0).getManeuverGroups().get(0).getActors();
  }
}
