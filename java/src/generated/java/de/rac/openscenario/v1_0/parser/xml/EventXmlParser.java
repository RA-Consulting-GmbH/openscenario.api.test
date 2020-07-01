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
import de.rac.openscenario.v1_0.api.IAction;
import de.rac.openscenario.v1_0.api.Priority;

import de.rac.openscenario.v1_0.impl.TriggerImpl;
import de.rac.openscenario.v1_0.impl.ActionImpl;
import de.rac.openscenario.v1_0.impl.EventImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EventImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EventXmlParser extends XmlComplexTypeParser<EventImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public EventXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,EventImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Event", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Event", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<EventImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<EventImpl>> result  = new Hashtable<String, IAttributeParser<EventImpl>>();
		result.put(OscConstants.ATTRIBUTE__PRIORITY, new IAttributeParser<EventImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, EventImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__PRIORITY, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Enumeration Type
					Priority result = Priority.getFromLiteral(attributeValue);
					if (result != null)
					{
						object.setPriority(result);
					}else
					{
						messageLogger.logMessage(new FileContentMessage( "Value '"+attributeValue+"' is not allowed.",ErrorLevel.ERROR, startMarker));
					}
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__PRIORITY, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__PRIORITY, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, new IAttributeParser<EventImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, EventImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setMaximumExecutionCount(parseUnsignedInt(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 0;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<EventImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, EventImpl object)
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
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<EventImpl>{
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
		protected  List<IElementParser<EventImpl>> createParserList()
		{
			List<IElementParser<EventImpl>> result = new ArrayList<IElementParser<EventImpl>>();
			result.add(new SubElementActionsParser());
			result.add(new SubElementStartTriggerParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement actions
	 */
	private class SubElementActionsParser implements IElementParser<EventImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementActionsParser()
		{
			super();
			actionXmlParser = new ActionXmlParser(messageLogger, filename);
		}
		private ActionXmlParser actionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EventImpl object)
		{
			ActionImpl actions = new ActionImpl();
			// Setting the parent
			actions.setParent(object);
			actionXmlParser.parseElement(indexedElement,parserContext, actions);
			List<IAction> actionsList = object.getActions();
			if (actionsList == null)
			{
				actionsList = new ArrayList<IAction>();
				object.setActions( actionsList);
			}
			actionsList.add(actions);
			
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
				elementName.equals(OscConstants.ELEMENT__ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ACTION
					};
		}
	}
	/**
	 * A parser for subelement startTrigger
	 */
	private class SubElementStartTriggerParser implements IElementParser<EventImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementStartTriggerParser()
		{
			super();
			triggerXmlParser = new TriggerXmlParser(messageLogger, filename);
		}
		private TriggerXmlParser triggerXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EventImpl object)
		{
			TriggerImpl startTrigger = new TriggerImpl();
			// Setting the parent
			startTrigger.setParent(object);
			triggerXmlParser.parseElement(indexedElement,parserContext, startTrigger);

			object.setStartTrigger( startTrigger);
			
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
				elementName.equals(OscConstants.ELEMENT__START_TRIGGER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__START_TRIGGER
					};
		}
	}
}

