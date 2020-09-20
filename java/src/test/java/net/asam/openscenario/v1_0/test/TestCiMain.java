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

import java.io.File;
import java.io.IOException;
import java.util.Properties;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.v1_0.main.OpenScenarioChecker;
import net.asam.openscenario.v1_0.main.OpenScenarioCheckerCommon;
import net.asam.openscenario.v1_0.main.OpenScenarioCiChecker;

public class TestCiMain extends TestBase {

  @Test
  public void testDirectorySuccess() {

    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile("continuousIntegration/successConf.yml").getAbsolutePath(),
              "-d",
              getResourceFile("continuousIntegration").getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.SUCCESS_RESULT, result);
  }

  @Test
  public void testDirectoryPartlySuccess() {
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile("continuousIntegration/badDirectoryConf.yml").getAbsolutePath(),
              "-d",
              getResourceFile("continuousIntegration").getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
  }

  @Test
  public void testConfDoesNotExist() {
    String notExistingFile = "./continuousIntegration/notExistingConf.yml";
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              notExistingFile,
              "-d",
              getResourceFile("continuousIntegration").getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        String.format("Cannot read configuration file '%s'.", notExistingFile),
        getLine(this.testOut.toString(), 4));
  }

  @Test
  public void testConfParsingError() {
    String confFileName = "./continuousIntegration/parsingErrorConf.error_yml";
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile(confFileName).getAbsolutePath(),
              "-d",
              getResourceFile("continuousIntegration").getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        String.format("Parsing error in configuration file at (6,2)", confFileName),
        getLine(this.testOut.toString(), 4));
  }

  @Test
  public void testConfMappingError() {
    String confFileName = "./continuousIntegration/mappingErrorConf.yml";
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile(confFileName).getAbsolutePath(),
              "-d",
              getResourceFile("continuousIntegration").getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        String.format(
            "Mapping error in configuration file. Check value or name at (10,3)", confFileName),
        getLine(this.testOut.toString(), 4));
  }

  @Test
  public void subDirectoryDoesNotExist() {
    String confFileName = "./continuousIntegration/subDirectoryDoesNotExistConf.yml";
    File baseDirectory = getResourceFile("continuousIntegration");
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile(confFileName).getAbsolutePath(),
              "-d",
              baseDirectory.getAbsolutePath()
            });
    File targetFile = new File(baseDirectory, "notExistingDirectory");
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        String.format("'%s' does not exists or is not a directory", targetFile.getAbsolutePath()),
        getLine(this.testOut.toString(), 12));
  }

  @Test
  public void noSubdirectoryDefinedSuccess() {

    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile("continuousIntegration/noSubDirectoryDefinedConf.yml").getAbsolutePath(),
              "-d",
              getResourceFile("continuousIntegration/successDirectory").getAbsolutePath()
            });

    Assertions.assertEquals(OpenScenarioCheckerCommon.SUCCESS_RESULT, result);
  }

  @Test
  public void baseDirectoryDoesNotExist() {
    String notExistingFile = "./continuousIntegration/successConf.yml";
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              notExistingFile,
              "-d",
              "/NotExistingDirectory"
            });
   
    
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        String.format("Base directory '/NotExistingDirectory' does not exists", notExistingFile),
        getLine(this.testOut.toString(), 4));
  }

  @Test
  public void classCannotBeLoadedExist() {
    String confFileName = "./continuousIntegration/classNameNotFoundConf.yml";
    File baseDirectory = getResourceFile("continuousIntegration");
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-conf",
              getResourceFile(confFileName).getAbsolutePath(),
              "-d",
              baseDirectory.getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals("Class 'net.asam.openscenario.v1_0.test.NotExisitingClass' cannot be loaded",
        getLine(this.testOut.toString(), 12));
  }

  @Test
  public void testUsage() {
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-notValidFlag",
              getResourceFile("continuousIntegration/badDirectoryConf.yml").getAbsolutePath(),
              "-d",
              getResourceFile("continuousIntegration").getAbsolutePath()
            });
    Assertions.assertEquals(OpenScenarioCheckerCommon.USAGE_RESULT, result);
    Assertions.assertEquals("Usage: [[-conf <confFileName> -d <baseDirectory>]| -v]",
        getLine(this.testOut.toString(),4));
  }

  @Test
  public void testVersion() {
    Properties properties = new Properties();
    String version = "";
    try {
      properties.load(
          this.getClass().getClassLoader().getResourceAsStream("version.properties"));
      version = properties.getProperty("version");
    } catch (IOException e) {
      Assertions.fail();
    }
    
    int result =
        OpenScenarioCiChecker.mainWrapper(
            new String[] {
              "-v"});
    Assertions.assertEquals(OpenScenarioCheckerCommon.VERSION_RESULT, result);
    Assertions.assertEquals("Program version " +version,
        getLine(this.testOut.toString(),4));
  }
}
