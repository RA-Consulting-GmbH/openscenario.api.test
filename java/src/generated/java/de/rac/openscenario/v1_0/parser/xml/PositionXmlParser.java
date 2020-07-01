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

import de.rac.openscenario.v1_0.impl.RelativeWorldPositionImpl;
import de.rac.openscenario.v1_0.impl.RelativeLanePositionImpl;
import de.rac.openscenario.v1_0.impl.RoutePositionImpl;
import de.rac.openscenario.v1_0.impl.RelativeRoadPositionImpl;
import de.rac.openscenario.v1_0.impl.WorldPositionImpl;
import de.rac.openscenario.v1_0.impl.LanePositionImpl;
import de.rac.openscenario.v1_0.impl.RelativeObjectPositionImpl;
import de.rac.openscenario.v1_0.impl.PositionImpl;
import de.rac.openscenario.v1_0.impl.RoadPositionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PositionXmlParser extends XmlComplexTypeParser<PositionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public PositionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Position", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Position", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<PositionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<PositionImpl>> result  = new Hashtable<String, IAttributeParser<PositionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<PositionImpl>{
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
		protected  List<IElementParser<PositionImpl>> createParserList()
		{
			List<IElementParser<PositionImpl>> result = new ArrayList<IElementParser<PositionImpl>>();
			result.add(new SubElementWorldPositionParser());
			result.add(new SubElementRelativeWorldPositionParser());
			result.add(new SubElementRelativeObjectPositionParser());
			result.add(new SubElementRoadPositionParser());
			result.add(new SubElementRelativeRoadPositionParser());
			result.add(new SubElementLanePositionParser());
			result.add(new SubElementRelativeLanePositionParser());
			result.add(new SubElementRoutePositionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement worldPosition
	 */
	private class SubElementWorldPositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementWorldPositionParser()
		{
			super();
			worldPositionXmlParser = new WorldPositionXmlParser(messageLogger, filename);
		}
		private WorldPositionXmlParser worldPositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			WorldPositionImpl worldPosition = new WorldPositionImpl();
			// Setting the parent
			worldPosition.setParent(object);
			worldPositionXmlParser.parseElement(indexedElement,parserContext, worldPosition);

			object.setWorldPosition( worldPosition);
			
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
				elementName.equals(OscConstants.ELEMENT__WORLD_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__WORLD_POSITION
					};
		}
	}
	/**
	 * A parser for subelement relativeWorldPosition
	 */
	private class SubElementRelativeWorldPositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRelativeWorldPositionParser()
		{
			super();
			relativeWorldPositionXmlParser = new RelativeWorldPositionXmlParser(messageLogger, filename);
		}
		private RelativeWorldPositionXmlParser relativeWorldPositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			RelativeWorldPositionImpl relativeWorldPosition = new RelativeWorldPositionImpl();
			// Setting the parent
			relativeWorldPosition.setParent(object);
			relativeWorldPositionXmlParser.parseElement(indexedElement,parserContext, relativeWorldPosition);

			object.setRelativeWorldPosition( relativeWorldPosition);
			
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
				elementName.equals(OscConstants.ELEMENT__RELATIVE_WORLD_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__RELATIVE_WORLD_POSITION
					};
		}
	}
	/**
	 * A parser for subelement relativeObjectPosition
	 */
	private class SubElementRelativeObjectPositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRelativeObjectPositionParser()
		{
			super();
			relativeObjectPositionXmlParser = new RelativeObjectPositionXmlParser(messageLogger, filename);
		}
		private RelativeObjectPositionXmlParser relativeObjectPositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			RelativeObjectPositionImpl relativeObjectPosition = new RelativeObjectPositionImpl();
			// Setting the parent
			relativeObjectPosition.setParent(object);
			relativeObjectPositionXmlParser.parseElement(indexedElement,parserContext, relativeObjectPosition);

			object.setRelativeObjectPosition( relativeObjectPosition);
			
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
				elementName.equals(OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION
					};
		}
	}
	/**
	 * A parser for subelement roadPosition
	 */
	private class SubElementRoadPositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRoadPositionParser()
		{
			super();
			roadPositionXmlParser = new RoadPositionXmlParser(messageLogger, filename);
		}
		private RoadPositionXmlParser roadPositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			RoadPositionImpl roadPosition = new RoadPositionImpl();
			// Setting the parent
			roadPosition.setParent(object);
			roadPositionXmlParser.parseElement(indexedElement,parserContext, roadPosition);

			object.setRoadPosition( roadPosition);
			
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
				elementName.equals(OscConstants.ELEMENT__ROAD_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ROAD_POSITION
					};
		}
	}
	/**
	 * A parser for subelement relativeRoadPosition
	 */
	private class SubElementRelativeRoadPositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRelativeRoadPositionParser()
		{
			super();
			relativeRoadPositionXmlParser = new RelativeRoadPositionXmlParser(messageLogger, filename);
		}
		private RelativeRoadPositionXmlParser relativeRoadPositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			RelativeRoadPositionImpl relativeRoadPosition = new RelativeRoadPositionImpl();
			// Setting the parent
			relativeRoadPosition.setParent(object);
			relativeRoadPositionXmlParser.parseElement(indexedElement,parserContext, relativeRoadPosition);

			object.setRelativeRoadPosition( relativeRoadPosition);
			
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
				elementName.equals(OscConstants.ELEMENT__RELATIVE_ROAD_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__RELATIVE_ROAD_POSITION
					};
		}
	}
	/**
	 * A parser for subelement lanePosition
	 */
	private class SubElementLanePositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLanePositionParser()
		{
			super();
			lanePositionXmlParser = new LanePositionXmlParser(messageLogger, filename);
		}
		private LanePositionXmlParser lanePositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			LanePositionImpl lanePosition = new LanePositionImpl();
			// Setting the parent
			lanePosition.setParent(object);
			lanePositionXmlParser.parseElement(indexedElement,parserContext, lanePosition);

			object.setLanePosition( lanePosition);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_POSITION
					};
		}
	}
	/**
	 * A parser for subelement relativeLanePosition
	 */
	private class SubElementRelativeLanePositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRelativeLanePositionParser()
		{
			super();
			relativeLanePositionXmlParser = new RelativeLanePositionXmlParser(messageLogger, filename);
		}
		private RelativeLanePositionXmlParser relativeLanePositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			RelativeLanePositionImpl relativeLanePosition = new RelativeLanePositionImpl();
			// Setting the parent
			relativeLanePosition.setParent(object);
			relativeLanePositionXmlParser.parseElement(indexedElement,parserContext, relativeLanePosition);

			object.setRelativeLanePosition( relativeLanePosition);
			
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
				elementName.equals(OscConstants.ELEMENT__RELATIVE_LANE_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__RELATIVE_LANE_POSITION
					};
		}
	}
	/**
	 * A parser for subelement routePosition
	 */
	private class SubElementRoutePositionParser implements IElementParser<PositionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRoutePositionParser()
		{
			super();
			routePositionXmlParser = new RoutePositionXmlParser(messageLogger, filename);
		}
		private RoutePositionXmlParser routePositionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PositionImpl object)
		{
			RoutePositionImpl routePosition = new RoutePositionImpl();
			// Setting the parent
			routePosition.setParent(object);
			routePositionXmlParser.parseElement(indexedElement,parserContext, routePosition);

			object.setRoutePosition( routePosition);
			
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
				elementName.equals(OscConstants.ELEMENT__ROUTE_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ROUTE_POSITION
					};
		}
	}
}

