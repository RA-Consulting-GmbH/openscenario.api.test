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
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;
import net.asam.openscenario.v1_0.loader.XmlScenarioImportLoaderFactory;

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
  /** */
  public static final int ERROR_RESULT = 1;
  public static final int USAGE_RESULT = 2;
  public static final int VERSION_RESULT = 3;
  public static final int SUCCESS_RESULT = 0;

  public static ErrorLevel logLevel = ErrorLevel.INFO;

  public static void main(String[] args) {
    int result = mainWrapper(args);
    System.exit(result);
  }
  public static int mainWrapper(String[] args) {
         Properties properties = new Properties();
    int result = 0;
    try {
      properties.load(
          OpenScenarioChecker.class.getClassLoader().getResourceAsStream("version.properties"));
    } catch (IOException e) {
      System.out.println("Internal error occured");
      return ERROR_RESULT;
    }

    String version = properties.getProperty("version");
    String header = "* ASAM OpenSCENARIO 1.0 Checker (2020) *";
    String headerFillString = getFilledString(header.length(), '*');

    System.out.println(headerFillString);
    System.out.println(header);
    System.out.println(headerFillString);
    boolean isCommandLineParsable = false;

    if (args.length == 1 && args[0].equals("-v")) {
      System.out.println("Program version " + version);
      return VERSION_RESULT;
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
      return USAGE_RESULT;
    }

    if (inputFileName != null)
    {
      result = checkFile(inputFileName, paramFileName);
    }else
    {
      
      File inputDirectoryFile = new File(inputDirectoryName);
      if (!inputDirectoryFile.exists() || !inputDirectoryFile.isDirectory())
      {
        System.out.println(String.format("'%s' does not exists or is not a directory" , inputDirectoryFile.getPath()));
        result = ERROR_RESULT;
      }else
      {
        List<File> files = getFilesFromDirectory(inputDirectoryFile);
        for (File file : files) {
          result = checkFile(file.getPath(), paramFileName)==0?result: ERROR_RESULT;
        }
      }
    }
    return result;
  }

  /**
   * @param inputFileName the filename of the file to check
   * @param paramFileName the parameter filename
   * @return 0 if success, 1 in the case the file has errors
   */
  private static int checkFile(String inputFileName, String paramFileName) {
    Hashtable<String, String> nameValuePairs = new Hashtable<>();
    int result = 0;
    if (paramFileName != null) {
      try {
        File paramFile = new File(paramFileName);
        @SuppressWarnings("resource") // See closing the scanner
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
                result = ERROR_RESULT;
              }

            } else {
              System.out.println("Syntax error in parameter file: line " + counter);
              result = ERROR_RESULT;
            }
          }
        }
        paramReader.close();
      } catch (FileNotFoundException e) {
        System.out.println("paramsfile not found");
        result = ERROR_RESULT;
      }

      if (!nameValuePairs.isEmpty()) {
        System.out.println("Used Parameters:");
        for (String key : new TreeSet<>(nameValuePairs.keySet())) {
          System.out.println("\t" + key + "\t" + nameValuePairs.get(key));
        }
      }
    }
    if (result == ERROR_RESULT) {
      return result;
    }
    // Parameter File ends

    if (new File(inputFileName).exists()) {
      System.out.println("Checking '" + inputFileName + "'");
      SimpleMessageLogger catalogMessageLogger = new SimpleMessageLogger(logLevel);
      SimpleMessageLogger messageLogger = new SimpleMessageLogger(logLevel);

      try {
        executeImportParsing(inputFileName, messageLogger, catalogMessageLogger, nameValuePairs);
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

        } else {
          List<FileContentMessage> errorMessages =
              messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.ERROR);
          System.out.println(
              "Validation failed with "
                  + errorMessages.size()
                  + " errors and "
                  + warningMessages.size()
                  + " warnings.");
          
          result = ERROR_RESULT;
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
        result =  ERROR_RESULT;
      }
    } else {
      System.out.println("Scenario file not found '" + inputFileName + "'");
      result = ERROR_RESULT;
    }
    return result;
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

  protected static String getFilledString(int length, char charToFill) {
    char[] array = new char[length];
    Arrays.fill(array, charToFill);
    return new String(array);
  }

  /**
   * Get all files recursively (only files not directories)
   * @param directory root directory
   * @return list of files
   */
  protected static List<File> getFilesFromDirectory(File directory) {
    List<File> fileList = new ArrayList<>();
    File[] files = directory.listFiles();
    for (File file : files) {
      if (file.isFile()) {
        fileList.add(file);
      } else {
        fileList.addAll(getFilesFromDirectory(file));
      }
    }
    return fileList;
  }
}
