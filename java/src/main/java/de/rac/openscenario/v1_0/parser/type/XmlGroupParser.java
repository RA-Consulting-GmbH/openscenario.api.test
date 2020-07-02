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
 
package de.rac.openscenario.v1_0.parser.type;

import java.util.ArrayList;
import java.util.List;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.parser.XmlModelGroupParser;
import de.rac.openscenario.v1_0.parser.XmlParserBase;
import de.rac.openscenario.v1_0.parser.XmlParserException;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.xml.indexer.Position;

/**
 * Parser for XSD:group types
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public class XmlGroupParser<T extends BaseImpl> extends XmlParserBase<T> implements  IXmlTypeParser<T> {

	protected String elementName;
	protected XmlModelGroupParser<T> subElementParser;

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing process
	 * @param filename of the file the parser is operating on.
	 */
	public XmlGroupParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
	}

	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext, T object) 
	{
		Position startPosition = indexedElement.getStartElementLocation();
		object.setStartMarker(new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename));
		
		// Prepare a list
		List<IndexedElement> parentSubElements = indexedElement.getParent().getSubElements();
		int index = parentSubElements.indexOf(indexedElement);
		List<IndexedElement> elementsToParse = new ArrayList<IndexedElement>();
		for (int i = index; i<parentSubElements.size(); i++)
		{
			elementsToParse.add(parentSubElements.get(i));
		}
		parseSubElements(elementsToParse, parserContext, object);
		Position endPosition = parserContext.getLastElementParsed().getEndElementLocation();
		object.setStartMarker(new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename));
	}

	@Override
	public void parseSubElements(List<IndexedElement> indexedElement,ParserContext parserContext, T object) {
		subElementParser.parseSubElements(indexedElement, parserContext, object);
		
	}

}
