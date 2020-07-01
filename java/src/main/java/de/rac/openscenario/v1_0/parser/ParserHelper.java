package de.rac.openscenario.v1_0.parser;

import java.util.Date;

import javax.xml.bind.DatatypeConverter;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;

/**
 * Provides helper methods for the pasring process.
 * @author Andreas Hege - RA Consulting
 *
 */
public class ParserHelper {
	public final static int UNSIGNED_SHORT_MAX_VALUE  = 2* Short.MAX_VALUE + 1;
	public final static long UNSIGNED_INT_MAX_VALUE  = 2L* (long)Integer.MAX_VALUE + 1L;


	
	/**
	 * Parsing a string value into a string value.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value
	 */
	public static  String parseString(IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {
		return xmlValue;
	}
	/**
	 * Parsing a string representation of an unsigned integer value into an unsigned integer value 
	 * and check the limits of unsigned integer (32 bit range). unsigned integer value is represented in a Long data object.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value or null if value cannot be parsed
	 */
	public static  Long parseUnsignedInt(IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {

		try {
			Long result = DatatypeConverter.parseLong(xmlValue);
			if (result > UNSIGNED_INT_MAX_VALUE || result < 0) {
				messageLogger.logMessage(new FileContentMessage(
						"Cannot convert '"
								+ xmlValue
								+ "' to an unsignedInteger. Value must be in [0.."
								+ UNSIGNED_INT_MAX_VALUE + "].", ErrorLevel.ERROR,
						textMarker));
			} else {
				return result;
			}

		} catch (NumberFormatException e) {
			messageLogger.logMessage(new FileContentMessage( "Cannot convert '"
					+ xmlValue
					+ "' to an unsignedInteger. Number format error.",
					ErrorLevel.ERROR, textMarker));

		}
		return null;
	}
	/**
	 * Parsing a string representation of an integer value into an integer value.
	 * Integer value is represented in a Integer data object.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value or null if value cannot be parsed
	 */
	public static  Integer parseInt( IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {

		try {
			Integer result = DatatypeConverter.parseInt(xmlValue);
			return result;

		} catch (NumberFormatException e) {
			messageLogger.logMessage(new FileContentMessage("Cannot convert '"
					+ xmlValue + "' to an int. Number format error.",
					ErrorLevel.ERROR, textMarker));

		}
		return null;
	}
	/**
	 * Parsing a string representation of a double value into a double value.
	 * Integer value is represented in a Double data object.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value or null if value cannot be parsed
	 */
	public static  Double parseDouble(IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {
		try {
			Double result = DatatypeConverter.parseDouble(xmlValue);
			return result;

		} catch (NumberFormatException e) {
			messageLogger.logMessage(new FileContentMessage( "Cannot convert '"
					+ xmlValue + "' to a double. Number format error.",
					ErrorLevel.ERROR, textMarker));

		}
		return null;
	}

	/**
	 * Parsing a string representation of an unsigned short value into an unsigned short value.
	 * and check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer data object.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value or null if value cannot be parsed
	 */
	public static  Integer parseUnsignedShort( IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {

		
		try {
			Integer result = DatatypeConverter.parseInt(xmlValue);
			if (result > 2* UNSIGNED_SHORT_MAX_VALUE || result < 0) {
				messageLogger.logMessage(new FileContentMessage(
						"Cannot convert '"
								+ xmlValue
								+ "' to an unsignedShort. Value must be in [0.."
								+ UNSIGNED_SHORT_MAX_VALUE+ "].", ErrorLevel.ERROR,
						textMarker));
			} else {
				return result;
			}

		} catch (NumberFormatException e) {
			messageLogger.logMessage(new FileContentMessage("Cannot convert '"
					+ xmlValue + "' to an unsignedShort. Number format error.",
					ErrorLevel.ERROR, textMarker));

		}
		return null;
	}

	/**
	 * Parsing a string representation of a boolean into an boolean value.
	 * boolean value is represented in a Boolean data object.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value or null if value cannot be parsed
	 */
	public static Boolean parseBoolean(IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {

		try {
			Boolean result = DatatypeConverter.parseBoolean(xmlValue
					.toLowerCase());
			return result;

		} catch (IllegalArgumentException e) {
			messageLogger.logMessage(new FileContentMessage("Cannot convert '"
					+ xmlValue + "' to a boolean. Illegal boolean value.",
					ErrorLevel.ERROR, textMarker));

		}
		return null;
	}
	/**
	 * Parsing a string representation of a date into a date value.
	 * Date value is represented in a java.util.Date data object.
	 * @param messageLogger to log errors and warnings
	 * @param xmlValue the value from xml
	 * @param textMarker text marker
	 * @return the parsed value or null if value cannot be parsed
	 */
	public static  Date parseDateTime(IParserMessageLogger messageLogger, String xmlValue,
			Textmarker textMarker) {

		try {
			Date result = DatatypeConverter.parseDateTime(xmlValue).getTime();
			return result;

		} catch (IllegalArgumentException e) {
			messageLogger.logMessage(new FileContentMessage("Cannot convert '"
					+ xmlValue + "' to a dateTime. Illegal dateTime value.",
					ErrorLevel.ERROR, textMarker));

		}
		return null;
	}

}
