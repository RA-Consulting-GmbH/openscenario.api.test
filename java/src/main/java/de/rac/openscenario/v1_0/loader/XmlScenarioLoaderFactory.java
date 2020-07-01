package de.rac.openscenario.v1_0.loader;

/**
 * Factory for a XML loader
 * @author Andreas Hege - RA Consulting
 *
 */
public class XmlScenarioLoaderFactory implements IScenarioLoaderFactory{

	private String filename;
	
	/**
	 * Constructor
	 * @param filename for the created loader
	 */
	public XmlScenarioLoaderFactory(String filename) {
		super();
		this.filename = filename;
	}
	
	@Override
	public IScenarioLoader createLoader(IResourceLocator resourceLocator) {
		return new XmlScenarioLoader(filename, resourceLocator);
	}

}
