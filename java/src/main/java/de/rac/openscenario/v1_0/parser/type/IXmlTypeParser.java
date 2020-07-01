package de.rac.openscenario.v1_0.parser.type;

import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.parser.XmlParserException;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;

/**
 * Parser interface for types (XSD:group, XSD:complexType, XSD:simpleContent)
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IXmlTypeParser<T> {

	/**
	 * Parsing the XSD type
	 * @param indexedElement the element to be parsed
	 * @param parserContext a parser context to store dynamic information in.
	 * @param object the object that will be filled during the parsing process.
	 * @throws XmlParserException if an exception occurs.
	 */
	public  void parseElement(IndexedElement indexedElement, ParserContext parserContext, T object) throws XmlParserException;

}
