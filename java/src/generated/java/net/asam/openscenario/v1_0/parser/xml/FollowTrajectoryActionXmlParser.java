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

import net.asam.openscenario.v1_0.impl.TimeReferenceImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryImpl;
import net.asam.openscenario.v1_0.impl.FollowTrajectoryActionImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryFollowingModeImpl;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;


import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FollowTrajectoryActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class FollowTrajectoryActionXmlParser extends XmlComplexTypeParser<FollowTrajectoryActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public FollowTrajectoryActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,FollowTrajectoryActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing FollowTrajectoryAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing FollowTrajectoryAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<FollowTrajectoryActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<FollowTrajectoryActionImpl>> result  = new Hashtable<String, IAttributeParser<FollowTrajectoryActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<FollowTrajectoryActionImpl>{
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
		protected  List<IElementParser<FollowTrajectoryActionImpl>> createParserList()
		{
			List<IElementParser<FollowTrajectoryActionImpl>> result = new ArrayList<IElementParser<FollowTrajectoryActionImpl>>();
			result.add(new SubElementTrajectoryParser());
			result.add(new SubElementCatalogReferenceParser());
			result.add(new SubElementTimeReferenceParser());
			result.add(new SubElementTrajectoryFollowingModeParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement trajectory
	 */
	private class SubElementTrajectoryParser implements IElementParser<FollowTrajectoryActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrajectoryParser()
		{
			super();
			trajectoryXmlParser = new TrajectoryXmlParser(messageLogger, filename);
		}
		private TrajectoryXmlParser trajectoryXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,FollowTrajectoryActionImpl object)
		{
			TrajectoryImpl trajectory = new TrajectoryImpl();
			// Setting the parent
			trajectory.setParent(object);
			trajectoryXmlParser.parseElement(indexedElement,parserContext, trajectory);

			object.setTrajectory( trajectory);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAJECTORY) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAJECTORY
					};
		}
	}
	/**
	 * A parser for subelement catalogReference
	 */
	private class SubElementCatalogReferenceParser implements IElementParser<FollowTrajectoryActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementCatalogReferenceParser()
		{
			super();
			catalogReferenceXmlParser = new CatalogReferenceXmlParser(messageLogger, filename);
		}
		private CatalogReferenceXmlParser catalogReferenceXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,FollowTrajectoryActionImpl object)
		{
			CatalogReferenceImpl catalogReference = new CatalogReferenceImpl();
			// Setting the parent
			catalogReference.setParent(object);
			catalogReferenceXmlParser.parseElement(indexedElement,parserContext, catalogReference);

			object.setCatalogReference( catalogReference);
			((CatalogReferenceParserContext)parserContext).addCatalogReference(catalogReference);
			
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
				elementName.equals(OscConstants.ELEMENT__CATALOG_REFERENCE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CATALOG_REFERENCE
					};
		}
	}
	/**
	 * A parser for subelement timeReference
	 */
	private class SubElementTimeReferenceParser implements IElementParser<FollowTrajectoryActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTimeReferenceParser()
		{
			super();
			timeReferenceXmlParser = new TimeReferenceXmlParser(messageLogger, filename);
		}
		private TimeReferenceXmlParser timeReferenceXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,FollowTrajectoryActionImpl object)
		{
			TimeReferenceImpl timeReference = new TimeReferenceImpl();
			// Setting the parent
			timeReference.setParent(object);
			timeReferenceXmlParser.parseElement(indexedElement,parserContext, timeReference);

			object.setTimeReference( timeReference);
			
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
				elementName.equals(OscConstants.ELEMENT__TIME_REFERENCE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TIME_REFERENCE
					};
		}
	}
	/**
	 * A parser for subelement trajectoryFollowingMode
	 */
	private class SubElementTrajectoryFollowingModeParser implements IElementParser<FollowTrajectoryActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrajectoryFollowingModeParser()
		{
			super();
			trajectoryFollowingModeXmlParser = new TrajectoryFollowingModeXmlParser(messageLogger, filename);
		}
		private TrajectoryFollowingModeXmlParser trajectoryFollowingModeXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,FollowTrajectoryActionImpl object)
		{
			TrajectoryFollowingModeImpl trajectoryFollowingMode = new TrajectoryFollowingModeImpl();
			// Setting the parent
			trajectoryFollowingMode.setParent(object);
			trajectoryFollowingModeXmlParser.parseElement(indexedElement,parserContext, trajectoryFollowingMode);

			object.setTrajectoryFollowingMode( trajectoryFollowingMode);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAJECTORY_FOLLOWING_MODE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAJECTORY_FOLLOWING_MODE
					};
		}
	}
}

