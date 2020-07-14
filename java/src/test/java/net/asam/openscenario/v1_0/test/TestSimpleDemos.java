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

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Assertions;

import com.sun.org.apache.xerces.internal.xni.parser.XMLParseException;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.SimpleMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.FileResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.IScenarioLoaderFactory;
import net.asam.openscenario.loader.MessageLoggerDecorator;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;
import net.asam.openscenario.v1_0.loader.XmlScenarioLoaderFactory;

public class TestSimpleDemos extends TestBase{


	@Test
	public void testSimpleDemo() throws ScenarioLoaderException{
	  
	  // Creating a message Logger to pick up the messages
	  SimpleMessageLogger messageLogger = new SimpleMessageLogger(ErrorLevel.INFO);
      
      // Instantiating the factory
      IScenarioLoaderFactory loaderFactory = 
              new XmlScenarioLoaderFactory(getResourceFile("DoubleLaneChanger.xosc").getAbsolutePath());
      
      // Creating the loader with a file resource locator (we are reading directly from a file system)
      IScenarioLoader loader = loaderFactory.createLoader(new FileResourceLocator());
      
      // Loading the scenario
      IOpenScenario openScenario = (IOpenScenario)  loader.load(messageLogger).getAdapter(IOpenScenario.class);
      
      // Check for errors
      if (!messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty())
      {
          // Browse through the results
          IFileHeader fileHeader = openScenario.getFileHeader();
          System.out.println( "Major Revision :" + fileHeader.getRevMajor());
          System.out.println( "Minor Revision :" + fileHeader.getRevMinor());
      }

		
	}

	
	
}
