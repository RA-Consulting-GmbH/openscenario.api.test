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

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.xml.indexer.Position;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import java.util.List;

import de.rac.openscenario.v1_0.impl.EntityConditionImpl;
import de.rac.openscenario.v1_0.impl.ByEntityConditionImpl;
import de.rac.openscenario.v1_0.impl.TriggeringEntitiesImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ByEntityConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ByEntityConditionXmlParser extends XmlComplexTypeParser<ByEntityConditionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ByEntityConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ByEntityConditionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing ByEntityCondition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing ByEntityCondition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ByEntityConditionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ByEntityConditionImpl>> result  = new Hashtable<String, IAttributeParser<ByEntityConditionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<ByEntityConditionImpl>{
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
		protected  List<IElementParser<ByEntityConditionImpl>> createParserList()
		{
			List<IElementParser<ByEntityConditionImpl>> result = new ArrayList<IElementParser<ByEntityConditionImpl>>();
			result.add(new SubElementTriggeringEntitiesParser());
			result.add(new SubElementEntityConditionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement triggeringEntities
	 */
	private class SubElementTriggeringEntitiesParser implements IElementParser<ByEntityConditionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTriggeringEntitiesParser()
		{
			super();
			triggeringEntitiesXmlParser = new TriggeringEntitiesXmlParser(messageLogger, filename);
		}
		private TriggeringEntitiesXmlParser triggeringEntitiesXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ByEntityConditionImpl object)
		{
			TriggeringEntitiesImpl triggeringEntities = new TriggeringEntitiesImpl();
			// Setting the parent
			triggeringEntities.setParent(object);
			triggeringEntitiesXmlParser.parseElement(indexedElement,parserContext, triggeringEntities);

			object.setTriggeringEntities( triggeringEntities);
			
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
				elementName.equals(OscConstants.ELEMENT__TRIGGERING_ENTITIES) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRIGGERING_ENTITIES
					};
		}
	}
	/**
	 * A parser for subelement entityCondition
	 */
	private class SubElementEntityConditionParser implements IElementParser<ByEntityConditionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEntityConditionParser()
		{
			super();
			entityConditionXmlParser = new EntityConditionXmlParser(messageLogger, filename);
		}
		private EntityConditionXmlParser entityConditionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ByEntityConditionImpl object)
		{
			EntityConditionImpl entityCondition = new EntityConditionImpl();
			// Setting the parent
			entityCondition.setParent(object);
			entityConditionXmlParser.parseElement(indexedElement,parserContext, entityCondition);

			object.setEntityCondition( entityCondition);
			
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
				elementName.equals(OscConstants.ELEMENT__ENTITY_CONDITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENTITY_CONDITION
					};
		}
	}
}

