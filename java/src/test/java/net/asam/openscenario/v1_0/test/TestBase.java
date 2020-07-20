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

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;
import net.asam.openscenario.v1_0.loader.XmlScenarioImportLoaderFactory;
import net.asam.openscenario.v1_0.loader.XmlScenarioLoaderFactory;

public class TestBase {

  protected MessageLogger messageLogger = new MessageLogger();
  // protected static String inputDir = "./src/test/Resources/";
  protected ByteArrayOutputStream testOut = new ByteArrayOutputStream();
  protected PrintStream stdout;

  public OpenScenarioImpl executeParsing(String filename) throws ScenarioLoaderException {
    return executeParsing(filename, null);
  }

  public OpenScenarioImpl executeParsing(String filename, Map<String, String> injectedProperties)
      throws ScenarioLoaderException {
    IScenarioLoaderFactory loaderFactory = new XmlScenarioLoaderFactory(filename);

    IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());

    IOpenScenarioModelElement load = loader.load(this.messageLogger, injectedProperties);
    return load != null ? (OpenScenarioImpl) load.getAdapter(OpenScenarioImpl.class) : null;
  }

  public OpenScenarioImpl executeImportParsing(
      String filename, IParserMessageLogger catalogMessageLogger) throws ScenarioLoaderException {

    IScenarioLoaderFactory loaderFactory =
        new XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);

    IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
    return (OpenScenarioImpl) loader.load(this.messageLogger).getAdapter(OpenScenarioImpl.class);
  }

  @BeforeEach
  public void init() {
    this.messageLogger.clear();
    this.stdout = System.out;
    System.setOut(new PrintStream(this.testOut));
  }

  @AfterEach
  public void cleanUp() {
    System.setOut(this.stdout);
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

  protected File getResourceFile(String resourceName) {
    ClassLoader classLoader = getClass().getClassLoader();
    return new File(classLoader.getResource(resourceName).getFile());
  }

  protected boolean assertMessages(
      List<FileContentMessage> messages, ErrorLevel errorLevel, MessageLogger logger) {
    List<FileContentMessage> filterByErrorLevelMessages = filterByErrorLevel(messages, errorLevel);
    List<FileContentMessage> filterByErrorLevelLogger =
        filterByErrorLevel(logger.getMessages(), errorLevel);
    return filterByErrorLevelMessages.equals(filterByErrorLevelLogger)
        && filterByErrorLevelMessages.size() == filterByErrorLevelLogger.size();
  }

  protected List<FileContentMessage> filterByErrorLevel(
      List<FileContentMessage> messages, ErrorLevel errorLevel) {
    List<FileContentMessage> result = new ArrayList<>();
    for (FileContentMessage message : messages) {
      if (errorLevel == message.getErrorLevel()) {
        result.add(message);
      }
    }
    Collections.sort(result);
    return result;
  }

  @SuppressWarnings("resource")
  protected String getLine(String buffer, int line) {
    Scanner paramReader = new Scanner(buffer);
    int counter = 0;
    while (paramReader.hasNextLine()) {
      counter++;
      String result = paramReader.nextLine();
      if (counter == line) {
        return result;
      }
    }
    paramReader.close();
    return null;
  }
}
