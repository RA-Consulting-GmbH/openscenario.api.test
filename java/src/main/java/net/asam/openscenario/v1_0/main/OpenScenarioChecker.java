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
 * 
 *         <ul>
 *         <li>Reading the file
 *         <li>Resolving the parameters
 *         <li>Resolving the catalog references
 *         <li>Checking all type ranges that differ from the ones of the default
 *         type (e.g. positiv doubles)
 *         </ul>
 *
 */
public class OpenScenarioChecker
{
  public static ErrorLevel logLevel = ErrorLevel.INFO;

  public static void main(String[] args)
  {
    Properties properties = new Properties();
    try
    {
      properties.load(OpenScenarioChecker.class.getClassLoader().getResourceAsStream("version.properties"));
    }
    catch (IOException e)
    {
      System.out.println("Internal error Ocuured");
      return;
    }

    String version = properties.getProperty("version");
    // 1. input file
    // 2. Version -v
    // 3. print import errors
    String header = "* ASAM OpenSCENARIO 1.0 Checker (2020) *";
    String headerFillString = getFilledString(header.length(), '*');

    System.out.println(headerFillString);
    System.out.println(header);
    System.out.println(headerFillString);
    boolean isCommandLineParsable = false;

    if (args.length == 1 && args[0].equals("-v"))
    {
      System.out.println("Program version " + version);
      return;
    }
    String inputFileName = null;
    String paramFileName = null;
    if (args.length == 1)
    {
      inputFileName = args[0];
      isCommandLineParsable = true;
    }
    else if (args.length == 3 && args[1].equals("-paramsfile"))
    {
      inputFileName = args[0];
      paramFileName = args[2];
      isCommandLineParsable = true;
    }

    if (!isCommandLineParsable)
    {
      System.out.println("Usage: [inputfile] [-paramsfile injectedParameterFile]|[-v]");
      System.out.println("inputfile\tthe file to be validated");
      System.out.println("injectedParameterFile\ta file with name/value pairs. One line per name/value pair. tab separated");
      System.out.println("-v\tprogram version");
      return;
    }
    Hashtable<String, String> nameValuePairs = new Hashtable<String, String>();
    if (paramFileName != null)
    {
      try
      {
        File paramFile = new File(paramFileName);
        Scanner paramReader = new Scanner(paramFile);
        int counter = 0;
        while (paramReader.hasNextLine())
        {
          String data = paramReader.nextLine();
          counter++;
          if(!data.matches("\\s*$") && !data.matches("\\s*#.*$"))
          {
            Pattern pattern = Pattern.compile("([^\\t]*)\\t([^\\t]*)$");         
            Matcher matcher = pattern.matcher(data);
            if (matcher.find())
            {
              String name = matcher.group(1).trim();
              String value = matcher.group(2).trim();
              if (!name.isEmpty() && !value.isEmpty())
              {
                nameValuePairs.put(name, value);
              }else
              {
                System.out.println("Syntax error in parameter file: line " + counter);
                return;
              }
              
            }else
            {
              System.out.println("Syntax error in parameter file: line " + counter);
              return;
            }
          }
        }
        paramReader.close();
      }
      catch (FileNotFoundException e)
      {
        System.out.println("paramsfile not found");
        return;
      }
      if (!nameValuePairs.isEmpty())
      {
        System.out.println("Used Parameters:");
        for (String key : new TreeSet<String>(nameValuePairs.keySet()))
        {
          System.out.println("\t"+ key + "\t" +  nameValuePairs.get(key));
        }
      }
    }
    if (!new File(inputFileName).exists())
    {
      System.out.println("Scenario file not found '" + inputFileName + "'");
      return;
    }
    System.out.println("Checking '" + inputFileName + "'");

    SimpleMessageLogger catalogMessageLogger = new SimpleMessageLogger(logLevel);

    SimpleMessageLogger messageLogger = new SimpleMessageLogger(logLevel);

    try
    {
      
      executeImportParsing(args[0], messageLogger, catalogMessageLogger,nameValuePairs);
      for (FileContentMessage message : messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(logLevel))
      {
        Textmarker textmarker = message.getTextmarker();
        System.out.println(message.getErrorLevel().toString() + ": " + message.getMessage() + " (" + textmarker.getLine() + ","
            + textmarker.getColumn() + ")");

      }
      List<FileContentMessage> warningMessages = messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.WARNING);

      if (messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty())
      {
        System.out.println("Validation succeeded with 0 errors and " + warningMessages.size() + " warnings.");

      }
      else
      {
        List<FileContentMessage> errorMessages = messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.ERROR);
        System.out
            .println("Validation failed with " + errorMessages.size() + " errors and " + warningMessages.size() + " warnings.");

      }

      List<FileContentMessage> catalogMessages = catalogMessageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(logLevel);
      if (!catalogMessages.isEmpty())
      {
        System.out.println("Info from catalog referencing");
        System.out.println("=============================");
        for (FileContentMessage message : catalogMessages)
        {
          Textmarker textmarker = message.getTextmarker();

          {
            System.out.println(ErrorLevel.INFO.toString()

                + ": (File:" + textmarker.getFilename() + ") " + message.getMessage() + " (" + textmarker.getLine() + ","
                + textmarker.getColumn() + ")");
          }

        }
      }

    }
    catch (

    ScenarioLoaderException e)
    {
      System.err.println(e.getMessage());
    }

  }

  private static OpenScenarioImpl executeImportParsing(String filename, IParserMessageLogger messageLogger,
      IParserMessageLogger catalogMessageLogger, Map<String,String> injectedParameters) throws ScenarioLoaderException
  {

    IScenarioLoaderFactory loaderFactory = new XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);

    IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
    return (OpenScenarioImpl) loader.load(messageLogger,injectedParameters).getAdapter(OpenScenarioImpl.class);

  }

  protected static String getFilledString(int length, char charToFill)
  {
    char[] array = new char[length];
    Arrays.fill(array, charToFill);
    return new String(array);
  }

}
