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

import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Hashtable;
import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.IEvent;
import net.asam.openscenario.v1_0.api.ILaneChangeAction;
import net.asam.openscenario.v1_0.api.IOpenScenario;

public class TestInjectedParameters extends TestBase {

  @Test
  public void testNullInjectedParameters() {
    try {
      executeParsing(
          getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath(), null);
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testEmptyInjectedParameters() {
    try {
      executeParsing(
          getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath(),
          new Hashtable<String, String>());
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testInjectionsForSuccess() {
    Hashtable<String, String> injectedParamters = new Hashtable<>();
    injectedParamters.put("testBoolean", "true");
    injectedParamters.put("testInteger", "2");
    injectedParamters.put("testUnsignedInt", "2");
    injectedParamters.put("testString", "injected");
    injectedParamters.put("testDateTime", "2018-02-24T10:00:00");
    injectedParamters.put("testUnsignedShort", "2");
    injectedParamters.put("testDouble", "2.0");

    try {
      IOpenScenario openScenario =
          (IOpenScenario)
              executeParsing(
                      getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath(),
                      injectedParamters)
                  .getAdapter(IOpenScenario.class);
      // testString
      Assertions.assertEquals(
          "injected",
          openScenario
              .getOpenScenarioCategory()
              .getScenarioDefinition()
              .getRoadNetwork()
              .getLogicFile()
              .getFilepath());
      // testUnsignedInt
      IEvent event = getEvent(openScenario);
      Assertions.assertEquals(2, event.getMaximumExecutionCount());
      // testInteger
      Assertions.assertEquals(
          2, getLaneChangeAction(event).getLaneChangeTarget().getRelativeTargetLane().getValue());
      // testDateTime
      Date date =
          event
              .getStartTrigger()
              .getConditionGroupsAtIndex(0)
              .getConditionsAtIndex(0)
              .getByValueCondition()
              .getTimeOfDayCondition()
              .getDateTime();
      String formattedDate = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss").format(date);
      Assertions.assertEquals("2018-02-24T10:00:00", formattedDate);
      // testDouble
      Assertions.assertEquals(
          2.0d, getLaneChangeAction(event).getLaneChangeActionDynamics().getValue());
      // testBoolean
      Assertions.assertEquals(
          true,
          openScenario
              .getOpenScenarioCategory()
              .getScenarioDefinition()
              .getStoryboard()
              .getStoriesAtIndex(0)
              .getActsAtIndex(0)
              .getManeuverGroupsAtIndex(0)
              .getActors()
              .getSelectTriggeringEntities());
      // testUnsignedShort
      // cannot be test because data structures are above the Parameter definitions
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testWrongFormats() {
    Hashtable<String, String> injectedParamters = new Hashtable<>();
    injectedParamters.put("testBoolean", "wrongBoolean");
    injectedParamters.put("testInteger", "wrongInteger");
    injectedParamters.put("testUnsignedInt", "wrongUnsignedIntValue");
    injectedParamters.put("testDateTime", "wrongDateTimeValue");
    injectedParamters.put("testUnsignedShort", "wrongUnsingedShortValue");
    injectedParamters.put("testDouble", "wrongDoubleValue");

    try {
      String filename = getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath();
      executeParsing(filename, injectedParamters).getAdapter(IOpenScenario.class);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "Injected parameter 'testInteger': Cannot convert 'wrongInteger' to an int. Number format error. Injected parameter is ignored.",
              ErrorLevel.ERROR,
              new Textmarker(20, 2, filename)));
      messages.add(
          new FileContentMessage(
              "Injected parameter 'testUnsignedInt': Cannot convert 'wrongUnsignedIntValue' to an unsignedInteger. Number format error. Injected parameter is ignored.",
              ErrorLevel.ERROR,
              new Textmarker(20, 2, filename)));
      messages.add(
          new FileContentMessage(
              "Injected parameter 'testDateTime': Cannot convert 'wrongDateTimeValue' to a dateTime. Illegal dateTime value. Injected parameter is ignored.",
              ErrorLevel.ERROR,
              new Textmarker(20, 2, filename)));
      messages.add(
          new FileContentMessage(
              "Injected parameter 'testUnsignedShort': Cannot convert 'wrongUnsingedShortValue' to an unsignedShort. Number format error. Injected parameter is ignored.",
              ErrorLevel.ERROR,
              new Textmarker(20, 2, filename)));
      messages.add(
          new FileContentMessage(
              "Injected parameter 'testDouble': Cannot convert 'wrongDoubleValue' to a double. Number format error. Injected parameter is ignored.",
              ErrorLevel.ERROR,
              new Textmarker(20, 2, filename)));
      messages.add(
          new FileContentMessage(
              "Injected parameter 'testBoolean': Cannot convert 'wrongBoolean' to a boolean. Illegal boolean value. Injected parameter is ignored.",
              ErrorLevel.ERROR,
              new Textmarker(20, 2, filename)));
      
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.ERROR, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testNotDefined() {
    Hashtable<String, String> injectedParamters = new Hashtable<>();
    injectedParamters.put("notDefined", "wrongBoolean");

    try {
      String filename = getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath();
      executeParsing(filename, injectedParamters).getAdapter(IOpenScenario.class);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "Injected parameter 'notDefined' must be declared as a global parameter. Injected parameter is ignored.",
              ErrorLevel.WARNING,
              new Textmarker(20, 2, filename)));
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.WARNING, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testNotDefinedWithNoGlobalParameters() {
    Hashtable<String, String> injectedParamters = new Hashtable<>();
    injectedParamters.put("notDefined", "wrongBoolean");

    try {
      String filename = getResourceFile("DoubleLaneChanger.xosc").getAbsolutePath();
      executeParsing(filename, injectedParamters).getAdapter(IOpenScenario.class);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "Injected parameter 'notDefined' must be declared as a global parameter. Injected parameter is ignored.",
              ErrorLevel.WARNING,
              new Textmarker(21, 2, filename)));
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.WARNING, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }
  /**
   * @param event
   * @return
   */
  private ILaneChangeAction getLaneChangeAction(IEvent event) {
    return event.getActionsAtIndex(0).getPrivateAction().getLateralAction().getLaneChangeAction();
  }

  /**
   * @param openScenario
   * @return
   */
  private IEvent getEvent(IOpenScenario openScenario) {
    return openScenario
        .getOpenScenarioCategory()
        .getScenarioDefinition()
        .getStoryboard()
        .getStoriesAtIndex(0)
        .getActsAtIndex(0)
        .getManeuverGroupsAtIndex(0)
        .getManeuversAtIndex(0)
        .getEventsAtIndex(0);
  }
}
