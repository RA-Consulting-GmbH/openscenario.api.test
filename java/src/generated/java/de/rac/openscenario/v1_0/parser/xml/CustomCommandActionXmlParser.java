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

import de.rac.openscenario.v1_0.impl.CustomCommandActionImpl;

import java.util.Map;
import java.util.Hashtable;
import de.rac.openscenario.v1_0.parser.type.XmlSimpleContentParser;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CustomCommandActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CustomCommandActionXmlParser extends XmlSimpleContentParser<CustomCommandActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public CustomCommandActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,CustomCommandActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing CustomCommandAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing CustomCommandAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<CustomCommandActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<CustomCommandActionImpl>> result  = new Hashtable<String, IAttributeParser<CustomCommandActionImpl>>();
		result.put(OscConstants.ATTRIBUTE__TYPE, new IAttributeParser<CustomCommandActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, CustomCommandActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__TYPE, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setType(parseString(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__TYPE, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__TYPE, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		return result;
	}
	@Override
	protected void setContentProperty(String content, CustomCommandActionImpl object)
	{
		object.setContent(content);
	}
	@Override
	protected boolean isContentRequired()
	{
		return false;
	}
}

