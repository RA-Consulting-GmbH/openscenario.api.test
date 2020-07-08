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

import de.rac.openscenario.v1_0.impl.EnvironmentActionImpl;
import de.rac.openscenario.v1_0.impl.EnvironmentImpl;
import de.rac.openscenario.v1_0.impl.CatalogReferenceImpl;


import de.rac.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EnvironmentActionXmlParser extends XmlComplexTypeParser<EnvironmentActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public EnvironmentActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,EnvironmentActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing EnvironmentAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing EnvironmentAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<EnvironmentActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<EnvironmentActionImpl>> result  = new Hashtable<String, IAttributeParser<EnvironmentActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<EnvironmentActionImpl>{
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
		protected  List<IElementParser<EnvironmentActionImpl>> createParserList()
		{
			List<IElementParser<EnvironmentActionImpl>> result = new ArrayList<IElementParser<EnvironmentActionImpl>>();
			result.add(new SubElementEnvironmentParser());
			result.add(new SubElementCatalogReferenceParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement environment
	 */
	private class SubElementEnvironmentParser implements IElementParser<EnvironmentActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEnvironmentParser()
		{
			super();
			environmentXmlParser = new EnvironmentXmlParser(messageLogger, filename);
		}
		private EnvironmentXmlParser environmentXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EnvironmentActionImpl object)
		{
			EnvironmentImpl environment = new EnvironmentImpl();
			// Setting the parent
			environment.setParent(object);
			environmentXmlParser.parseElement(indexedElement,parserContext, environment);

			object.setEnvironment( environment);
			
		}

		@Override
		public int getMinOccur()
		{
			return 0;
		}
		
		@Override
		public int getMaxOccur()
		{
			return 1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__ENVIRONMENT) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENVIRONMENT
					};
		}
	}
	/**
	 * A parser for subelement catalogReference
	 */
	private class SubElementCatalogReferenceParser implements IElementParser<EnvironmentActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementCatalogReferenceParser()
		{
			super();
			catalogReferenceXmlParser = new CatalogReferenceXmlParser(messageLogger, filename);
		}
		private CatalogReferenceXmlParser catalogReferenceXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EnvironmentActionImpl object)
		{
			CatalogReferenceImpl catalogReference = new CatalogReferenceImpl();
			// Setting the parent
			catalogReference.setParent(object);
			catalogReferenceXmlParser.parseElement(indexedElement,parserContext, catalogReference);

			object.setCatalogReference( catalogReference);
			((CatalogReferenceParserContext)parserContext).addCatalogReference(catalogReference);
			
		}

		@Override
		public int getMinOccur()
		{
			return 0;
		}
		
		@Override
		public int getMaxOccur()
		{
			return 1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__CATALOG_REFERENCE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CATALOG_REFERENCE
					};
		}
	}
}

