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

import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;

import javax.management.modelmbean.XMLParseException;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;

public class TestFiles extends TestBase {

  @Test
  public void testSimpleSuccess() {
    try {
      executeParsing(getResourceFile("DoubleLaneChanger.xosc").getAbsolutePath());
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testParamsSuccess() {
    try {
      executeParsing(getResourceFile("DoubleLaneChangerParams.xosc").getAbsolutePath());
      Assertions.assertFalse(!this.messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty(), "Unexpected error occured");
    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testParamsFailure() {
    try {
      String filename = getResourceFile("DoubleLaneChangerParamsError.xosc").getAbsolutePath();
      executeParsing(filename);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
              new FileContentMessage(
                  "Cannot resolve parameter 'UnknownParameter'",
                  ErrorLevel.ERROR,
                  new Textmarker(49, 17, filename)));
      messages.add(
          new FileContentMessage(
              "Cannot convert 'wrongDouble' to a double. Number format error.",
              ErrorLevel.ERROR,
              new Textmarker(85, 39, filename)));

      Assertions.assertTrue(
          assertMessages(messages, ErrorLevel.ERROR, this.messageLogger),
          "Unexpected Errors or Errors missing");
      

    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testUnvalidXml() {
    try {
      String filename = getResourceFile("DoubleLaneChangeExtraHalf.xosc").getAbsolutePath();
      executeParsing(filename);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "XML document structures must start and end within the same entity.",
              ErrorLevel.FATAL,
              new Textmarker(47, 3, filename)));
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.FATAL, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      Assertions.assertTrue(e.getCause() instanceof XMLParseException);
    }
  }

  @Test
  public void testUnknownElement() {
    try {
      String filename =
          getResourceFile("DoubleLaneChangeExtraUnknownElement.xosc").getAbsolutePath();
      executeParsing(filename);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "Unknown element 'ScenarioObject'",
              ErrorLevel.ERROR,
              new Textmarker(50, 4, filename)));
      messages.add(
          new FileContentMessage(
              "Unknown element 'Test'", ErrorLevel.ERROR, new Textmarker(76, 4, filename)));
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.ERROR, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      Assertions.assertTrue(e.getCause() instanceof XMLParseException);
    }
  }

  @Test
  public void testWrongAttributes() {
    try {
      String filename = getResourceFile("DoubleLaneChangerWrongAttributes.xosc").getAbsolutePath();
      executeParsing(filename);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "Value 'TTTT' is not allowed.", ErrorLevel.ERROR, new Textmarker(78, 72, filename)));
      messages.add(
          new FileContentMessage(
              "Cannot convert 'ezert' to a double. Number format error.",
              ErrorLevel.ERROR,
              new Textmarker(78, 58, filename)));
      messages.add(
          new FileContentMessage(
              "Cannot convert 'TEST' to a double. Number format error.",
              ErrorLevel.ERROR,
              new Textmarker(80, 39, filename)));
      messages.add(
          new FileContentMessage(
              "Cannot convert '-56' to an unsignedInteger. Value must be in [0..4294967295].",
              ErrorLevel.ERROR,
              new Textmarker(138, 23, filename)));
      messages.add(
          new FileContentMessage(
              "Cannot convert '-40' to an unsignedInteger. Value must be in [0..4294967295].",
              ErrorLevel.ERROR,
              new Textmarker(175, 69, filename)));
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.ERROR, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      Assertions.assertTrue(e.getCause() instanceof XMLParseException);
    }
  }

  @Test
  public void testWrongEndElement() {
    try {
      String filename = getResourceFile("DoubleLaneChangerWrongEndElement.xosc").getAbsolutePath();
      executeParsing(filename);
      List<FileContentMessage> messages = new ArrayList<>();
      messages.add(
          new FileContentMessage(
              "The element type \"PrivateActions\" must be terminated by the matching end-tag \"</PrivateActions>\".",
              ErrorLevel.FATAL,
              new Textmarker(90, 12, filename)));
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.FATAL, this.messageLogger));
    } catch (ScenarioLoaderException e) {
      e.printStackTrace();
      Assertions.assertTrue(e.getCause() instanceof XMLParseException);
    }
  }

  @Test
  public void testCustomCommandAction() {
    try {
      String filename =
          getResourceFile("DoubleLaneChangerCustomCommandAction.xosc").getAbsolutePath();
      OpenScenarioImpl openScenarioImpl = executeParsing(filename);
      List<FileContentMessage> messages = new ArrayList<>();
      Assertions.assertTrue(assertMessages(messages, ErrorLevel.ERROR, this.messageLogger));
      String content =
          openScenarioImpl
              .getOpenScenarioCategory()
              .getScenarioDefinition()
              .getStoryboard()
              .getInit()
              .getActions()
              .getUserDefinedActions()
              .get(0)
              .getCustomCommandAction()
              .getContent();
      Assertions.assertEquals("\n				This is text defined  Inhalt\n			", content);

    } catch (ScenarioLoaderException e) {
      Assertions.fail();
    }
  }

  @Test
  public void testFileNotFound() {
    try {
      String filename = "FileNotFound.xosc";
      executeParsing(filename);

    } catch (ScenarioLoaderException e) {
      Assertions.assertTrue(e.getCause() instanceof FileNotFoundException);
    }
  }
}
