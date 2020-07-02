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

import de.rac.openscenario.v1_0.impl.GlobalActionImpl;
import de.rac.openscenario.v1_0.impl.TrafficActionImpl;
import de.rac.openscenario.v1_0.impl.InfrastructureActionImpl;
import de.rac.openscenario.v1_0.impl.EntityActionImpl;
import de.rac.openscenario.v1_0.impl.ParameterActionImpl;
import de.rac.openscenario.v1_0.impl.EnvironmentActionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a GlobalActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class GlobalActionXmlParser extends XmlComplexTypeParser<GlobalActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public GlobalActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,GlobalActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing GlobalAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing GlobalAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<GlobalActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<GlobalActionImpl>> result  = new Hashtable<String, IAttributeParser<GlobalActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<GlobalActionImpl>{
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
		protected  List<IElementParser<GlobalActionImpl>> createParserList()
		{
			List<IElementParser<GlobalActionImpl>> result = new ArrayList<IElementParser<GlobalActionImpl>>();
			result.add(new SubElementEnvironmentActionParser());
			result.add(new SubElementEntityActionParser());
			result.add(new SubElementParameterActionParser());
			result.add(new SubElementInfrastructureActionParser());
			result.add(new SubElementTrafficActionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement environmentAction
	 */
	private class SubElementEnvironmentActionParser implements IElementParser<GlobalActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEnvironmentActionParser()
		{
			super();
			environmentActionXmlParser = new EnvironmentActionXmlParser(messageLogger, filename);
		}
		private EnvironmentActionXmlParser environmentActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,GlobalActionImpl object)
		{
			EnvironmentActionImpl environmentAction = new EnvironmentActionImpl();
			// Setting the parent
			environmentAction.setParent(object);
			environmentActionXmlParser.parseElement(indexedElement,parserContext, environmentAction);

			object.setEnvironmentAction( environmentAction);
			
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
				elementName.equals(OscConstants.ELEMENT__ENVIRONMENT_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENVIRONMENT_ACTION
					};
		}
	}
	/**
	 * A parser for subelement entityAction
	 */
	private class SubElementEntityActionParser implements IElementParser<GlobalActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEntityActionParser()
		{
			super();
			entityActionXmlParser = new EntityActionXmlParser(messageLogger, filename);
		}
		private EntityActionXmlParser entityActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,GlobalActionImpl object)
		{
			EntityActionImpl entityAction = new EntityActionImpl();
			// Setting the parent
			entityAction.setParent(object);
			entityActionXmlParser.parseElement(indexedElement,parserContext, entityAction);

			object.setEntityAction( entityAction);
			
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
				elementName.equals(OscConstants.ELEMENT__ENTITY_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENTITY_ACTION
					};
		}
	}
	/**
	 * A parser for subelement parameterAction
	 */
	private class SubElementParameterActionParser implements IElementParser<GlobalActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementParameterActionParser()
		{
			super();
			parameterActionXmlParser = new ParameterActionXmlParser(messageLogger, filename);
		}
		private ParameterActionXmlParser parameterActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,GlobalActionImpl object)
		{
			ParameterActionImpl parameterAction = new ParameterActionImpl();
			// Setting the parent
			parameterAction.setParent(object);
			parameterActionXmlParser.parseElement(indexedElement,parserContext, parameterAction);

			object.setParameterAction( parameterAction);
			
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
				elementName.equals(OscConstants.ELEMENT__PARAMETER_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PARAMETER_ACTION
					};
		}
	}
	/**
	 * A parser for subelement infrastructureAction
	 */
	private class SubElementInfrastructureActionParser implements IElementParser<GlobalActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementInfrastructureActionParser()
		{
			super();
			infrastructureActionXmlParser = new InfrastructureActionXmlParser(messageLogger, filename);
		}
		private InfrastructureActionXmlParser infrastructureActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,GlobalActionImpl object)
		{
			InfrastructureActionImpl infrastructureAction = new InfrastructureActionImpl();
			// Setting the parent
			infrastructureAction.setParent(object);
			infrastructureActionXmlParser.parseElement(indexedElement,parserContext, infrastructureAction);

			object.setInfrastructureAction( infrastructureAction);
			
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
				elementName.equals(OscConstants.ELEMENT__INFRASTRUCTURE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__INFRASTRUCTURE_ACTION
					};
		}
	}
	/**
	 * A parser for subelement trafficAction
	 */
	private class SubElementTrafficActionParser implements IElementParser<GlobalActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrafficActionParser()
		{
			super();
			trafficActionXmlParser = new TrafficActionXmlParser(messageLogger, filename);
		}
		private TrafficActionXmlParser trafficActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,GlobalActionImpl object)
		{
			TrafficActionImpl trafficAction = new TrafficActionImpl();
			// Setting the parent
			trafficAction.setParent(object);
			trafficActionXmlParser.parseElement(indexedElement,parserContext, trafficAction);

			object.setTrafficAction( trafficAction);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAFFIC_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAFFIC_ACTION
					};
		}
	}
}

