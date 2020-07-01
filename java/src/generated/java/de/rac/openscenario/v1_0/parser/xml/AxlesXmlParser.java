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
import de.rac.openscenario.v1_0.api.IAxle;

import de.rac.openscenario.v1_0.impl.AxlesImpl;
import de.rac.openscenario.v1_0.impl.AxleImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AxlesImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class AxlesXmlParser extends XmlComplexTypeParser<AxlesImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public AxlesXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,AxlesImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Axles", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Axles", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<AxlesImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<AxlesImpl>> result  = new Hashtable<String, IAttributeParser<AxlesImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<AxlesImpl>{
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
		protected  List<IElementParser<AxlesImpl>> createParserList()
		{
			List<IElementParser<AxlesImpl>> result = new ArrayList<IElementParser<AxlesImpl>>();
			result.add(new SubElementFrontAxleParser());
			result.add(new SubElementRearAxleParser());
			result.add(new SubElementAdditionalAxlesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement frontAxle
	 */
	private class SubElementFrontAxleParser implements IElementParser<AxlesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFrontAxleParser()
		{
			super();
			axleXmlParser = new AxleXmlParser(messageLogger, filename);
		}
		private AxleXmlParser axleXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,AxlesImpl object)
		{
			AxleImpl frontAxle = new AxleImpl();
			// Setting the parent
			frontAxle.setParent(object);
			axleXmlParser.parseElement(indexedElement,parserContext, frontAxle);

			object.setFrontAxle( frontAxle);
			
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
				elementName.equals(OscConstants.ELEMENT__FRONT_AXLE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FRONT_AXLE
					};
		}
	}
	/**
	 * A parser for subelement rearAxle
	 */
	private class SubElementRearAxleParser implements IElementParser<AxlesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRearAxleParser()
		{
			super();
			axleXmlParser = new AxleXmlParser(messageLogger, filename);
		}
		private AxleXmlParser axleXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,AxlesImpl object)
		{
			AxleImpl rearAxle = new AxleImpl();
			// Setting the parent
			rearAxle.setParent(object);
			axleXmlParser.parseElement(indexedElement,parserContext, rearAxle);

			object.setRearAxle( rearAxle);
			
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
				elementName.equals(OscConstants.ELEMENT__REAR_AXLE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__REAR_AXLE
					};
		}
	}
	/**
	 * A parser for subelement additionalAxles
	 */
	private class SubElementAdditionalAxlesParser implements IElementParser<AxlesImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAdditionalAxlesParser()
		{
			super();
			axleXmlParser = new AxleXmlParser(messageLogger, filename);
		}
		private AxleXmlParser axleXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,AxlesImpl object)
		{
			AxleImpl additionalAxles = new AxleImpl();
			// Setting the parent
			additionalAxles.setParent(object);
			axleXmlParser.parseElement(indexedElement,parserContext, additionalAxles);
			List<IAxle> additionalAxlesList = object.getAdditionalAxles();
			if (additionalAxlesList == null)
			{
				additionalAxlesList = new ArrayList<IAxle>();
				object.setAdditionalAxles( additionalAxlesList);
			}
			additionalAxlesList.add(additionalAxles);
			
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
			return
				elementName.equals(OscConstants.ELEMENT__ADDITIONAL_AXLE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ADDITIONAL_AXLE
					};
		}
	}
}

