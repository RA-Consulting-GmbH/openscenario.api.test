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
 
package net.asam.openscenario.parser.type;

import java.util.List;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.xml.indexer.Position;

/**
 * Parser for XSD:simpleContent types (a complexType Parser with no elements, just content)
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public abstract class XmlSimpleContentParser<T extends BaseImpl> extends XmlComplexTypeParser<T> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing process
	 * @param filename of the file the parser is operating on.
	 */
	public XmlSimpleContentParser(IParserMessageLogger messageLogger,
			String filename) {
		super(messageLogger, filename);
	}

	@Override
	public void parseElement(IndexedElement indexedElement,ParserContext parserContext, T object) {
		
		parseAttributes(indexedElement, object);
		// Read element. Make sure it is a Character Tag
		String content = indexedElement.getCharacters();
		if (content != null && !content.isEmpty()) {
			setContentProperty(content, object);

		} else if (isContentRequired()) {
			setContentProperty("", object);
		}
		
		List<IndexedElement> subElements = indexedElement.getSubElements();
		for (IndexedElement subElement : subElements) 
		{
			messageLogger.logMessage(new FileContentMessage("Element '"+subElement.getElement().getNodeName()+"' is not allowed here.", ErrorLevel.ERROR,  new Textmarker(subElement.getStartElementLocation().getLine(),subElement.getStartElementLocation().getColumn(),filename)));
		}
		
		Position startPosition = indexedElement.getStartElementLocation();
		object.setStartMarker(new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename));
		Position endPosition = indexedElement.getStartElementLocation();
		object.setEndMarker(new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename));
		
		parserContext.setLastElementParsed(indexedElement);

	}

	

	/**
	 * Sets the property that is represented by the content
	 * @param content the content of the simpleContent
	 * @param object the model object for that the property is assigned with the content
	 */
	protected abstract void setContentProperty(String content, T object);

	/**
	 * is the content a required property.
	 * @return true if required
	 */
	protected abstract boolean isContentRequired();

}
