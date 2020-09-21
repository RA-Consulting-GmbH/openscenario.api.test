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

import java.io.File;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;

/**
 * Executable class for checking a OpenScenario file.
 *
 * @author Andreas Hege - RA Consulting *
 *     <ul>
 *       <li>Reading the file
 *       <li>Resolving the parameters
 *       <li>Resolving the catalog references
 *       <li>Checking all type ranges that differ from the ones of the default type (e.g. positiv
 *           doubles)
 *     </ul>
 */
public class OpenScenarioChecker {


  public static void main(String[] args) {
    int result = mainWrapper(args);
    System.exit(result);
  }

  public static int mainWrapper(String[] args) {

    int result = 0;
    boolean isCommandLineParsable = false;

    String header = "* ASAM OpenSCENARIO 1.0 Checker (2020) *";
    OpenScenarioCheckerCommon.printHeader(header);
    
    result = OpenScenarioCheckerCommon.checkCommandLineVersion(args);
    if (result ==  OpenScenarioCheckerCommon.VERSION_RESULT || result == OpenScenarioCheckerCommon.ERROR_RESULT) {
      return result;
    }
    
    String inputFileName = null;
    String inputDirectoryName = null;
    String paramFileName = null;
    if (args.length == 2 && args[0].equals("-i")) {
      inputFileName = args[1];
      isCommandLineParsable = true;
    } else if (args.length == 2 && args[0].equals("-d")) {
      inputDirectoryName = args[1];
      isCommandLineParsable = true;
    } else if (args.length == 4 && args[2].equals("-p") && args[0].equals("-d")) {
      inputDirectoryName = args[1];
      paramFileName = args[3];
      isCommandLineParsable = true;
    } else if (args.length == 4 && args[2].equals("-p") && args[0].equals("-i")) {
      inputFileName = args[1];
      paramFileName = args[3];
      isCommandLineParsable = true;
    }

    if (!isCommandLineParsable) {
      System.out.println("Usage: [[{-i <filename>|-d <dirname>}  [-p <paramfilename>]] | -v]");
      System.out.println("Options:");
      System.out.println("\t-i  <filename> file to be validated");
      System.out.println("\t-d  <directory> directory to be validated");
      System.out.println(
          "\t-p  <paramfilename> a file with name/value pairs. One line per name/value pair. tab separated");
      System.out.println("\t-v  print program version");
      return OpenScenarioCheckerCommon.USAGE_RESULT;
    }

    Map<String,String> parameters = null;
    if (paramFileName == null)
    {
      parameters = new Hashtable<>();
    }else
    {
      parameters = OpenScenarioCheckerCommon.readParamFile(paramFileName);
      if (parameters == null)
      {
        return OpenScenarioCheckerCommon.ERROR_RESULT;
      }
    }    
    OpenScenarioCheckerCommon.printInjectedParameters(parameters);
  
    if (inputFileName != null) {
      result = OpenScenarioCheckerCommon.checkFile(inputFileName, parameters, null, false);
    } else {

      File inputDirectoryFile = new File(inputDirectoryName);
      if (!inputDirectoryFile.exists() || !inputDirectoryFile.isDirectory()) {
        System.out.println(
            String.format(
                "'%s' does not exists or is not a directory", inputDirectoryFile.getPath()));
        result = OpenScenarioCheckerCommon.ERROR_RESULT;
      } else {
        List<File> files = OpenScenarioCheckerCommon.getFilesFromDirectory(inputDirectoryFile, null);
        for (File file : files) {
          result =
              OpenScenarioCheckerCommon.checkFile(file.getPath(), parameters, null, false) == 0
                  ? result
                  : OpenScenarioCheckerCommon.ERROR_RESULT;
        }
      }
    }
    return result;
  }

  
  

 

  
}
