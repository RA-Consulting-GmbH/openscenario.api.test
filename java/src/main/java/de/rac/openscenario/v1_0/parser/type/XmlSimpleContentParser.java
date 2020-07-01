package de.rac.openscenario.v1_0.parser.type;

import java.util.List;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.xml.indexer.Position;

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
