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

import de.rac.openscenario.v1_0.impl.ActivateControllerActionImpl;

import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActivateControllerActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ActivateControllerActionXmlParser extends XmlComplexTypeParser<ActivateControllerActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ActivateControllerActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ActivateControllerActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing ActivateControllerAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing ActivateControllerAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ActivateControllerActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ActivateControllerActionImpl>> result  = new Hashtable<String, IAttributeParser<ActivateControllerActionImpl>>();
		result.put(OscConstants.ATTRIBUTE__LATERAL, new IAttributeParser<ActivateControllerActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ActivateControllerActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__LATERAL, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setLateral(parseBoolean(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__LATERAL, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__LATERAL, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 0;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__LONGITUDINAL, new IAttributeParser<ActivateControllerActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ActivateControllerActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__LONGITUDINAL, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setLongitudinal(parseBoolean(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__LONGITUDINAL, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__LONGITUDINAL, endMarker);
				
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
	private class SubElementParser extends XmlSequenceParser<ActivateControllerActionImpl>{
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
		protected  List<IElementParser<ActivateControllerActionImpl>> createParserList()
		{
			List<IElementParser<ActivateControllerActionImpl>> result = new ArrayList<IElementParser<ActivateControllerActionImpl>>();
			return result;
		
		}	
	}
}

