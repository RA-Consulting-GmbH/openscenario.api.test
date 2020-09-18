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
import java.util.List;

import net.asam.openscenario.v1_0.checker.IScenarioChecker;
import net.asam.openscenario.v1_0.checker.IScenarioCheckerFactory;

/**
 * Executable class for checking a bunch of directories. Mostly applied in a Continuous Integration
 * environment with a configuration file that specifies:
 *
 * <ul>
 *   <li>the directories to be checked
 *   <li>the suffixes to be checked
 *   <li>the injected parameters
 *   <li>the IScenarioCheckerFactory class that is additionally applied to the files.
 * </ul>
 *
 * @author Andreas Hege - RA Consulting
 */
public class OpenScenarioCiChecker {

  public static void main(String[] args) {
    int result = mainWrapper(args);
    System.exit(result);
  }

  public static int mainWrapper(String[] args) {

    int result = 0;
    boolean isCommandLineParsable = false;

    OpenScenarioCheckerCommon.printHeader();

    result = OpenScenarioCheckerCommon.checkCommandLineVersion(args);
    if (result == OpenScenarioCheckerCommon.VERSION_RESULT
        || result == OpenScenarioCheckerCommon.ERROR_RESULT) {
      return result;
    }
    String confFileName = null;
    String baseDirectoryName = null;

    if (args.length == 4 && args[0].equals("-conf") && args[2].equals("-d")) {
      confFileName = args[1];
      baseDirectoryName = args[3];
      isCommandLineParsable = true;
    }

    if (!isCommandLineParsable) {
      System.out.println("Usage: [[-conf <confFileName> -d <baseDirectory>]| -v]");
      System.out.println("Options:");
      System.out.println("\t-i  <confFileName> configuration file");
      System.out.println("\t-d  <baseDirectory> base directory for checks");
      System.out.println("\t-v  print program version");
      return OpenScenarioCheckerCommon.USAGE_RESULT;
    }
    // Check the base directory
    File baseDirectoryFile = new File(baseDirectoryName);
    if (!baseDirectoryFile.exists())
    {
      System.out.println(String.format("Base directory '%s' does not exists",baseDirectoryName )); 
      return OpenScenarioCheckerCommon.ERROR_RESULT;
    }
    
    // Read Configuration file
    CiCheckerConfigurationReader reader = new CiCheckerConfigurationReader();
    CiCheckerConfiguration configuration = null;
    try {
      configuration = reader.readConfiguration(new File(confFileName));
    } catch (CiConfigurationException e) {
      System.out.println(e.getMessage());
      return OpenScenarioCheckerCommon.ERROR_RESULT;
    }
    // Configuration is loaded
    OpenScenarioCheckerCommon.printInjectedParameters(configuration.getParameterMap());
    
    IScenarioChecker checker = null;
    // Check for IOpenSceanrioCheckerfactory
    // Load a scenario checker per Reflection
    ClassLoader classLoader = OpenScenarioCheckerCommon.class.getClassLoader();
    String checkerRuleFactoryClassName = configuration.getCheckerRuleFactoryClassName();
    if (checkerRuleFactoryClassName != null && !checkerRuleFactoryClassName.isEmpty()) {
      try {
        @SuppressWarnings("unchecked")
        Class<IScenarioCheckerFactory> aClass =
            (Class<IScenarioCheckerFactory>) classLoader.loadClass(checkerRuleFactoryClassName);
        IScenarioCheckerFactory factory = aClass.newInstance();
        checker = factory.create();

      } catch (ClassNotFoundException | InstantiationException | IllegalAccessException e) {
        System.out.println(
            String.format("Class '%s' cannot be loaded", checkerRuleFactoryClassName));
        return OpenScenarioCheckerCommon.ERROR_RESULT;
      }
    }

    // Now iterate through the directories
    for (String directory : configuration.getDirectoryList()) {
      File inputDirectoryFile = new File(baseDirectoryFile, directory);
      if (!inputDirectoryFile.exists() || !inputDirectoryFile.isDirectory()) {
        System.out.println(
            String.format(
                "'%s' does not exists or is not a directory", inputDirectoryFile.getPath()));
        result = OpenScenarioCheckerCommon.ERROR_RESULT;
      } else {
        List<File> files =
            OpenScenarioCheckerCommon.getFilesFromDirectory(
                inputDirectoryFile, configuration.getSuffixList());
        for (File file : files) {
          result =
              OpenScenarioCheckerCommon.checkFile(file.getPath(), configuration.getParameterMap(), checker)
                      == 0
                  ? result
                  : OpenScenarioCheckerCommon.ERROR_RESULT;
        }
      }
    }

    return result;
  }
}
