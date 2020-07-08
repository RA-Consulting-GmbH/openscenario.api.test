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
 
package de.rac.openscenario.parser.modelgroup;

import java.util.Hashtable;
import java.util.List;
import java.util.Map;

import org.w3c.dom.Element;

import de.rac.openscenario.common.ErrorLevel;
import de.rac.openscenario.common.FileContentMessage;
import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.common.Textmarker;
import de.rac.openscenario.impl.BaseImpl;
import de.rac.openscenario.parser.ParserContext;
import de.rac.openscenario.parser.XmlModelGroupParser;
import de.rac.openscenario.simple.struct.IndexedElement;
import de.rac.xml.indexer.Position;

/**
 * Parser for a XSD:choice model group (one out of of a list of types).
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public  abstract class XmlChoiceParser<T extends BaseImpl> extends XmlModelGroupParser<T> {
	

	private Map<IElementParser<T>, Integer>  occuredElementList = new Hashtable<IElementParser<T>, Integer>();
	
	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing process
	 * @param filename of the file the parser is operating on.
	 */
	public XmlChoiceParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
	}

	
	@Override
	public void parseSubElementsInternal(List<IndexedElement> indexedElements,ParserContext parserContext, T object) {
		
		int currentListIndex = 0;
		IndexedElement lastElementParsed = null;
		while (currentListIndex < indexedElements.size()) {
			IndexedElement indexedElement = indexedElements.get(currentListIndex);
			Element element = indexedElement.getElement();
			String tagName = element.getNodeName();
			IElementParser<T> parser = findParser(tagName);
			Position start = indexedElement.getStartElementLocation();
			
			if (parser == null )
			{
				Integer occurCount = occuredElementList.get(parsers.get(0));
				if (parsers.size() == 1 && occurCount != null && occurCount >= parsers.get(0).getMinOccur())
				{
					// We are done
					break;
				}else
				{
					// We are not done yet
					messageLogger.logMessage(new FileContentMessage("Unknown element '"+tagName+"'", ErrorLevel.ERROR,  new Textmarker(start.getLine(),start.getColumn(),filename)));
					lastElementParsed = indexedElement;
					
				}
			}else
			{
				Integer currentOccurs = occuredElementList.get(tagName);
				if (currentOccurs == null)
				{
					currentOccurs = 0;
				}
				if (currentOccurs < parser.getMaxOccur())
				{
					
					parser.parse(indexedElement,parserContext, object);
					currentListIndex = moveForwardToLastElementParsed(indexedElements,currentListIndex,parserContext.getLastElementParsed());
					lastElementParsed = parserContext.getLastElementParsed();
					// delete all parsers with other tag names;
					if (currentOccurs == 0)
					{
						excludeOtherParsers(parser);
					}
					occuredElementList.put(parser, currentOccurs+1);
					
					
				}else
				{
					messageLogger.logMessage(new FileContentMessage("Too many elements of <"+tagName+">  ("+ parser.getMaxOccur()+") has already reached", ErrorLevel.ERROR, new Textmarker(start.getLine(),start.getColumn(),filename)));
					lastElementParsed = indexedElement;
				}
			}
			
			currentListIndex++;
		}
		if (lastElementParsed != null)
			parserContext.setLastElementParsed(lastElementParsed);
	}



	/**
	 * Once a occurance is found, exclude all other parser (choice)
	 * @param parser the parser that was used to parse the element
	 */
	private void excludeOtherParsers(IElementParser<T> parser) {
		List<IElementParser<T>> parsers = getParsers();
		parsers.clear();
		parsers.add(parser);
		
	}
	
	
	

}
