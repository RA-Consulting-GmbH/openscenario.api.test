package de.rac.openscenario.v1_0.parser;

import javax.xml.stream.XMLStreamException;

/**
 * Exception that could be thrown during the parsing process.
 * Encapsulates a system exception.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public class XmlParserException extends Exception{
	
	/**
	 * Serial ID, default
	 */
	private static final long serialVersionUID = 1L;

	/**
	 * Constructor
	 * @param message text message
	 * @param exception the causing system exception
	 */
	public XmlParserException(String message ,XMLStreamException exception) {
		super(message, exception);
	}

}
