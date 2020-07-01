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

import de.rac.openscenario.v1_0.impl.TransitionDynamicsImpl;
import de.rac.openscenario.v1_0.impl.SpeedActionTargetImpl;
import de.rac.openscenario.v1_0.impl.SpeedActionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SpeedActionXmlParser extends XmlComplexTypeParser<SpeedActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public SpeedActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,SpeedActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing SpeedAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing SpeedAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<SpeedActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<SpeedActionImpl>> result  = new Hashtable<String, IAttributeParser<SpeedActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<SpeedActionImpl>{
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
		protected  List<IElementParser<SpeedActionImpl>> createParserList()
		{
			List<IElementParser<SpeedActionImpl>> result = new ArrayList<IElementParser<SpeedActionImpl>>();
			result.add(new SubElementSpeedActionDynamicsParser());
			result.add(new SubElementSpeedActionTargetParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement speedActionDynamics
	 */
	private class SubElementSpeedActionDynamicsParser implements IElementParser<SpeedActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementSpeedActionDynamicsParser()
		{
			super();
			transitionDynamicsXmlParser = new TransitionDynamicsXmlParser(messageLogger, filename);
		}
		private TransitionDynamicsXmlParser transitionDynamicsXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SpeedActionImpl object)
		{
			TransitionDynamicsImpl speedActionDynamics = new TransitionDynamicsImpl();
			// Setting the parent
			speedActionDynamics.setParent(object);
			transitionDynamicsXmlParser.parseElement(indexedElement,parserContext, speedActionDynamics);

			object.setSpeedActionDynamics( speedActionDynamics);
			
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
				elementName.equals(OscConstants.ELEMENT__SPEED_ACTION_DYNAMICS) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__SPEED_ACTION_DYNAMICS
					};
		}
	}
	/**
	 * A parser for subelement speedActionTarget
	 */
	private class SubElementSpeedActionTargetParser implements IElementParser<SpeedActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementSpeedActionTargetParser()
		{
			super();
			speedActionTargetXmlParser = new SpeedActionTargetXmlParser(messageLogger, filename);
		}
		private SpeedActionTargetXmlParser speedActionTargetXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SpeedActionImpl object)
		{
			SpeedActionTargetImpl speedActionTarget = new SpeedActionTargetImpl();
			// Setting the parent
			speedActionTarget.setParent(object);
			speedActionTargetXmlParser.parseElement(indexedElement,parserContext, speedActionTarget);

			object.setSpeedActionTarget( speedActionTarget);
			
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
				elementName.equals(OscConstants.ELEMENT__SPEED_ACTION_TARGET) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__SPEED_ACTION_TARGET
					};
		}
	}
}

