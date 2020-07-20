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
package net.asam.openscenario.v1_0.parser.xml;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IFile;
import net.asam.openscenario.v1_0.api.IProperty;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.FileImpl;
import net.asam.openscenario.v1_0.impl.PropertiesImpl;
import net.asam.openscenario.v1_0.impl.PropertyImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PropertiesImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PropertiesXmlParser extends XmlComplexTypeParser<PropertiesImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public PropertiesXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<PropertiesImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<PropertiesImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<PropertiesImpl> {
    /**
     * Constructor
     *
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
    public SubElementParser(IParserMessageLogger messageLogger, String filename) {
      super(messageLogger, filename);
    }
    /*
     * Creates a list of parser
     */
    @Override
    protected List<IElementParser<PropertiesImpl>> createParserList() {
      List<IElementParser<PropertiesImpl>> result = new ArrayList<>();
      result.add(new SubElementPropertiesParser());
      result.add(new SubElementFilesParser());
      return result;
    }
  }
  /** A parser for subelement properties */
  @SuppressWarnings("synthetic-access")
  private class SubElementPropertiesParser implements IElementParser<PropertiesImpl> {

    /** Constructor */
    public SubElementPropertiesParser() {
      super();
      this.propertyXmlParser =
          new PropertyXmlParser(
              PropertiesXmlParser.this.messageLogger, PropertiesXmlParser.this.filename);
    }

    private PropertyXmlParser propertyXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PropertiesImpl object) {
      PropertyImpl properties = new PropertyImpl();
      // Setting the parent
      properties.setParent(object);
      this.propertyXmlParser.parseElement(indexedElement, parserContext, properties);
      List<IProperty> propertiesList = object.getProperties();
      if (propertiesList == null) {
        propertiesList = new ArrayList<>();
        object.setProperties(propertiesList);
      }
      propertiesList.add(properties);
    }

    @Override
    public int getMinOccur() {
      return 0;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__PROPERTY);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PROPERTY};
    }
  }
  /** A parser for subelement files */
  @SuppressWarnings("synthetic-access")
  private class SubElementFilesParser implements IElementParser<PropertiesImpl> {

    /** Constructor */
    public SubElementFilesParser() {
      super();
      this.fileXmlParser =
          new FileXmlParser(
              PropertiesXmlParser.this.messageLogger, PropertiesXmlParser.this.filename);
    }

    private FileXmlParser fileXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PropertiesImpl object) {
      FileImpl files = new FileImpl();
      // Setting the parent
      files.setParent(object);
      this.fileXmlParser.parseElement(indexedElement, parserContext, files);
      List<IFile> filesList = object.getFiles();
      if (filesList == null) {
        filesList = new ArrayList<>();
        object.setFiles(filesList);
      }
      filesList.add(files);
    }

    @Override
    public int getMinOccur() {
      return 0;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__FILE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__FILE};
    }
  }
}
