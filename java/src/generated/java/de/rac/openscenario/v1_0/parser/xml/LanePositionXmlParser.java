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

import de.rac.openscenario.v1_0.impl.OrientationImpl;
import de.rac.openscenario.v1_0.impl.LanePositionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LanePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LanePositionXmlParser extends XmlComplexTypeParser<LanePositionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public LanePositionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,LanePositionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing LanePosition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing LanePosition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<LanePositionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<LanePositionImpl>> result  = new Hashtable<String, IAttributeParser<LanePositionImpl>>();
		result.put(OscConstants.ATTRIBUTE__ROAD_ID, new IAttributeParser<LanePositionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, LanePositionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__ROAD_ID, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setRoadId(parseString(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ROAD_ID, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ROAD_ID, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__LANE_ID, new IAttributeParser<LanePositionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, LanePositionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__LANE_ID, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setLaneId(parseString(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__LANE_ID, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__LANE_ID, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__OFFSET, new IAttributeParser<LanePositionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, LanePositionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__OFFSET, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setOffset(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__OFFSET, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__OFFSET, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 0;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__S, new IAttributeParser<LanePositionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, LanePositionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__S, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setS(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__S, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__S, endMarker);
				
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
	private class SubElementParser extends XmlAllParser<LanePositionImpl>{
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
		protected  List<IElementParser<LanePositionImpl>> createParserList()
		{
			List<IElementParser<LanePositionImpl>> result = new ArrayList<IElementParser<LanePositionImpl>>();
			result.add(new SubElementOrientationParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement orientation
	 */
	private class SubElementOrientationParser implements IElementParser<LanePositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementOrientationParser()
		{
			super();
			orientationXmlParser = new OrientationXmlParser(messageLogger, filename);
		}
		private OrientationXmlParser orientationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LanePositionImpl object)
		{
			OrientationImpl orientation = new OrientationImpl();
			// Setting the parent
			orientation.setParent(object);
			orientationXmlParser.parseElement(indexedElement,parserContext, orientation);

			object.setOrientation( orientation);
			
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
				elementName.equals(OscConstants.ELEMENT__ORIENTATION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ORIENTATION
					};
		}
	}
}

