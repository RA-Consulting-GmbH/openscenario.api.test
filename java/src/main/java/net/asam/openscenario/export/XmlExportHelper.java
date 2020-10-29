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
package net.asam.openscenario.export;

import java.time.ZoneId;
import java.time.format.DateTimeFormatter;
import java.util.Date;

/**
 * @author Andreas Hege - RA Consulting
 *
 */
public class XmlExportHelper
{

  /**
   * Retrieve the xml string from a double value
   * @param value the double value
   * @return the xml string
   */
  public static String toXmlStringFromDouble(Double value)
  {
    return value.toString();
  }
  
  /**
   * Retrieve the xml string from a string value
   * @param value the string value
   * @return the xml string
   */
  public static String toXmlStringFromString(String value)
  {
    return value;
  }
  /**
   * Retrieve the xml string from a unsigned int value
   * @param value the unsigned int value
   * @return the xml string
   */
  public static String toXmlStringFromUnsignedInt(Long value)
  {
    return value.toString();
  }
  /**
   * Retrieve the xml string from a unsigned short value
   * @param value the unsigned short value
   * @return the xml string
   */
  public static String toXmlStringFromUnsignedShort(Integer value)
  {
    return value.toString();
  }
  /**
   * Retrieve the xml string from a integer value
   * @param value the integer value
   * @return the xml string
   */
  public static String toXmlStringFromInt(Integer value)
  {
    return value.toString();
  }
  /**
   * Retrieve the xml string from a date value
   * @param value the date value
   * @return the xml string
   */
  public static String toXmlStringFromDateTime(Date value)
  {
    return value.toInstant()
        .atZone(ZoneId.systemDefault())
        .toLocalDateTime().format(DateTimeFormatter.ISO_DATE_TIME);
  }
  /**
   * Retrieve the xml string from a boolean value
   * @param value the boolean value
   * @return the xml string
   */
  public static String toXmlStringFromBoolean(Boolean value)
  {
    return value.toString();
  }
}
