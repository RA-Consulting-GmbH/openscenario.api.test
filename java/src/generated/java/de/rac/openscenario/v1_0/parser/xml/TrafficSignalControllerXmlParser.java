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
import de.rac.openscenario.v1_0.api.IPhase;

import de.rac.openscenario.v1_0.impl.TrafficSignalControllerImpl;
import de.rac.openscenario.v1_0.impl.PhaseImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalControllerXmlParser extends XmlComplexTypeParser<TrafficSignalControllerImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public TrafficSignalControllerXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,TrafficSignalControllerImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing TrafficSignalController", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing TrafficSignalController", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<TrafficSignalControllerImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<TrafficSignalControllerImpl>> result  = new Hashtable<String, IAttributeParser<TrafficSignalControllerImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<TrafficSignalControllerImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TrafficSignalControllerImpl object)
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
		result.put(OscConstants.ATTRIBUTE__DELAY, new IAttributeParser<TrafficSignalControllerImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TrafficSignalControllerImpl object)
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
				return 0;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__REFERENCE, new IAttributeParser<TrafficSignalControllerImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TrafficSignalControllerImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__REFERENCE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setReference(parseString(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__REFERENCE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__REFERENCE, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 0;
			}
			
		});
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<TrafficSignalControllerImpl>{
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
		protected  List<IElementParser<TrafficSignalControllerImpl>> createParserList()
		{
			List<IElementParser<TrafficSignalControllerImpl>> result = new ArrayList<IElementParser<TrafficSignalControllerImpl>>();
			result.add(new SubElementPhasesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement phases
	 */
	private class SubElementPhasesParser implements IElementParser<TrafficSignalControllerImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPhasesParser()
		{
			super();
			phaseXmlParser = new PhaseXmlParser(messageLogger, filename);
		}
		private PhaseXmlParser phaseXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TrafficSignalControllerImpl object)
		{
			PhaseImpl phases = new PhaseImpl();
			// Setting the parent
			phases.setParent(object);
			phaseXmlParser.parseElement(indexedElement,parserContext, phases);
			List<IPhase> phasesList = object.getPhases();
			if (phasesList == null)
			{
				phasesList = new ArrayList<IPhase>();
				object.setPhases( phasesList);
			}
			phasesList.add(phases);
			
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
				elementName.equals(OscConstants.ELEMENT__PHASE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PHASE
					};
		}
	}
}

