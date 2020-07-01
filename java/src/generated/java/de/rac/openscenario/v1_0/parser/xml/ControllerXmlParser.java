package de.rac.openscenario.v1_0.parser.xml;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.xml.indexer.Position;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.parser.WrappedListParser;
import java.util.List;
import de.rac.openscenario.v1_0.api.IParameterDeclaration;

import de.rac.openscenario.v1_0.impl.ControllerImpl;
import de.rac.openscenario.v1_0.impl.ParameterDeclarationImpl;
import de.rac.openscenario.v1_0.impl.PropertiesImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ControllerImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControllerXmlParser extends XmlComplexTypeParser<ControllerImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ControllerXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ControllerImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Controller", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Controller", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ControllerImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ControllerImpl>> result  = new Hashtable<String, IAttributeParser<ControllerImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<ControllerImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ControllerImpl object)
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
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<ControllerImpl>{
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
		protected  List<IElementParser<ControllerImpl>> createParserList()
		{
			List<IElementParser<ControllerImpl>> result = new ArrayList<IElementParser<ControllerImpl>>();
			result.add(new WrappedListParser<ControllerImpl>(messageLogger,filename,new SubElementParameterDeclarationsParser(), OscConstants.ELEMENT__PARAMETER_DECLARATIONS) );
			result.add(new SubElementPropertiesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement parameterDeclarations
	 */
	private class SubElementParameterDeclarationsParser implements IElementParser<ControllerImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementParameterDeclarationsParser()
		{
			super();
			parameterDeclarationXmlParser = new ParameterDeclarationXmlParser(messageLogger, filename);
		}
		private ParameterDeclarationXmlParser parameterDeclarationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ControllerImpl object)
		{
			ParameterDeclarationImpl parameterDeclarations = new ParameterDeclarationImpl();
			// Setting the parent
			parameterDeclarations.setParent(object);
			parameterDeclarationXmlParser.parseElement(indexedElement,parserContext, parameterDeclarations);
			List<IParameterDeclaration> parameterDeclarationsList = object.getParameterDeclarations();
			if (parameterDeclarationsList == null)
			{
				parameterDeclarationsList = new ArrayList<IParameterDeclaration>();
				object.setParameterDeclarations( parameterDeclarationsList);
			}
			parameterDeclarationsList.add(parameterDeclarations);
			
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
			return elementName.equals(OscConstants.ELEMENT__PARAMETER_DECLARATION);			
		}
		
		@Override
		public String[] getExpectedTagNames()
		{			return new String[]{OscConstants.ELEMENT__PARAMETER_DECLARATION};
		}
	}
	/**
	 * A parser for subelement properties
	 */
	private class SubElementPropertiesParser implements IElementParser<ControllerImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPropertiesParser()
		{
			super();
			propertiesXmlParser = new PropertiesXmlParser(messageLogger, filename);
		}
		private PropertiesXmlParser propertiesXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ControllerImpl object)
		{
			PropertiesImpl properties = new PropertiesImpl();
			// Setting the parent
			properties.setParent(object);
			propertiesXmlParser.parseElement(indexedElement,parserContext, properties);

			object.setProperties( properties);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
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
				elementName.equals(OscConstants.ELEMENT__PROPERTIES) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PROPERTIES
					};
		}
	}
}

