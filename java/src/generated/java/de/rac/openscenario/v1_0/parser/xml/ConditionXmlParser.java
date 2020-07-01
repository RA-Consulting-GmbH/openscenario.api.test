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
import de.rac.openscenario.v1_0.api.ConditionEdge;

import de.rac.openscenario.v1_0.impl.ConditionImpl;
import de.rac.openscenario.v1_0.impl.ByValueConditionImpl;
import de.rac.openscenario.v1_0.impl.ByEntityConditionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ConditionXmlParser extends XmlComplexTypeParser<ConditionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ConditionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Condition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Condition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ConditionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ConditionImpl>> result  = new Hashtable<String, IAttributeParser<ConditionImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<ConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__NAME, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setName(parseString(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__NAME, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__NAME, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__DELAY, new IAttributeParser<ConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__DELAY, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setDelay(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__DELAY, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__DELAY, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__CONDITION_EDGE, new IAttributeParser<ConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__CONDITION_EDGE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Enumeration Type
					ConditionEdge result = ConditionEdge.getFromLiteral(attributeValue);
					if (result != null)
					{
						object.setConditionEdge(result);
					}else
					{
						messageLogger.logMessage(new FileContentMessage( "Value '"+attributeValue+"' is not allowed.",ErrorLevel.ERROR, startMarker));
					}
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CONDITION_EDGE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CONDITION_EDGE, endMarker);
				
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
	private class SubElementParser extends XmlChoiceParser<ConditionImpl>{
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
		protected  List<IElementParser<ConditionImpl>> createParserList()
		{
			List<IElementParser<ConditionImpl>> result = new ArrayList<IElementParser<ConditionImpl>>();
			result.add(new SubElementByEntityConditionParser());
			result.add(new SubElementByValueConditionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement byEntityCondition
	 */
	private class SubElementByEntityConditionParser implements IElementParser<ConditionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementByEntityConditionParser()
		{
			super();
			byEntityConditionXmlParser = new ByEntityConditionXmlParser(messageLogger, filename);
		}
		private ByEntityConditionXmlParser byEntityConditionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ConditionImpl object)
		{
			ByEntityConditionImpl byEntityCondition = new ByEntityConditionImpl();
			// Setting the parent
			byEntityCondition.setParent(object);
			byEntityConditionXmlParser.parseElement(indexedElement,parserContext, byEntityCondition);

			object.setByEntityCondition( byEntityCondition);
			
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
				elementName.equals(OscConstants.ELEMENT__BY_ENTITY_CONDITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__BY_ENTITY_CONDITION
					};
		}
	}
	/**
	 * A parser for subelement byValueCondition
	 */
	private class SubElementByValueConditionParser implements IElementParser<ConditionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementByValueConditionParser()
		{
			super();
			byValueConditionXmlParser = new ByValueConditionXmlParser(messageLogger, filename);
		}
		private ByValueConditionXmlParser byValueConditionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ConditionImpl object)
		{
			ByValueConditionImpl byValueCondition = new ByValueConditionImpl();
			// Setting the parent
			byValueCondition.setParent(object);
			byValueConditionXmlParser.parseElement(indexedElement,parserContext, byValueCondition);

			object.setByValueCondition( byValueCondition);
			
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
				elementName.equals(OscConstants.ELEMENT__BY_VALUE_CONDITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__BY_VALUE_CONDITION
					};
		}
	}
}

