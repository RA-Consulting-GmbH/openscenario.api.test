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

import de.rac.openscenario.v1_0.impl.FogImpl;
import de.rac.openscenario.v1_0.impl.BoundingBoxImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FogImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class FogXmlParser extends XmlComplexTypeParser<FogImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public FogXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,FogImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Fog", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Fog", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<FogImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<FogImpl>> result  = new Hashtable<String, IAttributeParser<FogImpl>>();
		result.put(OscConstants.ATTRIBUTE__VISUAL_RANGE, new IAttributeParser<FogImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, FogImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__VISUAL_RANGE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setVisualRange(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__VISUAL_RANGE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__VISUAL_RANGE, endMarker);
				
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
	private class SubElementParser extends XmlAllParser<FogImpl>{
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
		protected  List<IElementParser<FogImpl>> createParserList()
		{
			List<IElementParser<FogImpl>> result = new ArrayList<IElementParser<FogImpl>>();
			result.add(new SubElementBoundingBoxParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement boundingBox
	 */
	private class SubElementBoundingBoxParser implements IElementParser<FogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementBoundingBoxParser()
		{
			super();
			boundingBoxXmlParser = new BoundingBoxXmlParser(messageLogger, filename);
		}
		private BoundingBoxXmlParser boundingBoxXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,FogImpl object)
		{
			BoundingBoxImpl boundingBox = new BoundingBoxImpl();
			// Setting the parent
			boundingBox.setParent(object);
			boundingBoxXmlParser.parseElement(indexedElement,parserContext, boundingBox);

			object.setBoundingBox( boundingBox);
			
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
				elementName.equals(OscConstants.ELEMENT__BOUNDING_BOX) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__BOUNDING_BOX
					};
		}
	}
}

