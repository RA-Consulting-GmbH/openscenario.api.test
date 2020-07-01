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
import de.rac.openscenario.v1_0.api.ICondition;

import de.rac.openscenario.v1_0.impl.ConditionImpl;
import de.rac.openscenario.v1_0.impl.ConditionGroupImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ConditionGroupImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ConditionGroupXmlParser extends XmlComplexTypeParser<ConditionGroupImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ConditionGroupXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ConditionGroupImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing ConditionGroup", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing ConditionGroup", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ConditionGroupImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ConditionGroupImpl>> result  = new Hashtable<String, IAttributeParser<ConditionGroupImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<ConditionGroupImpl>{
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
		protected  List<IElementParser<ConditionGroupImpl>> createParserList()
		{
			List<IElementParser<ConditionGroupImpl>> result = new ArrayList<IElementParser<ConditionGroupImpl>>();
			result.add(new SubElementConditionsParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement conditions
	 */
	private class SubElementConditionsParser implements IElementParser<ConditionGroupImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementConditionsParser()
		{
			super();
			conditionXmlParser = new ConditionXmlParser(messageLogger, filename);
		}
		private ConditionXmlParser conditionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ConditionGroupImpl object)
		{
			ConditionImpl conditions = new ConditionImpl();
			// Setting the parent
			conditions.setParent(object);
			conditionXmlParser.parseElement(indexedElement,parserContext, conditions);
			List<ICondition> conditionsList = object.getConditions();
			if (conditionsList == null)
			{
				conditionsList = new ArrayList<ICondition>();
				object.setConditions( conditionsList);
			}
			conditionsList.add(conditions);
			
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
				elementName.equals(OscConstants.ELEMENT__CONDITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CONDITION
					};
		}
	}
}

