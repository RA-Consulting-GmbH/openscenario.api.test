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

import de.rac.openscenario.v1_0.impl.OverrideParkingBrakeActionImpl;

import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideParkingBrakeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OverrideParkingBrakeActionXmlParser extends XmlComplexTypeParser<OverrideParkingBrakeActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public OverrideParkingBrakeActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,OverrideParkingBrakeActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing OverrideParkingBrakeAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing OverrideParkingBrakeAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<OverrideParkingBrakeActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<OverrideParkingBrakeActionImpl>> result  = new Hashtable<String, IAttributeParser<OverrideParkingBrakeActionImpl>>();
		result.put(OscConstants.ATTRIBUTE__VALUE, new IAttributeParser<OverrideParkingBrakeActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, OverrideParkingBrakeActionImpl object)
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
		result.put(OscConstants.ATTRIBUTE__ACTIVE, new IAttributeParser<OverrideParkingBrakeActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, OverrideParkingBrakeActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__ACTIVE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setActive(parseBoolean(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ACTIVE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ACTIVE, endMarker);
				
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
	private class SubElementParser extends XmlSequenceParser<OverrideParkingBrakeActionImpl>{
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
		protected  List<IElementParser<OverrideParkingBrakeActionImpl>> createParserList()
		{
			List<IElementParser<OverrideParkingBrakeActionImpl>> result = new ArrayList<IElementParser<OverrideParkingBrakeActionImpl>>();
			return result;
		
		}	
	}
}

