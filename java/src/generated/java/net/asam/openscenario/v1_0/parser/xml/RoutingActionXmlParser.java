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

import net.asam.openscenario.v1_0.impl.RoutingActionImpl;
import net.asam.openscenario.v1_0.impl.AcquirePositionActionImpl;
import net.asam.openscenario.v1_0.impl.AssignRouteActionImpl;
import net.asam.openscenario.v1_0.impl.FollowTrajectoryActionImpl;


import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutingActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RoutingActionXmlParser extends XmlComplexTypeParser<RoutingActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public RoutingActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,RoutingActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing RoutingAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing RoutingAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<RoutingActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<RoutingActionImpl>> result  = new Hashtable<String, IAttributeParser<RoutingActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<RoutingActionImpl>{
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
		protected  List<IElementParser<RoutingActionImpl>> createParserList()
		{
			List<IElementParser<RoutingActionImpl>> result = new ArrayList<IElementParser<RoutingActionImpl>>();
			result.add(new SubElementAssignRouteActionParser());
			result.add(new SubElementFollowTrajectoryActionParser());
			result.add(new SubElementAcquirePositionActionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement assignRouteAction
	 */
	private class SubElementAssignRouteActionParser implements IElementParser<RoutingActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAssignRouteActionParser()
		{
			super();
			assignRouteActionXmlParser = new AssignRouteActionXmlParser(messageLogger, filename);
		}
		private AssignRouteActionXmlParser assignRouteActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,RoutingActionImpl object)
		{
			AssignRouteActionImpl assignRouteAction = new AssignRouteActionImpl();
			// Setting the parent
			assignRouteAction.setParent(object);
			assignRouteActionXmlParser.parseElement(indexedElement,parserContext, assignRouteAction);

			object.setAssignRouteAction( assignRouteAction);
			
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
				elementName.equals(OscConstants.ELEMENT__ASSIGN_ROUTE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ASSIGN_ROUTE_ACTION
					};
		}
	}
	/**
	 * A parser for subelement followTrajectoryAction
	 */
	private class SubElementFollowTrajectoryActionParser implements IElementParser<RoutingActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementFollowTrajectoryActionParser()
		{
			super();
			followTrajectoryActionXmlParser = new FollowTrajectoryActionXmlParser(messageLogger, filename);
		}
		private FollowTrajectoryActionXmlParser followTrajectoryActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,RoutingActionImpl object)
		{
			FollowTrajectoryActionImpl followTrajectoryAction = new FollowTrajectoryActionImpl();
			// Setting the parent
			followTrajectoryAction.setParent(object);
			followTrajectoryActionXmlParser.parseElement(indexedElement,parserContext, followTrajectoryAction);

			object.setFollowTrajectoryAction( followTrajectoryAction);
			
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
				elementName.equals(OscConstants.ELEMENT__FOLLOW_TRAJECTORY_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__FOLLOW_TRAJECTORY_ACTION
					};
		}
	}
	/**
	 * A parser for subelement acquirePositionAction
	 */
	private class SubElementAcquirePositionActionParser implements IElementParser<RoutingActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAcquirePositionActionParser()
		{
			super();
			acquirePositionActionXmlParser = new AcquirePositionActionXmlParser(messageLogger, filename);
		}
		private AcquirePositionActionXmlParser acquirePositionActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,RoutingActionImpl object)
		{
			AcquirePositionActionImpl acquirePositionAction = new AcquirePositionActionImpl();
			// Setting the parent
			acquirePositionAction.setParent(object);
			acquirePositionActionXmlParser.parseElement(indexedElement,parserContext, acquirePositionAction);

			object.setAcquirePositionAction( acquirePositionAction);
			
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
				elementName.equals(OscConstants.ELEMENT__ACQUIRE_POSITION_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ACQUIRE_POSITION_ACTION
					};
		}
	}
}

