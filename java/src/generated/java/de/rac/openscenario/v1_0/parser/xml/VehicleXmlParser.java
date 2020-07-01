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
import de.rac.openscenario.v1_0.api.VehicleCategory;
import de.rac.openscenario.v1_0.api.IParameterDeclaration;

import de.rac.openscenario.v1_0.impl.VehicleImpl;
import de.rac.openscenario.v1_0.impl.AxlesImpl;
import de.rac.openscenario.v1_0.impl.ParameterDeclarationImpl;
import de.rac.openscenario.v1_0.impl.BoundingBoxImpl;
import de.rac.openscenario.v1_0.impl.PerformanceImpl;
import de.rac.openscenario.v1_0.impl.PropertiesImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class VehicleXmlParser extends XmlComplexTypeParser<VehicleImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public VehicleXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,VehicleImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Vehicle", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Vehicle", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<VehicleImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<VehicleImpl>> result  = new Hashtable<String, IAttributeParser<VehicleImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<VehicleImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, VehicleImpl object)
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
		result.put(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, new IAttributeParser<VehicleImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, VehicleImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Enumeration Type
					VehicleCategory result = VehicleCategory.getFromLiteral(attributeValue);
					if (result != null)
					{
						object.setVehicleCategory(result);
					}else
					{
						messageLogger.logMessage(new FileContentMessage( "Value '"+attributeValue+"' is not allowed.",ErrorLevel.ERROR, startMarker));
					}
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, endMarker);
				
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
	private class SubElementParser extends XmlAllParser<VehicleImpl>{
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
		protected  List<IElementParser<VehicleImpl>> createParserList()
		{
			List<IElementParser<VehicleImpl>> result = new ArrayList<IElementParser<VehicleImpl>>();
			result.add(new WrappedListParser<VehicleImpl>(messageLogger,filename,new SubElementParameterDeclarationsParser(), OscConstants.ELEMENT__PARAMETER_DECLARATIONS) );
			result.add(new SubElementBoundingBoxParser());
			result.add(new SubElementPerformanceParser());
			result.add(new SubElementAxlesParser());
			result.add(new SubElementPropertiesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement parameterDeclarations
	 */
	private class SubElementParameterDeclarationsParser implements IElementParser<VehicleImpl> {
	
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
		public void parse(IndexedElement indexedElement, ParserContext parserContext,VehicleImpl object)
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
	 * A parser for subelement boundingBox
	 */
	private class SubElementBoundingBoxParser implements IElementParser<VehicleImpl> {
	
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
		public void parse(IndexedElement indexedElement, ParserContext parserContext,VehicleImpl object)
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
				elementName.equals(OscConstants.ELEMENT__BOUNDING_BOX) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__BOUNDING_BOX
					};
		}
	}
	/**
	 * A parser for subelement performance
	 */
	private class SubElementPerformanceParser implements IElementParser<VehicleImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPerformanceParser()
		{
			super();
			performanceXmlParser = new PerformanceXmlParser(messageLogger, filename);
		}
		private PerformanceXmlParser performanceXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,VehicleImpl object)
		{
			PerformanceImpl performance = new PerformanceImpl();
			// Setting the parent
			performance.setParent(object);
			performanceXmlParser.parseElement(indexedElement,parserContext, performance);

			object.setPerformance( performance);
			
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
				elementName.equals(OscConstants.ELEMENT__PERFORMANCE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PERFORMANCE
					};
		}
	}
	/**
	 * A parser for subelement axles
	 */
	private class SubElementAxlesParser implements IElementParser<VehicleImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAxlesParser()
		{
			super();
			axlesXmlParser = new AxlesXmlParser(messageLogger, filename);
		}
		private AxlesXmlParser axlesXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,VehicleImpl object)
		{
			AxlesImpl axles = new AxlesImpl();
			// Setting the parent
			axles.setParent(object);
			axlesXmlParser.parseElement(indexedElement,parserContext, axles);

			object.setAxles( axles);
			
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
				elementName.equals(OscConstants.ELEMENT__AXLES) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__AXLES
					};
		}
	}
	/**
	 * A parser for subelement properties
	 */
	private class SubElementPropertiesParser implements IElementParser<VehicleImpl> {
	
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
		public void parse(IndexedElement indexedElement, ParserContext parserContext,VehicleImpl object)
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

