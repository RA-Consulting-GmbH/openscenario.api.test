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

package net.asam.openscenario.parser;

import java.util.Date;

import javax.xml.bind.DatatypeConverter;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;

/**
 * Provides helper methods for the pasring process.
 *
 * @author Andreas Hege - RA Consulting
 */
public class ParserHelper {
  public static final int UNSIGNED_SHORT_MAX_VALUE = 2 * Short.MAX_VALUE + 1;

  public static final long UNSIGNED_INT_MAX_VALUE = 2L * (long) Integer.MAX_VALUE + 1L;

  /**
   * Parsing a string value into a string value.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value
   */
  public static String parseString(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {
    return xmlValue;
  }

  /**
   * Parsing a string representation of an unsigned integer value into an unsigned integer value and
   * check the limits of unsigned integer (32 bit range). unsigned integer value is represented in a
   * Long data object.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value or null if value cannot be parsed
   */
  public static Long parseUnsignedInt(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {

    try {
      Long result = DatatypeConverter.parseLong(xmlValue);
      if (result > UNSIGNED_INT_MAX_VALUE || result < 0) {
        messageLogger.logMessage(
            new FileContentMessage(
                "Cannot convert '"
                    + xmlValue
                    + "' to an unsignedInteger. Value must be in [0.."
                    + UNSIGNED_INT_MAX_VALUE
                    + "].",
                ErrorLevel.ERROR,
                textMarker));
      } else {
        return result;
      }

    } catch (NumberFormatException e) {
      messageLogger.logMessage(
          new FileContentMessage(
              "Cannot convert '" + xmlValue + "' to an unsignedInteger. Number format error.",
              ErrorLevel.ERROR,
              textMarker));
    }
    return null;
  }

  /**
   * Parsing a string representation of an integer value into an integer value. Integer value is
   * represented in a Integer data object.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value or null if value cannot be parsed
   */
  public static Integer parseInt(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {

    try {
      Integer result = DatatypeConverter.parseInt(xmlValue);
      return result;

    } catch (NumberFormatException e) {
      messageLogger.logMessage(
          new FileContentMessage(
              "Cannot convert '" + xmlValue + "' to an int. Number format error.",
              ErrorLevel.ERROR,
              textMarker));
    }
    return null;
  }

  /**
   * Parsing a string representation of a double value into a double value. Integer value is
   * represented in a Double data object.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value or null if value cannot be parsed
   */
  public static Double parseDouble(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {
    try {
      Double result = DatatypeConverter.parseDouble(xmlValue);
      return result;

    } catch (NumberFormatException e) {
      messageLogger.logMessage(
          new FileContentMessage(
              "Cannot convert '" + xmlValue + "' to a double. Number format error.",
              ErrorLevel.ERROR,
              textMarker));
    }
    return null;
  }

  /**
   * Parsing a string representation of an unsigned short value into an unsigned short value. and
   * check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer
   * data object.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value or null if value cannot be parsed
   */
  public static Integer parseUnsignedShort(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {

    try {
      Integer result = DatatypeConverter.parseInt(xmlValue);
      if (result > 2 * UNSIGNED_SHORT_MAX_VALUE || result < 0) {
        messageLogger.logMessage(
            new FileContentMessage(
                "Cannot convert '"
                    + xmlValue
                    + "' to an unsignedShort. Value must be in [0.."
                    + UNSIGNED_SHORT_MAX_VALUE
                    + "].",
                ErrorLevel.ERROR,
                textMarker));
      } else {
        return result;
      }

    } catch (NumberFormatException e) {
      messageLogger.logMessage(
          new FileContentMessage(
              "Cannot convert '" + xmlValue + "' to an unsignedShort. Number format error.",
              ErrorLevel.ERROR,
              textMarker));
    }
    return null;
  }

  /**
   * Parsing a string representation of a boolean into an boolean value. boolean value is
   * represented in a Boolean data object.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value or null if value cannot be parsed
   */
  public static Boolean parseBoolean(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {

    if (xmlValue.equals("true") || xmlValue.equals("1")) {
      return true;
    } else if (xmlValue.equals("false") || xmlValue.equals("0")) {
      return false;
    }

    messageLogger.logMessage(
        new FileContentMessage(
            "Cannot convert '" + xmlValue + "' to a boolean. Illegal boolean value.",
            ErrorLevel.ERROR,
            textMarker));

    return null;
  }

  /**
   * Parsing a string representation of a date into a date value. Date value is represented in a
   * java.util.Date data object.
   *
   * @param messageLogger to log errors and warnings
   * @param xmlValue the value from xml
   * @param textMarker text marker
   * @return the parsed value or null if value cannot be parsed
   */
  public static Date parseDateTime(
      IParserMessageLogger messageLogger, String xmlValue, Textmarker textMarker) {

    try {
      Date result = DatatypeConverter.parseDateTime(xmlValue).getTime();
      return result;

    } catch (IllegalArgumentException e) {
      messageLogger.logMessage(
          new FileContentMessage(
              "Cannot convert '" + xmlValue + "' to a dateTime. Illegal dateTime value.",
              ErrorLevel.ERROR,
              textMarker));
    }
    return null;
  }

  /**
   * Parsing a string representation of an unsigned integer value into an unsigned integer value and
   * check the limits of unsigned integer (32 bit range). unsigned integer value is represented in a
   * Long data object.
   *
   * @param xmlValue the value
   * @throws Exception when validation fails
   */
  public static void validateUnsignedInt(String xmlValue) throws Exception {

    try {
      Long result = DatatypeConverter.parseLong(xmlValue);
      if (result > UNSIGNED_INT_MAX_VALUE || result < 0) {
        throw new Exception(
            "Cannot convert '"
                + xmlValue
                + "' to an unsignedInteger. Value must be in [0.."
                + UNSIGNED_INT_MAX_VALUE
                + "].");
      }

    } catch (NumberFormatException e) {
      throw new Exception(
          "Cannot convert '" + xmlValue + "' to an unsignedInteger. Number format error.");
    }
  }

  /**
   * Parsing a string representation of an integer value into an integer value. Integer value is
   * represented in a Integer data object.
   *
   * @param xmlValue the value
   * @throws Exception when validation fails
   */
  public static void validateInt(String xmlValue) throws Exception {

    try {
      DatatypeConverter.parseInt(xmlValue);

    } catch (NumberFormatException e) {
      throw new Exception("Cannot convert '" + xmlValue + "' to an int. Number format error.");
    }
  }

  /**
   * Parsing a string representation of a double value into a double value. Integer value is
   * represented in a Double data object.
   *
   * @param xmlValue the value
   * @throws Exception when validation fails
   */
  public static void validateDouble(String xmlValue) throws Exception {
    try {
      DatatypeConverter.parseDouble(xmlValue);

    } catch (NumberFormatException e) {
      throw new Exception("Cannot convert '" + xmlValue + "' to a double. Number format error.");
    }
  }

  /**
   * Parsing a string representation of an unsigned short value into an unsigned short value. and
   * check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer
   * data object.
   *
   * @param xmlValue the value
   * @throws Exception when validation fails
   */
  public static void validateUnsignedShort(String xmlValue) throws Exception {

    try {
      Integer result = DatatypeConverter.parseInt(xmlValue);
      if (result > 2 * UNSIGNED_SHORT_MAX_VALUE || result < 0) {
        throw new Exception(
            "Cannot convert '"
                + xmlValue
                + "' to an unsignedShort. Value must be in [0.."
                + UNSIGNED_SHORT_MAX_VALUE
                + "].");
      }

    } catch (NumberFormatException e) {

      throw new Exception(
          "Cannot convert '" + xmlValue + "' to an unsignedShort. Number format error.");
    }
  }

  /**
   * Parsing a string representation of a boolean into an boolean value. boolean value is
   * represented in a Boolean data object.
   *
   * @param xmlValue the value
   * @throws Exception when validation fails
   */
  public static void validateBoolean(String xmlValue) throws Exception {

    if (!(xmlValue.equals("true")
        || xmlValue.equals("false")
        || xmlValue.equals("0")
        || xmlValue.equals("1")))
      throw new Exception("Cannot convert '" + xmlValue + "' to a boolean. Illegal boolean value.");
  }

  /**
   * Parsing a string representation of a date into a date value. Date value is represented in a
   * java.util.Date data object.
   *
   * @param xmlValue the value
   * @throws Exception when validation fails
   */
  public static void validateDateTime(String xmlValue) throws Exception {

    try {
      Date result = DatatypeConverter.parseDateTime(xmlValue).getTime();

    } catch (IllegalArgumentException e) {
      throw new Exception(
          "Cannot convert '" + xmlValue + "' to a dateTime. Illegal dateTime value.");
    }
  }
}
