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
import de.rac.openscenario.v1_0.api.IEntityRef;
import de.rac.openscenario.v1_0.api.TriggeringEntitiesRule;

import de.rac.openscenario.v1_0.impl.EntityRefImpl;
import de.rac.openscenario.v1_0.impl.TriggeringEntitiesImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggeringEntitiesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TriggeringEntitiesXmlParser extends XmlComplexTypeParser<TriggeringEntitiesImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public TriggeringEntitiesXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,TriggeringEntitiesImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing TriggeringEntities", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing TriggeringEntities", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<TriggeringEntitiesImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<TriggeringEntitiesImpl>> result  = new Hashtable<String, IAttributeParser<TriggeringEntitiesImpl>>();
		result.put(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, new IAttributeParser<TriggeringEntitiesImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TriggeringEntitiesImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Enumeration Type
					TriggeringEntitiesRule result = TriggeringEntitiesRule.getFromLiteral(attributeValue);
					if (result != null)
					{
						object.setTriggeringEntitiesRule(result);
					}else
					{
						messageLogger.logMessage(new FileContentMessage( "Value '"+attributeValue+"' is not allowed.",ErrorLevel.ERROR, startMarker));
					}
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<TriggeringEntitiesImpl>{
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
		protected  List<IElementParser<TriggeringEntitiesImpl>> createParserList()
		{
			List<IElementParser<TriggeringEntitiesImpl>> result = new ArrayList<IElementParser<TriggeringEntitiesImpl>>();
			result.add(new SubElementEntityRefsParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement entityRefs
	 */
	private class SubElementEntityRefsParser implements IElementParser<TriggeringEntitiesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEntityRefsParser()
		{
			super();
			entityRefXmlParser = new EntityRefXmlParser(messageLogger, filename);
		}
		private EntityRefXmlParser entityRefXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TriggeringEntitiesImpl object)
		{
			EntityRefImpl entityRefs = new EntityRefImpl();
			// Setting the parent
			entityRefs.setParent(object);
			entityRefXmlParser.parseElement(indexedElement,parserContext, entityRefs);
			List<IEntityRef> entityRefsList = object.getEntityRefs();
			if (entityRefsList == null)
			{
				entityRefsList = new ArrayList<IEntityRef>();
				object.setEntityRefs( entityRefsList);
			}
			entityRefsList.add(entityRefs);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
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
}

