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
import de.rac.openscenario.v1_0.api.IVertex;

import de.rac.openscenario.v1_0.impl.PolylineImpl;
import de.rac.openscenario.v1_0.impl.VertexImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PolylineImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PolylineXmlParser extends XmlComplexTypeParser<PolylineImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public PolylineXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,PolylineImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Polyline", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Polyline", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<PolylineImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<PolylineImpl>> result  = new Hashtable<String, IAttributeParser<PolylineImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<PolylineImpl>{
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
		protected  List<IElementParser<PolylineImpl>> createParserList()
		{
			List<IElementParser<PolylineImpl>> result = new ArrayList<IElementParser<PolylineImpl>>();
			result.add(new SubElementVerticesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement vertices
	 */
	private class SubElementVerticesParser implements IElementParser<PolylineImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementVerticesParser()
		{
			super();
			vertexXmlParser = new VertexXmlParser(messageLogger, filename);
		}
		private VertexXmlParser vertexXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,PolylineImpl object)
		{
			VertexImpl vertices = new VertexImpl();
			// Setting the parent
			vertices.setParent(object);
			vertexXmlParser.parseElement(indexedElement,parserContext, vertices);
			List<IVertex> verticesList = object.getVertices();
			if (verticesList == null)
			{
				verticesList = new ArrayList<IVertex>();
				object.setVertices( verticesList);
			}
			verticesList.add(vertices);
			
		}

		@Override
		public int getMinOccur()
		{
			return 2;
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
				elementName.equals(OscConstants.ELEMENT__VERTEX) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__VERTEX
					};
		}
	}
}

