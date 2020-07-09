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

import net.asam.openscenario.v1_0.impl.OverrideParkingBrakeActionImpl;
import net.asam.openscenario.v1_0.impl.OverrideThrottleActionImpl;
import net.asam.openscenario.v1_0.impl.OverrideClutchActionImpl;
import net.asam.openscenario.v1_0.impl.OverrideBrakeActionImpl;
import net.asam.openscenario.v1_0.impl.OverrideSteeringWheelActionImpl;
import net.asam.openscenario.v1_0.impl.OverrideGearActionImpl;
import net.asam.openscenario.v1_0.impl.OverrideControllerValueActionImpl;


import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OverrideControllerValueActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OverrideControllerValueActionXmlParser extends XmlComplexTypeParser<OverrideControllerValueActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public OverrideControllerValueActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing OverrideControllerValueAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing OverrideControllerValueAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<OverrideControllerValueActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<OverrideControllerValueActionImpl>> result  = new Hashtable<String, IAttributeParser<OverrideControllerValueActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<OverrideControllerValueActionImpl>{
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
		protected  List<IElementParser<OverrideControllerValueActionImpl>> createParserList()
		{
			List<IElementParser<OverrideControllerValueActionImpl>> result = new ArrayList<IElementParser<OverrideControllerValueActionImpl>>();
			result.add(new SubElementThrottleParser());
			result.add(new SubElementBrakeParser());
			result.add(new SubElementClutchParser());
			result.add(new SubElementParkingBrakeParser());
			result.add(new SubElementSteeringWheelParser());
			result.add(new SubElementGearParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement throttle
	 */
	private class SubElementThrottleParser implements IElementParser<OverrideControllerValueActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementThrottleParser()
		{
			super();
			overrideThrottleActionXmlParser = new OverrideThrottleActionXmlParser(messageLogger, filename);
		}
		private OverrideThrottleActionXmlParser overrideThrottleActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object)
		{
			OverrideThrottleActionImpl throttle = new OverrideThrottleActionImpl();
			// Setting the parent
			throttle.setParent(object);
			overrideThrottleActionXmlParser.parseElement(indexedElement,parserContext, throttle);

			object.setThrottle( throttle);
			
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
				elementName.equals(OscConstants.ELEMENT__THROTTLE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__THROTTLE
					};
		}
	}
	/**
	 * A parser for subelement brake
	 */
	private class SubElementBrakeParser implements IElementParser<OverrideControllerValueActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementBrakeParser()
		{
			super();
			overrideBrakeActionXmlParser = new OverrideBrakeActionXmlParser(messageLogger, filename);
		}
		private OverrideBrakeActionXmlParser overrideBrakeActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object)
		{
			OverrideBrakeActionImpl brake = new OverrideBrakeActionImpl();
			// Setting the parent
			brake.setParent(object);
			overrideBrakeActionXmlParser.parseElement(indexedElement,parserContext, brake);

			object.setBrake( brake);
			
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
				elementName.equals(OscConstants.ELEMENT__BRAKE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__BRAKE
					};
		}
	}
	/**
	 * A parser for subelement clutch
	 */
	private class SubElementClutchParser implements IElementParser<OverrideControllerValueActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementClutchParser()
		{
			super();
			overrideClutchActionXmlParser = new OverrideClutchActionXmlParser(messageLogger, filename);
		}
		private OverrideClutchActionXmlParser overrideClutchActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object)
		{
			OverrideClutchActionImpl clutch = new OverrideClutchActionImpl();
			// Setting the parent
			clutch.setParent(object);
			overrideClutchActionXmlParser.parseElement(indexedElement,parserContext, clutch);

			object.setClutch( clutch);
			
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
				elementName.equals(OscConstants.ELEMENT__CLUTCH) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CLUTCH
					};
		}
	}
	/**
	 * A parser for subelement parkingBrake
	 */
	private class SubElementParkingBrakeParser implements IElementParser<OverrideControllerValueActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementParkingBrakeParser()
		{
			super();
			overrideParkingBrakeActionXmlParser = new OverrideParkingBrakeActionXmlParser(messageLogger, filename);
		}
		private OverrideParkingBrakeActionXmlParser overrideParkingBrakeActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object)
		{
			OverrideParkingBrakeActionImpl parkingBrake = new OverrideParkingBrakeActionImpl();
			// Setting the parent
			parkingBrake.setParent(object);
			overrideParkingBrakeActionXmlParser.parseElement(indexedElement,parserContext, parkingBrake);

			object.setParkingBrake( parkingBrake);
			
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
				elementName.equals(OscConstants.ELEMENT__PARKING_BRAKE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PARKING_BRAKE
					};
		}
	}
	/**
	 * A parser for subelement steeringWheel
	 */
	private class SubElementSteeringWheelParser implements IElementParser<OverrideControllerValueActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementSteeringWheelParser()
		{
			super();
			overrideSteeringWheelActionXmlParser = new OverrideSteeringWheelActionXmlParser(messageLogger, filename);
		}
		private OverrideSteeringWheelActionXmlParser overrideSteeringWheelActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object)
		{
			OverrideSteeringWheelActionImpl steeringWheel = new OverrideSteeringWheelActionImpl();
			// Setting the parent
			steeringWheel.setParent(object);
			overrideSteeringWheelActionXmlParser.parseElement(indexedElement,parserContext, steeringWheel);

			object.setSteeringWheel( steeringWheel);
			
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
				elementName.equals(OscConstants.ELEMENT__STEERING_WHEEL) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__STEERING_WHEEL
					};
		}
	}
	/**
	 * A parser for subelement gear
	 */
	private class SubElementGearParser implements IElementParser<OverrideControllerValueActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementGearParser()
		{
			super();
			overrideGearActionXmlParser = new OverrideGearActionXmlParser(messageLogger, filename);
		}
		private OverrideGearActionXmlParser overrideGearActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,OverrideControllerValueActionImpl object)
		{
			OverrideGearActionImpl gear = new OverrideGearActionImpl();
			// Setting the parent
			gear.setParent(object);
			overrideGearActionXmlParser.parseElement(indexedElement,parserContext, gear);

			object.setGear( gear);
			
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
				elementName.equals(OscConstants.ELEMENT__GEAR) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__GEAR
					};
		}
	}
}

