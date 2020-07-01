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
import de.rac.openscenario.v1_0.api.IEntity;

import de.rac.openscenario.v1_0.impl.SynchronizeActionImpl;
import de.rac.openscenario.v1_0.impl.PositionImpl;
import de.rac.openscenario.v1_0.impl.FinalSpeedImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SynchronizeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SynchronizeActionXmlParser extends XmlComplexTypeParser<SynchronizeActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public SynchronizeActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,SynchronizeActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing SynchronizeAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing SynchronizeAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<SynchronizeActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<SynchronizeActionImpl>> result  = new Hashtable<String, IAttributeParser<SynchronizeActionImpl>>();
		result.put(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, new IAttributeParser<SynchronizeActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, SynchronizeActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Proxy
					NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (attributeValue);
					proxy.setParent(object);
					object.setMasterEntityRef(proxy);
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, endMarker);
				
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
	private class SubElementParser extends XmlAllParser<SynchronizeActionImpl>{
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
		protected  List<IElementParser<SynchronizeActionImpl>> createParserList()
		{
			List<IElementParser<SynchronizeActionImpl>> result = new ArrayList<IElementParser<SynchronizeActionImpl>>();
			result.add(new SubElementTargetPositionMasterParser());
			result.add(new SubElementTargetPositionParser());
			result.add(new SubElementFinalSpeedParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement targetPositionMaster
	 */
	private class SubElementTargetPositionMasterParser implements IElementParser<SynchronizeActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTargetPositionMasterParser()
		{
			super();
			positionXmlParser = new PositionXmlParser(messageLogger, filename);
		}
		private PositionXmlParser positionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SynchronizeActionImpl object)
		{
			PositionImpl targetPositionMaster = new PositionImpl();
			// Setting the parent
			targetPositionMaster.setParent(object);
			positionXmlParser.parseElement(indexedElement,parserContext, targetPositionMaster);

			object.setTargetPositionMaster( targetPositionMaster);
			
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
				elementName.equals(OscConstants.ELEMENT__TARGET_POSITION_MASTER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TARGET_POSITION_MASTER
					};
		}
	}
	/**
	 * A parser for subelement targetPosition
	 */
	private class SubElementTargetPositionParser implements IElementParser<SynchronizeActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTargetPositionParser()
		{
			super();
			positionXmlParser = new PositionXmlParser(messageLogger, filename);
		}
		private PositionXmlParser positionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SynchronizeActionImpl object)
		{
			PositionImpl targetPosition = new PositionImpl();
			// Setting the parent
			targetPosition.setParent(object);
			positionXmlParser.parseElement(indexedElement,parserContext, targetPosition);

			object.setTargetPosition( targetPosition);
			
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
				elementName.equals(OscConstants.ELEMENT__TARGET_POSITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TARGET_POSITION
					};
		}
	}
	/**
	 * A parser for subelement finalSpeed
	 */
	private class SubElementFinalSpeedParser implements IElementParser<SynchronizeActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFinalSpeedParser()
		{
			super();
			finalSpeedXmlParser = new FinalSpeedXmlParser(messageLogger, filename);
		}
		private FinalSpeedXmlParser finalSpeedXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SynchronizeActionImpl object)
		{
			FinalSpeedImpl finalSpeed = new FinalSpeedImpl();
			// Setting the parent
			finalSpeed.setParent(object);
			finalSpeedXmlParser.parseElement(indexedElement,parserContext, finalSpeed);

			object.setFinalSpeed( finalSpeed);
			
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
				elementName.equals(OscConstants.ELEMENT__FINAL_SPEED) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FINAL_SPEED
					};
		}
	}
}

