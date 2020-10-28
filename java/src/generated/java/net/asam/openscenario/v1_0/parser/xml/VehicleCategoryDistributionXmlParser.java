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
import net.asam.openscenario.v1_0.api.writer.IVehicleCategoryDistributionEntryWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.VehicleCategoryDistributionEntryImpl;
import net.asam.openscenario.v1_0.impl.VehicleCategoryDistributionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class VehicleCategoryDistributionXmlParser
    extends XmlComplexTypeParser<VehicleCategoryDistributionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public VehicleCategoryDistributionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<VehicleCategoryDistributionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<VehicleCategoryDistributionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<VehicleCategoryDistributionImpl> {
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
    protected List<IElementParser<VehicleCategoryDistributionImpl>> createParserList() {
      List<IElementParser<VehicleCategoryDistributionImpl>> result = new ArrayList<>();
      result.add(new SubElementVehicleCategoryDistributionEntriesParser());
      return result;
    }
  }
  /** A parser for subelement vehicleCategoryDistributionEntries */
  @SuppressWarnings("synthetic-access")
  private class SubElementVehicleCategoryDistributionEntriesParser
      implements IElementParser<VehicleCategoryDistributionImpl> {

    /** Constructor */
    public SubElementVehicleCategoryDistributionEntriesParser() {
      super();
      this.vehicleCategoryDistributionEntryXmlParser =
          new VehicleCategoryDistributionEntryXmlParser(
              VehicleCategoryDistributionXmlParser.this.messageLogger,
              VehicleCategoryDistributionXmlParser.this.filename);
    }

    private VehicleCategoryDistributionEntryXmlParser vehicleCategoryDistributionEntryXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        VehicleCategoryDistributionImpl object) {
      VehicleCategoryDistributionEntryImpl vehicleCategoryDistributionEntries =
          new VehicleCategoryDistributionEntryImpl();
      // Setting the parent
      vehicleCategoryDistributionEntries.setParent(object);
      this.vehicleCategoryDistributionEntryXmlParser.parseElement(
          indexedElement, parserContext, vehicleCategoryDistributionEntries);
      List<IVehicleCategoryDistributionEntryWriter> vehicleCategoryDistributionEntriesList =
          object.getWriterVehicleCategoryDistributionEntries();
      if (vehicleCategoryDistributionEntriesList == null) {
        vehicleCategoryDistributionEntriesList = new ArrayList<>();
        object.setVehicleCategoryDistributionEntries(vehicleCategoryDistributionEntriesList);
      }
      vehicleCategoryDistributionEntriesList.add(vehicleCategoryDistributionEntries);
    }

    @Override
    public int getMinOccur() {
      return 1;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION_ENTRY};
    }
  }
}
