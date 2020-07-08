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
import de.rac.openscenario.v1_0.api.IByType;
import de.rac.openscenario.v1_0.api.IEntityRef;

import de.rac.openscenario.v1_0.impl.EntityRefImpl;
import de.rac.openscenario.v1_0.impl.ByTypeImpl;
import de.rac.openscenario.v1_0.impl.SelectedEntitiesImpl;


import de.rac.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SelectedEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SelectedEntitiesXmlParser extends XmlComplexTypeParser<SelectedEntitiesImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public SelectedEntitiesXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,SelectedEntitiesImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing SelectedEntities", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing SelectedEntities", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<SelectedEntitiesImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<SelectedEntitiesImpl>> result  = new Hashtable<String, IAttributeParser<SelectedEntitiesImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<SelectedEntitiesImpl>{
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
		protected  List<IElementParser<SelectedEntitiesImpl>> createParserList()
		{
			List<IElementParser<SelectedEntitiesImpl>> result = new ArrayList<IElementParser<SelectedEntitiesImpl>>();
			result.add(new SubElementEntityRefParser());
			result.add(new SubElementByTypeParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement entityRef
	 */
	private class SubElementEntityRefParser implements IElementParser<SelectedEntitiesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEntityRefParser()
		{
			super();
			entityRefXmlParser = new EntityRefXmlParser(messageLogger, filename);
		}
		private EntityRefXmlParser entityRefXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SelectedEntitiesImpl object)
		{
			EntityRefImpl entityRef = new EntityRefImpl();
			// Setting the parent
			entityRef.setParent(object);
			entityRefXmlParser.parseElement(indexedElement,parserContext, entityRef);
			List<IEntityRef> entityRefList = object.getEntityRef();
			if (entityRefList == null)
			{
				entityRefList = new ArrayList<IEntityRef>();
				object.setEntityRef( entityRefList);
			}
			entityRefList.add(entityRef);
			
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
				elementName.equals(OscConstants.ELEMENT__ENTITY_REF) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENTITY_REF
					};
		}
	}
	/**
	 * A parser for subelement byType
	 */
	private class SubElementByTypeParser implements IElementParser<SelectedEntitiesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementByTypeParser()
		{
			super();
			byTypeXmlParser = new ByTypeXmlParser(messageLogger, filename);
		}
		private ByTypeXmlParser byTypeXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SelectedEntitiesImpl object)
		{
			ByTypeImpl byType = new ByTypeImpl();
			// Setting the parent
			byType.setParent(object);
			byTypeXmlParser.parseElement(indexedElement,parserContext, byType);
			List<IByType> byTypeList = object.getByType();
			if (byTypeList == null)
			{
				byTypeList = new ArrayList<IByType>();
				object.setByType( byTypeList);
			}
			byTypeList.add(byType);
			
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
				elementName.equals(OscConstants.ELEMENT__BY_TYPE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__BY_TYPE
					};
		}
	}
}

