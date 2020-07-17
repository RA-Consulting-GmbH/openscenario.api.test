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

package net.asam.openscenario.simple.struct;

import java.util.ArrayList;
import java.util.List;

import org.w3c.dom.Element;

import net.asam.xml.indexer.AttributeNode;
import net.asam.xml.indexer.ElementNode;
import net.asam.xml.indexer.Position;

/**
 * Helper class. Wrappes dom elements with their information (ElementNode) for ANTLR parsers.
 * (elements and parent elements)
 *
 * @author Andreas Hege - RA Consulting
 */
public class IndexedElement {

  private List<IndexedElement> subElements = new ArrayList<IndexedElement>();
  private ElementNode elementNode;
  private String characters;
  private Element element;
  private IndexedElement parent;
  private boolean isMixedNode = false;

  /**
   * Constructor
   *
   * @param element the dom element
   * @param elementNode the ElementNode from the ANTLR parser
   * @param parent parent element from the ANTLR parser
   */
  public IndexedElement(Element element, ElementNode elementNode, IndexedElement parent) {
    super();
    this.elementNode = elementNode;
    this.element = element;
    this.parent = parent;
  }

  /**
   * Sets the characters (for simpleContent types)
   *
   * @param characters the cahracters
   */
  public void setCharacters(String characters) {
    this.characters = characters;
  }

  /**
   * The parent of this element (from ANTLR element)
   *
   * @return the parent
   */
  public IndexedElement getParent() {
    return parent;
  }

  /**
   * Adding sub elements (for complex types and groups)
   *
   * @param subelement the element to be added as a subelement
   */
  public void addSubElement(IndexedElement subelement) {
    subElements.add(subelement);
  }

  /**
   * The ordered list of sub elements of the element as they occur in the xml.
   *
   * @return the sub elements
   */
  public List<IndexedElement> getSubElements() {
    return subElements;
  }
  /**
   * The characters (for simpleContent types)
   *
   * @return the characters
   */
  public String getCharacters() {
    return characters;
  };

  /**
   * The start position in the file
   *
   * @return the position
   */
  public Position getStartElementLocation() {
    return elementNode.getStartPosition();
  }

  /**
   * The end position in the file
   *
   * @return the position
   */
  public Position getEndElementLocation() {
    return elementNode.getEndPosition();
  }

  /**
   * The dom element
   *
   * @return dom element
   */
  public Element getElement() {
    return element;
  }

  /**
   * The start position of an attribute in this element
   *
   * @param attributeName name of the requested attribute
   * @return the position
   */
  public Position getAttributeStartPosition(String attributeName) {
    AttributeNode attributeNode = elementNode.getAttributeNode(attributeName);
    if (attributeNode != null) {
      return attributeNode.getStartPosition();
    } else {
      return null;
    }
  }

  /**
   * The end position of an attribute in this element
   *
   * @param attributeName name of the requested attribute
   * @return the position
   */
  public Position getAttributeEndPosition(String attributeName) {
    AttributeNode attributeNode = elementNode.getAttributeNode(attributeName);
    if (attributeNode != null) {
      return attributeNode.getEndPosition();
    } else {
      return null;
    }
  }
  /**
   * Is this node a mixed node
   *
   * @return true if mixed node
   */
  public boolean isMixedNode() {
    return isMixedNode;
  }

  /**
   * Set whether this node is a mixed node
   *
   * @param isMixedNode true if mixed node
   */
  public void setMixedNode(boolean isMixedNode) {
    this.isMixedNode = isMixedNode;
  }
}
