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
package de.rac.openscenario.v1_0.parser.xml;

import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.simple.struct.IndexedElement;
import de.rac.openscenario.parser.ParserContext;
import de.rac.openscenario.v1_0.parser.CatalogReferenceParserContext;
import de.rac.openscenario.common.FileContentMessage;
import de.rac.xml.indexer.Position;
import de.rac.openscenario.common.Textmarker;
import de.rac.openscenario.common.ErrorLevel;
import java.util.List;
import de.rac.openscenario.v1_0.api.IFile;
import de.rac.openscenario.v1_0.api.IProperty;

import de.rac.openscenario.v1_0.impl.PropertiesImpl;
import de.rac.openscenario.v1_0.impl.PropertyImpl;
import de.rac.openscenario.v1_0.impl.FileImpl;


import de.rac.openscenario.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PropertiesXmlParser extends XmlComplexTypeParser<PropertiesImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public PropertiesXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,PropertiesImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Properties", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Properties", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<PropertiesImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<PropertiesImpl>> result  = new Hashtable<String, IAttributeParser<PropertiesImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<PropertiesImpl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super( messageLogger, filename);	
		}
		/*
		 * Creates a list of parser
		 */
		protected  List<IElementParser<PropertiesImpl>> createParserList()
		{
			List<IElementParser<PropertiesImpl>> result = new ArrayList<IElementParser<PropertiesImpl>>();
			result.add(new SubElementPropertiesParser());
			result.add(new SubElementFilesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement properties
	 */
	private class SubElementPropertiesParser implements IElementParser<PropertiesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPropertiesParser()
		{
			super();
			propertyXmlParser = new PropertyXmlParser(messageLogger, filename);
		}
		private PropertyXmlParser propertyXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PropertiesImpl object)
		{
			PropertyImpl properties = new PropertyImpl();
			// Setting the parent
			properties.setParent(object);
			propertyXmlParser.parseElement(indexedElement,parserContext, properties);
			List<IProperty> propertiesList = object.getProperties();
			if (propertiesList == null)
			{
				propertiesList = new ArrayList<IProperty>();
				object.setProperties( propertiesList);
			}
			propertiesList.add(properties);
			
		}

		@Override
		public int getMinOccur()
		{
			return 0;
		}
		
		@Override
		public int getMaxOccur()
		{
			return -1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__PROPERTY) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PROPERTY
					};
		}
	}
	/**
	 * A parser for subelement files
	 */
	private class SubElementFilesParser implements IElementParser<PropertiesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFilesParser()
		{
			super();
			fileXmlParser = new FileXmlParser(messageLogger, filename);
		}
		private FileXmlParser fileXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PropertiesImpl object)
		{
			FileImpl files = new FileImpl();
			// Setting the parent
			files.setParent(object);
			fileXmlParser.parseElement(indexedElement,parserContext, files);
			List<IFile> filesList = object.getFiles();
			if (filesList == null)
			{
				filesList = new ArrayList<IFile>();
				object.setFiles( filesList);
			}
			filesList.add(files);
			
		}

		@Override
		public int getMinOccur()
		{
			return 0;
		}
		
		@Override
		public int getMaxOccur()
		{
			return -1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__FILE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FILE
					};
		}
	}
}

