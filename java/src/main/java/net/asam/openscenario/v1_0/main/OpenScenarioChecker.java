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

import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import java.util.Properties;

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
      System.err.println("Internal error Ocuured");
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
    if (args == null || args.length == 0)
    {
      System.out.println("OpenScenarioChecker [option]");
      System.out.println("Options:");
      System.out.println("[input]\tinput file name");
      System.out.println("-v\tprogram version");
      return;
    }
    if (args[0].equals("-v"))
    {
      System.out.println("Program version " + version);
      return;
    }

    System.out.println("Checking '" + args[0] + "'");
    SimpleMessageLogger catalogMessageLogger = new SimpleMessageLogger(logLevel);
    SimpleMessageLogger messageLogger = new SimpleMessageLogger(logLevel);

    try
    {
      executeImportParsing(args[0], messageLogger, catalogMessageLogger);
      for (FileContentMessage message : messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(logLevel))
      {
        Textmarker textmarker = message.getTextmarker();
        System.out.println(message.getErrorLevel().toString() + ": " + message.getMessage() + " (" + textmarker.getLine() + ","
            + textmarker.getColumn() + ")");

      }
      List<FileContentMessage> warningMessages = messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.WARNING);
      
      if (messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty())
      {
        System.out.println("Validation succeeded with 0 errors and "+warningMessages.size()+" warnings.");
        
      }else
      {
        List<FileContentMessage> errorMessages = messageLogger.getMessagesFilteredByErrorLevel(ErrorLevel.ERROR);
        System.out.println("Validation failed with "+errorMessages.size()+" errors and "+warningMessages.size()+" warnings.");
        
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
    catch (ScenarioLoaderException e)
    {
      System.err.println(e.getMessage());
    }

  }

  private static OpenScenarioImpl executeImportParsing(String filename, IParserMessageLogger messageLogger,
      IParserMessageLogger catalogMessageLogger) throws ScenarioLoaderException
  {

    IScenarioLoaderFactory loaderFactory = new XmlScenarioImportLoaderFactory(catalogMessageLogger, filename);

    IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
    return (OpenScenarioImpl) loader.load(messageLogger).getAdapter(OpenScenarioImpl.class);

  }

  protected static String getFilledString(int length, char charToFill)
  {
    char[] array = new char[length];
    Arrays.fill(array, charToFill);
    return new String(array);
  }

}
