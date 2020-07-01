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

import de.rac.openscenario.v1_0.impl.SunImpl;

import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SunImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SunXmlParser extends XmlComplexTypeParser<SunImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public SunXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,SunImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Sun", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Sun", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<SunImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<SunImpl>> result  = new Hashtable<String, IAttributeParser<SunImpl>>();
		result.put(OscConstants.ATTRIBUTE__INTENSITY, new IAttributeParser<SunImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, SunImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__INTENSITY, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setIntensity(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__INTENSITY, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__INTENSITY, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__AZIMUTH, new IAttributeParser<SunImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, SunImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__AZIMUTH, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setAzimuth(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__AZIMUTH, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__AZIMUTH, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__ELEVATION, new IAttributeParser<SunImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, SunImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__ELEVATION, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setElevation(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ELEVATION, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ELEVATION, endMarker);
				
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
	private class SubElementParser extends XmlSequenceParser<SunImpl>{
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
		protected  List<IElementParser<SunImpl>> createParserList()
		{
			List<IElementParser<SunImpl>> result = new ArrayList<IElementParser<SunImpl>>();
			return result;
		
		}	
	}
}

