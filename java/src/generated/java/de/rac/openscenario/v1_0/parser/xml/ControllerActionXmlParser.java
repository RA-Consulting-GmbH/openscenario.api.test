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

import de.rac.openscenario.v1_0.impl.AssignControllerActionImpl;
import de.rac.openscenario.v1_0.impl.ControllerActionImpl;
import de.rac.openscenario.v1_0.impl.OverrideControllerValueActionImpl;


import de.rac.openscenario.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControllerActionXmlParser extends XmlComplexTypeParser<ControllerActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ControllerActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ControllerActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing ControllerAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing ControllerAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ControllerActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ControllerActionImpl>> result  = new Hashtable<String, IAttributeParser<ControllerActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<ControllerActionImpl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super(messageLogger,filename);	
		}
		/*
		 * Creates a list of parser
		 */
		protected  List<IElementParser<ControllerActionImpl>> createParserList()
		{
			List<IElementParser<ControllerActionImpl>> result = new ArrayList<IElementParser<ControllerActionImpl>>();
			result.add(new SubElementAssignControllerActionParser());
			result.add(new SubElementOverrideControllerValueActionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement assignControllerAction
	 */
	private class SubElementAssignControllerActionParser implements IElementParser<ControllerActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAssignControllerActionParser()
		{
			super();
			assignControllerActionXmlParser = new AssignControllerActionXmlParser(messageLogger, filename);
		}
		private AssignControllerActionXmlParser assignControllerActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ControllerActionImpl object)
		{
			AssignControllerActionImpl assignControllerAction = new AssignControllerActionImpl();
			// Setting the parent
			assignControllerAction.setParent(object);
			assignControllerActionXmlParser.parseElement(indexedElement,parserContext, assignControllerAction);

			object.setAssignControllerAction( assignControllerAction);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
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
				elementName.equals(OscConstants.ELEMENT__ASSIGN_CONTROLLER_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ASSIGN_CONTROLLER_ACTION
					};
		}
	}
	/**
	 * A parser for subelement overrideControllerValueAction
	 */
	private class SubElementOverrideControllerValueActionParser implements IElementParser<ControllerActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementOverrideControllerValueActionParser()
		{
			super();
			overrideControllerValueActionXmlParser = new OverrideControllerValueActionXmlParser(messageLogger, filename);
		}
		private OverrideControllerValueActionXmlParser overrideControllerValueActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ControllerActionImpl object)
		{
			OverrideControllerValueActionImpl overrideControllerValueAction = new OverrideControllerValueActionImpl();
			// Setting the parent
			overrideControllerValueAction.setParent(object);
			overrideControllerValueActionXmlParser.parseElement(indexedElement,parserContext, overrideControllerValueAction);

			object.setOverrideControllerValueAction( overrideControllerValueAction);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
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
				elementName.equals(OscConstants.ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION
					};
		}
	}
}

