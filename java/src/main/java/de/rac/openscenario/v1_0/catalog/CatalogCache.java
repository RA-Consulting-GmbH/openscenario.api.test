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
 
package de.rac.openscenario.v1_0.catalog;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;

import de.rac.openscenario.v1_0.api.ICatalog;
import de.rac.openscenario.v1_0.api.ICatalogDefinition;
import de.rac.openscenario.v1_0.api.ICatalogElement;
import de.rac.openscenario.v1_0.api.ICatalogReference;
import de.rac.openscenario.v1_0.api.IController;
import de.rac.openscenario.v1_0.api.IEnvironment;
import de.rac.openscenario.v1_0.api.IManeuver;
import de.rac.openscenario.v1_0.api.IMiscObject;
import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.api.IPedestrian;
import de.rac.openscenario.v1_0.api.IRoute;
import de.rac.openscenario.v1_0.api.ITrajectory;
import de.rac.openscenario.v1_0.api.IVehicle;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.loader.IResourceLocator;
import de.rac.openscenario.v1_0.loader.IScenarioLoader;
import de.rac.openscenario.v1_0.loader.IScenarioLoaderFactory;
import de.rac.openscenario.v1_0.loader.MessageLoggerDecorator;
import de.rac.openscenario.v1_0.loader.ScenarioLoaderException;

/**
 * A cache class for a catalog directory. It enables to search for a catalog element in a specific catalog.
 * If a element is found, the search returns and stops without loading further files from the directory.
 * The loaded files are stored in cache for later searches.
 * @author Andreas Hege - RA Consulting
 *
 */
public class CatalogCache {
	private Hashtable<String, Hashtable<String, ICatalogElement>> catalogElements = new Hashtable<String, Hashtable<String, ICatalogElement>>();
	private boolean isAnyCatalogToParse = false;
	private List<IScenarioLoaderFactory> catalogFiles = new ArrayList<IScenarioLoaderFactory>();
	private IResourceLocator resourceLocator;
	private int currentLoaderFactoryIndex = 0;
	private IParserMessageLogger messageLogger;

	/**
	 * Constructor
	 * @param resourceLocator locator for the directory to search into
	 * @param messageLogger to log messages during parsing the catalogs
	 */
	public CatalogCache(IResourceLocator resourceLocator,
			IParserMessageLogger messageLogger) {
		super();
		this.resourceLocator = resourceLocator;
		this.messageLogger = messageLogger;

	}

	/**
	 * Adds a catalog file in its own loader factory.
	 * @param scenarioLoaderFactory the loader factory that is initialized with this file.
	 */
	public void addCatalogFile(IScenarioLoaderFactory scenarioLoaderFactory) {
		catalogFiles.add(scenarioLoaderFactory);
		isAnyCatalogToParse = true;
	}

	/**
	 * Searches for a specific catalog element in the directory.
	 * @param catalogReference the catalog reference that represents the catalog element to be searched.
	 * @return the found catalog element or null if the catalog element is not faound in the directory
	 */
	public ICatalogElement importCatalogElement(
			ICatalogReference catalogReference) {
		ICatalogElement catalogElement = null;
		while (catalogElement == null) {
			catalogElement = getCatalogElementInternal(catalogReference);
			if (catalogElement != null || !this.isAnyCatalogToParse) {
				break;
			} else {
				parseNextCatalog();
			}

		}
		return catalogElement;

	}

	/*
	 * parses the next catalog in the list.
	 */
	private void parseNextCatalog() {
		if (currentLoaderFactoryIndex >= catalogFiles.size()) {
			isAnyCatalogToParse = false;
			return;

		} else {

			// Parse Catalog
			IScenarioLoaderFactory scenarioLoaderFactory = catalogFiles
					.get(currentLoaderFactoryIndex++);
			IScenarioLoader loader = scenarioLoaderFactory
					.createLoader(resourceLocator);
			IOpenScenario openScenario = null;
			boolean isSuccessfullyParsed = true;
			;
			MessageLoggerDecorator messageLogger = new MessageLoggerDecorator(
					this.messageLogger);
			try {
				openScenario = loader.load(messageLogger);
			} catch (ScenarioLoaderException e) {
				// Ignore
				isSuccessfullyParsed = false;
			}
			if (isSuccessfullyParsed && !messageLogger.hasErrors()) {
				ICatalogDefinition catalogDefinition = openScenario
						.getOpenScenarioCategory().getCatalogDefinition();
				if (catalogDefinition != null) {
					ICatalog catalog = catalogDefinition.getCatalog();
					if (catalog != null) {
						// Does Controller already exists
						String catalogName = catalog.getName();
						Hashtable<String, ICatalogElement> catalogMap = catalogElements
								.get(catalogName);
						if (catalogMap == null) {
							catalogMap = new Hashtable<String, ICatalogElement>();
							catalogElements.put(catalogName, catalogMap);
						}

						List<IController> controllers = catalog
								.getControllers();
						if (controllers != null) {
							for (IController controller :controllers) {

								String name = controller.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, controller);
							}
						}

						List<IVehicle> vehicles = catalog
								.getVehicles();
						if (vehicles != null) {
							for (IVehicle vehicle : vehicles) {
								String name = vehicle.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, vehicle);
							}
						}
						List<IMiscObject> miscObjects = catalog
								.getMiscObjects();
						if (miscObjects != null) {
							for (IMiscObject miscObject : miscObjects) {
								String name = miscObject.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, miscObject);
							}
						}

						List<IRoute> routes = catalog
								.getRoutes();
						if (routes != null) {
							for (IRoute route : routes) {
								String name = route.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, route);
							}
						}

						List<IEnvironment> environments = catalog
								.getEnvironments();
						if (environments != null) {
							for (IEnvironment environment : environments) {
								String name = environment.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, environment);
							}
						}
						List<IPedestrian> pedestrians = catalog
								.getPedestrians();
						if (pedestrians != null) {
							for (IPedestrian pedestrian :pedestrians) {
								String name = pedestrian.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, pedestrian);
							}
						}
						List<ITrajectory> trajectories = catalog
								.getTrajectories();
						if (trajectories != null) {
							for (ITrajectory trajectory : trajectories) {
								String name = trajectory.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, trajectory);
							}
						}

						List<IManeuver> maneuvers = catalog
								.getManeuvers();
						if (maneuvers != null) {
							for (IManeuver maneuver : maneuvers) {
								String name = maneuver.getName();
								if (name != null && !name.isEmpty())
									catalogMap.put(name, maneuver);
							}
						}
					}

				}
			}
		}

	}

	/**
	 * Searches for a specific catalog element in the cache and returns a clone.
	 * @param catalogReference the catalog reference that represents the catalog element to be searched.
	 * @return the cloned catalog element or null if element is not in cache.
	 */
	protected ICatalogElement getCatalogElementInternal(
			ICatalogReference catalogReference) {
		Hashtable<String, ICatalogElement> catalog = catalogElements
				.get(catalogReference.getCatalogName());
		if (catalog != null) {
			ICatalogElement catalogElement = catalog.get(catalogReference
					.getEntryName());
			if (catalogElement != null) {
				// Clone it for import
				return (ICatalogElement) ((BaseImpl) catalogElement).clone();
			}

		}
		return null;

	}

}
