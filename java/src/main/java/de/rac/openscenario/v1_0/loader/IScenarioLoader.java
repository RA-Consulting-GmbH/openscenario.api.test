package de.rac.openscenario.v1_0.loader;

import de.rac.openscenario.v1_0.api.IOpenScenario;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;

/**
 * Abstracts the source the open scenario file is loaded from. t could be a file 
 * system or a database.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IScenarioLoader {
	/**
	 * Loads a scenario.
	 * @param messageLogger to log the messaes during loading.
	 * @return the IOpenScensrio root object of a scenario. it may be inconsistent when errors occured.
	 * @throws ScenarioLoaderException An Exception when the loader stops with a fatal error.
	 */
	public IOpenScenario load(IParserMessageLogger messageLogger) throws ScenarioLoaderException;
}
