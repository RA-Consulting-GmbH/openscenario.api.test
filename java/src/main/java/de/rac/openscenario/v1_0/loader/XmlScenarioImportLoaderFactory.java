package de.rac.openscenario.v1_0.loader;

import de.rac.openscenario.v1_0.common.IParserMessageLogger;

/**
 * A factory for creating catalog loaders
 * 
 * @author Andreas Hege - RA Consulting
 * 
 */
public class XmlScenarioImportLoaderFactory implements IScenarioLoaderFactory {

	private IParserMessageLogger catalogMessageLogger;

	private String filename;

	/**
	 * Constructor
	 * 
	 * @param catalogMessageLogger
	 *            to log messages
	 * @param filename
	 *            base directory
	 */
	public XmlScenarioImportLoaderFactory(
			IParserMessageLogger catalogMessageLogger, String filename) {
		super();
		this.catalogMessageLogger = catalogMessageLogger;
		this.filename = filename;
	}

	@Override
	public IScenarioLoader createLoader(IResourceLocator resourceLocator) {

		XmlScenarioLoader innerScenarioLoader = new XmlScenarioLoader(filename,
				resourceLocator);
		return new XmlScenarioImportLoader(innerScenarioLoader,
				catalogMessageLogger);
	}

}
