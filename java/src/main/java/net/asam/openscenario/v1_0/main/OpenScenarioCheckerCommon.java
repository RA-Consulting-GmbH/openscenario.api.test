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
import java.io.FileFilter;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import java.util.Scanner;
import java.util.TreeSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.SimpleMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.checker.IScenarioChecker;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;
import net.asam.openscenario.v1_0.loader.XmlScenarioImportLoaderFactory;

/**
 * Common functions for the standalone checker and for the CI-Checker
 *
 * @author Andreas Hege - RA Consulting
 */
public class OpenScenarioCheckerCommon {

  public static final int ERROR_RESULT = 1;
  public static final int USAGE_RESULT = 2;
  public static final int VERSION_RESULT = 3;
  public static final int SUCCESS_RESULT = 0;
  public static ErrorLevel logLevel = ErrorLevel.INFO;

  /**
   * Prints the header of the checker
   * @param header the header to print.
   */
  public static void printHeader(String header) {

 
    String headerFillString = getFilledString(header.length(), '*');

    System.out.println(headerFillString);
    System.out.println(header);
    System.out.println(headerFillString);
  }
  /**
   * Prints the version if arg is -v
   *
   * @param args command line args
   * @return VERSION_RESULT, if command line specifies -v, SUCCESS_RESULT if -v is not specified and
   *     ERROR_RESULT in the case a internal error occured.
   */
  public static int checkCommandLineVersion(String[] args) {
    Properties properties = new Properties();

    try {
      properties.load(
          OpenScenarioChecker.class.getClassLoader().getResourceAsStream("version.properties"));
    } catch (IOException e) {
      System.out.println("Internal error occured");
      return OpenScenarioCheckerCommon.ERROR_RESULT;
    }

    String version = properties.getProperty("version");
    if (args.length == 1 && args[0].equals("-v")) {
      System.out.println("Program version " + version);
      return OpenScenarioCheckerCommon.VERSION_RESULT;
    }
    return OpenScenarioCheckerCommon.SUCCESS_RESULT;
  }

  protected static String getFilledString(int length, char charToFill) {
    char[] array = new char[length];
    Arrays.fill(array, charToFill);
    return new String(array);
  }

  /**
   * @param inputFileName the filename of the file to check
   * @param nameValuePairs the parameters
   * @param checker A checker for additional checks
   * @param handleWarningsAsError Indicates if warnings should be handled as errors
   * @return 0 if success, 1 in the case the file has errors
   */
  public static int checkFile(String inputFileName, Map<String, String> nameValuePairs, IScenarioChecker checker, boolean handleWarningsAsError) {
    int result = 0;
    
    if (new File(inputFileName).exists()) {
      System.out.println("Checking '" + inputFileName + "'");
      SimpleMessageLogger catalogMessageLogger = new SimpleMessageLogger(logLevel);
      SimpleMessageLogger messageLogger = new SimpleMessageLogger(logLevel);

      try {
        OpenScenarioImpl executeImportParsing =
            executeImportParsing(
                inputFileName, messageLogger, catalogMessageLogger, nameValuePairs);
        if (checker != null)
        {
          checker.checkScenario(messageLogger, executeImportParsing);
        }

        for (FileContentMessage message :
            messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(logLevel)) {
          Textmarker textmarker = message.getTextmarker();
          System.out.println(
              message.getErrorLevel().toString()
                  + ": "
                  + message.getMessage()
                  + " ("
                  + textmarker.getLine()
                  + ","
                  + textmarker.getColumn()
                  + ")");
        }
        List<FileContentMessage> warningMessages =
            messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.WARNING);

        if (messageLogger
            .getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR)
            .isEmpty()) {
          System.out.println(
              "Validation succeeded with 0 errors and " + warningMessages.size() + " warnings.");
          if (!warningMessages.isEmpty() && handleWarningsAsError)
          {
            result = OpenScenarioCheckerCommon.ERROR_RESULT;
          }

        } else {
          List<FileContentMessage> errorMessages =
              messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.ERROR);
          System.out.println(
              "Validation failed with "
                  + errorMessages.size()
                  + " errors and "
                  + warningMessages.size()
                  + " warnings.");

          result = OpenScenarioCheckerCommon.ERROR_RESULT;
        }
       
        System.out.println("");

        List<FileContentMessage> catalogMessages =
            catalogMessageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR);
        if (!catalogMessages.isEmpty()) {
          System.out.println("Info from catalog referencing");
          System.out.println("=============================");
          for (FileContentMessage message : catalogMessages) {
            Textmarker textmarker = message.getTextmarker();

            {
              System.out.println(
                  ErrorLevel.INFO.toString()
                      + ": (File:"
                      + textmarker.getFilename()
                      + ") "
                      + message.getMessage()
                      + " ("
                      + textmarker.getLine()
                      + ","
                      + textmarker.getColumn()
                      + ")");
            }
          }
        }

      } catch (ScenarioLoaderException e) {
        System.err.println(e.getMessage());
        result = OpenScenarioCheckerCommon.ERROR_RESULT;
      }
    } else {
      System.out.println("Scenario file not found '" + inputFileName + "'");
      result = OpenScenarioCheckerCommon.ERROR_RESULT;
    }
    return result;
  }
  /**
   * Prints the parameters if not empty
   * @param nameValuePairs parameters
   */
  public static void printInjectedParameters(Map<String, String> nameValuePairs) {
    if (nameValuePairs != null && !nameValuePairs.isEmpty()) {
        System.out.println("Used Parameters:");
        for (String key : new TreeSet<>(nameValuePairs.keySet())) {
          System.out.println("\t" + key + "\t" + nameValuePairs.get(key));
        }
      }
  }

  private static OpenScenarioImpl executeImportParsing(
      String filename,
      IParserMessageLogger messageLogger,
      IParserMessageLogger catalogMessageLogger,
      Map<String, String> injectedParameters)
      throws ScenarioLoaderException {

    IScenarioLoaderFactory loaderFactory =
        new XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);

    IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
    return (OpenScenarioImpl)
        loader.load(messageLogger, injectedParameters).getAdapter(OpenScenarioImpl.class);
  }

  /**
   * Get all files recursively (only files not directories)
   *
   * @param directory root directory
   * @param filterList list of suffixes for files that are accepted
   * @return list of files
   */
  protected static List<File> getFilesFromDirectory(File directory, List<String> filterList) {
    List<File> fileList = new ArrayList<>();

    File[] files;
    if (filterList == null || filterList.isEmpty()) {
      files = directory.listFiles();
    } else {
      files =
          directory.listFiles(
              new FileFilter() {

                @Override
                public boolean accept(File pathname) {
                  if (pathname.isDirectory()) {
                    return true;
                  }
                  for (String suffix : filterList) {
                    if (pathname.getName().endsWith(suffix)) {
                      return true;
                    }
                  }

                  return false;
                }
              });
    }
    for (File file : files) {
      if (file.isFile()) {
        fileList.add(file);
      } else {
        fileList.addAll(getFilesFromDirectory(file,filterList));
      }
    }
    return fileList;
  }
  
  /**
   * Reading the parameters
   * @param paramFileName the filename
   * @return the parameters or null in case of error
   */
  public static Map<String,String> readParamFile(String paramFileName)
  { Hashtable<String, String> nameValuePairs = new Hashtable<>();
    try {
      File paramFile = new File(paramFileName);
      Scanner paramReader = new Scanner(paramFile);
      int counter = 0;
      while (paramReader.hasNextLine()) {
        String data = paramReader.nextLine();
        counter++;
        if (!data.matches("\\s*$") && !data.matches("\\s*#.*$")) {
          Pattern pattern = Pattern.compile("([^\\t]*)\\t([^\\t]*)$");
          Matcher matcher = pattern.matcher(data);
          if (matcher.find()) {
            String name = matcher.group(1).trim();
            String value = matcher.group(2).trim();
            if (!name.isEmpty() && !value.isEmpty()) {
              nameValuePairs.put(name, value);
            } else {
              System.out.println("Syntax error in parameter file: line " + counter);
              return null;
            }

          } else {
            System.out.println("Syntax error in parameter file: line " + counter);
            return null;
          }
        }
      }
      paramReader.close();
    } catch (FileNotFoundException e) {
      System.out.println("Paramsfile not found");
      return null;
    }
    
    return nameValuePairs;
  }
}
