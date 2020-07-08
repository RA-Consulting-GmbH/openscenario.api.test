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
 
package net.asam.openscenario.v1_0.loader;

import java.io.IOException;
import java.io.InputStream;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;

import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.w3c.dom.Document;
import org.xml.sax.SAXException;
import org.xml.sax.SAXParseException;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.IResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.simple.struct.XmlToSimpleNodeConverter;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.catalog.ICatalogReferenceProvider;
import net.asam.openscenario.v1_0.checker.IScenarioChecker;
import net.asam.openscenario.v1_0.checker.impl.ScenarioCheckerImpl;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;
import net.asam.openscenario.v1_0.parser.xml.OpenScenarioXmlParser;
import net.asam.xml.indexer.PositionIndex;
import net.asam.xml.indexer.grammar.XMLLexer;
import net.asam.xml.indexer.grammar.XMLParser;

/**
 * A loader for a scenario from XML
 * @author Andreas Hege - RA Consulting
 *
 */
public class XmlScenarioLoader implements IScenarioLoader{

	
	private String filename;
	private IResourceLocator resourceLocator;
	/**
	 * Constructor
	 * @param filename symbolic filename of the scenario
	 * @param resourceLocator locator abstracting from storage.
	 */
	protected XmlScenarioLoader(String filename,IResourceLocator resourceLocator) {
		super();
		this.filename = filename;
		this.resourceLocator = resourceLocator;
	}
	
	/**
	 * The resource locator of the loader
	 * @return the resource locator
	 */
	public IResourceLocator getResourceLocator() {
		return resourceLocator;
	}
	
	/**
	 * The filename od the loader
	 * @return the filename
	 */
	public String getFilename() {
		return filename;
	}

	@Override
	public IOpenScenario load(IParserMessageLogger messageLogger) throws ScenarioLoaderException{
			DocumentBuilderFactory factory = DocumentBuilderFactory
					.newInstance();
		try{
			InputStream inputStream = resourceLocator.getInputStream(filename);
			DocumentBuilder dBuilder;
			dBuilder = factory.newDocumentBuilder();
			
			Document doc;
			doc = dBuilder.parse(inputStream);
						
			// antlr indexing
			CharStream stream;
			inputStream = resourceLocator.getInputStream(filename);
			stream = CharStreams.fromStream(inputStream);
			XMLLexer lexer = new XMLLexer(stream);
		    CommonTokenStream tokens = new CommonTokenStream(lexer);
		    XMLParser parser = new XMLParser(tokens);
		    parser.document();
		    PositionIndex positionIndex =  parser.getPositionIndex();
		    // Get simple structure from dom and antlr results
			XmlToSimpleNodeConverter xmlToSimpleNodeConverter = new XmlToSimpleNodeConverter(positionIndex);
			IndexedElement indexedElement = xmlToSimpleNodeConverter.convert(doc);
			// Finally do parsing from dom result
			OpenScenarioXmlParser openScenarioXmlParser = new OpenScenarioXmlParser(
					messageLogger, filename);
			
			OpenScenarioImpl openScenarioImpl = new OpenScenarioImpl();
			ParserContext parserContext = new CatalogReferenceParserContext();
			openScenarioXmlParser.parseElement(indexedElement,parserContext,
					openScenarioImpl);
			OpenScenarioProcessingHelper.resolve(messageLogger,
					openScenarioImpl);
			openScenarioImpl.addAdapter(ICatalogReferenceProvider.class, parserContext);
			openScenarioImpl.addAdapter(IScenarioChecker.class, new ScenarioCheckerImpl());
			return openScenarioImpl;
		}
		catch(ParserConfigurationException | IOException e)
		{
			throw new ScenarioLoaderException("Internal Parser Exception", e);
		}
		catch (SAXParseException e) {
			messageLogger.logMessage(new FileContentMessage(e.getMessage(), ErrorLevel.FATAL, new Textmarker(e.getLineNumber()-1, e.getColumnNumber()-1, filename)));
		}
		catch (SAXException e) {
			throw new ScenarioLoaderException("Severe parser exception", e);
		}
		return null;
	
	}
	
	
	
	
}
