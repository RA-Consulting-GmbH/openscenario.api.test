package de.rac.openscenario.v1_0.loader;

/**
 * A factory to create a IScenarioLoader. A factory assembles the parts for a IScenarioLoader implementation.
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IScenarioLoaderFactory {

	/**
	 * Assembles a loader with a specific resource locator
	 * @param resourceLocator a resource locator to resolve the resources.
	 * @return a assembled loader.
	 */
	public IScenarioLoader createLoader(IResourceLocator resourceLocator);
}
