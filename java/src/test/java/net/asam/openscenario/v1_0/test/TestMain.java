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

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import net.asam.openscenario.v1_0.main.OpenScenarioChecker;
import net.asam.openscenario.v1_0.main.OpenScenarioCheckerCommon;

public class TestMain extends TestBase {

  @Test
  public void testImportSuccess() {
    int result =  OpenScenarioChecker.mainWrapper(
        new String[] {"-i",getResourceFile("simpleImport/simpleImport.xosc").getAbsolutePath()});
    Assertions.assertEquals(OpenScenarioCheckerCommon.SUCCESS_RESULT, result);
    
  }
  
  @Test
  public void testDirectorySuccess() {
    
    int result =  OpenScenarioChecker.mainWrapper(
        new String[] {"-d",getResourceFile("goodDirectory").getAbsolutePath()});
    Assertions.assertEquals( OpenScenarioCheckerCommon.SUCCESS_RESULT, result);
  }
  
  @Test
  public void testDirectoryPartlySuccess() {
    int result =  OpenScenarioChecker.mainWrapper(
        new String[] {"-d",getResourceFile("badDirectory").getAbsolutePath()});
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT,result);
  }

  @Test
  public void testFileNotFound() {
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-i","testFileNoteFound"});
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT,result);
    Assertions.assertEquals(
        "Scenario file not found 'testFileNoteFound'", getLine(this.testOut.toString(), 4));
  }
  @Test
  public void testDirectoryNotFound() {
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-d","testDirFound"});
    Assertions.assertEquals( OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        "'testDirFound' does not exists or is not a directory", getLine(this.testOut.toString(), 4));
  }
  @Test
  public void testWithErrors() {
    
    String filename = getResourceFile("DoubleLaneChangerParamsError.xosc").getAbsolutePath();
    int result= OpenScenarioChecker.mainWrapper(new String[] {"-i",filename});
    Assertions.assertEquals( OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        "Validation failed with 2 errors and 0 warnings.", getLine(this.testOut.toString(), 10));
  }

  @Test
  public void testWrongCommandLine() {
    String filename = getResourceFile("DoubleLaneChangerParamsError.xosc").getAbsolutePath();
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-i", filename, "Test"});
    Assertions.assertEquals(OpenScenarioCheckerCommon.USAGE_RESULT, result);
    Assertions.assertEquals(
        "Usage: [[{-i <filename>|-d <dirname>}  [-p <paramfilename>]] | -v]",
        getLine(this.testOut.toString(), 4));
  }

  @Test
  public void testWithParamFile() {
    String filename = getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath();
    String paramFileName = getResourceFile("params.conf").getAbsolutePath();
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-i", filename, "-p", paramFileName});
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    
    Assertions.assertEquals("\ttestBoolean\ttrue", getLine(this.testOut.toString(), 5));
    Assertions.assertEquals(
        "\ttestDateTime\t2018-02-24T10:00:00", getLine(this.testOut.toString(), 6));
    Assertions.assertEquals("\ttestDouble\t2.0", getLine(this.testOut.toString(), 7));
    Assertions.assertEquals("\ttestInteger\t2", getLine(this.testOut.toString(), 8));
    Assertions.assertEquals("\ttestString\tinjected", getLine(this.testOut.toString(), 9));
    Assertions.assertEquals("\ttestUnsignedInt\t2", getLine(this.testOut.toString(), 10));
    Assertions.assertEquals("\ttestUnsignedShort\t2", getLine(this.testOut.toString(), 11));
  }

  @Test
  public void testWithParamFileSyntaxError() {
    // test stuff here...

    String filename = getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath();
    String paramFileName = getResourceFile("paramsSyntaxError.conf").getAbsolutePath();
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-i",filename, "-p", paramFileName});
    Assertions.assertEquals( OpenScenarioCheckerCommon.ERROR_RESULT, result);
    Assertions.assertEquals(
        "Syntax error in parameter file: line 8", getLine(this.testOut.toString(), 4));
  }

  @Test
  public void testWithParamFileSyntaxError2() {
    // test stuff here...

    String filename = getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath();
    String paramFileName = getResourceFile("paramsSyntaxError2.conf").getAbsolutePath();
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-i",filename, "-p", paramFileName});
    Assertions.assertEquals(result, OpenScenarioCheckerCommon.ERROR_RESULT);
    Assertions.assertEquals(
        "Syntax error in parameter file: line 5", getLine(this.testOut.toString(), 4));
  }

  @Test
  public void testWithParamFileNotFound() {
    // test stuff here...
    String filename = getResourceFile("DoubleLaneChangerInjectedParams.xosc").getAbsolutePath();
    String paramFileName = "paramsNotFound.conf";
    int result = OpenScenarioChecker.mainWrapper(new String[] {"-i",filename, "-p", paramFileName});
    Assertions.assertEquals(OpenScenarioCheckerCommon.ERROR_RESULT, result);
    
    Assertions.assertEquals("Paramsfile not found", getLine(this.testOut.toString(), 4));
  }

  // Use these lines to make stout visible
  // System.setOut(stdout);
  // System.out.println(testOut.toString());

}
