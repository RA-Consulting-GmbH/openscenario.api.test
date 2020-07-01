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

import de.rac.openscenario.v1_0.impl.PositionOfCurrentEntityImpl;
import de.rac.openscenario.v1_0.impl.PositionInLaneCoordinatesImpl;
import de.rac.openscenario.v1_0.impl.PositionInRoadCoordinatesImpl;
import de.rac.openscenario.v1_0.impl.InRoutePositionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a InRoutePositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class InRoutePositionXmlParser extends XmlComplexTypeParser<InRoutePositionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public InRoutePositionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,InRoutePositionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing InRoutePosition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing InRoutePosition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<InRoutePositionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<InRoutePositionImpl>> result  = new Hashtable<String, IAttributeParser<InRoutePositionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<InRoutePositionImpl>{
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
		protected  List<IElementParser<InRoutePositionImpl>> createParserList()
		{
			List<IElementParser<InRoutePositionImpl>> result = new ArrayList<IElementParser<InRoutePositionImpl>>();
			result.add(new SubElementFromCurrentEntityParser());
			result.add(new SubElementFromRoadCoordinatesParser());
			result.add(new SubElementFromLaneCoordinatesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement fromCurrentEntity
	 */
	private class SubElementFromCurrentEntityParser implements IElementParser<InRoutePositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFromCurrentEntityParser()
		{
			super();
			positionOfCurrentEntityXmlParser = new PositionOfCurrentEntityXmlParser(messageLogger, filename);
		}
		private PositionOfCurrentEntityXmlParser positionOfCurrentEntityXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,InRoutePositionImpl object)
		{
			PositionOfCurrentEntityImpl fromCurrentEntity = new PositionOfCurrentEntityImpl();
			// Setting the parent
			fromCurrentEntity.setParent(object);
			positionOfCurrentEntityXmlParser.parseElement(indexedElement,parserContext, fromCurrentEntity);

			object.setFromCurrentEntity( fromCurrentEntity);
			
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
				elementName.equals(OscConstants.ELEMENT__FROM_CURRENT_ENTITY) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FROM_CURRENT_ENTITY
					};
		}
	}
	/**
	 * A parser for subelement fromRoadCoordinates
	 */
	private class SubElementFromRoadCoordinatesParser implements IElementParser<InRoutePositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFromRoadCoordinatesParser()
		{
			super();
			positionInRoadCoordinatesXmlParser = new PositionInRoadCoordinatesXmlParser(messageLogger, filename);
		}
		private PositionInRoadCoordinatesXmlParser positionInRoadCoordinatesXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,InRoutePositionImpl object)
		{
			PositionInRoadCoordinatesImpl fromRoadCoordinates = new PositionInRoadCoordinatesImpl();
			// Setting the parent
			fromRoadCoordinates.setParent(object);
			positionInRoadCoordinatesXmlParser.parseElement(indexedElement,parserContext, fromRoadCoordinates);

			object.setFromRoadCoordinates( fromRoadCoordinates);
			
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
				elementName.equals(OscConstants.ELEMENT__FROM_ROAD_COORDINATES) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FROM_ROAD_COORDINATES
					};
		}
	}
	/**
	 * A parser for subelement fromLaneCoordinates
	 */
	private class SubElementFromLaneCoordinatesParser implements IElementParser<InRoutePositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFromLaneCoordinatesParser()
		{
			super();
			positionInLaneCoordinatesXmlParser = new PositionInLaneCoordinatesXmlParser(messageLogger, filename);
		}
		private PositionInLaneCoordinatesXmlParser positionInLaneCoordinatesXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,InRoutePositionImpl object)
		{
			PositionInLaneCoordinatesImpl fromLaneCoordinates = new PositionInLaneCoordinatesImpl();
			// Setting the parent
			fromLaneCoordinates.setParent(object);
			positionInLaneCoordinatesXmlParser.parseElement(indexedElement,parserContext, fromLaneCoordinates);

			object.setFromLaneCoordinates( fromLaneCoordinates);
			
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
				elementName.equals(OscConstants.ELEMENT__FROM_LANE_COORDINATES) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FROM_LANE_COORDINATES
					};
		}
	}
}

