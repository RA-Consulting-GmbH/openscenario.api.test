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

import de.rac.openscenario.v1_0.impl.VehicleCategoryDistributionImpl;
import de.rac.openscenario.v1_0.impl.ControllerDistributionImpl;
import de.rac.openscenario.v1_0.impl.TrafficDefinitionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficDefinitionXmlParser extends XmlComplexTypeParser<TrafficDefinitionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public TrafficDefinitionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,TrafficDefinitionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing TrafficDefinition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing TrafficDefinition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<TrafficDefinitionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<TrafficDefinitionImpl>> result  = new Hashtable<String, IAttributeParser<TrafficDefinitionImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<TrafficDefinitionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, TrafficDefinitionImpl object)
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
	private class SubElementParser extends XmlAllParser<TrafficDefinitionImpl>{
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
		protected  List<IElementParser<TrafficDefinitionImpl>> createParserList()
		{
			List<IElementParser<TrafficDefinitionImpl>> result = new ArrayList<IElementParser<TrafficDefinitionImpl>>();
			result.add(new SubElementVehicleCategoryDistributionParser());
			result.add(new SubElementControllerDistributionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement vehicleCategoryDistribution
	 */
	private class SubElementVehicleCategoryDistributionParser implements IElementParser<TrafficDefinitionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementVehicleCategoryDistributionParser()
		{
			super();
			vehicleCategoryDistributionXmlParser = new VehicleCategoryDistributionXmlParser(messageLogger, filename);
		}
		private VehicleCategoryDistributionXmlParser vehicleCategoryDistributionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TrafficDefinitionImpl object)
		{
			VehicleCategoryDistributionImpl vehicleCategoryDistribution = new VehicleCategoryDistributionImpl();
			// Setting the parent
			vehicleCategoryDistribution.setParent(object);
			vehicleCategoryDistributionXmlParser.parseElement(indexedElement,parserContext, vehicleCategoryDistribution);

			object.setVehicleCategoryDistribution( vehicleCategoryDistribution);
			
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
				elementName.equals(OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION
					};
		}
	}
	/**
	 * A parser for subelement controllerDistribution
	 */
	private class SubElementControllerDistributionParser implements IElementParser<TrafficDefinitionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementControllerDistributionParser()
		{
			super();
			controllerDistributionXmlParser = new ControllerDistributionXmlParser(messageLogger, filename);
		}
		private ControllerDistributionXmlParser controllerDistributionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TrafficDefinitionImpl object)
		{
			ControllerDistributionImpl controllerDistribution = new ControllerDistributionImpl();
			// Setting the parent
			controllerDistribution.setParent(object);
			controllerDistributionXmlParser.parseElement(indexedElement,parserContext, controllerDistribution);

			object.setControllerDistribution( controllerDistribution);
			
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
				elementName.equals(OscConstants.ELEMENT__CONTROLLER_DISTRIBUTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CONTROLLER_DISTRIBUTION
					};
		}
	}
}

