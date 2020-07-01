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
import de.rac.openscenario.v1_0.api.Rule;

import de.rac.openscenario.v1_0.impl.TimeToCollisionConditionTargetImpl;
import de.rac.openscenario.v1_0.impl.TimeToCollisionConditionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeToCollisionConditionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimeToCollisionConditionXmlParser extends XmlComplexTypeParser<TimeToCollisionConditionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public TimeToCollisionConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,TimeToCollisionConditionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing TimeToCollisionCondition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing TimeToCollisionCondition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<TimeToCollisionConditionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<TimeToCollisionConditionImpl>> result  = new Hashtable<String, IAttributeParser<TimeToCollisionConditionImpl>>();
		result.put(OscConstants.ATTRIBUTE__VALUE, new IAttributeParser<TimeToCollisionConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TimeToCollisionConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__VALUE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setValue(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__VALUE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__VALUE, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__FREESPACE, new IAttributeParser<TimeToCollisionConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TimeToCollisionConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__FREESPACE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setFreespace(parseBoolean(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__FREESPACE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__FREESPACE, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__ALONG_ROUTE, new IAttributeParser<TimeToCollisionConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TimeToCollisionConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__ALONG_ROUTE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setAlongRoute(parseBoolean(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ALONG_ROUTE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ALONG_ROUTE, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__RULE, new IAttributeParser<TimeToCollisionConditionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TimeToCollisionConditionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__RULE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Enumeration Type
					Rule result = Rule.getFromLiteral(attributeValue);
					if (result != null)
					{
						object.setRule(result);
					}else
					{
						messageLogger.logMessage(new FileContentMessage( "Value '"+attributeValue+"' is not allowed.",ErrorLevel.ERROR, startMarker));
					}
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__RULE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__RULE, endMarker);
				
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
	private class SubElementParser extends XmlAllParser<TimeToCollisionConditionImpl>{
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
		protected  List<IElementParser<TimeToCollisionConditionImpl>> createParserList()
		{
			List<IElementParser<TimeToCollisionConditionImpl>> result = new ArrayList<IElementParser<TimeToCollisionConditionImpl>>();
			result.add(new SubElementTimeToCollisionConditionTargetParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement timeToCollisionConditionTarget
	 */
	private class SubElementTimeToCollisionConditionTargetParser implements IElementParser<TimeToCollisionConditionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTimeToCollisionConditionTargetParser()
		{
			super();
			timeToCollisionConditionTargetXmlParser = new TimeToCollisionConditionTargetXmlParser(messageLogger, filename);
		}
		private TimeToCollisionConditionTargetXmlParser timeToCollisionConditionTargetXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TimeToCollisionConditionImpl object)
		{
			TimeToCollisionConditionTargetImpl timeToCollisionConditionTarget = new TimeToCollisionConditionTargetImpl();
			// Setting the parent
			timeToCollisionConditionTarget.setParent(object);
			timeToCollisionConditionTargetXmlParser.parseElement(indexedElement,parserContext, timeToCollisionConditionTarget);

			object.setTimeToCollisionConditionTarget( timeToCollisionConditionTarget);
			
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
				elementName.equals(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION_TARGET
					};
		}
	}
}

