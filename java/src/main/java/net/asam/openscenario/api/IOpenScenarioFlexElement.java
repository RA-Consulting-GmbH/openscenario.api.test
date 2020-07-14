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
package net.asam.openscenario.api;

import java.util.Date;
import java.util.List;

/**
 * A flex element serves as a flexible container for open sceanrio elements. The main benefit is that it 
 * is independent from a version and is fed with version specific keys. So it is highly upward compatible.
 * This flexibility comes on the expense of possible runtime errors.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IOpenScenarioFlexElement
{
  /**
   * Getting a string property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public String getStringProperty(String key) throws KeyNotSupportedException;
  
  /**
   * Getting a unsigned int property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException;
  
  
  /**
   * Getting a int property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public Integer getIntProperty(String key) throws KeyNotSupportedException;
 
  /**
   * Getting a double property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public Double getDoubleProperty(String key) throws KeyNotSupportedException;
 
  /**
   * Getting a unsigned short property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
 public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException;

  /**
   * Getting a boolean property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException;
  
  /**
   * Getting a date time property 
   * @param key of the property (see xsd)
   * @return property value
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException;

  /**
   * Getting a single child element 
   * @param key of the property (see xsd)
   * @return the child element
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException;
  
  /**
   * Getting literal attribute value 
   * @param key of the property (see xsd)
   * @return the enumeration literal (see xsd)
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException;


  /**
   * Getting a list with child elements 
   * @param key of the property (see xsd)
   * @return the list with child elements
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException;
  
  /**
   * Getting the parent element 
   * @return the list with child elements or null if root.
   */
  public IOpenScenarioFlexElement getParentFlexElement();

  /**
   * Getting the referenced element 
   * @param key of the reference property (see xsd)
   * @param name that represents the reference
   * @return the referenced element.
   * @throws KeyNotSupportedException if key is not supported or does not fit the data type
   */
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException;

  /**
   * Returns the open scenario type of this object
   * @return the type (see uml model)
   */
  public String getModelType();

}
