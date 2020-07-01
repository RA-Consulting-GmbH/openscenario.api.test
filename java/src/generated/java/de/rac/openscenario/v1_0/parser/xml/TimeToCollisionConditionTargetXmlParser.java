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

import de.rac.openscenario.v1_0.impl.EntityRefImpl;
import de.rac.openscenario.v1_0.impl.TimeToCollisionConditionTargetImpl;
import de.rac.openscenario.v1_0.impl.PositionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimeToCollisionConditionTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimeToCollisionConditionTargetXmlParser extends XmlComplexTypeParser<TimeToCollisionConditionTargetImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public TimeToCollisionConditionTargetXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,TimeToCollisionConditionTargetImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing TimeToCollisionConditionTarget", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing TimeToCollisionConditionTarget", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<TimeToCollisionConditionTargetImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<TimeToCollisionConditionTargetImpl>> result  = new Hashtable<String, IAttributeParser<TimeToCollisionConditionTargetImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<TimeToCollisionConditionTargetImpl>{
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
		protected  List<IElementParser<TimeToCollisionConditionTargetImpl>> createParserList()
		{
			List<IElementParser<TimeToCollisionConditionTargetImpl>> result = new ArrayList<IElementParser<TimeToCollisionConditionTargetImpl>>();
			result.add(new SubElementPositionParser());
			result.add(new SubElementEntityRefParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement position
	 */
	private class SubElementPositionParser implements IElementParser<TimeToCollisionConditionTargetImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPositionParser()
		{
			super();
			positionXmlParser = new PositionXmlParser(messageLogger, filename);
		}
		private PositionXmlParser positionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TimeToCollisionConditionTargetImpl object)
		{
			PositionImpl position = new PositionImpl();
			// Setting the parent
			position.setParent(object);
			positionXmlParser.parseElement(indexedElement,parserContext, position);

			object.setPosition( position);
			
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
				elementName.equals(OscConstants.ELEMENT__POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__POSITION
					};
		}
	}
	/**
	 * A parser for subelement entityRef
	 */
	private class SubElementEntityRefParser implements IElementParser<TimeToCollisionConditionTargetImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEntityRefParser()
		{
			super();
			entityRefXmlParser = new EntityRefXmlParser(messageLogger, filename);
		}
		private EntityRefXmlParser entityRefXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TimeToCollisionConditionTargetImpl object)
		{
			EntityRefImpl entityRef = new EntityRefImpl();
			// Setting the parent
			entityRef.setParent(object);
			entityRefXmlParser.parseElement(indexedElement,parserContext, entityRef);

			object.setEntityRef( entityRef);
			
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
				elementName.equals(OscConstants.ELEMENT__ENTITY_REF) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENTITY_REF
					};
		}
	}
}

