/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package net.asam.openscenario.v1_0.parser.xml;

import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.xml.indexer.Position;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.ErrorLevel;
import java.util.List;

import net.asam.openscenario.v1_0.impl.TrafficSinkActionImpl;
import net.asam.openscenario.v1_0.impl.TrafficSourceActionImpl;
import net.asam.openscenario.v1_0.impl.TrafficSwarmActionImpl;
import net.asam.openscenario.v1_0.impl.TrafficActionImpl;


import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficActionXmlParser extends XmlComplexTypeParser<TrafficActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public TrafficActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,TrafficActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing TrafficAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing TrafficAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<TrafficActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<TrafficActionImpl>> result  = new Hashtable<String, IAttributeParser<TrafficActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<TrafficActionImpl>{
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
		protected  List<IElementParser<TrafficActionImpl>> createParserList()
		{
			List<IElementParser<TrafficActionImpl>> result = new ArrayList<IElementParser<TrafficActionImpl>>();
			result.add(new SubElementTrafficSourceActionParser());
			result.add(new SubElementTrafficSinkActionParser());
			result.add(new SubElementTrafficSwarmActionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement trafficSourceAction
	 */
	private class SubElementTrafficSourceActionParser implements IElementParser<TrafficActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrafficSourceActionParser()
		{
			super();
			trafficSourceActionXmlParser = new TrafficSourceActionXmlParser(messageLogger, filename);
		}
		private TrafficSourceActionXmlParser trafficSourceActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TrafficActionImpl object)
		{
			TrafficSourceActionImpl trafficSourceAction = new TrafficSourceActionImpl();
			// Setting the parent
			trafficSourceAction.setParent(object);
			trafficSourceActionXmlParser.parseElement(indexedElement,parserContext, trafficSourceAction);

			object.setTrafficSourceAction( trafficSourceAction);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAFFIC_SOURCE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAFFIC_SOURCE_ACTION
					};
		}
	}
	/**
	 * A parser for subelement trafficSinkAction
	 */
	private class SubElementTrafficSinkActionParser implements IElementParser<TrafficActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrafficSinkActionParser()
		{
			super();
			trafficSinkActionXmlParser = new TrafficSinkActionXmlParser(messageLogger, filename);
		}
		private TrafficSinkActionXmlParser trafficSinkActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TrafficActionImpl object)
		{
			TrafficSinkActionImpl trafficSinkAction = new TrafficSinkActionImpl();
			// Setting the parent
			trafficSinkAction.setParent(object);
			trafficSinkActionXmlParser.parseElement(indexedElement,parserContext, trafficSinkAction);

			object.setTrafficSinkAction( trafficSinkAction);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAFFIC_SINK_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAFFIC_SINK_ACTION
					};
		}
	}
	/**
	 * A parser for subelement trafficSwarmAction
	 */
	private class SubElementTrafficSwarmActionParser implements IElementParser<TrafficActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrafficSwarmActionParser()
		{
			super();
			trafficSwarmActionXmlParser = new TrafficSwarmActionXmlParser(messageLogger, filename);
		}
		private TrafficSwarmActionXmlParser trafficSwarmActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,TrafficActionImpl object)
		{
			TrafficSwarmActionImpl trafficSwarmAction = new TrafficSwarmActionImpl();
			// Setting the parent
			trafficSwarmAction.setParent(object);
			trafficSwarmActionXmlParser.parseElement(indexedElement,parserContext, trafficSwarmAction);

			object.setTrafficSwarmAction( trafficSwarmAction);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAFFIC_SWARM_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAFFIC_SWARM_ACTION
					};
		}
	}
}
