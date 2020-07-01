package de.rac.openscenario.v1_0.parser.xml;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.impl.NamedReferenceProxy;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.xml.indexer.Position;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import java.util.List;
import de.rac.openscenario.v1_0.api.IPrivateAction;
import de.rac.openscenario.v1_0.api.IEntity;

import de.rac.openscenario.v1_0.impl.PrivateActionImpl;
import de.rac.openscenario.v1_0.impl.PrivateImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PrivateXmlParser extends XmlComplexTypeParser<PrivateImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public PrivateXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,PrivateImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Private", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Private", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<PrivateImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<PrivateImpl>> result  = new Hashtable<String, IAttributeParser<PrivateImpl>>();
		result.put(OscConstants.ATTRIBUTE__ENTITY_REF, new IAttributeParser<PrivateImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, PrivateImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__ENTITY_REF, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Proxy
					NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (attributeValue);
					proxy.setParent(object);
					object.setEntityRef(proxy);
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ENTITY_REF, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ENTITY_REF, endMarker);
				
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
	private class SubElementParser extends XmlSequenceParser<PrivateImpl>{
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
		protected  List<IElementParser<PrivateImpl>> createParserList()
		{
			List<IElementParser<PrivateImpl>> result = new ArrayList<IElementParser<PrivateImpl>>();
			result.add(new SubElementPrivateActionsParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement privateActions
	 */
	private class SubElementPrivateActionsParser implements IElementParser<PrivateImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPrivateActionsParser()
		{
			super();
			privateActionXmlParser = new PrivateActionXmlParser(messageLogger, filename);
		}
		private PrivateActionXmlParser privateActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PrivateImpl object)
		{
			PrivateActionImpl privateActions = new PrivateActionImpl();
			// Setting the parent
			privateActions.setParent(object);
			privateActionXmlParser.parseElement(indexedElement,parserContext, privateActions);
			List<IPrivateAction> privateActionsList = object.getPrivateActions();
			if (privateActionsList == null)
			{
				privateActionsList = new ArrayList<IPrivateAction>();
				object.setPrivateActions( privateActionsList);
			}
			privateActionsList.add(privateActions);
			
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
				elementName.equals(OscConstants.ELEMENT__PRIVATE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PRIVATE_ACTION
					};
		}
	}
}

