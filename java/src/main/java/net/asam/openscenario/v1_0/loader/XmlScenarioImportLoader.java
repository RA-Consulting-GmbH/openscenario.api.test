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

package net.asam.openscenario.v1_0.loader;

import java.util.HashSet;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;
import java.util.Set;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.loader.IResourceLocator;
import net.asam.openscenario.loader.IScenarioLoader;
import net.asam.openscenario.loader.ScenarioLoaderException;
import net.asam.openscenario.v1_0.api.ICatalogElement;
import net.asam.openscenario.v1_0.api.ICatalogLocations;
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.IControllerCatalogLocation;
import net.asam.openscenario.v1_0.api.IDirectory;
import net.asam.openscenario.v1_0.api.IEnvironmentCatalogLocation;
import net.asam.openscenario.v1_0.api.IManeuverCatalogLocation;
import net.asam.openscenario.v1_0.api.IMiscObjectCatalogLocation;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.api.IParameterAssignment;
import net.asam.openscenario.v1_0.api.IPedestrianCatalogLocation;
import net.asam.openscenario.v1_0.api.IRouteCatalogLocation;
import net.asam.openscenario.v1_0.api.IScenarioDefinition;
import net.asam.openscenario.v1_0.api.ITrajectoryCatalogLocation;
import net.asam.openscenario.v1_0.api.IVehicleCatalogLocation;
import net.asam.openscenario.v1_0.catalog.CatalogCache;
import net.asam.openscenario.v1_0.catalog.ICatalogReferenceProvider;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;
import net.asam.openscenario.v1_0.impl.ParameterAssignmentImpl;

/**
 * Implemens a loader for catalogs
 *
 * @author Andreas Hege - RA Consulting
 */
public class XmlScenarioImportLoader implements IScenarioLoader {

  private XmlScenarioLoader innerScenarioLoader;

  private IParserMessageLogger catalogMessageLogger;

  /**
   * Constructor
   *
   * @param innerScenarioLoader scenario loader that is used to get properties from (Resource
   *     locators, filename)
   * @param catalogMessageLogger message logger for catalogs.
   */
  public XmlScenarioImportLoader(
      XmlScenarioLoader innerScenarioLoader, IParserMessageLogger catalogMessageLogger) {
    super();
    this.innerScenarioLoader = innerScenarioLoader;
    this.catalogMessageLogger = catalogMessageLogger;
  }

  @Override
  public IOpenScenarioModelElement load(IParserMessageLogger messageLogger)
      throws ScenarioLoaderException {
    return load(messageLogger, null);
  }

  /**
   * The map for the list of parameter assignment that maps parameter names to assigned parameter
   * values.
   *
   * @param parameterAssignments list of parameter assignments from a catalog reference
   * @param parserMessageLogger to log errors and warnings
   * @return the table that maps parameter names to parameter values
   */
  private Hashtable<String, String> getMapFromParameterAssignements(
      List<IParameterAssignment> parameterAssignments, IParserMessageLogger parserMessageLogger) {
    Hashtable<String, String> result = new Hashtable<>();
    if (parameterAssignments != null) {
      for (IParameterAssignment parameterAssignment : parameterAssignments) {
        String parameterName = parameterAssignment.getParameterRef().getNameRef();
        String parameterValue = parameterAssignment.getValue();
        if (result.get(parameterName) != null) {
          parserMessageLogger.logMessage(
              new FileContentMessage(
                  "Parameter '" + parameterName + "assigned multiple times (last wins)",
                  ErrorLevel.WARNING,
                  ((ParameterAssignmentImpl) parameterAssignment).getStartMarker()));
        }
        result.put(parameterName, parameterValue);
      }
    }
    return result;
  }

  /**
   * Extract the catalog locations from a IOpenScenario instance
   *
   * @param openScenario the IOpenScenario instance
   * @param resourceLocator locator for the symbolic filenames
   * @param filename a base directory
   * @param messageLogger to log errors and warnings
   * @return a set of symbolic directory names
   */
  private Set<String> getCatalogLocations(
      IOpenScenario openScenario,
      IResourceLocator resourceLocator,
      String filename,
      IParserMessageLogger messageLogger) {
    Set<String> result = new HashSet<>();

    IScenarioDefinition scenarioDefinition =
        openScenario.getOpenScenarioCategory().getScenarioDefinition();
    if (scenarioDefinition != null) {
      ICatalogLocations catalogLocations = scenarioDefinition.getCatalogLocations();
      if (catalogLocations != null) {

        IControllerCatalogLocation controllerCatalogLocation =
            catalogLocations.getControllerCatalog();
        if (controllerCatalogLocation != null)
        {
          IDirectory directory = controllerCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        IManeuverCatalogLocation maneuverCatalogLocation = catalogLocations.getManeuverCatalog();
        if (maneuverCatalogLocation != null) {
          IDirectory directory = maneuverCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        IVehicleCatalogLocation vehicleCatalogLocation = catalogLocations.getVehicleCatalog();
        if (vehicleCatalogLocation != null) {
          IDirectory directory = vehicleCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        IMiscObjectCatalogLocation miscObjectCatalogLocation =
            catalogLocations.getMiscObjectCatalog();
        if (miscObjectCatalogLocation != null) {
          IDirectory directory = miscObjectCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        ITrajectoryCatalogLocation trajectoryCatalogLocation =
            catalogLocations.getTrajectoryCatalog();
        if (trajectoryCatalogLocation != null) {
          IDirectory directory = trajectoryCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        IEnvironmentCatalogLocation environmentCatalogLocation =
            catalogLocations.getEnvironmentCatalog();
        if (environmentCatalogLocation != null) {
          IDirectory directory = environmentCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        IRouteCatalogLocation routeCatalogLocation = catalogLocations.getRouteCatalog();
        if (routeCatalogLocation != null) {
          IDirectory  directory = routeCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }

        IPedestrianCatalogLocation pedestrianCatalogLocation =
            catalogLocations.getPedestrianCatalog();
        if (pedestrianCatalogLocation != null) {
          IDirectory directory = pedestrianCatalogLocation.getDirectory();
          addPath(resourceLocator, filename, messageLogger, result, directory);
        }
      }
    }
    return result;
  }

  /**
   * Adding symbolic directory names from an IDirectory model element
   *
   * @param resourceLocator resource locator for abstracting from file system
   * @param filename base file name
   * @param messageLogger to log messages
   * @param result in/out parameter
   * @param directory the IDirectorx model element
   */
  private void addPath(
      IResourceLocator resourceLocator,
      String filename,
      IParserMessageLogger messageLogger,
      Set<String> result,
      IDirectory directory) {

    String path = null;
    if (directory != null) {
      path = directory.getPath();
      if (path != null && !path.isEmpty()) {
        String symbolicDirname = resourceLocator.getSymbolicDirname(filename, path);
        if (symbolicDirname != null) {
          result.add(symbolicDirname);
        } else {
          ILocator locator = (ILocator) directory.getAdapter(ILocator.class);
          Textmarker textmarker = locator.getStartMarkerOfProperty(OscConstants.ATTRIBUTE__PATH);
          messageLogger.logMessage(
              new FileContentMessage(
                  "Cannot resolve catalog directory '"
                      + filename
                      + path
                      + "' ("
                      + symbolicDirname
                      + ")",
                  ErrorLevel.ERROR,
                  textmarker));
        }
      }
    }
  }

  @Override
  public IOpenScenarioModelElement load(
      IParserMessageLogger messageLogger, Map<String, String> injectedParameters)
      throws ScenarioLoaderException {
    IOpenScenario openScenario =
        (IOpenScenario)
            this.innerScenarioLoader.load(messageLogger).getAdapter(IOpenScenario.class);

    if (messageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(ErrorLevel.ERROR).isEmpty()) {
      IResourceLocator resourceLocator = this.innerScenarioLoader.getResourceLocator();

      // do imports here
      String filename = this.innerScenarioLoader.getFilename();
      Set<String> catalogLocations =
          getCatalogLocations(openScenario, resourceLocator, filename, messageLogger);
      CatalogCache catalogCache = new CatalogCache(resourceLocator, this.catalogMessageLogger);
      for (String catalogLocationPath : catalogLocations) {
        List<String> filenames =
            resourceLocator.getSymbolicFilenamesInSymbolicDir(catalogLocationPath);
        for (String symbolicFilename : filenames) {
          XmlScenarioLoaderFactory xmlScenarioLoaderFactory =
              new XmlScenarioLoaderFactory(symbolicFilename);
          catalogCache.addCatalogFile(xmlScenarioLoaderFactory);
        }
      }
      // Get the CatalogLocations
      List<ICatalogReference> catalogReferences =
          ((ICatalogReferenceProvider) openScenario.getAdapter(ICatalogReferenceProvider.class))
              .getCatalogReferences();
      // get the catalogRefences
      for (ICatalogReference catalogReference : catalogReferences) {
        ICatalogElement catalogElement = catalogCache.importCatalogElement(catalogReference);
        if (catalogElement != null) {
          ((CatalogReferenceImpl) catalogReference).setRef(catalogElement);
          OpenScenarioProcessingHelper.resolveWithParameterAssignements(
              messageLogger,
              catalogElement,
              getMapFromParameterAssignements(
                  catalogReference.getParameterAssignments(), messageLogger));
          // resolve CatalogReference Parameters.
        } else {
          messageLogger.logMessage(
              new FileContentMessage(
                  "Cannot resolve entry '"
                      + catalogReference.getEntryName()
                      + "' in catalog '"
                      + catalogReference.getCatalogName()
                      + "'",
                  ErrorLevel.ERROR,
                  ((CatalogReferenceImpl) catalogReference).getStartMarker()));
        }
      }
    }

    return openScenario;
  }
}
